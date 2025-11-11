#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");

	int gg, mm;
	
	printf("Введите день и месяц (ММ ГГГГ):");
	
	scanf("%d %d", &mm, &gg);
	
	switch (mm) {
	case 1: return printf("31 - день в Январе"); break;
	case 2:
		if (gg % 4 == 0 && gg % 100 != 0 || gg % 400 == 0) printf("29 - дней в Феврале"); 
		else printf("28 - дней в Феврале"); 
		break;
	case 3: return printf("30 - дней в Марте"); break;
	case 4: return printf("31 - дней в Апреле"); break;
	case 5: return printf("30 - дней в Мае"); break;
	case 6: return printf("31 - дней в Июнь"); break;
	case 7: return printf("30 - дней в Июле"); break;
	case 8: return printf("31 - дней в Августе"); break;
	case 9: return printf("30 - дней в Сентябре"); break;
	case 10: return printf("31 - дней в Октябре"); break;
	case 11: return printf("30 - дней в Ноябре"); break;
	case 12: return printf("31 - дней в Декабре"); break;
	default: printf("ОШИБКА!"); 
	}
	return 0;
}
/*
 * XREFs of sub_1800DFAF8 @ 0x1800DFAF8
 * Callers:
 *     sub_18004D108 @ 0x18004D108 (sub_18004D108.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

char *__fastcall sub_1800DFAF8(char *a1)
{
  char *v2; // rcx

  memmove(a1, *((const void **)&xmmword_18015C020 + 1), (unsigned __int16)xmmword_18015C020 - 2LL);
  v2 = &a1[2 * ((unsigned __int64)(unsigned __int16)xmmword_18015C020 >> 1)];
  *(_OWORD *)(v2 - 2) = xmmword_180126F10;
  *(_DWORD *)(v2 + 14) = 7471205;
  *((_WORD *)v2 + 9) = 115;
  *((_WORD *)v2 + 10) = 59;
  return v2 + 22;
}

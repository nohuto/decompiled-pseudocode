/*
 * XREFs of sub_1800D9378 @ 0x1800D9378
 * Callers:
 *     sub_18006DF50 @ 0x18006DF50 (sub_18006DF50.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

char *__fastcall sub_1800D9378(char *a1)
{
  char *v2; // rcx

  memmove(a1, *((const void **)&xmmword_18015CFC0 + 1), (unsigned __int16)xmmword_18015CFC0 - 2LL);
  v2 = &a1[2 * ((unsigned __int64)(unsigned __int16)xmmword_18015CFC0 >> 1)];
  *(_OWORD *)(v2 - 2) = xmmword_180126CE0;
  *(_DWORD *)(v2 + 14) = 7471205;
  *((_WORD *)v2 + 9) = 115;
  *((_WORD *)v2 + 10) = 59;
  return v2 + 22;
}

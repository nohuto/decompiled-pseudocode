/*
 * XREFs of fsc_CalcGrayRow @ 0x1C02D5140
 * Callers:
 *     fsc_CalcGrayMap @ 0x1C02BA17C (fsc_CalcGrayMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_CalcGrayRow(char **a1)
{
  char *v1; // r9
  char *v2; // r11
  char **v3; // r8
  __int16 v4; // bx
  __int16 v5; // cx
  __int16 v6; // r10
  unsigned __int16 v7; // dx
  char *v8; // r9
  __int16 i; // r8

  v1 = a1[1];
  v2 = *a1;
  v3 = a1;
  v4 = *((_WORD *)a1 + 9);
  v5 = *((_WORD *)a1 + 10);
  LOWORD(v3) = *((_WORD *)v3 + 8);
  v6 = 8 - v5;
  v7 = (unsigned __int16)*v2 >> v5;
  *v1 += byte_1C02F1890[v7 & (255 >> (8 - v4))];
  v8 = v1 - 1;
  for ( i = (_WORD)v3 - 1; i > 0; --i )
  {
    v6 -= v4;
    if ( v6 )
    {
      v7 >>= v4;
    }
    else
    {
      --v2;
      v6 = 8;
      v7 = *v2;
    }
    *v8-- += byte_1C02F1890[v7 & (255 >> (8 - v4))];
  }
  return 0LL;
}

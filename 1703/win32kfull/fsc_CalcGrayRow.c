/*
 * XREFs of fsc_CalcGrayRow @ 0x1C02DB470
 * Callers:
 *     fsc_CalcGrayMap @ 0x1C02C0370 (fsc_CalcGrayMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_CalcGrayRow(char **a1)
{
  char *v1; // r9
  char *v2; // r11
  __int16 v4; // bx
  int v5; // edi
  __int16 v6; // cx
  __int16 v7; // r10
  __int16 v8; // dx
  unsigned __int16 v9; // r8
  char *i; // r9

  v1 = a1[1];
  v2 = *a1;
  v4 = *((_WORD *)a1 + 9);
  v5 = 255 >> (8 - v4);
  v6 = *((_WORD *)a1 + 10);
  v7 = 8 - v6;
  v8 = *((_WORD *)a1 + 8) - 1;
  v9 = (unsigned __int16)*v2 >> v6;
  *v1 += byte_1C02F4C40[v5 & v9];
  for ( i = v1 - 1; v8 > 0; --i )
  {
    v7 -= v4;
    if ( v7 )
    {
      v9 >>= v4;
    }
    else
    {
      --v2;
      v7 = 8;
      v9 = *v2;
    }
    --v8;
    *i += byte_1C02F4C40[v5 & v9];
  }
  return 0LL;
}

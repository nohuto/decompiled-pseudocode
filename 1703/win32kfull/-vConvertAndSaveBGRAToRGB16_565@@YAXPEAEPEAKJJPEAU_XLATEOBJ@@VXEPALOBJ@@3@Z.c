/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16_565@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02A0990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vConvertAndSaveBGRAToRGB16_565(__int64 a1, int *a2, int a3, int a4)
{
  _WORD *v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  int v9; // ecx

  v5 = (_WORD *)(a1 + 2LL * a4);
  v6 = a3;
  v7 = 0LL;
  v8 = (unsigned __int64)(2 * v6 + 1) >> 1;
  if ( v5 > &v5[v6] )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      LODWORD(v6) = *a2;
      ++v7;
      v9 = *a2++;
      LOBYTE(v6) = (unsigned __int8)v6 >> 3;
      *v5++ = (unsigned __int8)v6 | (unsigned __int16)(8 * (BYTE1(v6) & 0xFC | (32 * (BYTE2(v9) & 0xF8))));
    }
    while ( v7 != v8 );
  }
  return v6;
}

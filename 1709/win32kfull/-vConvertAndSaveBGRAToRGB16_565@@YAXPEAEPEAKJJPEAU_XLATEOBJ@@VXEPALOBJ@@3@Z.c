/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16_565@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C029D060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vConvertAndSaveBGRAToRGB16_565(__int64 a1, int *a2, int a3, int a4)
{
  _WORD *v5; // r10
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _WORD *v9; // rax
  unsigned __int64 v10; // r9
  int v11; // ecx

  v5 = (_WORD *)(a1 + 2LL * a4);
  v6 = a3;
  v7 = 0LL;
  v8 = 2 * v6;
  v9 = &v5[v6];
  v10 = v8 >> 1;
  if ( v5 > v9 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      LODWORD(v9) = *a2;
      ++v7;
      v11 = *a2++;
      LOBYTE(v9) = (unsigned __int8)v9 >> 3;
      *v5++ = (unsigned __int8)v9 | (unsigned __int16)(8 * (BYTE1(v9) & 0xFC | (32 * (BYTE2(v11) & 0xF8))));
    }
    while ( v7 != v10 );
  }
  return (char)v9;
}

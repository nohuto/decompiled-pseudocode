/*
 * XREFs of ?vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02A0D90
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00A3750 (XLATEOBJ_iXlate.c)
 */

void __fastcall vLoadAndConvert32BitfieldsToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  __int64 v5; // rsi
  unsigned int *v6; // rbx
  unsigned __int8 *v7; // rdi
  unsigned __int64 v8; // rbp
  signed __int64 v9; // rdi

  v5 = 0LL;
  v6 = a1;
  v7 = &a2[4 * a3];
  v8 = (unsigned __int64)(4LL * a4 + 3) >> 2;
  if ( v7 > &v7[4 * a4] )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = v7 - (unsigned __int8 *)a1;
    do
    {
      ++v5;
      *v6 = XLATEOBJ_iXlate(pxlo, *(unsigned int *)((char *)v6 + v9)) | 0xFF000000;
      ++v6;
    }
    while ( v5 != v8 );
  }
}

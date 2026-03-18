/*
 * XREFs of ?vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C012BD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrNonAlignedGrayGlyphOdd(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r10
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  BYTE v10; // r9
  unsigned __int8 *v11; // r8
  unsigned __int64 v12; // r11
  unsigned __int64 i; // rax
  BYTE v14; // dl

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v6 )
  {
    v7 = (unsigned int)a1->sizlBitmap.cx >> 1;
    v8 = a4;
    v9 = a2;
    do
    {
      v10 = *aj;
      v11 = v5 + 1;
      v12 = v7;
      *v5 |= *aj >> 4;
      if ( v5 + 1 > &v5[v7 + 1] )
        v12 = 0LL;
      if ( v12 )
      {
        for ( i = 0LL; i < v12; ++i )
        {
          v14 = v10;
          ++v11;
          v10 = aj[i + 1];
          *(v11 - 1) |= (v10 >> 4) | (unsigned __int8)(16 * v14);
        }
      }
      v5 += v8;
      aj += v9;
    }
    while ( v5 < v6 );
  }
}

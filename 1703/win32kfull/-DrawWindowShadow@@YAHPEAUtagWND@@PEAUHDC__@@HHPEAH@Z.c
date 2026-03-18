/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C011F2B4
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011F0DC (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     NtGdiFrameRgn @ 0x1C011E410 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0122720 (NtGdiFillRgn.c)
 */

__int64 __fastcall DrawWindowShadow(__m128i *a1, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v9; // ebp
  __int64 RectRgn; // rsi
  __int64 v11; // rax
  HRGN v12; // rdi
  int *v13; // r14
  int v14; // ebx
  __int64 v15; // rdx
  unsigned __int8 *v17; // r14
  HBRUSH SolidBrush; // rax
  HBRUSH v19; // r15

  v9 = 0;
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v11 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v12 = (HRGN)v11;
  if ( RectRgn && v11 )
  {
    if ( !a1[13].m128i_i64[1] || (a1[3].m128i_i8[13] & 8) != 0 )
    {
      GreSetRectRgn(
        RectRgn,
        0LL,
        0LL,
        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(a1[8], 8)) - _mm_cvtsi128_si32(a1[8])),
        HIDWORD(*(_OWORD *)&a1[8]) - HIDWORD(a1[8].m128i_i64[0]));
      v13 = a5;
      v9 = 1;
      *a5 = 1;
    }
    else
    {
      SetRectRgnIndirect(RectRgn, &a1[8]);
      v9 = 1;
      GreCombineRgn(RectRgn, RectRgn, a1[13].m128i_i64[1], 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-a1[8].m128i_i32[0], (unsigned int)-a1[8].m128i_i32[1]);
      v13 = a5;
      *a5 = 0;
    }
    v14 = 5;
    GreCombineRgn(v12, RectRgn, 0LL, 5LL);
    v15 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v15 = 0LL;
    }
    GreOffsetRgn(v12, v15, 5LL);
    if ( !*v13 || a4 )
    {
      v17 = (unsigned __int8 *)&unk_1C02EA6E4;
      while ( 1 )
      {
        SolidBrush = (HBRUSH)GreCreateSolidBrush(*v17 | (*v17 << 16) | (*v17 << 8));
        v19 = SolidBrush;
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v12, SolidBrush, v14, v14);
        GreDeleteObject(v19);
        --v14;
        --v17;
        if ( v14 <= 0 )
        {
          GreGetStockObject(4LL);
          goto LABEL_10;
        }
      }
      v9 = 0;
    }
    else
    {
      GreCombineRgn(v12, v12, RectRgn, 4LL);
      GreGetStockObject(0LL);
LABEL_10:
      NtGdiFillRgn(a2);
    }
  }
  GreDeleteObject(RectRgn);
  GreDeleteObject(v12);
  return v9;
}

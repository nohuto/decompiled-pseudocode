/*
 * XREFs of ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C020CAB8
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012B1C4 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 */

__int64 __fastcall CreateScaledWindowShadowFromDIB(__m128i *a1, HDC a2, int a3)
{
  HDC DCEx; // rax
  HDC v7; // rbx
  __m128i v9; // xmm1
  int v10; // r12d
  __int64 CompatibleBitmapInternal; // rsi
  __int64 CompatibleDC; // rax
  HDC v13; // rbp
  __int64 v14; // rdi
  int v15; // ebx

  DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
  v7 = DCEx;
  if ( !DCEx )
    return 0LL;
  v9 = a1[8];
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - _mm_cvtsi128_si32(v9) + 5;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                               DCEx,
                               v10,
                               v9.m128i_i32[3] - v9.m128i_i32[1] + 5,
                               0,
                               0LL,
                               0LL);
  _ReleaseDC(v7);
  if ( !CompatibleBitmapInternal )
    return 0LL;
  CompatibleDC = GreCreateCompatibleDC(a2);
  v13 = (HDC)CompatibleDC;
  if ( !CompatibleDC
    || (v14 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal),
        v15 = GreStretchBltInternal(
                v13,
                0,
                0,
                v10,
                v9.m128i_i32[3] - v9.m128i_i32[1] + 5,
                a2,
                0,
                0,
                a3 * v10,
                a3 * (v9.m128i_i32[3] - v9.m128i_i32[1] + 5),
                13369376,
                0,
                0),
        GreSelectBitmap(v13, v14),
        GreDeleteDC(v13),
        !v15) )
  {
    GreDeleteObject(CompatibleBitmapInternal);
    return 0LL;
  }
  return CompatibleBitmapInternal;
}

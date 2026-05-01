/*
 * XREFs of ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1801AA538
 * Callers:
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AA930 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AAA50 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall KeyboardHosting::ScalingHelper::PhysicalRectToRelative(_DWORD *a1, float *a2, int a3)
{
  unsigned int v3; // eax
  __m128i v4; // xmm0
  unsigned int v5; // eax
  __m128i v6; // xmm0
  unsigned int v7; // eax
  __m128i v8; // xmm0
  unsigned int v9; // eax
  __m128i v10; // xmm0
  _DWORD *result; // rax

  v3 = (int)*a2;
  if ( a3 )
    v3 = (int)(100 * v3) / a3;
  v4 = _mm_cvtsi32_si128(v3);
  v5 = (int)a2[1];
  *a1 = _mm_cvtepi32_ps(v4).m128_u32[0];
  if ( a3 )
    v5 = (int)(100 * v5) / a3;
  v6 = _mm_cvtsi32_si128(v5);
  v7 = (int)a2[2];
  a1[1] = _mm_cvtepi32_ps(v6).m128_u32[0];
  if ( a3 )
    v7 = (int)(100 * v7) / a3;
  v8 = _mm_cvtsi32_si128(v7);
  v9 = (int)a2[3];
  a1[2] = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( a3 )
    v9 = (int)(100 * v9) / a3;
  v10 = _mm_cvtsi32_si128(v9);
  result = a1;
  a1[3] = _mm_cvtepi32_ps(v10).m128_u32[0];
  return result;
}

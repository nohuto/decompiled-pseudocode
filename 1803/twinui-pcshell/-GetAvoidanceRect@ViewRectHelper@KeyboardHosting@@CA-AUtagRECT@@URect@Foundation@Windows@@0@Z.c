/*
 * XREFs of ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x180255F58
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x1802561F4 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800F6188 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x180249CD0 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x180256640 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 */

_QWORD *__fastcall KeyboardHosting::ViewRectHelper::GetAvoidanceRect(
        _QWORD *a1,
        struct Windows::Foundation::Rect *a2,
        struct Windows::Foundation::Rect *a3)
{
  __int128 v6; // xmm0
  __m128 v7; // xmm2
  float v8; // xmm1_4
  __m128 v9; // xmm2
  float v10; // xmm1_4
  __int128 v12; // [rsp+20h] [rbp-10h] BYREF

  KeyboardHosting::ViewRectHelper::ValidateRect(a2);
  KeyboardHosting::ViewRectHelper::ValidateRect(a3);
  v6 = *(_OWORD *)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v12 = v6;
  if ( !KeyboardHosting::IsRectNull((float *)&v12) )
  {
    v12 = *(_OWORD *)a3;
    if ( !KeyboardHosting::IsRectNull((float *)&v12) )
    {
      v7 = (__m128)_mm_loadu_si128((const __m128i *)a2);
      v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
      LODWORD(v12) = (int)v7.m128_f32[0];
      DWORD2(v12) = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
      DWORD1(v12) = (int)v8;
      HIDWORD(v12) = (int)(float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] + v8);
      Geometry::CRect::IsEmpty((Geometry::CRect *)&v12);
LABEL_9:
      *(_OWORD *)a1 = v12;
      return a1;
    }
  }
  v12 = *(_OWORD *)a2;
  if ( !KeyboardHosting::IsRectNull((float *)&v12) )
  {
    v9 = (__m128)_mm_loadu_si128((const __m128i *)a2);
LABEL_8:
    v10 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    LODWORD(v12) = (int)v9.m128_f32[0];
    DWORD1(v12) = (int)v10;
    DWORD2(v12) = (int)(float)(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] + v9.m128_f32[0]);
    HIDWORD(v12) = (int)(float)(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] + v10);
    goto LABEL_9;
  }
  v12 = *(_OWORD *)a3;
  if ( !KeyboardHosting::IsRectNull((float *)&v12) )
  {
    v9 = (__m128)_mm_loadu_si128((const __m128i *)a3);
    goto LABEL_8;
  }
  return a1;
}

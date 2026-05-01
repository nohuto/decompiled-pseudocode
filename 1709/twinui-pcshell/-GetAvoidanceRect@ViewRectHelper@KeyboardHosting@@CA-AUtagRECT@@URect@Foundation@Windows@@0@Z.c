/*
 * XREFs of ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x1801AF014
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11PEAU9Foundation@8@@Z @ 0x1801AEC1C (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x1801AEEDC (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 */

_QWORD *__fastcall KeyboardHosting::ViewRectHelper::GetAvoidanceRect(_QWORD *a1, __m128i *a2, __m128i *a3)
{
  __m128i v6; // xmm0
  __m128 v7; // xmm2
  float v8; // xmm1_4
  __m128 v9; // xmm2
  float v10; // xmm1_4
  __m128i v12; // [rsp+20h] [rbp-10h]
  __m128i v13; // [rsp+20h] [rbp-10h]
  __m128i v14; // [rsp+20h] [rbp-10h]
  __int128 v15; // [rsp+20h] [rbp-10h]

  KeyboardHosting::ViewRectHelper::ValidateRect(a2);
  KeyboardHosting::ViewRectHelper::ValidateRect(a3);
  v6 = _mm_loadu_si128(a2);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( *(float *)v6.m128i_i32 != 0.0
    || *(float *)&v6.m128i_i32[1] != 0.0
    || *(float *)&v6.m128i_i32[2] != 0.0
    || *(float *)&v6.m128i_i32[3] != 0.0 )
  {
    v12 = _mm_loadu_si128(a3);
    if ( *(float *)v12.m128i_i32 != 0.0
      || *(float *)&v12.m128i_i32[1] != 0.0
      || *(float *)&v12.m128i_i32[2] != 0.0
      || *(float *)&v12.m128i_i32[3] != 0.0 )
    {
      v9 = (__m128)_mm_loadu_si128(a2);
      v10 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
      LODWORD(v15) = (int)v9.m128_f32[0];
      DWORD1(v15) = (int)v10;
      HIDWORD(v15) = (int)(float)(_mm_shuffle_ps(v9, v9, 255).m128_f32[0] + v10);
      DWORD2(v15) = (int)(float)(_mm_shuffle_ps(v9, v9, 170).m128_f32[0] + v9.m128_f32[0]);
      goto LABEL_21;
    }
  }
  v13 = _mm_loadu_si128(a2);
  if ( *(float *)v13.m128i_i32 != 0.0
    || *(float *)&v13.m128i_i32[1] != 0.0
    || *(float *)&v13.m128i_i32[2] != 0.0
    || *(float *)&v13.m128i_i32[3] != 0.0 )
  {
    v7 = (__m128)_mm_loadu_si128(a2);
    goto LABEL_18;
  }
  v14 = _mm_loadu_si128(a3);
  if ( *(float *)v14.m128i_i32 != 0.0
    || *(float *)&v14.m128i_i32[1] != 0.0
    || *(float *)&v14.m128i_i32[2] != 0.0
    || *(float *)&v14.m128i_i32[3] != 0.0 )
  {
    v7 = (__m128)_mm_loadu_si128(a3);
LABEL_18:
    v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
    LODWORD(v15) = (int)v7.m128_f32[0];
    DWORD1(v15) = (int)v8;
    DWORD2(v15) = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
    HIDWORD(v15) = (int)(float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] + v8);
LABEL_21:
    *(_OWORD *)a1 = v15;
  }
  return a1;
}

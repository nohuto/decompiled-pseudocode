/*
 * XREFs of SpatialInteractionDevices::AdjustOrientationAndScale @ 0x180079C80
 * Callers:
 *     _anonymous_namespace_::GetPoseData @ 0x180074550 (_anonymous_namespace_--GetPoseData.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

char __fastcall SpatialInteractionDevices::AdjustOrientationAndScale(unsigned int *a1)
{
  char result; // al
  __m128 v2; // xmm7
  __m128 v3; // xmm3
  __m128 v4; // xmm6
  __m128 v5; // xmm2
  __m128 v6; // xmm5
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm4
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm3
  __m128 v18; // xmm1
  __m128 v19; // xmm4
  __m128 v20; // xmm1

  result = *((_BYTE *)a1 + 28);
  if ( result || *((_BYTE *)a1 + 29) )
  {
    v2 = (__m128)xmmword_18010E528;
    if ( result )
    {
      v3 = _mm_add_ps((__m128)xmmword_18010E528, (__m128)xmmword_18010E528);
      v4 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)*a1, (__m128)a1[1]), (__m128)a1[2]);
      v5 = _mm_mul_ps(v3, (__m128)xmmword_18010E528);
      v6 = _mm_sub_ps(
             _mm_sub_ps(
               (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
               _mm_and_ps(_mm_shuffle_ps(v5, v5, 193), DirectX::g_XMMask3)),
             _mm_and_ps(_mm_shuffle_ps(v5, v5, 218), DirectX::g_XMMask3));
      v7 = _mm_mul_ps(
             _mm_shuffle_ps(v3, v3, 230),
             _mm_shuffle_ps((__m128)xmmword_18010E528, (__m128)xmmword_18010E528, 208));
      v8 = _mm_mul_ps(
             _mm_shuffle_ps(v3, v3, 201),
             _mm_shuffle_ps((__m128)xmmword_18010E528, (__m128)xmmword_18010E528, 255));
      v9 = _mm_add_ps(v8, v7);
      v10 = _mm_sub_ps(v7, v8);
      v11 = _mm_shuffle_ps(v9, v10, 73);
      v12 = _mm_shuffle_ps(v11, v11, 120);
      v13 = _mm_shuffle_ps(v6, v12, 237);
      v14 = _mm_shuffle_ps(v9, v10, 160);
      v15 = _mm_shuffle_ps(v6, v12, 76);
      v16 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), _mm_shuffle_ps(v13, v13, 114)),
                _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), _mm_shuffle_ps(v15, v15, 120))),
              _mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), _mm_shuffle_ps(_mm_shuffle_ps(v14, v14, 136), v6, 228)));
      *a1 = v16.m128_i32[0];
      a1[1] = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
      a1[2] = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
      v16.m128_f32[0] = *((float *)a1 + 2) * 0.0099999998;
      *(float *)a1 = *(float *)a1 * 0.0099999998;
      v13.m128_f32[0] = *((float *)a1 + 1) * 0.0099999998;
      a1[2] = v16.m128_i32[0];
      a1[1] = v13.m128_i32[0];
    }
    if ( *((_BYTE *)a1 + 29) )
    {
      v17 = *(__m128 *)(a1 + 3);
      v18 = _mm_shuffle_ps(v17, v17, 27);
      v19 = _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0), v18);
      v20 = _mm_shuffle_ps(v18, v18, 177);
      *(__m128 *)(a1 + 3) = _mm_add_ps(
                              _mm_add_ps(
                                _mm_mul_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v20, v20, 27), _mm_shuffle_ps(v2, v2, 170)),
                                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ),
                                _mm_mul_ps(
                                  _mm_mul_ps(_mm_shuffle_ps(v2, v2, 85), v20),
                                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY)),
                              _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v2, v2, 255), v17),
                                _mm_mul_ps(v19, (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX)));
    }
  }
  return result;
}

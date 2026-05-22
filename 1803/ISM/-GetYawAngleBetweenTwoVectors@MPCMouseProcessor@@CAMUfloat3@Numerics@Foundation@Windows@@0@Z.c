/*
 * XREFs of ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x180099244
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800985D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     acosf_0 @ 0x1800E31E1 (acosf_0.c)
 */

float __fastcall MPCMouseProcessor::GetYawAngleBetweenTwoVectors(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm3
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  float v11; // xmm6_4
  float result; // xmm0_4
  float v13; // xmm3_4

  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a2 + 1) = 0;
  v3 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  v4 = _mm_mul_ps(v3, v3);
  v5 = _mm_shuffle_ps(v4, v4, 102);
  v4.m128_f32[0] = (float)(v4.m128_f32[0] + v5.m128_f32[0]) + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v6 = _mm_div_ps(v3, _mm_sqrt_ps(_mm_shuffle_ps(v4, v4, 0)));
  *a1 = _mm_unpacklo_ps(v6, _mm_shuffle_ps(v6, v6, 85)).m128_u64[0];
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  v7 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_div_ps(v7, _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)));
  *a2 = _mm_unpacklo_ps(v10, _mm_shuffle_ps(v10, v10, 85)).m128_u64[0];
  *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  v11 = *(float *)a1;
  result = 0.0;
  v13 = (float)((float)(*((float *)a2 + 1) * *((float *)a1 + 1)) + (float)(*(float *)a2 * *(float *)a1))
      + (float)(*((float *)a1 + 2) * *((float *)a2 + 2));
  v9.m128_f32[0] = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - 1.0)) & _xmm);
  if ( v9.m128_f32[0] > 0.0000099999997 )
    result = acosf_0(v13);
  if ( v11 > *(float *)a2 && result != 0.0 )
    return result * -1.0;
  return result;
}

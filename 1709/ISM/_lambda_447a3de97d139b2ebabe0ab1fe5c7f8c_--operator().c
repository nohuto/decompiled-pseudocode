/*
 * XREFs of _lambda_447a3de97d139b2ebabe0ab1fe5c7f8c_::operator() @ 0x1800C6180
 * Callers:
 *     ?ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@Windows@@1@Z @ 0x1800C57F0 (-ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__m128 *__fastcall lambda_447a3de97d139b2ebabe0ab1fe5c7f8c_::operator()(
        _QWORD *a1,
        bool *a2,
        _DWORD *a3,
        int a4,
        unsigned int *a5)
{
  int v5; // r10d
  __m128 *result; // rax
  __m128 v7; // xmm2
  __m128 v8; // xmm1

  v5 = a4 & *(_DWORD *)(*a1 + 16LL);
  *a2 = v5 == a4;
  if ( v5 == a4 )
  {
    result = (__m128 *)a1[1];
    v7 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)*a5, (__m128)a5[1]), (__m128)a5[2]);
    v8 = _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), result[1]), _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *result)),
           _mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), result[2]));
    *a3 = v8.m128_i32[0];
    a3[1] = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
    a3[2] = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a3 = 0LL;
    a3[2] = 0;
  }
  return result;
}

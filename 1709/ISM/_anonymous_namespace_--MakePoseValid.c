/*
 * XREFs of _anonymous_namespace_::MakePoseValid @ 0x180074330
 * Callers:
 *     _anonymous_namespace_::GetPoseData @ 0x180074550 (_anonymous_namespace_--GetPoseData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::MakePoseValid(__int64 a1)
{
  __m128 v1; // xmm4
  __m128 v2; // xmm3
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128 v5; // xmm1
  __int64 result; // rax
  __m128 v7; // xmm0
  __m128 v8; // xmm3
  __m128 v9; // xmm3
  __m128 v10; // xmm3
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm2

  if ( !*(_BYTE *)(a1 + 28) )
  {
    *(_DWORD *)a1 = dword_18010F580;
    *(_DWORD *)(a1 + 4) = dword_18010F584;
    *(_DWORD *)(a1 + 8) = dword_18010F588;
    *(_BYTE *)(a1 + 28) = 1;
  }
  if ( *(_BYTE *)(a1 + 29) )
  {
    v1 = *(__m128 *)(a1 + 12);
    v2 = _mm_mul_ps(v1, v1);
    v3 = _mm_add_ps(_mm_shuffle_ps(v1, v2, 64), v2);
    v4 = _mm_add_ps(_mm_shuffle_ps(v2, v3, 48), v3);
    v5 = _mm_sub_ps(_mm_shuffle_ps(v4, v4, 170), (__m128)_xmm);
    result = (unsigned int)_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v5), v5), (__m128)_xmm));
    if ( (_DWORD)result == 15 )
    {
      v14 = *(__m128 *)(a1 + 12);
    }
    else
    {
      v7 = _mm_shuffle_ps(v2, v2, 238);
      v8 = _mm_add_ps(v2, v7);
      v9 = _mm_shuffle_ps(v8, v8, 64);
      v10 = _mm_add_ps(v9, _mm_shuffle_ps(v7, v9, 240));
      v11 = _mm_shuffle_ps(v10, v10, 170);
      v12 = _mm_sqrt_ps(v11);
      v13 = _mm_cmpneq_ps(DirectX::g_XMInfinity, v11);
      v14 = _mm_or_ps(
              _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v12), _mm_div_ps(v1, v12)), v13),
              _mm_andnot_ps(v13, DirectX::g_XMQNaN));
    }
    *(__m128 *)(a1 + 12) = v14;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = dword_18010E518;
    *(_DWORD *)(a1 + 16) = dword_18010E51C;
    *(_DWORD *)(a1 + 20) = dword_18010E520;
    *(_DWORD *)(a1 + 24) = dword_18010E524;
    *(_BYTE *)(a1 + 29) = 1;
  }
  return result;
}

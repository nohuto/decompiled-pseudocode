/*
 * XREFs of ??$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ?AW4OrthonormalMatrixValidationFailures@1@UXMMATRIX@1@@Z @ 0x1800BB4A8
 * Callers:
 *     _lambda_d3375ebeae4829c9f30dd12a415fc5f7_::operator() @ 0x1800B82F4 (_lambda_d3375ebeae4829c9f30dd12a415fc5f7_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall DirectX::Details::ValidateOrthonormalRightHandedMatrix<1>(
        double a1,
        double a2,
        double a3,
        double a4)
{
  __m128 v4; // xmm8
  __m128 v5; // xmm13
  __m128 v6; // xmm6
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm5
  __m128 v10; // xmm1
  __m128 v11; // xmm1
  float v12; // xmm0_4
  bool v13; // cl
  int v14; // edx
  __m128 v15; // xmm1
  __m128 v16; // xmm4
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm4
  __m128 v20; // xmm3
  int v21; // r8d
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  float v24; // xmm0_4
  __m128 v25; // xmm1
  float v26; // xmm0_4
  __m128 v27; // xmm1
  __m128 v28; // xmm4
  __m128 v29; // xmm2
  __m128 v30; // xmm3
  __m128 v31; // xmm4
  __m128 v32; // xmm3
  __m128 v33; // xmm6
  __m128 v34; // xmm8
  __m128 v35; // xmm6
  __m128 v36; // xmm1

  v4 = *(__m128 *)&a1;
  v5 = *(__m128 *)&a3;
  v6 = *(__m128 *)&a2;
  v7 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a4, 238);
  v8 = _mm_mul_ps(*(__m128 *)&a1, *(__m128 *)&a2);
  v9 = _mm_sub_ps(_mm_shuffle_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a2, 238), v7, 221), (__m128)_xmm);
  v16 = _mm_mul_ps(v5, *(__m128 *)&a1);
  v18 = _mm_mul_ps(v5, *(__m128 *)&a2);
  v10 = _mm_shuffle_ps(v8, v8, 153);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v10.m128_f32[0]) + _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v11 = _mm_shuffle_ps(v16, v16, 153);
  v16.m128_f32[0] = v16.m128_f32[0] + v11.m128_f32[0];
  v12 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  v13 = _mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v9), v9), (__m128)_xmm)) == 15;
  v14 = 0;
  v15 = _mm_shuffle_ps(v18, v18, 153);
  v16.m128_f32[0] = v16.m128_f32[0] + v12;
  v17 = _mm_sub_ps(_mm_shuffle_ps(v8, v8, 0), (__m128)_xmm);
  v18.m128_f32[0] = (float)(v18.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
  if ( (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v17), v17), (__m128)_xmm)) & 7) != 7
    || (v19 = _mm_sub_ps(_mm_shuffle_ps(v16, v16, 0), (__m128)_xmm),
        (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v19), v19), (__m128)_xmm)) & 7) != 7)
    || (v20 = _mm_sub_ps(_mm_shuffle_ps(v18, v18, 0), (__m128)_xmm),
        v21 = 0,
        (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v20), v20), (__m128)_xmm)) & 7) != 7) )
  {
    v21 = 2;
  }
  v22 = _mm_mul_ps(v4, v4);
  v28 = _mm_mul_ps(v6, v6);
  v30 = _mm_mul_ps(v5, v5);
  v23 = _mm_shuffle_ps(v22, v22, 153);
  v22.m128_f32[0] = v22.m128_f32[0] + v23.m128_f32[0];
  v24 = _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
  v25 = _mm_shuffle_ps(v28, v28, 153);
  v28.m128_f32[0] = v28.m128_f32[0] + v25.m128_f32[0];
  v22.m128_f32[0] = v22.m128_f32[0] + v24;
  v26 = _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
  v27 = _mm_shuffle_ps(v30, v30, 153);
  v28.m128_f32[0] = v28.m128_f32[0] + v26;
  v29 = _mm_sub_ps(_mm_shuffle_ps(v22, v22, 0), DirectX::g_XMOne);
  v30.m128_f32[0] = (float)(v30.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
  if ( (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v29), v29), (__m128)_xmm)) & 7) != 7
    || (v31 = _mm_sub_ps(_mm_shuffle_ps(v28, v28, 0), DirectX::g_XMOne),
        (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v31), v31), (__m128)_xmm)) & 7) != 7)
    || (v32 = _mm_sub_ps(_mm_shuffle_ps(v30, v30, 0), DirectX::g_XMOne),
        (_mm_movemask_ps(_mm_cmple_ps(_mm_max_ps(_mm_sub_ps((__m128)0LL, v32), v32), (__m128)_xmm)) & 7) != 7) )
  {
    v14 = 4;
  }
  v33 = _mm_shuffle_ps(v6, v6, 210);
  v34 = _mm_shuffle_ps(v4, v4, 201);
  v35 = _mm_mul_ps(
          _mm_and_ps(
            _mm_sub_ps(_mm_mul_ps(v33, v34), _mm_mul_ps(_mm_shuffle_ps(v34, v34, 201), _mm_shuffle_ps(v33, v33, 210))),
            DirectX::g_XMMask3),
          v5);
  v36 = _mm_shuffle_ps(v35, v35, 153);
  v35.m128_f32[0] = (float)(v35.m128_f32[0] + v36.m128_f32[0]) + _mm_shuffle_ps(v36, v36, 85).m128_f32[0];
  return v21 | v14 | !v13 | ((_mm_movemask_ps(_mm_cmplt_ps((__m128)_xmm, _mm_shuffle_ps(v35, v35, 0))) & 7) != 7 ? 8 : 0);
}

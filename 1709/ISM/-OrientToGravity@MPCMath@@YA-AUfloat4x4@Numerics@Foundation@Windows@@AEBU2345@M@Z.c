/*
 * XREFs of ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180036C48
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004B2C0 (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004B7A0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x180036808 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     sqrtf_0 @ 0x1800CC365 (sqrtf_0.c)
 */

__int64 __fastcall MPCMath::OrientToGravity(__int64 a1, __int64 a2, float a3)
{
  float v6; // xmm7_4
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm3
  float v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm9_4
  float v23; // xmm8_4
  float v24; // xmm6_4
  __m128 v25; // xmm3
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __m128 v28; // xmm3
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int64 result; // rax
  float v33; // [rsp+28h] [rbp-49h]
  float v34; // [rsp+38h] [rbp-39h]
  float v35; // [rsp+3Ch] [rbp-35h]
  float v36; // [rsp+40h] [rbp-31h]
  _BYTE v37[20]; // [rsp+48h] [rbp-29h] BYREF
  float v38; // [rsp+5Ch] [rbp-15h]
  __int64 v39; // [rsp+60h] [rbp-11h]
  _DWORD v40[24]; // [rsp+68h] [rbp-9h]

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  v35 = *(float *)(a2 + 36);
  v34 = *(float *)(a2 + 32);
  v36 = *(float *)(a2 + 40);
  v6 = sqrtf_0((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(v36 * v36));
  v7 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)LODWORD(v34), (__m128)LODWORD(v35)), (__m128)LODWORD(v36));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_div_ps(v7, _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)));
  v11 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v12 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v11 + (float)(v10.m128_f32[0] * 0.0)) + (float)(v12 * 0.0))) & _xmm);
  if ( v13 <= a3 )
  {
    v25 = _mm_movelh_ps(
            _mm_unpacklo_ps(
              (__m128)COERCE_UNSIGNED_INT(v12 - (float)(v11 * 0.0)),
              (__m128)COERCE_UNSIGNED_INT((float)(v10.m128_f32[0] * 0.0) - (float)(v12 * 0.0))),
            (__m128)COERCE_UNSIGNED_INT((float)(v11 * 0.0) - v10.m128_f32[0]));
    v26 = _mm_mul_ps(v25, v25);
    v27 = _mm_shuffle_ps(v26, v26, 102);
    v26.m128_f32[0] = (float)(v26.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
    v28 = _mm_div_ps(v25, _mm_sqrt_ps(_mm_shuffle_ps(v26, v26, 0)));
    v33 = v28.m128_f32[0];
    v24 = _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
    v23 = _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
    v22 = v28.m128_f32[0];
    v21 = v28.m128_f32[0] - (float)(v24 * 0.0);
    v18 = (float)(v24 * 0.0) - v23;
    v20 = (float)(v23 * 0.0) - (float)(v33 * 0.0);
  }
  else
  {
    v14 = _mm_movelh_ps(
            _mm_unpacklo_ps(
              (__m128)COERCE_UNSIGNED_INT((float)(*(float *)(a2 + 4) * 0.0) - *(float *)(a2 + 8)),
              (__m128)COERCE_UNSIGNED_INT((float)(*(float *)(a2 + 8) * 0.0) - (float)(*(float *)a2 * 0.0))),
            (__m128)COERCE_UNSIGNED_INT(*(float *)a2 - (float)(*(float *)(a2 + 4) * 0.0)));
    v15 = _mm_mul_ps(v14, v14);
    v16 = _mm_shuffle_ps(v15, v15, 102);
    v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
    v17 = _mm_div_ps(v14, _mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)));
    v18 = v17.m128_f32[0];
    v19 = v17.m128_f32[0];
    v20 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
    v21 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
    v22 = v21 - (float)(v20 * 0.0);
    v23 = (float)(v20 * 0.0) - v18;
    v24 = (float)(v19 * 0.0) - (float)(v21 * 0.0);
  }
  *(float *)(a1 + 36) = v20;
  *(float *)(a1 + 40) = v21;
  *(float *)&v40[7] = FLOAT_1_0;
  *(_QWORD *)&v37[12] = 0LL;
  *(_QWORD *)&v40[3] = 0LL;
  *(float *)(a1 + 32) = v18;
  *(_DWORD *)(a1 + 16) = 0;
  *(float *)a1 = v22;
  *(float *)(a1 + 4) = v24;
  *(float *)(a1 + 8) = v23;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)&v37[4] = 0LL;
  v39 = 0LL;
  *(_QWORD *)v40 = 0LL;
  *(_QWORD *)&v40[5] = 0LL;
  *(float *)v37 = v6;
  v38 = v6;
  *(float *)&v40[2] = v6;
  v29 = *(_OWORD *)(a1 + 16);
  v30 = *(_OWORD *)(a1 + 32);
  v31 = *(_OWORD *)(a1 + 48);
  *(__m128 *)a1 = DirectX::XMMatrixMultiply(*(double *)a1, (__m128 *)v37);
  result = a1;
  *(_OWORD *)(a1 + 16) = v29;
  *(_OWORD *)(a1 + 32) = v30;
  *(_OWORD *)(a1 + 48) = v31;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  return result;
}

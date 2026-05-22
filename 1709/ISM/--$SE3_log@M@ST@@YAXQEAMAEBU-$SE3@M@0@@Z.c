/*
 * XREFs of ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x1800C9248
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800AF030 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     ??$SE3_interpolate@M@ST@@YA?AU?$SE3@M@0@AEBU10@0M@Z @ 0x1800C9488 (--$SE3_interpolate@M@ST@@YA-AU-$SE3@M@0@AEBU10@0M@Z.c)
 * Callees:
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x1800C99E8 (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 *     ??$SO3_compute_exp_diff_inv_coef@M@ST@@YAXAEAMMMMM@Z @ 0x1800C9D0C (--$SO3_compute_exp_diff_inv_coef@M@ST@@YAXAEAMMMMM@Z.c)
 */

__int64 __fastcall ST::SE3_log<float>(__int64 a1, float *a2)
{
  float v4; // xmm7_4
  float v5; // xmm10_4
  float v6; // xmm9_4
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm8_4
  float v13; // xmm1_4
  __int64 result; // rax
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm0_4
  float v18; // xmm10_4
  float v19; // xmm0_4
  float v20; // [rsp+A0h] [rbp+8h] BYREF
  int v21; // [rsp+A8h] [rbp+10h] BYREF
  int v22; // [rsp+B0h] [rbp+18h] BYREF

  ST::SO3_log_with_exp_coefs<float>(a1 + 12, (_DWORD)a2, (unsigned int)&v22, (unsigned int)&v21, (__int64)&v20);
  v4 = *(float *)(a1 + 16);
  v5 = *(float *)(a1 + 12);
  v6 = *(float *)(a1 + 20);
  ST::SO3_compute_exp_diff_inv_coef<float>((unsigned int)&v20, v7, v8, v9, LODWORD(v20));
  v10 = a2[9];
  v11 = a2[11];
  v12 = a2[10];
  *(float *)a1 = v10;
  v13 = (float)(v11 * v4) - (float)(v12 * v6);
  *(float *)(a1 + 4) = a2[10];
  result = *((unsigned int *)a2 + 11);
  *(_DWORD *)(a1 + 8) = result;
  v15 = (float)(v10 * v6) - (float)(v11 * v5);
  v16 = (float)(v12 * v5) - (float)(v10 * v4);
  v17 = v5 * v16;
  v18 = (float)((float)(v5 * v15) - (float)(v4 * v13)) * v20;
  v19 = (float)(*(float *)(a1 + 4) - (float)(v15 * 0.5)) + (float)((float)((float)(v6 * v13) - v17) * v20);
  *(float *)a1 = (float)(v10 - (float)(v13 * 0.5)) + (float)((float)((float)(v4 * v16) - (float)(v6 * v15)) * v20);
  *(float *)(a1 + 4) = v19;
  *(float *)(a1 + 8) = (float)(*(float *)(a1 + 8) - (float)(v16 * 0.5)) + v18;
  return result;
}

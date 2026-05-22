/*
 * XREFs of ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x1800E0250
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800BA590 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     ??$SE3_interpolate@M@ST@@YA?AU?$SE3@M@0@AEBU10@0M@Z @ 0x1800E04B0 (--$SE3_interpolate@M@ST@@YA-AU-$SE3@M@0@AEBU10@0M@Z.c)
 * Callees:
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x1800E09FC (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 *     ??$SO3_compute_exp_diff_inv_coef@M@ST@@YAXAEAMMMMM@Z @ 0x1800E0D5C (--$SO3_compute_exp_diff_inv_coef@M@ST@@YAXAEAMMMMM@Z.c)
 */

__int64 __fastcall ST::SE3_log<float>(float *a1, float *a2)
{
  float v4; // xmm12_4
  float v5; // xmm11_4
  float v6; // xmm9_4
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 result; // rax
  float v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm4_4
  float v16; // xmm10_4
  float v17; // xmm6_4
  float v18; // xmm8_4
  float v19; // xmm3_4
  float v20; // [rsp+C0h] [rbp+8h] BYREF
  int v21; // [rsp+C8h] [rbp+10h] BYREF
  int v22; // [rsp+D0h] [rbp+18h] BYREF

  ST::SO3_log_with_exp_coefs<float>((_DWORD)a1 + 12, (_DWORD)a2, (unsigned int)&v22, (unsigned int)&v21, (__int64)&v20);
  v4 = a1[4];
  v5 = a1[3];
  v6 = a1[5];
  result = ST::SO3_compute_exp_diff_inv_coef<float>((unsigned int)&v20, v7, v8, v9, LODWORD(v20));
  v11 = a2[11];
  v12 = a2[9];
  v13 = a2[10] * v5;
  v14 = (float)(v11 * v4) - (float)(a2[10] * v6);
  *a1 = v12;
  v15 = a2[10];
  v16 = v13 - (float)(v12 * v4);
  a1[1] = v15;
  v17 = a2[11];
  v18 = (float)(v12 * v6) - (float)(v11 * v5);
  v19 = v20;
  *a1 = (float)((float)((float)(v16 * v4) - (float)(v18 * v6)) * v20) + (float)(v12 - (float)(v14 * 0.5));
  a1[1] = (float)((float)((float)(v14 * v6) - (float)(v16 * v5)) * v19) + (float)(v15 - (float)(v18 * 0.5));
  a1[2] = (float)((float)((float)(v18 * v5) - (float)(v14 * v4)) * v19) + (float)(v17 - (float)(v16 * 0.5));
  return result;
}

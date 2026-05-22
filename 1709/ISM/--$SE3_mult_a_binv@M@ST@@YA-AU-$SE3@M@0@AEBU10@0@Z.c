/*
 * XREFs of ??$SE3_mult_a_binv@M@ST@@YA?AU?$SE3@M@0@AEBU10@0@Z @ 0x1800BB2D0
 * Callers:
 *     ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800AF030 (-PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@Holographic@Internal@Windows@@UEAAJ.c)
 *     ??$SE3_interpolate@M@ST@@YA?AU?$SE3@M@0@AEBU10@0M@Z @ 0x1800C9488 (--$SE3_interpolate@M@ST@@YA-AU-$SE3@M@0@AEBU10@0M@Z.c)
 * Callees:
 *     ST::mult_Ax_3x3_float_ @ 0x1800C9568 (ST--mult_Ax_3x3_float_.c)
 */

float *__fastcall ST::SE3_mult_a_binv<float>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // rdx
  float *v9; // r9
  float *v10; // r11
  float *result; // rax
  float *v12; // r10
  float *v13; // rcx

  ST::mult_Ax_3x3_float_(a1, a3, a2);
  ST::mult_Ax_3x3_float_(v4 + 12, v5, v3 + 12);
  ST::mult_Ax_3x3_float_(v6 + 24, v8, v7 + 24);
  result = v10;
  v10[9] = v12[9] - (float)((float)((float)(v9[10] * v10[1]) + (float)(*v10 * v9[9])) + (float)(v9[11] * v10[2]));
  v10[10] = v12[10] - (float)((float)((float)(v10[4] * v9[10]) + (float)(v10[3] * v9[9])) + (float)(v10[5] * v9[11]));
  v10[11] = v12[11] - (float)((float)((float)(v13[1] * v9[10]) + (float)(v9[9] * *v13)) + (float)(v13[2] * v9[11]));
  return result;
}

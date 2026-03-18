/*
 * XREFs of ?GetPoint@?$CBezier@MVCMilPoint2F@@@@QEBAXMAEAVCMilPoint2F@@@Z @ 0x18020D454
 * Callers:
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x18020D508 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBezier<float,CMilPoint2F>::GetPoint(float *a1, float a2, _QWORD *a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm6
  __m128 v5; // xmm5
  float v6; // xmm7_4
  float v7; // xmm4_4
  __m128 v8; // xmm2

  v3 = (__m128)LODWORD(FLOAT_1_0);
  v3.m128_f32[0] = 1.0 - a2;
  v4 = v3;
  v4.m128_f32[0] = v3.m128_f32[0] * v3.m128_f32[0];
  v5 = v4;
  v6 = (float)(a2 * a2) * a2;
  v7 = (float)((float)(1.0 - a2) * 3.0) * (float)(a2 * a2);
  v5.m128_f32[0] = (float)((float)(v3.m128_f32[0] * v3.m128_f32[0]) * 3.0) * a2;
  v8 = v5;
  v8.m128_f32[0] = (float)((float)((float)(v5.m128_f32[0] * a1[2])
                                 + (float)((float)((float)(v3.m128_f32[0] * v3.m128_f32[0]) * v3.m128_f32[0]) * *a1))
                         + (float)(v7 * a1[4]))
                 + (float)(v6 * a1[6]);
  v5.m128_f32[0] = (float)((float)((float)(v5.m128_f32[0] * a1[3])
                                 + (float)((float)((float)(v3.m128_f32[0] * v3.m128_f32[0]) * v3.m128_f32[0]) * a1[1]))
                         + (float)(v7 * a1[5]))
                 + (float)(v6 * a1[7]);
  *a3 = _mm_unpacklo_ps(v8, v5).m128_u64[0];
}

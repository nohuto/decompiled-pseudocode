/*
 * XREFs of ?TrimToEndAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x18020D5A8
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18020BC14 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x18020D508 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CBezier<float,CMilPoint2F>::TrimToEndAt(float *a1, float a2)
{
  _UNKNOWN **result; // rax
  float v4; // xmm7_4
  float v6; // xmm4_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 1.0 - a2;
  v6 = (float)((float)(1.0 - a2) * a1[4]) + (float)(a2 * a1[6]);
  v7 = (float)((float)(1.0 - a2) * a1[5]) + (float)(a2 * a1[7]);
  a1[6] = v6;
  a1[7] = v7;
  v8 = v7 * a2;
  v9 = (float)(v4 * a1[2]) + (float)(a2 * a1[4]);
  v10 = (float)(v4 * a1[3]) + (float)(a2 * a1[5]);
  a1[4] = v9;
  a1[5] = v10;
  v11 = (float)(v9 * v4) + (float)(v6 * a2);
  v12 = a2 * a1[2];
  v13 = a2 * a1[3];
  v14 = (float)(v4 * *a1) + v12;
  v15 = v4 * a1[1];
  v16 = (float)(v10 * v4) + v8;
  a1[6] = v11;
  a1[2] = v14;
  v17 = v13 + v15;
  a1[7] = v16;
  a1[3] = v17;
  v18 = a2 * a1[5];
  v19 = (float)(a2 * a1[4]) + (float)(v14 * v4);
  a1[4] = v19;
  v20 = v18 + (float)(v17 * v4);
  a1[5] = v20;
  a1[6] = (float)(v19 * v4) + (float)(v11 * a2);
  a1[7] = (float)(v16 * a2) + (float)(v20 * v4);
  return result;
}

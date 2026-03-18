/*
 * XREFs of ?Step@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x18020B300
 * Callers:
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18020AF50 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBezierFlattener<float,CMilPoint2F>::Step(__int64 a1)
{
  float v1; // xmm3_4
  float v2; // xmm4_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm0_4

  *(float *)(a1 + 48) = *(float *)(a1 + 56) + *(float *)(a1 + 48);
  *(float *)(a1 + 52) = *(float *)(a1 + 60) + *(float *)(a1 + 52);
  v1 = *(float *)(a1 + 64);
  v2 = *(float *)(a1 + 68);
  v3 = v2 + *(float *)(a1 + 60);
  *(float *)(a1 + 56) = v1 + *(float *)(a1 + 56);
  *(float *)(a1 + 60) = v3;
  v4 = v2 + *(float *)(a1 + 68);
  v5 = v1 + *(float *)(a1 + 64);
  *(float *)(a1 + 68) = v4;
  *(float *)(a1 + 64) = v5;
  *(float *)(a1 + 64) = v5 - *(float *)(a1 + 72);
  *(float *)(a1 + 68) = v4 - *(float *)(a1 + 76);
  v6 = *(float *)(a1 + 88) + *(float *)(a1 + 84);
  --*(_DWORD *)(a1 + 80);
  *(float *)(a1 + 72) = v1;
  *(float *)(a1 + 76) = v2;
  *(float *)(a1 + 84) = v6;
}

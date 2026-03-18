/*
 * XREFs of ??0Line3D@@QEAA@UMilPoint4F@@0@Z @ 0x18015B090
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x18015B50C (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Line3D::Line3D(__int64 a1, float *a2, float *a3)
{
  __m128 v3; // xmm2
  float v4; // xmm0_4
  float v5; // xmm4_4
  __m128 v6; // xmm3
  float v7; // xmm1_4
  __m128 v8; // xmm0
  float v9; // eax
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  float v12; // eax

  v3 = (__m128)*(unsigned int *)a2;
  v4 = 1.0 / a2[3];
  v5 = 1.0 / a3[3];
  v6 = (__m128)*((unsigned int *)a2 + 1);
  v7 = a2[2] * v4;
  v3.m128_f32[0] = v3.m128_f32[0] * v4;
  v6.m128_f32[0] = v6.m128_f32[0] * v4;
  v8 = v3;
  v9 = v7;
  v10 = (__m128)*(unsigned int *)a3;
  v11 = (__m128)*((unsigned int *)a3 + 1);
  *(_QWORD *)a1 = _mm_unpacklo_ps(v8, v6).m128_u64[0];
  v8.m128_f32[0] = a3[2];
  *(float *)(a1 + 8) = v9;
  v10.m128_f32[0] = (float)(v10.m128_f32[0] * v5) - *(float *)a1;
  v11.m128_f32[0] = (float)(v11.m128_f32[0] * v5) - *(float *)(a1 + 4);
  v12 = (float)(v8.m128_f32[0] * v5) - *(float *)(a1 + 8);
  *(_QWORD *)(a1 + 12) = _mm_unpacklo_ps(v10, v11).m128_u64[0];
  *(float *)(a1 + 20) = v12;
  return a1;
}

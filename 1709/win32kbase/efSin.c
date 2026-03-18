/*
 * XREFs of efSin @ 0x1C008E5F0
 * Callers:
 *     efCos @ 0x1C008E5C0 (efCos.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C00EDD10 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     bFToL @ 0x1C0070F2C (bFToL.c)
 *     eFraction @ 0x1C00953FC (eFraction.c)
 */

__int64 __fastcall efSin(int a1)
{
  int v1; // ebx
  float v2; // xmm2_4
  double v3; // xmm0_8
  __m128 v4; // xmm4
  int v5; // r8d
  int v6; // edx
  __m128 v7; // xmm3
  __m128 v8; // xmm3
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
  {
    v1 = 1;
    LODWORD(v2) = a1 ^ _xmm;
  }
  bFToL(*(float *)&FP_SINE_FACTOR * v2, &v10, 5);
  v3 = eFraction();
  v5 = v1 ^ 1;
  if ( ((v10 >> 5) & 2) == 0 )
    v5 = v1;
  v6 = v10 & 0x1F;
  if ( ((v10 >> 5) & 1) != 0 )
  {
    v7 = (__m128)LODWORD(gaefSin[32 - v6]);
    v7.m128_f32[0] = (float)(v7.m128_f32[0] - gaefSin[32 - v6 - 1]) * *(float *)&v3;
    v8 = _mm_xor_ps(v7, v4);
    v8.m128_f32[0] = v8.m128_f32[0] + gaefSin[32 - v6];
  }
  else
  {
    v8 = (__m128)LODWORD(gaefSin[v6 + 1]);
    v8.m128_f32[0] = (float)((float)(v8.m128_f32[0] - gaefSin[v10 & 0x1F]) * *(float *)&v3) + gaefSin[v10 & 0x1F];
  }
  if ( v5 )
    v8 = _mm_xor_ps(v8, v4);
  return (unsigned int)_mm_cvtsi128_si32((__m128i)v8);
}

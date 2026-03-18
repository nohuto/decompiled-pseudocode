/*
 * XREFs of ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C028C408
 * Callers:
 *     GreAngleArc @ 0x1C027AD98 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C028C580 (NtGdiArcInternal.c)
 * Callees:
 *     eFraction @ 0x1C023A4F0 (eFraction.c)
 */

__int64 __fastcall vCosSinPrecise(unsigned int a1, float *a2, float *a3)
{
  double v3; // xmm0_8
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  double v9; // xmm0_8
  int v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm3_4
  __int64 result; // rax
  float v16; // xmm6_4
  float v17; // xmm1_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm7_4
  float v21; // xmm0_4

  *(_QWORD *)&v3 = _mm_cvtsi32_si128(a1).m128i_u64[0];
  if ( *(float *)&v3 < 0.0 )
    *(_QWORD *)&v3 ^= (unsigned int)_xmm;
  *(float *)&v3 = *(float *)&v3 / FP_360_0;
  v9 = eFraction(v3);
  v12 = *(float *)&v9 * FP_360_0;
  if ( v11 > (float)(FP_180_0 - (float)(*(float *)&v9 * FP_360_0)) )
  {
    v6 = 1;
    v12 = FP_360_0 - v12;
  }
  if ( v11 > (float)(FP_90_0 - v12) )
  {
    v8 = 1;
    v12 = FP_180_0 - v12;
  }
  v13 = FP_PI * v12;
  v14 = FP_2_0;
  LODWORD(result) = 2;
  v16 = v13 / FP_180_0;
  v17 = FP_1_0;
  v18 = FP_2_0;
  v19 = v16;
  v20 = v16;
  do
  {
    v20 = v20 * v16;
    v21 = v20 / v18;
    if ( (result & 2) != 0 )
      LODWORD(v21) ^= v10;
    if ( (result & 1) != 0 )
      v19 = v19 + v21;
    else
      v17 = v17 + v21;
    v14 = v14 + FP_1_0;
    result = (unsigned int)(result + 1);
    v18 = v18 * v14;
  }
  while ( (unsigned int)result < 0xD );
  if ( !v7 )
  {
    if ( !v6 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !v6 )
LABEL_18:
    LODWORD(v19) ^= v10;
LABEL_19:
  if ( v8 )
    LODWORD(v17) ^= v10;
  *a2 = v17;
  *a3 = v19;
  return result;
}

/*
 * XREFs of ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C028C28C
 * Callers:
 *     GreAngleArc @ 0x1C027AD98 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C028C580 (NtGdiArcInternal.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     eFraction @ 0x1C023A4F0 (eFraction.c)
 */

__int64 __fastcall vCosSin(int a1, float *a2, float *a3)
{
  int v3; // ebx
  float v4; // xmm2_4
  double v7; // xmm1_8
  double v8; // xmm0_8
  int v9; // xmm4_4
  int v10; // edx
  int v11; // r10d
  float v12; // xmm5_4
  int v13; // r8d
  int v14; // eax
  float v15; // xmm3_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  char v18; // r8
  int v19; // edx
  __int64 result; // rax
  float v21; // xmm3_4
  int v22; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
  {
    v3 = 1;
    LODWORD(v4) = a1 ^ _xmm;
  }
  *(_QWORD *)&v7 = FP_SINE_FACTOR;
  *(float *)&v7 = FP_SINE_FACTOR * v4;
  bFToL(FP_SINE_FACTOR * v4, &v22, 5);
  v8 = eFraction(v7);
  LOBYTE(v10) = v22;
  v11 = v3 ^ 1;
  v12 = *(float *)&v8;
  v13 = v22 >> 5;
  if ( ((v22 >> 5) & 2) == 0 )
    v11 = v3;
  if ( (v13 & 1) != 0 )
  {
    v14 = v22 & 0x1F;
    v15 = gaefSin[32 - v14];
    v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v15 - gaefSin[32 - v14 - 1]) * *(float *)&v8) ^ v9) + v15;
  }
  else
  {
    v10 = v22 & 0x1F;
    v17 = gaefSin[v22 & 0x1F];
    v16 = (float)((float)(gaefSin[v10 + 1] - v17) * v12) + v17;
  }
  if ( v11 )
    LODWORD(v16) ^= v9;
  v18 = v13 + 1;
  *a3 = v16;
  v19 = v10 & 0x1F;
  if ( (v18 & 1) != 0 )
  {
    result = (unsigned int)(32 - v19 - 1);
    v21 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32 - v19] - gaefSin[(int)result]) * v12) ^ v9)
        + gaefSin[32 - v19];
  }
  else
  {
    result = v19;
    v21 = (float)((float)(gaefSin[v19 + 1] - gaefSin[v19]) * v12) + gaefSin[v19];
  }
  if ( (v18 & 2) != 0 )
    LODWORD(v21) ^= v9;
  *a2 = v21;
  return result;
}

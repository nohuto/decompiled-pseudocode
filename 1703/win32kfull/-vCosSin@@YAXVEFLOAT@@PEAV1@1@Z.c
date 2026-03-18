/*
 * XREFs of ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C028FBB8
 * Callers:
 *     GreAngleArc @ 0x1C027E284 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C028FEB0 (NtGdiArcInternal.c)
 * Callees:
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     eFraction @ 0x1C0238F28 (eFraction.c)
 */

__int64 __fastcall vCosSin(int a1, float *a2, float *a3)
{
  int v3; // ebx
  float v4; // xmm2_4
  double v7; // xmm1_8
  double v8; // xmm0_8
  int v9; // xmm4_4
  char v10; // dl
  int v11; // r8d
  int v12; // eax
  float v13; // xmm3_4
  float v14; // xmm2_4
  char v15; // r8
  int v16; // edx
  __int64 result; // rax
  float v18; // xmm2_4
  int v19; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
  {
    v3 = 1;
    LODWORD(v4) = a1 ^ _xmm;
  }
  *(_QWORD *)&v7 = FP_SINE_FACTOR;
  *(float *)&v7 = FP_SINE_FACTOR * v4;
  bFToL(FP_SINE_FACTOR * v4, &v19, 5);
  v8 = eFraction(v7);
  v10 = v19;
  v11 = v19 >> 5;
  if ( ((v19 >> 5) & 2) != 0 )
    v3 ^= 1u;
  if ( (v11 & 1) != 0 )
  {
    v12 = v19 & 0x1F;
    v13 = gaefSin[32 - v12];
    v14 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v13 - gaefSin[32 - v12 - 1]) * *(float *)&v8) ^ v9) + v13;
  }
  else
  {
    v10 = v19 & 0x1F;
    v14 = (float)((float)(gaefSin[(v19 & 0x1F) + 1] - gaefSin[v19 & 0x1F]) * *(float *)&v8) + gaefSin[v19 & 0x1F];
  }
  if ( v3 )
    LODWORD(v14) ^= v9;
  v15 = v11 + 1;
  *a3 = v14;
  v16 = v10 & 0x1F;
  if ( (v15 & 1) != 0 )
  {
    result = (unsigned int)(32 - v16 - 1);
    v18 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32 - v16] - gaefSin[(int)result]) * *(float *)&v8) ^ v9)
        + gaefSin[32 - v16];
  }
  else
  {
    result = v16;
    v18 = (float)((float)(gaefSin[v16 + 1] - gaefSin[v16]) * *(float *)&v8) + gaefSin[v16];
  }
  if ( (v15 & 2) != 0 )
    LODWORD(v18) ^= v9;
  *a2 = v18;
  return result;
}

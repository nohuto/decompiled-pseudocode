/*
 * XREFs of ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x1801D9630
 * Callers:
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x1801D9990 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@.c)
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180059638 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x18011C140 (-SetToZeroMatrix@CMILMatrix@@QEAAXXZ.c)
 *     ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x1801D9DE0 (-IsNaNOrIsEqualTo@@YA_NMM@Z.c)
 */

void __fastcall CGradientTextureGenerator::CalculateTextureMappingForLinearGradient(
        const struct CMilPoint2F *a1,
        char a2,
        struct CGradientSpanInfo *a3,
        struct CMILMatrix *a4)
{
  float v7; // xmm12_4
  float v8; // xmm10_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm13_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm9_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm9_4

  if ( !a2 )
  {
    if ( *(_DWORD *)a3 > 1u )
    {
      v7 = *(float *)a1;
      v8 = *((float *)a1 + 1);
      v9 = *((float *)a1 + 2) - *(float *)a1;
      v10 = *((float *)a1 + 3) - v8;
      v11 = *((float *)a3 + 2) - *((float *)a3 + 1);
      if ( *((float *)a3 + 3) >= 1.0 )
      {
        v19 = (float)(v9 * v9) + (float)(v10 * v10);
        if ( IsNaNOrIsEqualTo(v19, 0.0) )
          goto LABEL_6;
        v16 = v9;
        v17 = v10;
        v11 = v11 / v19;
        v18 = *((float *)a3 + 1)
            - (float)((float)((float)(v9 * *(float *)a1) + (float)(v10 * *((float *)a1 + 1))) * v11);
      }
      else
      {
        v12 = sqrtf_0((float)(v9 * v9) + (float)(v10 * v10));
        if ( IsNaNOrIsEqualTo(v12, 0.0) )
        {
LABEL_6:
          *(_DWORD *)a3 = 1;
          goto LABEL_15;
        }
        v13 = v9 * (float)(1.0 / v12);
        v14 = v10 * (float)(1.0 / v12);
        if ( v11 <= 0.0 )
        {
          v11 = FLOAT_1_0;
        }
        else
        {
          v15 = (float)(1.0 - *((float *)a3 + 3)) * 0.5;
          v7 = v7 - (float)(v13 * v15);
          v8 = v8 - (float)(v14 * v15);
        }
        v16 = v13;
        v17 = v14;
        v18 = *((float *)a3 + 1) - (float)((float)((float)(v8 * v14) + (float)(v13 * v7)) * v11);
      }
      CMILMatrix::Set2DAffineMatrix(a4, v16 * v11, 0.0, v17 * v11, 0.0, v18, 0.0);
    }
    if ( *(_DWORD *)a3 != 1 )
      return;
    goto LABEL_15;
  }
  *(_DWORD *)a3 = 1;
LABEL_15:
  CMILMatrix::SetToZeroMatrix(a4);
}

/*
 * XREFs of ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180220AD0
 * Callers:
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x180220E34 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@.c)
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800A38BC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x18013EF44 (-SetToZeroMatrix@CMILMatrix@@QEAAXXZ.c)
 *     ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x180221310 (-IsNaNOrIsEqualTo@@YA_NMM@Z.c)
 */

void __fastcall CGradientTextureGenerator::CalculateTextureMappingForLinearGradient(
        const struct CMilPoint2F *a1,
        char a2,
        struct CGradientSpanInfo *a3,
        struct CMILMatrix *a4)
{
  bool v7; // zf
  float v8; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm13_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm6_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm6_4

  if ( !a2 )
  {
    v7 = *(_DWORD *)a3 == 1;
    if ( *(_DWORD *)a3 > 1u )
    {
      v8 = *(float *)a1;
      v9 = *((float *)a1 + 1);
      v10 = *((float *)a1 + 2) - *(float *)a1;
      v11 = *((float *)a1 + 3) - v9;
      v12 = *((float *)a3 + 2) - *((float *)a3 + 1);
      if ( *((float *)a3 + 3) >= 1.0 )
      {
        v20 = (float)(v11 * v11) + (float)(v10 * v10);
        if ( IsNaNOrIsEqualTo(v20, 0.0) )
          goto LABEL_6;
        v18 = v11;
        v17 = v10;
        v12 = v12 / v20;
        v19 = *((float *)a3 + 1)
            - (float)((float)((float)(v11 * *((float *)a1 + 1)) + (float)(v10 * *(float *)a1)) * v12);
      }
      else
      {
        v13 = _hypot(v10, v11);
        if ( IsNaNOrIsEqualTo(v13, 0.0) )
        {
LABEL_6:
          *(_DWORD *)a3 = 1;
          goto LABEL_15;
        }
        v14 = (float)(1.0 / v13) * v11;
        v15 = (float)(1.0 / v13) * v10;
        if ( v12 <= 0.0 )
        {
          v12 = FLOAT_1_0;
        }
        else
        {
          v16 = (float)(1.0 - *((float *)a3 + 3)) * 0.5;
          v8 = v8 - (float)(v15 * v16);
          v9 = v9 - (float)(v14 * v16);
        }
        v17 = (float)(1.0 / v13) * v10;
        v18 = (float)(1.0 / v13) * v11;
        v19 = *((float *)a3 + 1) - (float)((float)((float)(v14 * v9) + (float)(v15 * v8)) * v12);
      }
      CMILMatrix::Set2DAffineMatrix(a4, v17 * v12, 0.0, v18 * v12, 0.0, v19, 0.0);
      v7 = *(_DWORD *)a3 == 1;
    }
    if ( !v7 )
      return;
    goto LABEL_15;
  }
  *(_DWORD *)a3 = 1;
LABEL_15:
  CMILMatrix::SetToZeroMatrix(a4);
}

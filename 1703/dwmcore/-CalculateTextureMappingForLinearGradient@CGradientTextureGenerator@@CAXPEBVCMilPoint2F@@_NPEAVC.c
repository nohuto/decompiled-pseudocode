/*
 * XREFs of ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x1801C09C0
 * Callers:
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x1801C0D3C (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@.c)
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18009AEAC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 *     ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x180132F14 (-SetToZeroMatrix@CMILMatrix@@QEAAXXZ.c)
 *     ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x1801C1188 (-IsNaNOrIsEqualTo@@YA_NMM@Z.c)
 */

void __fastcall CGradientTextureGenerator::CalculateTextureMappingForLinearGradient(
        const struct CMilPoint2F *a1,
        char a2,
        struct CGradientSpanInfo *a3,
        struct CMILMatrix *a4)
{
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm8_4
  float v10; // xmm11_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm9_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  __int64 v21; // [rsp+C0h] [rbp+18h]

  if ( !a2 )
  {
    if ( *(_DWORD *)a3 > 1u )
    {
      v7 = *((float *)a1 + 2) - *(float *)a1;
      v8 = *((float *)a1 + 3) - *((float *)a1 + 1);
      v9 = *((float *)a3 + 2) - *((float *)a3 + 1);
      if ( *((float *)a3 + 3) >= 1.0 )
      {
        v19 = (float)(v8 * v8) + (float)(v7 * v7);
        if ( IsNaNOrIsEqualTo(v19, 0.0) )
          goto LABEL_6;
        v20 = v9 / v19;
        v17 = v20 * v8;
        v16 = v20 * v7;
        v18 = *((float *)a3 + 1) - (float)((float)((float)(v8 * *((float *)a1 + 1)) + (float)(v7 * *(float *)a1)) * v20);
      }
      else
      {
        v21 = *(_QWORD *)a1;
        v10 = sqrtf_0((float)(v8 * v8) + (float)(v7 * v7));
        if ( IsNaNOrIsEqualTo(v10, 0.0) )
        {
LABEL_6:
          *(_DWORD *)a3 = 1;
          goto LABEL_15;
        }
        v11 = *(float *)&v21;
        v12 = *((float *)&v21 + 1);
        v13 = v7 * (float)(1.0 / v10);
        v14 = v8 * (float)(1.0 / v10);
        if ( v9 <= 0.0 )
        {
          v9 = FLOAT_1_0;
        }
        else
        {
          v15 = (float)(1.0 - *((float *)a3 + 3)) * 0.5;
          v11 = *(float *)&v21 - (float)(v13 * v15);
          v12 = *((float *)&v21 + 1) - (float)(v14 * v15);
        }
        v16 = v13 * v9;
        v17 = v14 * v9;
        v18 = *((float *)a3 + 1) - (float)((float)((float)(v12 * v14) + (float)(v11 * v13)) * v9);
      }
      CMILMatrix::Set2DAffineMatrix(a4, v16, 0.0, v17, 0.0, v18, 0.0);
    }
    if ( *(_DWORD *)a3 != 1 )
      return;
    goto LABEL_15;
  }
  *(_DWORD *)a3 = 1;
LABEL_15:
  CMILMatrix::SetToZeroMatrix(a4);
}

/*
 * XREFs of ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x1801D9990
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1801BCAD8 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PE.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005AFD8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801907DC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x1801D9630 (-CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVC.c)
 *     ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x1801D9834 (-CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMod.c)
 *     ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x1801D9DE0 (-IsNaNOrIsEqualTo@@YA_NMM@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::CalculateTextureSizeAndMapping(
        float *a1,
        float *a2,
        float *a3,
        CMILMatrix *a4,
        int a5,
        __int64 a6,
        struct CGradientSpanInfo *a7,
        struct CMILMatrix *a8)
{
  float v8; // xmm1_4
  char v9; // bl
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm12_4
  float v15; // xmm11_4
  float v16; // xmm7_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v25; // [rsp+28h] [rbp-49h] BYREF
  float v26; // [rsp+2Ch] [rbp-45h]
  float v27; // [rsp+30h] [rbp-41h]
  float v28; // [rsp+34h] [rbp-3Dh]
  float v29; // [rsp+38h] [rbp-39h]
  float v30; // [rsp+3Ch] [rbp-35h]

  v8 = a1[1];
  v9 = 0;
  v25 = *a1;
  v10 = *a2;
  v26 = v8;
  v11 = a2[1];
  v27 = v10;
  v12 = *a3;
  v28 = v11;
  v13 = a3[1];
  v29 = v12;
  v30 = v13;
  CMILMatrix::Transform(a4, (const struct MilPoint2F *)&v25, (struct MilPoint2F *)&v25, 3);
  v14 = v29 - v25;
  LODWORD(v15) = COERCE_UNSIGNED_INT(v30 - v26) ^ _xmm;
  v16 = sqrtf_0((float)(v14 * v14) + (float)(v15 * v15));
  if ( IsNaNOrIsEqualTo(v16, 0.0)
    || (v17 = 1.0 / v16,
        v18 = v17 * v14,
        v19 = v17 * v15,
        v20 = (float)((float)(v28 - v26) * v18) + (float)(v19 * (float)(v27 - v25)),
        v21 = v18 * v20,
        v22 = v19 * v20,
        v23 = sqrtf_0((float)(v21 * v21) + (float)(v22 * v22)),
        IsNaNOrIsEqualTo(v23, 0.0)) )
  {
    v9 = 1;
  }
  else
  {
    v27 = v22 + v25;
    v28 = v21 + v26;
  }
  CGradientTextureGenerator::CalculateTextureSize(&v25, v9, a5, (__int64)a7);
  CGradientTextureGenerator::CalculateTextureMappingForLinearGradient((const struct CMilPoint2F *)&v25, v9, a7, a8);
  CMILMatrix::Scale(a8, 1.0 / (float)*(int *)a7, 1.0 / (float)*(int *)a7, 1.0);
  return 0LL;
}

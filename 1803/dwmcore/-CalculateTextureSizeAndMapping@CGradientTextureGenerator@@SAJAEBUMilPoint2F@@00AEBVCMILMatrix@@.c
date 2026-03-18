/*
 * XREFs of ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x180220E34
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1801F7604 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PE.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801C75EC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180220AD0 (-CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVC.c)
 *     ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x180220CD8 (-CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMod.c)
 *     ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x180221310 (-IsNaNOrIsEqualTo@@YA_NMM@Z.c)
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
  float v14; // xmm10_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  float v17; // xmm10_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v24; // [rsp+28h] [rbp-49h] BYREF
  float v25; // [rsp+2Ch] [rbp-45h]
  float v26; // [rsp+30h] [rbp-41h]
  float v27; // [rsp+34h] [rbp-3Dh]
  float v28; // [rsp+38h] [rbp-39h]
  float v29; // [rsp+3Ch] [rbp-35h]

  v8 = a1[1];
  v9 = 0;
  v24 = *a1;
  v10 = *a2;
  v25 = v8;
  v11 = a2[1];
  v26 = v10;
  v12 = *a3;
  v27 = v11;
  v13 = a3[1];
  v28 = v12;
  v29 = v13;
  CMILMatrix::Transform(a4, (const struct MilPoint2F *)&v24, (struct MilPoint2F *)&v24, 3);
  v14 = v28 - v24;
  LODWORD(v15) = COERCE_UNSIGNED_INT(v29 - v25) ^ _xmm;
  v16 = _hypot(v15, (float)(v28 - v24));
  if ( IsNaNOrIsEqualTo(v16, 0.0)
    || (v17 = v14 * (float)(1.0 / v16),
        v18 = v15 * (float)(1.0 / v16),
        v19 = (float)((float)(v27 - v25) * v17) + (float)((float)(v26 - v24) * v18),
        v20 = v19 * v17,
        v21 = v19 * v18,
        v22 = _hypot(v21, v20),
        IsNaNOrIsEqualTo(v22, 0.0)) )
  {
    v9 = 1;
  }
  else
  {
    v26 = v21 + v24;
    v27 = v20 + v25;
  }
  CGradientTextureGenerator::CalculateTextureSize(&v24, v9, a5, (__int64)a7);
  CGradientTextureGenerator::CalculateTextureMappingForLinearGradient((const struct CMilPoint2F *)&v24, v9, a7, a8);
  CMILMatrix::Scale(a8, 1.0 / (float)*(int *)a7, 1.0 / (float)*(int *)a7, 1.0);
  return 0LL;
}

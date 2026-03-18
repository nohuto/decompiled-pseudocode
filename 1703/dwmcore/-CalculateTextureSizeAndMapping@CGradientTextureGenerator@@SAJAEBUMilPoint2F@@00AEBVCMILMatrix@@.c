/*
 * XREFs of ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJAEBUMilPoint2F@@00AEBVCMILMatrix@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAV3@@Z @ 0x1801C0D3C
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1801A31EC (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PE.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800120B0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 *     ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x1801C09C0 (-CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVC.c)
 *     ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x1801C0BCC (-CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMod.c)
 *     ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x1801C1188 (-IsNaNOrIsEqualTo@@YA_NMM@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::CalculateTextureSizeAndMapping(
        _DWORD *a1,
        unsigned int *a2,
        float *a3,
        CMILMatrix *a4,
        int a5,
        __int64 a6,
        struct CGradientSpanInfo *a7,
        struct CMILMatrix *a8)
{
  int v8; // xmm1_4
  char v9; // bl
  unsigned int v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm11_4
  float v13; // xmm7_4
  float v14; // xmm12_4
  __m128 v15; // xmm2
  float v16; // xmm3_4
  __m128 v17; // xmm6
  __m128 v18; // xmm7
  float v19; // xmm0_4
  __int64 v21; // [rsp+28h] [rbp-59h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-51h]
  float v23; // [rsp+38h] [rbp-49h]
  float v24; // [rsp+3Ch] [rbp-45h]

  v8 = a1[1];
  v9 = 0;
  LODWORD(v21) = *a1;
  v10 = *a2;
  HIDWORD(v21) = v8;
  v22 = __PAIR64__(a2[1], v10);
  v11 = a3[1];
  v23 = *a3;
  v24 = v11;
  CMILMatrix::Transform(a4, (const struct MilPoint2F *)&v21, (struct MilPoint2F *)&v21, 3);
  v12 = v23 - *(float *)&v21;
  LODWORD(v13) = COERCE_UNSIGNED_INT(v24 - *((float *)&v21 + 1)) ^ _xmm;
  v14 = sqrtf_0((float)(v12 * v12) + (float)(v13 * v13));
  if ( IsNaNOrIsEqualTo(v14, 0.0) )
    goto LABEL_3;
  v17 = (__m128)LODWORD(FLOAT_1_0);
  v15 = (__m128)HIDWORD(v22);
  v17.m128_f32[0] = (float)(1.0 / v14) * v12;
  v16 = (float)(1.0 / v14) * v13;
  v15.m128_f32[0] = (float)((float)(*((float *)&v22 + 1) - *((float *)&v21 + 1)) * v17.m128_f32[0])
                  + (float)((float)(*(float *)&v22 - *(float *)&v21) * v16);
  v17.m128_f32[0] = v17.m128_f32[0] * v15.m128_f32[0];
  v18 = v15;
  v18.m128_f32[0] = v15.m128_f32[0] * v16;
  v19 = sqrtf_0((float)(v17.m128_f32[0] * v17.m128_f32[0]) + (float)(v18.m128_f32[0] * v18.m128_f32[0]));
  if ( IsNaNOrIsEqualTo(v19, 0.0) )
  {
LABEL_3:
    v9 = 1;
  }
  else
  {
    v18.m128_f32[0] = v18.m128_f32[0] + *(float *)&v21;
    v17.m128_f32[0] = v17.m128_f32[0] + *((float *)&v21 + 1);
    v22 = _mm_unpacklo_ps(v18, v17).m128_u64[0];
  }
  CGradientTextureGenerator::CalculateTextureSize(&v21, v9, a5, (__int64)a7);
  CGradientTextureGenerator::CalculateTextureMappingForLinearGradient((const struct CMilPoint2F *)&v21, v9, a7, a8);
  CMILMatrix::Scale(a8, 1.0 / (float)*(int *)a7, 1.0 / (float)*(int *)a7, 1.0);
  return 0LL;
}

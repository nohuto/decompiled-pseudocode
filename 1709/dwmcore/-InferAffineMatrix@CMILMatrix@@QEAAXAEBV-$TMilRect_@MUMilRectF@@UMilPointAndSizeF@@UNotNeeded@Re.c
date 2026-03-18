/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUMilPoint2F@@@Z @ 0x18005AD38
 * Callers:
 *     ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180070F84 (-InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRec.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  _UNKNOWN **result; // rax
  float v4; // xmm9_4
  float v5; // xmm10_4
  float v6; // xmm12_4
  float v7; // xmm13_4
  float v8; // xmm15_4
  float v9; // xmm14_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm2_4
  float v13; // xmm11_4
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  float v15; // [rsp+B0h] [rbp+8h]
  float v16; // [rsp+B8h] [rbp+10h]
  float v17; // [rsp+C0h] [rbp+18h]
  float v18; // [rsp+C8h] [rbp+20h]

  result = &retaddr;
  v16 = a3[1];
  v15 = a3[3];
  v18 = a3[4];
  v17 = a3[5];
  v4 = a2[3];
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = *a3;
  v9 = a3[2];
  *(_OWORD *)a1 = _xmm;
  *(_OWORD *)(a1 + 16) = _xmm;
  *(_OWORD *)(a1 + 32) = _xmm;
  *(_OWORD *)(a1 + 48) = _xmm;
  v10 = (float)(v4 * v7) - (float)(v6 * v5);
  v11 = 1.0 / (float)((float)((float)((float)(v6 - v4) * v5) - (float)((float)(v7 - v5) * v6)) + v10);
  *(float *)(a1 + 4) = (float)((float)((float)((float)(v4 - v6) * v15) + (float)((float)(v6 - v4) * v16))
                             + (float)((float)(v6 - v6) * v17))
                     * v11;
  *(float *)a1 = (float)((float)((float)((float)(v4 - v6) * v9) + (float)((float)(v6 - v4) * v8))
                       + (float)((float)(v6 - v6) * v18))
               * v11;
  *(_WORD *)(a1 + 64) = 0x4000;
  *(float *)(a1 + 16) = (float)((float)((float)((float)(v5 - v5) * v9) + (float)((float)(v5 - v7) * v8))
                              + (float)((float)(v7 - v5) * v18))
                      * v11;
  v12 = (float)(v6 * v5) - (float)(v4 * v5);
  v13 = (float)(v6 * v5) - (float)(v7 * v6);
  *(float *)(a1 + 20) = (float)((float)((float)((float)(v5 - v5) * v15) + (float)((float)(v5 - v7) * v16))
                              + (float)((float)(v7 - v5) * v17))
                      * v11;
  *(float *)(a1 + 52) = (float)((float)((float)(v12 * v15) + (float)(v10 * v16)) + (float)(v13 * v17)) * v11;
  *(float *)(a1 + 48) = (float)((float)((float)(v12 * v9) + (float)(v10 * v8)) + (float)(v13 * v18)) * v11;
  return result;
}

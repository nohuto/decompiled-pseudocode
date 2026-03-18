/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800181C4
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180018260 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

char __fastcall D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float *v4; // rdx
  __int64 v5; // rcx
  float *v6; // r8
  __int64 v7; // r9
  float v8; // xmm1_4
  double v9; // xmm0_8
  bool v10; // cc
  float v11; // xmm0_4
  float v13; // xmm0_4
  double v14; // xmm1_8
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm1_4

  if ( !D2DMatrixHelper::Is2DAxisAlignedPreserving(this, a2) )
    return 0;
  *(_OWORD *)v7 = *(_OWORD *)v5;
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(v5 + 16);
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v5) & _xmm);
  if ( v8 < 0.000081380211 )
  {
    v10 = *(float *)(v7 + 4) >= 0.0;
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v5 + 4)) & _xmm);
    *(_QWORD *)&v14 = COERCE_UNSIGNED_INT64(*(float *)(v5 + 8)) & _xmm;
    *v4 = v13;
    v15 = v14;
    *v6 = v15;
    v16 = FLOAT_N1_0;
    if ( v10 )
      v17 = FLOAT_1_0;
    else
      v17 = FLOAT_N1_0;
    v10 = *(float *)(v7 + 8) >= 0.0;
    *(float *)(v7 + 4) = v17;
    if ( v10 )
      v16 = FLOAT_1_0;
    *(float *)(v7 + 8) = v16;
  }
  else
  {
    v9 = *(float *)(v5 + 12);
    *v4 = v8;
    v10 = *(float *)v7 >= 0.0;
    *v6 = COERCE_DOUBLE(*(_QWORD *)&v9 & _xmm);
    if ( v10 )
      v11 = FLOAT_1_0;
    else
      v11 = FLOAT_N1_0;
    v10 = *(float *)(v7 + 12) >= 0.0;
    *(float *)v7 = v11;
    if ( v10 )
      *(_DWORD *)(v7 + 12) = 1065353216;
    else
      *(_DWORD *)(v7 + 12) = -1082130432;
  }
  return 1;
}

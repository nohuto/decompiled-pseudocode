/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800B33FC
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B3630 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
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
  float v9; // xmm0_4
  bool v10; // cc
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4

  if ( !D2DMatrixHelper::Is2DAxisAlignedPreserving(this, a2) )
    return 0;
  *(_OWORD *)v7 = *(_OWORD *)v5;
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(v5 + 16);
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v5) & _xmm);
  if ( v8 < 0.000081380211 )
  {
    v12 = *(float *)(v5 + 8);
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v5 + 4)) & _xmm);
    *v4 = v13;
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
    v10 = *(float *)(v7 + 4) >= 0.0;
    *v6 = v14;
    if ( v10 )
      *(_DWORD *)(v7 + 4) = 1065353216;
    else
      *(_DWORD *)(v7 + 4) = -1082130432;
    if ( *(float *)(v7 + 8) >= 0.0 )
      *(_DWORD *)(v7 + 8) = 1065353216;
    else
      *(_DWORD *)(v7 + 8) = -1082130432;
  }
  else
  {
    v9 = *(float *)(v5 + 12);
    *v4 = v8;
    v10 = *(float *)v7 >= 0.0;
    *v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
    if ( v10 )
      *(_DWORD *)v7 = 1065353216;
    else
      *(_DWORD *)v7 = -1082130432;
    if ( *(float *)(v7 + 12) < 0.0 )
      *(_DWORD *)(v7 + 12) = -1082130432;
    else
      *(_DWORD *)(v7 + 12) = 1065353216;
  }
  return 1;
}

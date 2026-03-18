/*
 * XREFs of ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B3630
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180062EEC (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800B33FC (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 * Callees:
 *     <none>
 */

bool __fastcall D2DMatrixHelper::Is2DAxisAlignedPreserving(D2DMatrixHelper *this, const struct D2D_MATRIX_3X2_F *a2)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  bool result; // al
  float v5; // xmm1_4
  float v6; // xmm1_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm);
  result = 1;
  if ( v2 >= 0.000081380211
    || (v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm), v3 >= 0.000081380211) )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)this) & _xmm);
    if ( v5 >= 0.000081380211 )
      return 0;
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
    if ( v6 >= 0.000081380211 )
      return 0;
  }
  return result;
}

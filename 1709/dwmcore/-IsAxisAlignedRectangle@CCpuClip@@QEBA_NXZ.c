/*
 * XREFs of ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800B6FE8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180062EEC (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180047BD0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180097F4C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 */

char __fastcall CCpuClip::IsAxisAlignedRectangle(CCpuClip *this)
{
  char v2; // bl
  CShape **v3; // rcx
  __int64 v4; // rcx
  float *v5; // rcx
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4

  v2 = 0;
  v3 = (CShape **)((char *)this + 16);
  if ( *v3 )
    return CShapePtr::IsAxisAlignedRectangle(v3);
  if ( !*(_QWORD *)this || CShape::IsAxisAlignedRectangle(*(CShape **)this) )
  {
    v4 = *((_QWORD *)this + 1);
    if ( !v4 )
      return 1;
    if ( CMILMatrix::Is2DAffine<1>(v4, 1) )
    {
      v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[1]) & _xmm);
      if ( v6 < 0.000081380211 )
      {
        v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[4]) & _xmm);
        if ( v7 < 0.000081380211 )
          return 1;
      }
    }
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v5) & _xmm);
    if ( v9 < 0.000081380211 )
    {
      v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[5]) & _xmm);
      if ( v10 < 0.000081380211 )
        return 1;
    }
  }
  return v2;
}

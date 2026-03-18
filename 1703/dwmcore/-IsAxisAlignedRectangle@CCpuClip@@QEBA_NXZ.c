/*
 * XREFs of ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800C1278
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?InsertHW@CDrawListPrimitiveBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180041158 (-InsertHW@CDrawListPrimitiveBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesD.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CCpuClip::IsAxisAlignedRectangle(CCpuClip *this)
{
  char v2; // bl
  CShape *v3; // rcx
  __int64 v4; // rcx

  v2 = 0;
  v3 = (CShape *)*((_QWORD *)this + 2);
  if ( v3 )
    return CShape::IsAxisAlignedRectangle(v3);
  if ( !*(_QWORD *)this || CShape::IsAxisAlignedRectangle(*(CShape **)this) )
  {
    v4 = *((_QWORD *)this + 1);
    if ( !v4 || CMILMatrix::Is2DAxisAlignedPreserving<1>(v4) )
      return 1;
  }
  return v2;
}

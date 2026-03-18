/*
 * XREFs of ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18015B940
 * Callers:
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180020BB4 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015BF50 (-InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180171F88 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801AE144 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall D2DQuaternion::operator==(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}

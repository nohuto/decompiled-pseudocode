/*
 * XREFs of ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800B5CA0
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x18009F190 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z @ 0x18011CAA4 (-ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014D868 (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180151EA0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801747B0 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ApplyEdgeFlags @ 0x1801D7FFC (ApplyEdgeFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm6_4
  __int128 v8; // [rsp+0h] [rbp-38h]

  v4 = (float)((float)(a2->left * *(float *)this) + (float)(a2->right * *((float *)this + 1))) + a2[1].left;
  v5 = (float)((float)(a2->top * *(float *)this) + (float)(a2->bottom * *((float *)this + 1))) + a2[1].top;
  v6 = (float)((float)(a2->top * *((float *)this + 2)) + (float)(a2->bottom * *((float *)this + 3))) + a2[1].top;
  v7 = (float)((float)(a2->left * *((float *)this + 2)) + (float)(a2->right * *((float *)this + 3))) + a2[1].left;
  *(_QWORD *)&v8 = __PAIR64__(COERCE_UNSIGNED_INT(fminf(v5, v6)), COERCE_UNSIGNED_INT(fminf(v4, v7)));
  *((_QWORD *)&v8 + 1) = __PAIR64__(COERCE_UNSIGNED_INT(fmaxf(v5, v6)), COERCE_UNSIGNED_INT(fmaxf(v4, v7)));
  *(_OWORD *)&a3->m11 = v8;
}

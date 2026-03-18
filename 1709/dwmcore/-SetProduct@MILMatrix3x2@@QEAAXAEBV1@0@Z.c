/*
 * XREFs of ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x18006B01C
 * Callers:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EEF0 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18003F3AC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A670 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x1800851A0 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 * Callees:
 *     <none>
 */

void __fastcall MILMatrix3x2::SetProduct(
        MILMatrix3x2 *this,
        const struct MILMatrix3x2 *a2,
        const struct MILMatrix3x2 *a3)
{
  *(float *)this = (float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a3 + 2) * *((float *)a2 + 1));
  *((float *)this + 1) = (float)(*((float *)a3 + 3) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 1) * *(float *)a2);
  *((float *)this + 2) = (float)(*((float *)a2 + 3) * *((float *)a3 + 2)) + (float)(*((float *)a2 + 2) * *(float *)a3);
  *((float *)this + 3) = (float)(*((float *)a3 + 3) * *((float *)a2 + 3))
                       + (float)(*((float *)a3 + 1) * *((float *)a2 + 2));
  *((float *)this + 4) = (float)((float)(*((float *)a2 + 5) * *((float *)a3 + 2))
                               + (float)(*((float *)a2 + 4) * *(float *)a3))
                       + *((float *)a3 + 4);
  *((float *)this + 5) = (float)((float)(*((float *)a3 + 3) * *((float *)a2 + 5))
                               + (float)(*((float *)a3 + 1) * *((float *)a2 + 4)))
                       + *((float *)a3 + 5);
}

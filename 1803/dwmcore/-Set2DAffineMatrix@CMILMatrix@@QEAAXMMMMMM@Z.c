/*
 * XREFs of ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800A38BC
 * Callers:
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180037C60 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18013D884 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CComponentTransform2D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180183200 (-GetRealization@CComponentTransform2D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?ConvertRelativeTransformToAbsolute@CBrushTypeUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAV3@@Z @ 0x1801C37A8 (-ConvertRelativeTransformToAbsolute@CBrushTypeUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180220AD0 (-CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVC.c)
 * Callees:
 *     ?SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z @ 0x1801C71DC (-SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z.c)
 */

void __fastcall CMILMatrix::Set2DAffineMatrix(
        CMILMatrix *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  CMILMatrix::SetMatrix(this, a2, a3, 0.0, 0.0, a4, a5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, a6, a7, 0.0, 1.0);
  *((_BYTE *)this + 65) &= 0x3Fu;
  *((_BYTE *)this + 65) |= 0x40u;
}

/*
 * XREFs of ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18000DF60 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4En.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000E0E0 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U-$TMIL.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000EC78 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x18000EF20 (-DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z @ 0x1800A741C (-DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z.c)
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x1800A7BDC (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800A87D0 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18014C2C0 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DInterpolationModeFromMilInterpolationMode(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 1 )
    return 1LL;
  if ( a1 > 1 )
  {
    if ( a1 <= 3 )
    {
      return 2LL;
    }
    else if ( a1 == 6 || a1 == 4 )
    {
      return 3LL;
    }
    else if ( a1 == 5 )
    {
      return 4LL;
    }
  }
  return result;
}

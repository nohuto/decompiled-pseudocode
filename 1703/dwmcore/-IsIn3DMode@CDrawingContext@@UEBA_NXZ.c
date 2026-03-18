/*
 * XREFs of ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90
 * Callers:
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18000DF60 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4En.c)
 *     ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x18000EF20 (-DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z.c)
 *     ?CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1800200A0 (-CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z @ 0x1800A741C (-DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x1800A8E40 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAUID2D1Bitmap@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AC9E4 (-FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800ACD0C (-DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkPartner@@@Z @ 0x18014B600 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkPartner@@@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18014B7D0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawPencil@CDrawingContext@@UEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@23M@Z @ 0x18014BDA0 (-DrawPencil@CDrawingContext@@UEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCComposition.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsIn3DMode(CDrawingContext *this)
{
  bool result; // al
  int v2; // edx

  result = 0;
  if ( *((_DWORD *)this + 124) )
  {
    v2 = *((_DWORD *)this + 124);
    if ( v2 )
      return *(_BYTE *)((unsigned int)(v2 - 1) + *((_QWORD *)this + 64));
  }
  return result;
}

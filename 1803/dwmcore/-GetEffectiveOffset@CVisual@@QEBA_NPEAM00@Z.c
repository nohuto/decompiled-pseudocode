/*
 * XREFs of ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18013C8CC
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4BB0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5B68 (-GetBoundsInternal@CHwndBitmap@@AEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x18016FDD0 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180170D04 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801824D0 (-GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180186480 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::GetEffectiveOffset(CVisual *this, float *a2, float *a3, float *a4)
{
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm2_4

  v4 = *((float *)this + 29);
  v5 = *((float *)this + 30);
  v6 = *((float *)this + 28);
  *a2 = v4;
  *a3 = v5;
  *a4 = v6;
  return v4 != 0.0 || v5 != 0.0 || v6 != 0.0;
}

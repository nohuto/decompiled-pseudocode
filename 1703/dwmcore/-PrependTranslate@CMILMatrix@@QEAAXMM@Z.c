/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1800121E8
 * Callers:
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022AF0 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180148550 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x18018465C (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180198270 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3)
{
  float *v3; // rax
  __int64 v4; // rdx

  v3 = (float *)((char *)this + 48);
  v4 = 4LL;
  do
  {
    *v3 = (float)((float)(a2 * *(v3 - 12)) + (float)(a3 * *(v3 - 8))) + *v3;
    ++v3;
    --v4;
  }
  while ( v4 );
  *((_BYTE *)this + 64) &= 0xFCu;
  *((_BYTE *)this + 65) &= 0x3Fu;
}

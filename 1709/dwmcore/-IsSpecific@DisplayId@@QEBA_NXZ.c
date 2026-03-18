/*
 * XREFs of ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089F6C
 * Callers:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x18001ACC8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008DCCC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008E090 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x1800987D8 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x180150150 (-IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ.c)
 *     ?GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AC3CC (-GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV-$T.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801AF410 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 *     ?IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ @ 0x1801CF540 (-IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CDeviceTextureImageSource@@UEBA_NXZ @ 0x1801D4A20 (-IsMonitorSpecificContent@CDeviceTextureImageSource@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayId::IsSpecific(DisplayId *this)
{
  return *(_DWORD *)this != DisplayId::None && *(_DWORD *)this != DisplayId::All;
}

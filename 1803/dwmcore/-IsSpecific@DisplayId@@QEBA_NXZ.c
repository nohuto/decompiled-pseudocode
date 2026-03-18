/*
 * XREFs of ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089E08
 * Callers:
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18001C420 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800899E0 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800B41FC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x1800B6F74 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x180179940 (-IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801E8948 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 *     ?GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E9080 (-GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV-$T.c)
 *     ?IsMonitorSpecificContent@CAtlasTexture@@QEBA_NXZ @ 0x1801EC174 (-IsMonitorSpecificContent@CAtlasTexture@@QEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CDeviceTextureImageSource@@UEBA_NXZ @ 0x1802168E0 (-IsMonitorSpecificContent@CDeviceTextureImageSource@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayId::IsSpecific(DisplayId *this)
{
  return *(_DWORD *)this != DisplayId::None && *(_DWORD *)this != DisplayId::All;
}

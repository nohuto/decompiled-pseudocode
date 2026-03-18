/*
 * XREFs of ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690
 * Callers:
 *     ?GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800460B0 (-GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x1800464C0 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180046530 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x1800466C0 (-GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x180046730 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x1800467F0 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180046AC0 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180046B40 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046E90 (-IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007BAA0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18007C020 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@CHwFullScreenRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x18007C670 (-SetMultiplaneOverlayPresentInfo@CHwFullScreenRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEB.c)
 *     ?IsValid@CHwDisplayRenderTarget@@WNI@EBA_NXZ @ 0x1800DE340 (-IsValid@CHwDisplayRenderTarget@@WNI@EBA_NXZ.c)
 *     ?GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x1801F1480 (-GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::IsValid(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 31);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1) != 0;
  return v2;
}

/*
 * XREFs of ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768
 * Callers:
 *     ?AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z @ 0x180027400 (-AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800423E4 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18005B7C0 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 *     ?GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x1800658F0 (-GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007EBF0 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18007F03C (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B6A88 (-GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReplaceInterface@VCDisplaySet@@V1@@@YAXAEAPEAVCDisplaySet@@PEAV0@@Z @ 0x1800CB010 (--$ReplaceInterface@VCDisplaySet@@V1@@@YAXAEAPEAVCDisplaySet@@PEAV0@@Z.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800D1AF0 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 *     ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x18012D42C (-CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1801355F0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x18013F6A0 (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180148658 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18014A044 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ @ 0x1801515C8 (-IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180163AE0 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x180175314 (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800B758C (--1CDisplaySet@@AEAA@XZ.c)
 */

void __fastcall CDisplaySet::Release(CDisplaySet *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
    {
      CDisplaySet::~CDisplaySet(this);
      WPF::ProcessHeapImpl::Free(this);
    }
  }
}

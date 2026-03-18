/*
 * XREFs of ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800B8108
 * Callers:
 *     ?GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x1800658F0 (-GetDisplayInfo@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800692A4 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180077AB8 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x1800B6D20 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800B7A48 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7BE0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x18019C5E0 (-NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplay::IsOffscreenRenderTarget(CDisplay *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 212) || *((_DWORD *)this + 52) )
    return 1LL;
  return result;
}

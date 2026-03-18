/*
 * XREFs of ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7BE0
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180077AB8 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800B8108 (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 */

char __fastcall CDisplay::NeedsDesktopMoves(CDisplay *this)
{
  char v1; // dl

  if ( *((_BYTE *)this + 299) || *((_BYTE *)this + 298) || CDisplay::IsOffscreenRenderTarget(this) )
    return 1;
  return v1;
}

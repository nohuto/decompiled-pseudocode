/*
 * XREFs of ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180077994
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1801A693C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplay::NeedsDesktopMoves(CDisplay *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 309) || *((_BYTE *)this + 308) || *((_BYTE *)this + 208) )
    return 1;
  return result;
}

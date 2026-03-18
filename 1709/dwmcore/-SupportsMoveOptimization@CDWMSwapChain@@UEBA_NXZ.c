/*
 * XREFs of ?SupportsMoveOptimization@CDWMSwapChain@@UEBA_NXZ @ 0x18002E520
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002F980 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::SupportsMoveOptimization(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 578);
}

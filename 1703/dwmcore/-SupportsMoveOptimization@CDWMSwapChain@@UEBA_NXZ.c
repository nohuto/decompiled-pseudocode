/*
 * XREFs of ?SupportsMoveOptimization@CDWMSwapChain@@UEBA_NXZ @ 0x18003DF70
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003F614 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::SupportsMoveOptimization(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 457);
}

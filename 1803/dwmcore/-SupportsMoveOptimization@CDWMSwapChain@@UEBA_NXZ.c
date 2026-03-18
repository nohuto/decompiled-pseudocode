/*
 * XREFs of ?SupportsMoveOptimization@CDWMSwapChain@@UEBA_NXZ @ 0x18007CC10
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::SupportsMoveOptimization(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 570);
}

/*
 * XREFs of ?NeedsSwapChainFullScreenNotification@CDWMSwapChain@@UEAA_NXZ @ 0x18003DF60
 * Callers:
 *     ?NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x180020F80 (-NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::NeedsSwapChainFullScreenNotification(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 458);
}

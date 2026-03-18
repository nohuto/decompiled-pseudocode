/*
 * XREFs of ?NeedsSwapChainFullScreenNotification@CDWMSwapChain@@UEAA_NXZ @ 0x18002E510
 * Callers:
 *     ?NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x18002EB60 (-NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::NeedsSwapChainFullScreenNotification(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 579);
}

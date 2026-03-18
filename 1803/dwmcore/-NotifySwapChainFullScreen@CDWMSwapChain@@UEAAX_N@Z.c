/*
 * XREFs of ?NotifySwapChainFullScreen@CDWMSwapChain@@UEAAX_N@Z @ 0x18007CCC0
 * Callers:
 *     ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x18007B930 (-NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::NotifySwapChainFullScreen(CDWMSwapChain *this, char a2)
{
  *((_BYTE *)this + 572) = a2;
}

/*
 * XREFs of ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x180070040
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwFullScreenRenderTarget::NotifySwapChainFullScreen(CHwFullScreenRenderTarget *this, char a2)
{
  CDWMSwapChain *v2; // rcx
  void (*v3)(void); // rax

  v2 = (CDWMSwapChain *)*((_QWORD *)this + 5);
  v3 = *(void (**)(void))(*(_QWORD *)v2 + 224LL);
  if ( (char *)v3 == (char *)CDWMSwapChain::NotifySwapChainFullScreen )
    CDWMSwapChain::NotifySwapChainFullScreen(v2, a2);
  else
    v3();
}

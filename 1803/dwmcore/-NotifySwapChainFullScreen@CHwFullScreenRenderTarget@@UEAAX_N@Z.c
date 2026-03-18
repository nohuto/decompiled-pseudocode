/*
 * XREFs of ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x18007B930
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwFullScreenRenderTarget::NotifySwapChainFullScreen(CHwFullScreenRenderTarget *this, bool a2)
{
  CDWMSwapChain *v2; // rcx
  void (*v3)(void); // rax

  v2 = (CDWMSwapChain *)*((_QWORD *)this + 4);
  v3 = *(void (**)(void))(*(_QWORD *)v2 + 256LL);
  if ( (char *)v3 == (char *)CDWMSwapChain::NotifySwapChainFullScreen )
    CDWMSwapChain::NotifySwapChainFullScreen(v2, a2);
  else
    v3();
}

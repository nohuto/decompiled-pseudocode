/*
 * XREFs of ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18007C9B0
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBuffer(CSwapChainBase **this)
{
  return CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(this - 27, 0, 1);
}

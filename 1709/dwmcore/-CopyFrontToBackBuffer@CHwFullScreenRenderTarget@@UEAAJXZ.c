/*
 * XREFs of ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18002F520
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBuffer(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((char *)this - 192, 0LL, a3);
}

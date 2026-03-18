/*
 * XREFs of ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x1800705D0
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180070180 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBuffer(
        CHwFullScreenRenderTarget *this,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker((char *)this - 176, 0LL, a3);
}

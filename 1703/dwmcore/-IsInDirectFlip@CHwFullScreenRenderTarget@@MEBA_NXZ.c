/*
 * XREFs of ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1800705C0
 * Callers:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18003A090 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x1800705E4 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwFullScreenRenderTarget::IsInDirectFlip(CHwFullScreenRenderTarget *this)
{
  return *((_QWORD *)this + 44) != 0LL;
}

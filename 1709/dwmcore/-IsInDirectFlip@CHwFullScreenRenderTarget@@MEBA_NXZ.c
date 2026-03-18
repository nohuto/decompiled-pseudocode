/*
 * XREFs of ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18002F080
 * Callers:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18002B960 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18002F534 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwFullScreenRenderTarget::IsInDirectFlip(CHwFullScreenRenderTarget *this)
{
  return *((_QWORD *)this + 68) != 0LL;
}

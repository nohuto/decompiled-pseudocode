/*
 * XREFs of ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18007C600
 * Callers:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180046530 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007C740 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwFullScreenRenderTarget::IsInDirectFlip(CHwFullScreenRenderTarget *this)
{
  return *((_QWORD *)this + 73) != 0LL;
}

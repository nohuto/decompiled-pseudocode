/*
 * XREFs of ?ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x180070010
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 66) == 3 )
    *((_QWORD *)this + 42) = *((_QWORD *)this + 41);
  v1 = *((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 41) = v1;
}

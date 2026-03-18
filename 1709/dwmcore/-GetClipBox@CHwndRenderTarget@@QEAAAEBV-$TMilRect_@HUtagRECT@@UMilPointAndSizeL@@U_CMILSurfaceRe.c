/*
 * XREFs of ?GetClipBox@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180019C90
 * Callers:
 *     ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180016770 (-ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180017A00 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x180019C14 (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetClipBox(CHwndRenderTarget *a1)
{
  if ( CHwndRenderTarget::ShouldUseDisplayPtr(a1) )
    return *((_QWORD *)a1 + 14) + 80LL;
  else
    return (__int64)a1 + 428;
}

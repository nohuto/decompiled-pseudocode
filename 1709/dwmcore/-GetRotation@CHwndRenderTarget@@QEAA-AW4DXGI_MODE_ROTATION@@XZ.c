/*
 * XREFs of ?GetRotation@CHwndRenderTarget@@QEAA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180019C6C
 * Callers:
 *     ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180016770 (-ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180017A00 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x180019C14 (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetRotation(CHwndRenderTarget *this)
{
  if ( CHwndRenderTarget::ShouldUseDisplayPtr(this) )
    return *(unsigned int *)(*((_QWORD *)this + 14) + 292LL);
  else
    return *((unsigned int *)this + 113);
}

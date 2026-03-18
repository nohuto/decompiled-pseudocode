/*
 * XREFs of ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x1801362B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18007805C (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseHwRenderTarget(CHwndRenderTarget *this)
{
  CDisplay *v1; // rcx

  v1 = (CDisplay *)*((_QWORD *)this + 14);
  if ( v1 )
    CDisplay::ReleaseHwRenderTarget(v1);
}

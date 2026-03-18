/*
 * XREFs of ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x1800CD7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B7934 (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseHwRenderTarget(CHwndRenderTarget *this)
{
  CDisplay *v1; // rcx

  v1 = (CDisplay *)*((_QWORD *)this + 14);
  if ( v1 )
    CDisplay::ReleaseHwRenderTarget(v1);
}

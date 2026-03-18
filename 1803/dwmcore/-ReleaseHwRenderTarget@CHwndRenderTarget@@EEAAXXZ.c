/*
 * XREFs of ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x1800D78A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B73B4 (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ReleaseHwRenderTarget(CHwndRenderTarget *this)
{
  CDisplay *v1; // rcx

  v1 = (CDisplay *)*((_QWORD *)this + 21);
  if ( v1 )
    CDisplay::ReleaseHwRenderTarget(v1);
}

/*
 * XREFs of ?SetAllowStereo@CHwndRenderTarget@@IEAAX_N@Z @ 0x1800C4B14
 * Callers:
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1801324D4 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwndRenderTarget::SetAllowStereo(CHwndRenderTarget *this, char a2)
{
  if ( *((_BYTE *)this + 816) != a2 )
  {
    *((_BYTE *)this + 816) = a2;
    *((_BYTE *)this + 802) = 1;
  }
}

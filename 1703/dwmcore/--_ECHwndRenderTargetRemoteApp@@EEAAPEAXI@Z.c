/*
 * XREFs of ??_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z @ 0x180155A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180155988 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 */

CHwndRenderTargetRemoteApp *__fastcall CHwndRenderTargetRemoteApp::`vector deleting destructor'(
        CHwndRenderTargetRemoteApp *this,
        char a2)
{
  CHwndRenderTargetRemoteApp::~CHwndRenderTargetRemoteApp(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

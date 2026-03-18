/*
 * XREFs of ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x180135B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x180135A60 (--1CHwndRenderTarget@@MEAA@XZ.c)
 */

CHwndRenderTarget *__fastcall CHwndRenderTarget::`scalar deleting destructor'(CHwndRenderTarget *this, char a2)
{
  CHwndRenderTarget::~CHwndRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

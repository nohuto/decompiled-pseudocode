/*
 * XREFs of ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x180155EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180155E54 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 */

CHwndRenderTargetDDA *__fastcall CHwndRenderTargetDDA::`vector deleting destructor'(
        CHwndRenderTargetDDA *this,
        char a2)
{
  CHwndRenderTargetDDA::~CHwndRenderTargetDDA(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

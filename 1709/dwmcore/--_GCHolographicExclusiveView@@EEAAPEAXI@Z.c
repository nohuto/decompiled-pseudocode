/*
 * XREFs of ??_GCHolographicExclusiveView@@EEAAPEAXI@Z @ 0x1801BD620
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHolographicExclusiveView@@EEAA@XZ @ 0x1801BD5F4 (--1CHolographicExclusiveView@@EEAA@XZ.c)
 */

CHolographicExclusiveView *__fastcall CHolographicExclusiveView::`scalar deleting destructor'(
        CHolographicExclusiveView *this,
        char a2)
{
  CHolographicExclusiveView::~CHolographicExclusiveView(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

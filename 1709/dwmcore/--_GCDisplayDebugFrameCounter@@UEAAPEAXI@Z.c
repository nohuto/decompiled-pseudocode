/*
 * XREFs of ??_GCDisplayDebugFrameCounter@@UEAAPEAXI@Z @ 0x1801262B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x18012F4E8 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 */

CDisplayDebugFrameCounter *__fastcall CDisplayDebugFrameCounter::`scalar deleting destructor'(
        CDisplayDebugFrameCounter *this,
        char a2)
{
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

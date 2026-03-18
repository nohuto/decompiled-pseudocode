/*
 * XREFs of ??_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z @ 0x1801A8B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x1801A8AD0 (--1CHolographicInteropTaskQueue@@EEAA@XZ.c)
 */

union _SLIST_HEADER *__fastcall CHolographicInteropTaskQueue::`scalar deleting destructor'(
        union _SLIST_HEADER *this,
        char a2)
{
  CHolographicInteropTaskQueue::~CHolographicInteropTaskQueue(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}

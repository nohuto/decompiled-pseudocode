/*
 * XREFs of CmpForceFlushForCoalescing @ 0x14069453C
 * Callers:
 *     CmpCoalescingCallback @ 0x1401E3D40 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  int v0; // eax

  if ( !CmpNoWrite )
  {
    if ( CmpWorkerDataInitialized )
    {
      v0 = CmpForceFlushPending;
      if ( !CmpForceFlushPending && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        ExQueueWorkItem(&CmpForceFlushWorkItem, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}

/*
 * XREFs of CmpForceFlushForCoalescing @ 0x1406FBC2C
 * Callers:
 *     CmpCoalescingCallback @ 0x140222600 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
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

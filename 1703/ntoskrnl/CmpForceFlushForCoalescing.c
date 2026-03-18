/*
 * XREFs of CmpForceFlushForCoalescing @ 0x14066971C
 * Callers:
 *     CmpCoalescingCallback @ 0x1401DFA00 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
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

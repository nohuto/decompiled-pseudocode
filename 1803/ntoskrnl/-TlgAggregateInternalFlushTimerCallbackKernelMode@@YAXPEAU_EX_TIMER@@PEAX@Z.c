/*
 * XREFs of ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1400D2790
 * Callers:
 *     TlgAggregateFlush @ 0x1402CA2B4 (TlgAggregateFlush.c)
 * Callees:
 *     EnableFlushTimer @ 0x1400844D0 (EnableFlushTimer.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall TlgAggregateInternalFlushTimerCallbackKernelMode(struct _EX_TIMER *a1, volatile signed __int16 *a2)
{
  signed __int16 v2; // ax

  v2 = _InterlockedCompareExchange16(a2 + 28, 1, 0);
  if ( v2 )
  {
    if ( v2 == 1 )
      EnableFlushTimer((ULONG_PTR)a1);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a2, DelayedWorkQueue);
  }
}

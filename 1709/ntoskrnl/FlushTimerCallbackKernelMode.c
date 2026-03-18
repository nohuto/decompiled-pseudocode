/*
 * XREFs of FlushTimerCallbackKernelMode @ 0x140131E80
 * Callers:
 *     TlgAggregateFlush @ 0x140294764 (TlgAggregateFlush.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     EnableFlushTimer @ 0x1400B4BF8 (EnableFlushTimer.c)
 */

void __fastcall FlushTimerCallbackKernelMode(ULONG_PTR a1, __int64 a2)
{
  signed __int16 v2; // ax

  v2 = _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 56), 1, 0);
  if ( v2 )
  {
    if ( v2 == 1 )
      EnableFlushTimer(a1);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a2, DelayedWorkQueue);
  }
}

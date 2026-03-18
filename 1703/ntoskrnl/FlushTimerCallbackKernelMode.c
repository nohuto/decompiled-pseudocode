/*
 * XREFs of FlushTimerCallbackKernelMode @ 0x14003C860
 * Callers:
 *     TlgAggregateFlush @ 0x1402699F8 (TlgAggregateFlush.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
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

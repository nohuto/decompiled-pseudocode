/*
 * XREFs of PopNetRefreshTimerCallback @ 0x140249B90
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 */

char PopNetRefreshTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetRefreshTimerState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_140364888, DelayedWorkQueue);
  return v0;
}

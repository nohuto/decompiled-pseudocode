/*
 * XREFs of _CancelQueueEventCompletionPacket @ 0x1C01B2690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CancelQueueEventCompletionPacket()
{
  __int64 v0; // rdx

  if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1320LL), 0LL) == 259 )
  {
    LOBYTE(v0) = 1;
    ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1320LL), v0);
    KeSetEvent(*(PRKEVENT *)(gptiCurrent + 648LL), 1, 0);
  }
  return 1LL;
}

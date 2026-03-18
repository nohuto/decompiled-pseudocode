/*
 * XREFs of _CancelQueueEventCompletionPacket @ 0x1C01B5620
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00862B0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 CancelQueueEventCompletionPacket()
{
  __int64 v0; // rdx

  if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1408LL), 0LL) == 259 )
  {
    LOBYTE(v0) = 1;
    ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1408LL), v0);
    KeSetEvent(*(PRKEVENT *)(gptiCurrent + 704LL), 1, 0);
  }
  return 1LL;
}

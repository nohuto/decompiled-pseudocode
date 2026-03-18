/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1C01B56B0
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00862B0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 ReassociateQueueEventCompletionPacket()
{
  ZwAssociateWaitCompletionPacket(
    *(_QWORD *)(gptiCurrent + 1408LL),
    *(_QWORD *)(gptiCurrent + 1384LL),
    *(_QWORD *)(gptiCurrent + 1400LL),
    0LL,
    1LL,
    0,
    0LL,
    0LL);
  return 1LL;
}

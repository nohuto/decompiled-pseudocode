/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1C01B2720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ReassociateQueueEventCompletionPacket()
{
  ZwAssociateWaitCompletionPacket(
    *(_QWORD *)(gptiCurrent + 1320LL),
    *(_QWORD *)(gptiCurrent + 1296LL),
    *(_QWORD *)(gptiCurrent + 1312LL),
    0LL,
    0LL,
    0,
    0LL,
    0LL);
  return 1LL;
}

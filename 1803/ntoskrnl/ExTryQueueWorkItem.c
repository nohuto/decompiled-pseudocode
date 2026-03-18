/*
 * XREFs of ExTryQueueWorkItem @ 0x14008F780
 * Callers:
 *     PopFxQueueWorkOrder @ 0x140079DC0 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x14008F7AC (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}

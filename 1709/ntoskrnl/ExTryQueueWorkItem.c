/*
 * XREFs of ExTryQueueWorkItem @ 0x140021AA0
 * Callers:
 *     PopFxQueueWorkOrder @ 0x140127734 (PopFxQueueWorkOrder.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x140021ACC (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall ExTryQueueWorkItem(__int64 a1, unsigned int a2)
{
  return ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, a2, 0LL);
}

/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x1402BB538
 * Callers:
 *     IoQueueWorkItemToNode @ 0x1402376B0 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpTypeToPriority @ 0x14008FAA8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x14008FAC8 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140125F10 (ExpQueueWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1);
}

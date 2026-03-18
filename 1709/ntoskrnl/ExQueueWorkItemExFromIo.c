/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x1402871AC
 * Callers:
 *     IoQueueWorkItemToNode @ 0x1401FA890 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpTypeToPriority @ 0x1400234C8 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x140061500 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x140062344 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1);
}

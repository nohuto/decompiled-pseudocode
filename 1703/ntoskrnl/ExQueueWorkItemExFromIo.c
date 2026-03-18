/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x14025D62C
 * Callers:
 *     IoQueueWorkItemToNode @ 0x1401F4AB0 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x1400FEDD4 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x140101958 (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(__int64 *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(a1, v6, a3, 1);
}

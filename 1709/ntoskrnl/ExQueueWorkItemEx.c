/*
 * XREFs of ExQueueWorkItemEx @ 0x14002197C
 * Callers:
 *     PopPepIdleTimeoutDpcRoutine @ 0x14000EC30 (PopPepIdleTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x1400A987C (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x14012BE60 (PopFxResidentTimeoutDpcRoutine.c)
 * Callees:
 *     ExpTypeToPriority @ 0x1400234C8 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x140061500 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x140062344 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(ULONG_PTR a1, unsigned int a2, int a3)
{
  int v5; // esi
  int v6; // eax

  v5 = a1;
  ExpValidateWorkItem(a1);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v5, v6, a3, 0);
}

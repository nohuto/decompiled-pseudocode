/*
 * XREFs of ExQueueWorkItemEx @ 0x140041E6C
 * Callers:
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1400CC610 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1402797F0 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpTypeToPriority @ 0x14008FAA8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x14008FAC8 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140125F10 (ExpQueueWorkItem.c)
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

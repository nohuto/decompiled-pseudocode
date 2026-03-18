/*
 * XREFs of ExQueueWorkItemEx @ 0x140114B34
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x140035AA0 (PopFxResidentTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14022E740 (PopPepIdleTimeoutDpcRoutine.c)
 *     ExpHotAddProcessorToWorkers @ 0x14025D7D4 (ExpHotAddProcessorToWorkers.c)
 *     ExpWorkerHotAddProcessor @ 0x14041B120 (ExpWorkerHotAddProcessor.c)
 *     MmScrubMemory @ 0x1406C04B8 (MmScrubMemory.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x1400FEDD4 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x140101958 (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemEx(__int64 *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(a1, v6, a3, 0);
}

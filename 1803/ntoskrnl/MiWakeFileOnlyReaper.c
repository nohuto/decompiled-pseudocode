/*
 * XREFs of MiWakeFileOnlyReaper @ 0x14025EC20
 * Callers:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x14025E6E8 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_1403CB410 )
  {
    stru_1403CB3F0.List.Flink = 0LL;
    stru_1403CB3F0.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_1403CB3F0.Parameter = (void *)1;
    ExQueueWorkItem(&stru_1403CB3F0, DelayedWorkQueue);
    byte_1403CB410 = 1;
  }
}

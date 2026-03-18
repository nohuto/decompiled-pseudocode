/*
 * XREFs of MiWakeFileOnlyReaper @ 0x140223F0C
 * Callers:
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x140223A70 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140388270 )
  {
    stru_140388250.List.Flink = 0LL;
    stru_140388250.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140388250.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140388250, DelayedWorkQueue);
    byte_140388270 = 1;
  }
}

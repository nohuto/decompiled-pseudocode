/*
 * XREFs of PopEsInit @ 0x1408C9BFC
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x140610D28 (PopEsWorkItemSchedule.c)
 */

void PopEsInit()
{
  qword_1403A7C48 = 0LL;
  PopEsLock = 0LL;
  PopEsWorkItem.Parameter = 0LL;
  PopEsWorkItem.List.Flink = 0LL;
  PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
  PopEsWorkItemSchedule(1);
}

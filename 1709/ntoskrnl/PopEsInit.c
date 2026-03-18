/*
 * XREFs of PopEsInit @ 0x140847FC0
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x1405C9C98 (PopEsWorkItemSchedule.c)
 */

void PopEsInit()
{
  qword_1403645C8 = 0LL;
  PopEsLock = 0LL;
  PopEsWorkItem.Parameter = 0LL;
  PopEsWorkItem.List.Flink = 0LL;
  PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
  PopEsWorkItemSchedule(1);
}

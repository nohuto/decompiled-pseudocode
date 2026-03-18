/*
 * XREFs of CmpInitializeDelayedCloseTable @ 0x1405BF7B8
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400FB0E0 (KeInitializeGuardedMutex.c)
 */

__int64 *CmpInitializeDelayedCloseTable()
{
  __int64 *result; // rax

  CmpDelayCloseWorkItem.Parameter = 0LL;
  CmpDelayCloseWorkItem.List.Flink = 0LL;
  CmpDelayCloseWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayCloseWorker;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  result = &CmpDelayedLRUListHead;
  qword_140387048 = (__int64)&CmpDelayedLRUListHead;
  CmpDelayedLRUListHead = (__int64)&CmpDelayedLRUListHead;
  return result;
}

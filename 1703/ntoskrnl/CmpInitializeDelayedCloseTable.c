/*
 * XREFs of CmpInitializeDelayedCloseTable @ 0x1405D5F54
 * Callers:
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140067180 (KeInitializeGuardedMutex.c)
 */

__int64 *CmpInitializeDelayedCloseTable()
{
  __int64 *result; // rax

  CmpDelayCloseWorkItem.Parameter = 0LL;
  CmpDelayCloseWorkItem.List.Flink = 0LL;
  CmpDelayCloseWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayCloseWorker;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  result = &CmpDelayedLRUListHead;
  qword_14036B0A8 = (__int64)&CmpDelayedLRUListHead;
  CmpDelayedLRUListHead = (__int64)&CmpDelayedLRUListHead;
  return result;
}

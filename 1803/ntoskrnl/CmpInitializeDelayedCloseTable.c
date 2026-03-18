/*
 * XREFs of CmpInitializeDelayedCloseTable @ 0x140655684
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400751C0 (KeInitializeGuardedMutex.c)
 */

__int64 *CmpInitializeDelayedCloseTable()
{
  __int64 *result; // rax

  CmpDelayCloseWorkItem.Parameter = 0LL;
  CmpDelayCloseWorkItem.List.Flink = 0LL;
  CmpDelayCloseWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayCloseWorker;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  result = &CmpDelayedLRUListHead;
  qword_1403CA588 = (__int64)&CmpDelayedLRUListHead;
  CmpDelayedLRUListHead = (__int64)&CmpDelayedLRUListHead;
  return result;
}

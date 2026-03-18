/*
 * XREFs of CmWorkerEngineQueueWorkItem @ 0x14057F594
 * Callers:
 *     CmpDoQueueLateUnloadWorker @ 0x14049BB4C (CmpDoQueueLateUnloadWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

void __fastcall CmWorkerEngineQueueWorkItem(_QWORD *a1)
{
  char v2; // di
  _QWORD *v3; // rax

  v2 = 0;
  ExAcquireFastMutex(&CmpWorkerEngineLock);
  v3 = (_QWORD *)qword_1403CA828;
  if ( *(PVOID **)qword_1403CA828 != &CmpWorkerEngineListHead )
    __fastfail(3u);
  *a1 = &CmpWorkerEngineListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_1403CA828 = (__int64)a1;
  if ( !CmpWorkerEngineWorkItemActive )
  {
    CmpWorkerEngineWorkItemActive = 1;
    v2 = 1;
  }
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  if ( v2 )
    ExQueueWorkItem(&CmpWorkerEngineWorkItem, DelayedWorkQueue);
}

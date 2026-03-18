/*
 * XREFs of CmWorkerEngineQueueWorkItem @ 0x140597A78
 * Callers:
 *     CmpDoQueueLateUnloadWorker @ 0x14047BEE8 (CmpDoQueueLateUnloadWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 */

void __fastcall CmWorkerEngineQueueWorkItem(_QWORD *a1)
{
  char v2; // di
  _QWORD *v3; // rax

  v2 = 0;
  ExAcquireFastMutex(&CmpWorkerEngineLock);
  v3 = (_QWORD *)qword_1403872E8;
  if ( *(PVOID **)qword_1403872E8 != &CmpWorkerEngineListHead )
    __fastfail(3u);
  *a1 = &CmpWorkerEngineListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_1403872E8 = (__int64)a1;
  if ( !CmpWorkerEngineWorkItemActive )
  {
    CmpWorkerEngineWorkItemActive = 1;
    v2 = 1;
  }
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  if ( v2 )
    ExQueueWorkItem(&CmpWorkerEngineWorkItem, DelayedWorkQueue);
}

/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x14011FC44
 * Callers:
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 */

void CmpWaitForLateUnloadWorker()
{
  __int64 v0; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    ExAcquireFastMutex(&CmpWorkerEngineLock);
    LOBYTE(v0) = CmpWorkerEngineWorkItemActive;
    KeReleaseGuardedMutex(&CmpWorkerEngineLock);
    if ( !(_BYTE)v0 )
      break;
    ExBlockOnAddressPushLock(&CmpWorkerEngineFinishedEvent, &CmpWorkerEngineWorkItemActive, &v0, 1uLL, 0LL);
  }
}

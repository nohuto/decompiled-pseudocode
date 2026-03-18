/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x14006BCD0
 * Callers:
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExBlockOnAddressPushLock @ 0x14006BD30 (ExBlockOnAddressPushLock.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

void CmpWaitForLateUnloadWorker()
{
  char v0; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    ExAcquireFastMutex(&CmpWorkerEngineLock);
    v0 = CmpWorkerEngineWorkItemActive;
    KeReleaseGuardedMutex(&CmpWorkerEngineLock);
    if ( !v0 )
      break;
    ExBlockOnAddressPushLock(
      (unsigned int)&CmpWorkerEngineFinishedEvent,
      (unsigned int)&CmpWorkerEngineWorkItemActive,
      (unsigned int)&v0,
      1,
      0LL);
  }
}

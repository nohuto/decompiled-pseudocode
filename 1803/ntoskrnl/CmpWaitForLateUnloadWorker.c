/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x1400A1C88
 * Callers:
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExBlockOnAddressPushLock @ 0x1400A1CF0 (ExBlockOnAddressPushLock.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
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

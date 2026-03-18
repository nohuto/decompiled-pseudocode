/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x14057D8A8
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     IoEnableIrpCredits @ 0x1406B4640 (IoEnableIrpCredits.c)
 *     ExpNodeHotAddProcessorWorker @ 0x14075E6C0 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 */

void KeSynchronizeWithDynamicProcessors()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v0, 0);
    if ( (KiDynamicProcessorLock.Count & 1) == 0 )
    {
      ExAcquireFastMutex(&KiDynamicProcessorLock);
      KeReleaseGuardedMutex(&KiDynamicProcessorLock);
    }
  }
}

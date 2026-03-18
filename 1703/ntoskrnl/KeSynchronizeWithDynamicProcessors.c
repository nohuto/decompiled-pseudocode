/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x140443AF4
 * Callers:
 *     ExpWorkerHotAddProcessor @ 0x14041B120 (ExpWorkerHotAddProcessor.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     IoEnableIrpCredits @ 0x14068865C (IoEnableIrpCredits.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
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

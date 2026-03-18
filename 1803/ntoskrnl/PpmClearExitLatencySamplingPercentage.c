/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x140271C34
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 */

void PpmClearExitLatencySamplingPercentage()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
  PpmExitLatencySamplingPercentageSet = 0;
  PpmExitLatencySamplingPercentage = 0;
  _InterlockedOr(v0, 0);
  KeFlushProcessWriteBuffers(1);
  PpmReleaseLock(&PopFxSystemLatencyLock);
}

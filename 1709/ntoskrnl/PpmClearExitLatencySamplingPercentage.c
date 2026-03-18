/*
 * XREFs of PpmClearExitLatencySamplingPercentage @ 0x14023A804
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 */

LONG PpmClearExitLatencySamplingPercentage()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  PpmAcquireLock(&PopFxSystemLatencyLock);
  PpmExitLatencySamplingPercentageSet = 0;
  PpmExitLatencySamplingPercentage = 0;
  _InterlockedOr(v1, 0);
  KeFlushProcessWriteBuffers(1);
  return PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
}

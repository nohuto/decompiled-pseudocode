/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x14000F3F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x140130618 (PpmCheckCustomRun.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  PpmPerfLatencyBoostQueued = 0;
  PpmAcquireLock(&PpmPerfPolicyLock);
  return PpmCheckCustomRun(3LL);
}

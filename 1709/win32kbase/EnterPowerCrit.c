/*
 * XREFs of EnterPowerCrit @ 0x1C007A870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterPowerCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
}

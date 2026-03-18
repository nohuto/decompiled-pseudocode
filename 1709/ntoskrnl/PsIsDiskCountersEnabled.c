/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1401511E0
 * Callers:
 *     ExpPcwHostCallback @ 0x1405D8570 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}

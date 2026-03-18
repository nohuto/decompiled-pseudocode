/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1401627D0
 * Callers:
 *     ExpPcwHostCallback @ 0x1405C5170 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}

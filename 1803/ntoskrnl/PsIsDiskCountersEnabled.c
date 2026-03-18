/*
 * XREFs of PsIsDiskCountersEnabled @ 0x140180410
 * Callers:
 *     ExpPcwHostCallback @ 0x140642570 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}

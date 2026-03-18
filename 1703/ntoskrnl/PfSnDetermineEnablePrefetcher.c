/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1405D65C4
 * Callers:
 *     PfSnBeginBootPhase @ 0x140404E20 (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x1406C4F40 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_14036DCA0 = 0LL;
}

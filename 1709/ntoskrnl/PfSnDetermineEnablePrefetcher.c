/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1405EF3D0
 * Callers:
 *     PfSnBeginBootPhase @ 0x140429124 (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x1406F4A60 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_14038D100 = 0LL;
}

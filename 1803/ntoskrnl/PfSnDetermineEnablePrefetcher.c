/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x140655CA4
 * Callers:
 *     PfSnBeginBootPhase @ 0x14047892C (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x14075CDD0 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_1403CD520 = 0LL;
}

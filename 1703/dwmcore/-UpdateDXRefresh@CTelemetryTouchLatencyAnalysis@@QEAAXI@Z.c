/*
 * XREFs of ?UpdateDXRefresh@CTelemetryTouchLatencyAnalysis@@QEAAXI@Z @ 0x180133E78
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013CDA8 (-GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     Template_q @ 0x18013BB44 (Template_q.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::UpdateDXRefresh(CTelemetryTouchLatencyAnalysis *this, unsigned int a2)
{
  int v2; // eax
  unsigned int *v3; // rcx
  __int64 v4; // r8

  v2 = 0;
  v3 = (unsigned int *)((char *)this + 156);
  v4 = 10LL;
  do
  {
    if ( *(v3 - 28) )
    {
      if ( !*v3 )
        *v3 = a2;
      v3[1] = a2;
      ++v2;
    }
    v3 += 50;
    --v4;
  }
  while ( v4 );
  if ( v2 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_q(v3, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEDXREFRESH_EVENT, a2);
  }
}

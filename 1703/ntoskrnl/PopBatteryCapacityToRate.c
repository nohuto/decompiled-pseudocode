/*
 * XREFs of PopBatteryCapacityToRate @ 0x14022FD18
 * Callers:
 *     PopCalculateCsSummary @ 0x14022FD3C (PopCalculateCsSummary.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406D52E0 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopBatteryCapacityToRate(unsigned int a1, unsigned __int64 a2)
{
  if ( a2 )
    return 3600000000u * (unsigned __int64)a1 / a2;
  else
    return 0LL;
}

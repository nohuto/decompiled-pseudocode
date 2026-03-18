/*
 * XREFs of ApiSetGetUserHandedness @ 0x1C0097174
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C00970EC (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0103B78 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0103C28 (rimAbIsPointInPenDeadzone.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0116044 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C0116408 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 ApiSetGetUserHandedness()
{
  if ( (int)IsGetUserHandednessSupported() < 0 )
    return 0LL;
  else
    return GetUserHandedness();
}

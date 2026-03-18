/*
 * XREFs of ApiSetGetUserHandedness @ 0x1C0007724
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C000769C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0103AF8 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0103BA8 (rimAbIsPointInPenDeadzone.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0117138 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C01174FC (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
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

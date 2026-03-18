/*
 * XREFs of PopSetShutdownMarker @ 0x1406C56EC
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

void PopSetShutdownMarker()
{
  PopBsdShutdownInProgress = 1;
}

/*
 * XREFs of PopSetShutdownMarker @ 0x1406F5830
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

void PopSetShutdownMarker()
{
  PopBsdShutdownInProgress = 1;
}

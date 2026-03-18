/*
 * XREFs of PfSnPowerBoostWorker @ 0x1406F4690
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     PfSnPowerBoostUpdate @ 0x140443C5C (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection_0(RunRef);
}

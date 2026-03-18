/*
 * XREFs of PfSnPowerBoostWorker @ 0x14075CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     PfSnPowerBoostUpdate @ 0x14048C9AC (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection(RunRef);
}

/*
 * XREFs of PfSnPowerBoostWorker @ 0x1406C4D10
 * Callers:
 *     <none>
 * Callees:
 *     PfSnPowerBoostUpdate @ 0x14046740C (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(struct _EX_RUNDOWN_REF *a1)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection(a1);
}

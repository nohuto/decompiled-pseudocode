/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x14050B9F0
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x1400D4850 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(struct _KPROCESS *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8LL, *a2);
  return 0LL;
}

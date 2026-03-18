/*
 * XREFs of PspSetProcessEnergyTrackingStateCallback @ 0x14045C060
 * Callers:
 *     <none>
 * Callees:
 *     PsUpdateComponentPower @ 0x140116230 (PsUpdateComponentPower.c)
 */

__int64 __fastcall PspSetProcessEnergyTrackingStateCallback(struct _KPROCESS *a1, unsigned __int64 *a2)
{
  PsUpdateComponentPower(a1, 8u, *a2);
  return 0LL;
}

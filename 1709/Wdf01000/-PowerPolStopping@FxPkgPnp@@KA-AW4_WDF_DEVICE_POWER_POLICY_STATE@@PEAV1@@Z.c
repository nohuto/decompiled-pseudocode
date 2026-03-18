/*
 * XREFs of ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C000FBA8 (-PowerPolicyBlockChildrenPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStopping(FxPkgPnp *This)
{
  FxPkgPnp::PowerPolicyBlockChildrenPowerUp(This);
  FxPkgPnp::PowerProcessEvent(This, 0x80u, 0);
  return 1433LL;
}

/*
 * XREFs of ?NotPowerPolOwnerStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0027E80 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::NotPowerPolOwnerStarted(FxPkgPnp *This)
{
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolStarted, 0);
  return 1282LL;
}

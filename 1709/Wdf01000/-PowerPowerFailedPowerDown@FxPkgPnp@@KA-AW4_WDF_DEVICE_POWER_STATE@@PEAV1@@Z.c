/*
 * XREFs of ?PowerPowerFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C000F860 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00634D0 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPowerFailedPowerDown(FxPkgPnp *This)
{
  FxPkgPnp::PowerSetDevicePowerState(This, (POWER_STATE)5);
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit);
  return 789LL;
}

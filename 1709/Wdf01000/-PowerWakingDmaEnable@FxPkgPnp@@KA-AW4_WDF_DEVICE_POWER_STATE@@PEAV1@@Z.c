/*
 * XREFs of ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000F730
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C000F944 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnable(FxPkgPnp *This)
{
  return FxPkgPnp::PowerDmaEnableAndScan(This, 0) != 0 ? 867 : 827;
}

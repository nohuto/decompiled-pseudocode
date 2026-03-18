/*
 * XREFs of ?PowerPolTimerExpiredNoWakeUndoPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A13C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C000FD5C (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWakeUndoPowerDown(FxPkgPnp *This)
{
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1426LL;
}

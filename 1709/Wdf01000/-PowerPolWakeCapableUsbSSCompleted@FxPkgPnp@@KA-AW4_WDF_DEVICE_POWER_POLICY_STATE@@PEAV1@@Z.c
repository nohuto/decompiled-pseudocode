/*
 * XREFs of ?PowerPolWakeCapableUsbSSCompleted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1780
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x1C000FC90 (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C000FD5C (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWakeCapableUsbSSCompleted(FxPkgPnp *This)
{
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1329LL;
}

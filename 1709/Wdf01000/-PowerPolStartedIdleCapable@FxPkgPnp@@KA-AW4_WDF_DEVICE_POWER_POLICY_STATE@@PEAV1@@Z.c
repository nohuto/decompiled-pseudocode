/*
 * XREFs of ?PowerPolStartedIdleCapable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableTimer@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0025E84 (-EnableTimer@FxPowerIdleMachine@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartedIdleCapable(FxPkgPnp *This)
{
  FxPowerIdleMachine::EnableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return 1433LL;
}

/*
 * XREFs of ?PowerPolSystemWakeQueryIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000ECA0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryReturnToIdle@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0025C5C (-QueryReturnToIdle@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeQueryIdle(FxPkgPnp *This)
{
  return FxPowerIdleMachine::QueryReturnToIdle(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine) != 0
       ? 1288
       : 1326;
}

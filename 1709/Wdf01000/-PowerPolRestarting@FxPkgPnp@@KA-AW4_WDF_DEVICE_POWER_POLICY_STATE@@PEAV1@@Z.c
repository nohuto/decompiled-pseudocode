/*
 * XREFs of ?PowerPolRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0760
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?Start@FxPowerIdleMachine@@QEAAXXZ @ 0x1C006535C (-Start@FxPowerIdleMachine@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolRestarting(FxPkgPnp *This)
{
  FxPowerIdleMachine::Start(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  FxPkgPnp::PowerProcessEvent(This, 0x40u, 0);
  return 1433LL;
}

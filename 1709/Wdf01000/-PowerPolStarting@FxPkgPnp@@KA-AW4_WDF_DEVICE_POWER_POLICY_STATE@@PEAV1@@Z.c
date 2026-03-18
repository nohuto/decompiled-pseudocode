/*
 * XREFs of ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002F200
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0025CC0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStarting(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdi
  KIRQL v3; // bl

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  v3 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
  FxPowerIdleMachine::ProcessEventLocked(&m_Owner->m_PowerIdleMachine, PowerIdleEventStart);
  KeReleaseSpinLock(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock, v3);
  FxPkgPnp::PowerProcessEvent(This, 0x40u, 0);
  return 1433LL;
}

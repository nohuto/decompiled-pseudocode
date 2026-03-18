/*
 * XREFs of ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00634D0
 * Callers:
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B450 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C009B650 (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerGotoDxStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B820 (-PowerGotoDxStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerPowerFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BCE0 (-PowerPowerFailedPowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x1C00653AC (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 */

void __fastcall FxPkgPnp::PowerSendPowerDownEvents(FxPkgPnp *this, FxPowerDownType Type)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  FxPowerPolicyEvent v4; // edx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( Type == FxPowerDownTypeImplicit )
  {
    if ( m_Owner )
      FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
    v4 = this->m_PowerPolicyMachine.m_Owner != 0LL ? PwrPolPowerDown : PwrPolImplicitPowerDown;
  }
  else
  {
    if ( m_Owner )
    {
      FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
      return;
    }
    v4 = PwrPolPowerDown;
  }
  FxPkgPnp::PowerPolicyProcessEvent(this, v4, 0);
}

/*
 * XREFs of ?PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C002C9BC
 * Callers:
 *     ?PowerPolTimerExpiredWakeCapableSendWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003B550 (-PowerPolTimerExpiredWakeCapableSendWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@.c)
 *     ?PowerPolSleepingSendWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0870 (-PowerPolSleepingSendWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicySendWaitWakeRequest(FxPkgPnp *this, POWER_STATE SystemState)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  NTSTATUS _a2; // eax
  unsigned int v7; // edi

  this->m_PowerPolicyMachine.m_Owner->m_RequestedWaitWakeIrp = 1;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  this->m_SystemWokenByWakeInterrupt = 0;
  m_Owner->m_WakeCompletionEventDropped = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_d(m_Globals, 5u, 0xCu, 0x24u, WPP_PowerPolicyStateMachine_cpp_Traceguids, SystemState.SystemState - 1);
  _a2 = PoRequestPowerIrp(
          this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          0,
          SystemState,
          (PREQUEST_POWER_COMPLETE)FxPkgPnp::_PowerPolDeviceWaitWakeComplete,
          this,
          0LL);
  v7 = _a2;
  if ( _a2 < 0 )
  {
    WPP_IFR_SF_dd(
      this->m_Globals,
      2u,
      0xCu,
      0x25u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      SystemState.SystemState - 1,
      _a2);
    this->m_PowerPolicyMachine.m_Owner->m_RequestedWaitWakeIrp = 0;
  }
  return v7;
}

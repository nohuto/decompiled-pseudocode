/*
 * XREFs of ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C000FA84
 * Callers:
 *     ?PowerPolIoPresentArmed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000EFF0 (-PowerPolIoPresentArmed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolCancelingWakeForSystemSleep@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A04D0 (-PowerPolCancelingWakeForSystemSleep@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakePowerDownFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0910 (-PowerPolSleepingWakePowerDownFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0970 (-PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A09E0 (-PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0E90 (-PowerPolStoppingCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWakeCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0FC0 (-PowerPolStoppingDisarmWakeCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A11E0 (-PowerPolSystemWakeDeviceWakeEnabled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabledNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1220 (-PowerPolSystemWakeDeviceWakeEnabledNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeInterruptFired@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1260 (-PowerPolSystemWakeDeviceWakeInterruptFired@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?PowerPolSystemWakeDeviceWakeInterruptFiredNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A12A0 (-PowerPolSystemWakeDeviceWakeInterruptFiredNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolTimerExpiredWakeCapableCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A13F0 (-PowerPolTimerExpiredWakeCapableCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A14B0 (-PowerPolTimerExpiredWakeCapablePowerDownFailedCancelWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLI.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeInterruptArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A15A0 (-PowerPolTimerExpiredWakeCapableWakeInterruptArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_ST.c)
 *     ?PowerPolWaitingArmedWakeInterruptFired@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A1720 (-PowerPolWaitingArmedWakeInterruptFired@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C002B720 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C009B8D4 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 */

char __fastcall FxPkgPnp::PowerPolicyCancelWaitWake(FxPkgPnp *this)
{
  _IRP *_a1; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  BOOLEAN v4; // al
  _FX_DRIVER_GLOBALS *v5; // rcx
  char v6; // si
  _FX_DRIVER_GLOBALS *v8; // rcx
  FxIrp irp; // [rsp+50h] [rbp+8h] BYREF

  if ( this->m_SharedPower.m_WaitWakeOwner )
    return FxPkgPnp::PowerIndicateWaitWakeStatus(this, -1073741536);
  _a1 = (_IRP *)_InterlockedExchange64((volatile __int64 *)&this->m_SharedPower, 0LL);
  if ( _a1 )
  {
    irp.m_Irp = _a1;
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x27u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    v4 = IoCancelIrp(_a1);
    v5 = this->m_Globals;
    if ( v5->FxVerboseOn )
      WPP_IFR_SF_qd(v5, 5u, 0xCu, 0x28u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, v4);
    v6 = 1;
    if ( _InterlockedExchange(&this->m_PowerPolicyMachine.m_Owner->m_WaitWakeCancelCompletionOwnership, 1) == 1 )
      FxPkgPnp::CompletePowerRequest(this, &irp, _a1->IoStatus.Status);
  }
  else
  {
    v8 = this->m_Globals;
    if ( v8->FxVerboseOn )
      WPP_IFR_SF_(v8, 5u, 0xCu, 0x29u, WPP_PowerPolicyStateMachine_cpp_Traceguids);
    return 0;
  }
  return v6;
}

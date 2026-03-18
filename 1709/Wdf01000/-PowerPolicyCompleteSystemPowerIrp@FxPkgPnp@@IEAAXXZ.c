/*
 * XREFs of ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C000FB30
 * Callers:
 *     ?PowerPolSystemAsleepNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000F310 (-PowerPolSystemAsleepNoWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C002CB30 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerPolPowerUpForSystemSleepNotSeen@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A06E0 (-PowerPolPowerUpForSystemSleepNotSeen@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A07F0 (-PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakePowerDownFailedWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0950 (-PowerPolSleepingWakePowerDownFailedWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 * Callees:
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 */

void __fastcall FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(FxPkgPnp *this)
{
  _IRP *_a1; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  _a1 = this->m_PendingSystemPowerIrp;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qdd(
      m_Globals,
      5u,
      0xCu,
      0x26u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      _a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1,
      0);
  this->m_PendingSystemPowerIrp = 0LL;
  _a1->IoStatus.Status = 0;
  PoStartNextPowerIrp(_a1);
  IofCompleteRequest(_a1, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], _a1, 0x20u);
}

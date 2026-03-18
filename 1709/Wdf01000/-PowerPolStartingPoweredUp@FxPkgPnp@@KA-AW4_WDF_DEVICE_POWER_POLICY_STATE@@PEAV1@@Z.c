/*
 * XREFs of ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002F080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C0028320 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C002ED0C (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingPoweredUp(FxPkgPnp *This)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  volatile int m_IdleTimeoutStatus; // r8d
  char v5; // bl
  FxDeviceBase *m_DeviceBase; // rsi
  const void *_a1; // rcx
  const void *v9; // r10

  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  m_Globals = This->m_Globals;
  m_IdleTimeoutStatus = m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus;
  v5 = m_IdleTimeoutStatus | 1;
  m_DeviceBase = m_Owner->m_PkgPnp->m_DeviceBase;
  if ( _InterlockedExchange(&m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus, m_IdleTimeoutStatus | 1) != m_IdleTimeoutStatus )
  {
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      3u,
      0xCu,
      0xCu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  if ( (v5 & 4) != 0 && FxLibraryGlobals.PoxRegisterDevice && (v5 & 2) == 0 )
  {
    v9 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      3u,
      0xCu,
      0xDu,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      v9,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  if ( (int)FxPoxInterface::InitializeComponents(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) < 0 )
    return 1425LL;
  FxPkgPnp::SleepStudyEvaluateParticipation(This);
  return 1282LL;
}

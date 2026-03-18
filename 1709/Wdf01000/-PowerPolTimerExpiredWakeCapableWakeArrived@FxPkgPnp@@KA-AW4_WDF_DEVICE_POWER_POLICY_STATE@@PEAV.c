/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003A8C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001D578 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeArrived(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // dx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int64 v5; // rcx
  int v6; // eax
  FxDeviceBase *v8; // rdx
  unsigned __int16 v9; // cx
  const void *_a1; // rdx
  int _a2; // eax

  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  m_Method = This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromS0.m_Method;
  if ( m_Method )
  {
    v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    v6 = m_Method((WDFDEVICE__ *)v5);
  }
  else
  {
    v6 = 0;
  }
  if ( v6 >= 0 )
  {
    if ( !FxDevice::IsPdo(This->m_Device) || (_a2 = This->PowerEnableWakeAtBusOverload(This), _a2 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
      return 1433LL;
    }
    v8 = This->m_DeviceBase;
    v9 = v8->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x20u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
  }
  return 1335LL;
}

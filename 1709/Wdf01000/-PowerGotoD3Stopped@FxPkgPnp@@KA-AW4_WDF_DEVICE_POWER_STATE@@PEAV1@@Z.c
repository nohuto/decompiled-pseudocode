/*
 * XREFs of ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009B450
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C000F860 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0019E1C (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002FBFC (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00347F0 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0063354 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0063414 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C00634D0 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0065660 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008BB78 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoD3Stopped(FxPkgPnp *This, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v5; // bl
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  int _a1; // eax
  char v8; // al
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v11; // rdx
  unsigned __int8 v12; // dl
  int v13; // eax
  int v14; // r11d
  FxDeviceBase *v15; // rax
  const void *v16; // r10
  int v17; // eax
  FxDeviceBase *v18; // r8
  unsigned __int16 v19; // ax
  WDFDEVICE__ *v20; // r8

  v5 = 0;
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    _a1 = FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventSuspend, 0LL);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x10u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      v5 = 1;
    }
  }
  FxPkgIo::StopProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink, 1, a3, a4);
  v8 = FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  if ( !v8 )
    v5 = 1;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v11 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v11 = 0LL;
  FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
    (FxPnpDeviceRelationsQuery *)&This->m_DeviceD0ExitPreInterruptsDisabled,
    v11,
    5u);
  v14 = v13;
  if ( v13 < 0 )
  {
    v5 = 1;
    v15 = This->m_DeviceBase;
    v16 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15->m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v12,
      0xCu,
      0x11u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v16,
      v15->m_DeviceObject.m_DeviceObject,
      5u,
      v14);
  }
  v17 = FxPkgPnp::NotifyResourceObjectsDx(This, 4);
  v18 = This->m_DeviceBase;
  if ( v17 < 0 )
    v5 = 1;
  v19 = v18->m_ObjectSize;
  v20 = (WDFDEVICE__ *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
  This->m_DeviceD0Exit.m_TargetState = WdfPowerDeviceD3Final;
  if ( !v19 )
    v20 = 0LL;
  This->m_DeviceD0Exit.m_Device = v20;
  if ( (int)FxPrePostCallback::InvokeStateless(&This->m_DeviceD0Exit) < 0 )
    v5 = 1;
  FxPkgPnp::PowerSetDevicePowerState(This, (POWER_STATE)5);
  This->PowerParentPowerDereference(This);
  if ( v5 )
    return 848LL;
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit);
  return 789LL;
}

/*
 * XREFs of ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C250
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C000F7DC (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0065660 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008BB78 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterruptNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v5; // rdx
  int v6; // eax
  int v7; // r10d
  FxDeviceBase *v8; // rax
  const void *_a2; // r8

  if ( (int)FxPkgPnp::NotifyResourceObjectsD0(This, 1u) < 0 )
    return 33592LL;
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
    (FxPnpDeviceRelationsQuery *)&This->m_DeviceD0EntryPostInterruptsEnabled,
    v5,
    This->m_DevicePowerState);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = This->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v8->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      This->m_DevicePowerState,
      0xCu,
      0x17u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v8->m_DeviceObject.m_DeviceObject,
      This->m_DevicePowerState,
      v7);
    return 33592LL;
  }
  return 33594LL;
}

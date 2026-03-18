/*
 * XREFs of ?PowerWakingDmaEnableFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0063414 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0065660 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x1C008BB78 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableFailedNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v4; // rdx
  int v5; // eax
  int v6; // r8d
  FxDeviceBase *v7; // rax
  const void *_a2; // rdx

  FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v4 = 0LL;
  FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
    (FxPnpDeviceRelationsQuery *)&This->m_DeviceD0ExitPreInterruptsDisabled,
    v4,
    5u);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = This->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)_a2,
      0xCu,
      0x1Au,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v7->m_DeviceObject.m_DeviceObject,
      5u,
      v6);
  }
  return 33592LL;
}

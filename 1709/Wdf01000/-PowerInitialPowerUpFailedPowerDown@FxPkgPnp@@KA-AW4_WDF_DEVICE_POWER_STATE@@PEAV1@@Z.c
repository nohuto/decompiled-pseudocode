/*
 * XREFs of ?PowerInitialPowerUpFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BA50
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00347F0 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialPowerUpFailedPowerDown(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  FxPnpDeviceD0Exit *p_m_DeviceD0Exit; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v4; // rdx

  m_DeviceBase = This->m_DeviceBase;
  p_m_DeviceD0Exit = &This->m_DeviceD0Exit;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_DeviceD0Exit->m_TargetState = WdfPowerDeviceD3Final;
  if ( !m_ObjectSize )
    v4 = 0LL;
  p_m_DeviceD0Exit->m_Device = (WDFDEVICE__ *)v4;
  FxPrePostCallback::InvokeStateless(p_m_DeviceD0Exit);
  return 836LL;
}

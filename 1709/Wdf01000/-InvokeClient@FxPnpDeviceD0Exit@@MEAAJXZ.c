/*
 * XREFs of ?InvokeClient@FxPnpDeviceD0Exit@@MEAAJXZ @ 0x1C0034990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqLd @ 0x1C008BB78 (WPP_IFR_SF_qqLd.c)
 */

int (__fastcall *__fastcall FxPnpDeviceD0Exit::InvokeClient(
        FxPnpDeviceD0Exit *this))(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE)
{
  int (__fastcall *result)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  int globals; // edi

  result = this->m_Method;
  if ( result )
  {
    globals = result(this->m_Device, this->m_TargetState);
    if ( globals < 0 )
      WPP_IFR_SF_qqLd(
        this->m_PkgPnp->m_Globals,
        (unsigned __int8)this->m_Device,
        0xCu,
        0xCu,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        this->m_TargetState,
        globals);
    return (int (__fastcall *)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE))(unsigned int)globals;
  }
  return result;
}

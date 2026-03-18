/*
 * XREFs of ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C002EA68
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C002ED0C (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C002EA30 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxPoxInterface::PoxRegisterDevice(FxPoxInterface *this)
{
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  int v3; // r9d
  _PO_FX_COMPONENT_V1 *Component; // rax
  int v5; // ebx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  _BYTE poxDevice_8[112]; // [rsp+48h] [rbp-29h] OVERLAPPED BYREF
  __int64 v12; // [rsp+B8h] [rbp+47h]

  memset(poxDevice_8, 0, sizeof(poxDevice_8));
  *(_QWORD *)&poxDevice_8[56] = this;
  v12 = 0LL;
  *(_QWORD *)poxDevice_8 = 0x100000001LL;
  *(_QWORD *)&poxDevice_8[24] = FxPoxInterface::StateCallback;
  *(_QWORD *)&poxDevice_8[8] = FxPoxInterface::ComponentActiveCallback;
  *(_QWORD *)&poxDevice_8[16] = FxPoxInterface::ComponentIdleCallback;
  *(_QWORD *)&poxDevice_8[32] = FxPoxInterface::PowerRequiredCallback;
  *(_QWORD *)&poxDevice_8[40] = FxPoxInterface::PowerNotRequiredCallback;
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
  if ( PowerFrameworkSettings && PowerFrameworkSettings->PowerControlCallback )
    *(_QWORD *)&poxDevice_8[48] = FxPoxInterface::PowerControlCallback;
  else
    *(_QWORD *)&poxDevice_8[48] = 0LL;
  if ( PowerFrameworkSettings && (Component = PowerFrameworkSettings->Component) != 0LL )
  {
    *(_GUID *)&poxDevice_8[64] = Component->Id;
    *(_OWORD *)&poxDevice_8[80] = *(_OWORD *)&Component->IdleStateCount;
  }
  else
  {
    LODWORD(v12) = -1;
    *(_QWORD *)&poxDevice_8[88] = &poxDevice_8[96];
    *(_DWORD *)&poxDevice_8[80] = v3;
    *(_QWORD *)&poxDevice_8[96] = 0LL;
    *(_QWORD *)&poxDevice_8[104] = 0LL;
  }
  v5 = PoFxRegisterDevice(this->m_PkgPnp->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, poxDevice_8, &this->m_PoHandle);
  if ( v5 < 0 )
  {
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    m_Globals = m_PkgPnp->m_Globals;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xCu,
      0x12u,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject,
      v5);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v5;
}

/*
 * XREFs of ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C002ED0C
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002F080 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C002EA30 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x1C002EA68 (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C002EC44 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002F670 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPoxInterface::InitializeComponents(FxPoxInterface *this)
{
  int _a3; // edi
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v5; // r14
  int (__fastcall *EvtDeviceWdmPostPoFxRegisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax
  FxDeviceBase *v7; // rsi
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 v9; // rsi
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  FxPkgPnp *v14; // rcx
  FxDeviceBase *v15; // r8
  _FX_DRIVER_GLOBALS *v16; // rcx
  const void *v17; // rdx
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax

  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
    return 0LL;
  if ( this->m_DevicePowerRequirementMachine
    || (_a3 = FxPoxInterface::CreateDevicePowerRequirementMachine(this), _a3 >= 0) )
  {
    _a3 = FxPoxInterface::PoxRegisterDevice(this);
    if ( _a3 < 0 )
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
        0xDu,
        WPP_PoxInterface_cpp_Traceguids,
        _a1,
        (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
    }
    else
    {
      PoFxActivateComponent(this->m_PoHandle, 0LL, 0LL);
      PoFxStartDevicePowerManagement(this->m_PoHandle);
      PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
      v5 = PowerFrameworkSettings;
      if ( !PowerFrameworkSettings )
        goto LABEL_11;
      EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
      if ( !EvtDeviceWdmPostPoFxRegisterDevice )
        goto LABEL_11;
      v7 = this->m_PkgPnp->m_DeviceBase;
      m_ObjectSize = v7->m_ObjectSize;
      v9 = (unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v9 = 0LL;
      _a3 = EvtDeviceWdmPostPoFxRegisterDevice((WDFDEVICE__ *)v9, this->m_PoHandle);
      if ( _a3 < 0 )
      {
        v14 = this->m_PkgPnp;
        v15 = v14->m_DeviceBase;
        v16 = v14->m_Globals;
        v17 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v15->m_ObjectSize )
          v17 = 0LL;
        WPP_IFR_SF_qid(
          v16,
          2u,
          0xCu,
          0xEu,
          WPP_PoxInterface_cpp_Traceguids,
          v17,
          (__int64)v15->m_DeviceObject.m_DeviceObject,
          _a3);
        EvtDeviceWdmPrePoFxUnregisterDevice = v5->EvtDeviceWdmPrePoFxUnregisterDevice;
        if ( EvtDeviceWdmPrePoFxUnregisterDevice )
          EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v9, this->m_PoHandle);
        PoFxUnregisterDevice(this->m_PoHandle);
      }
      else
      {
LABEL_11:
        FxDevicePwrRequirementMachine::ProcessEvent(this->m_DevicePowerRequirementMachine, DprEventRegisteredWithPox);
      }
    }
  }
  return (unsigned int)_a3;
}

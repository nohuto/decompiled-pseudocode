/*
 * XREFs of ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1C002EA30 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002F670 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppedRemoving(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPoxInterface *p_m_PoxInterface; // rbx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  void (__fastcall *EvtDeviceWdmPrePoFxUnregisterDevice)(WDFDEVICE__ *, POHANDLE__ *); // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v9; // rcx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  unsigned __int8 v11; // dl
  _MX_WNF_SUBSCRIPTION_CONTEXT *WnfContext; // rbx
  unsigned __int8 v13; // r8
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  p_m_PoxInterface = &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface;
  if ( (This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
    if ( PowerFrameworkSettings )
    {
      EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
      if ( EvtDeviceWdmPrePoFxUnregisterDevice )
      {
        m_DeviceBase = p_m_PoxInterface->m_PkgPnp->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v9 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !m_ObjectSize )
          v9 = 0LL;
        EvtDeviceWdmPrePoFxUnregisterDevice((WDFDEVICE__ *)v9, p_m_PoxInterface->m_PoHandle);
      }
    }
    PoFxUnregisterDevice(p_m_PoxInterface->m_PoHandle);
    FxDevicePwrRequirementMachine::ProcessEvent(
      p_m_PoxInterface->m_DevicePowerRequirementMachine,
      DprEventUnregisteredWithPox);
  }
  if ( This->m_SleepStudy )
  {
    FxNonPagedObject::Lock(This, &PreviousIrql, a3);
    m_SleepStudy = This->m_SleepStudy;
    v11 = PreviousIrql;
    WnfContext = m_SleepStudy->WnfContext;
    m_SleepStudy->WnfContext = 0LL;
    FxNonPagedObject::Unlock(This, v11, v13);
    ExUnsubscribeWnfStateChange(WnfContext->Handle);
    ExFreePoolWithTag(WnfContext, 0);
  }
  return 1422LL;
}

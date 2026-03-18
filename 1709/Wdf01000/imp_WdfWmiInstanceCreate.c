/*
 * XREFs of imp_WdfWmiInstanceCreate @ 0x1C0031160
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C000EEC4 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00313E0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031860 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C00726C4 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0072894 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWmiInstanceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_INSTANCE_CONFIG *InstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **Instance)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbp
  WDFWMIPROVIDER__ *Provider; // rdx
  __int64 v10; // rdx
  FxDevice *v11; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  int result; // eax
  int v14; // eax
  unsigned __int8 v15; // r8
  FxWmiInstanceExternal *v16; // r15
  int v17; // esi
  FxWmiProvider *v18; // rbx
  FxWmiIrpHandler *m_Parent; // rcx
  KIRQL v20; // r14
  unsigned __int8 updated; // bp
  _LIST_ENTRY *p_m_ListEntry; // rdx
  int v23; // r8d
  _LIST_ENTRY *Blink; // rcx
  FxWmiIrpHandler *v25; // rdx
  _WDF_WMI_PROVIDER_CONFIG *ProviderConfig; // rax
  unsigned __int64 v27; // rdx
  const void *v28; // rcx
  const void *v29; // rdx
  const void *v30; // rcx
  FxVerifierLock *Flink; // rcx
  FxDevice *pDevice; // [rsp+50h] [rbp-38h] BYREF
  WDFWMIPROVIDER__ *hProvider[6]; // [rsp+58h] [rbp-30h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxWmiInstanceExternal *pInstance; // [rsp+90h] [rbp+8h] BYREF
  FxWmiProvider *pProvider; // [rsp+A0h] [rbp+18h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pInstance = 0LL;
  if ( !InstanceConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( InstanceConfig->Size != 64 )
  {
    WPP_IFR_SF_DDd(
      DriverName,
      (unsigned __int8)Device,
      0x12u,
      0xBu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig->Size,
      64,
      -1073741820);
    return -1073741820;
  }
  Provider = InstanceConfig->Provider;
  if ( Provider )
  {
    ProviderConfig = InstanceConfig->ProviderConfig;
    if ( ProviderConfig )
    {
      WPP_IFR_SF_qqqd(
        DriverName,
        2u,
        0x12u,
        0xDu,
        WPP_FxWmiAPI_cpp_Traceguids,
        InstanceConfig,
        Provider,
        ProviderConfig,
        -1073741811);
      return -1073741811;
    }
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Provider, 0x1004u, (void **)&pProvider);
LABEL_14:
    v14 = FxWmiInstanceExternal::_Create(
            pProvider->m_Globals,
            pProvider,
            InstanceConfig,
            InstanceAttributes,
            (WDFWMIINSTANCE__ **)hProvider,
            &pInstance);
    v16 = pInstance;
    v17 = v14;
    if ( v14 < 0 )
      goto LABEL_51;
    if ( !InstanceConfig->Register )
    {
LABEL_29:
      if ( v17 >= 0 )
      {
        if ( Instance )
          *Instance = (WDFWMIINSTANCE__ *)hProvider[0];
        return v17;
      }
LABEL_51:
      if ( v16 )
        FxObject::DeleteFromFailedCreate(v16);
      if ( InstanceConfig->ProviderConfig )
        FxObject::DeleteFromFailedCreate(pProvider);
      return v17;
    }
    v18 = pProvider;
    if ( (pProvider->m_Flags & 4) != 0 )
    {
      v16 = pInstance;
      v27 = (unsigned __int64)pProvider ^ 0xFFFFFFFFFFFFFFF8uLL;
      v17 = -1073741808;
      if ( !pProvider->m_ObjectSize )
        v27 = 0LL;
      v28 = (const void *)((unsigned __int64)pInstance ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pInstance->m_ObjectSize )
        v28 = 0LL;
      WPP_IFR_SF_qid(pProvider->m_Globals, 2u, 0x12u, 0x12u, WPP_FxWmiProvider_cpp_Traceguids, v28, v27, -1073741808);
      goto LABEL_51;
    }
    m_Parent = pProvider->m_Parent;
    if ( SLOBYTE(m_Parent->m_ObjectFlags) < 0 && m_Parent[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink )
    {
      FxVerifierLock::Lock(
        (FxVerifierLock *)m_Parent[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink,
        (unsigned __int8 *)&pInstance,
        v15);
      v20 = (unsigned __int8)pInstance;
    }
    else
    {
      v20 = KeAcquireSpinLockRaiseToDpc(&m_Parent->m_NPLock.m_Lock);
    }
    updated = 0;
    p_m_ListEntry = &v16->m_ListEntry;
    if ( p_m_ListEntry->Flink != p_m_ListEntry )
    {
      v29 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v17 = -1073741808;
      if ( !v16->m_ObjectSize )
        v29 = 0LL;
      WPP_IFR_SF_qd(v18->m_Globals, 2u, 0x12u, 0x10u, WPP_FxWmiProvider_cpp_Traceguids, v29, -1073741808);
      goto LABEL_25;
    }
    v23 = v18->m_Parent->m_RegisteredState - 1;
    if ( v18->m_Parent->m_RegisteredState == WmiRegistered )
    {
      updated = 1;
    }
    else if ( v18->m_Parent->m_RegisteredState == WmiCleanedUp )
    {
      v17 = -1073741436;
      v30 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v16->m_ObjectSize )
        v30 = 0LL;
      WPP_IFR_SF_qd(v18->m_Globals, 4u, 0x12u, 0x11u, WPP_FxWmiProvider_cpp_Traceguids, v30, -1073741436);
      goto LABEL_25;
    }
    Blink = v18->m_InstanceListHead.Blink;
    if ( Blink->Flink != &v18->m_InstanceListHead )
      __fastfail(3u);
    p_m_ListEntry->Flink = &v18->m_InstanceListHead;
    v17 = 0;
    v16->m_ListEntry.Blink = Blink;
    Blink->Flink = p_m_ListEntry;
    v18->m_InstanceListHead.Blink = p_m_ListEntry;
    ++v18->m_NumInstances;
    v18->m_RemoveGuid = 0;
    if ( updated )
      updated = FxWmiIrpHandler::DeferUpdateLocked(v18->m_Parent, v20);
LABEL_25:
    v25 = v18->m_Parent;
    if ( SLOBYTE(v25->m_ObjectFlags) < 0
      && (Flink = (FxVerifierLock *)v25[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
    {
      FxVerifierLock::Unlock(Flink, v20, v23);
    }
    else
    {
      KeReleaseSpinLock(&v25->m_NPLock.m_Lock, v20);
    }
    if ( updated )
      FxWmiIrpHandler::UpdateGuids(v18->m_Parent);
    goto LABEL_29;
  }
  if ( !InstanceConfig->ProviderConfig )
  {
    WPP_IFR_SF_qd(DriverName, 2u, 0x12u, 0xCu, WPP_FxWmiAPI_cpp_Traceguids, InstanceConfig, -1073741811);
    return -1073741811;
  }
  hProvider[0] = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker(DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v10) = 0;
  v11 = (FxDevice *)(~(unsigned __int64)Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( ((unsigned __int8)Device & 1) != 0 )
  {
    v10 = LOWORD(v11->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v11 = (FxDevice *)((char *)v11 - v10);
  }
  if ( v11->m_Type == 4098 )
  {
    pDevice = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pDevice, Device, 0x1002u, v10);
    v11 = pDevice;
  }
  m_Owner = v11->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner
    && (RtlCompareMemory(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE, 0x10uLL) == 16
     && m_Owner->m_IdleSettings.WmiInstance
     || RtlCompareMemory(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE, 0x10uLL) == 16
     && m_Owner->m_WakeSettings.WmiInstance) )
  {
    WPP_IFR_SF_(DriverName, 2u, 0x12u, 0xEu, WPP_FxWmiAPI_cpp_Traceguids);
    return -1073741055;
  }
  result = FxWmiProvider::_Create(DriverName, Device, 0LL, InstanceConfig->ProviderConfig, hProvider, &pProvider);
  if ( result >= 0 )
    goto LABEL_14;
  return result;
}

/*
 * XREFs of ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002A790
 * Callers:
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0021B40 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00227C0 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C00284F8 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0028A80 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0033EF0 (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C00340FC (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxPkgPnp::Initialize(FxPkgPnp *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _WDF_TRI_STATE PowerPolicyOwner; // eax
  FxPowerPolicyOwnerSettings *v6; // rax
  FxPowerPolicyOwnerSettings *v7; // rax
  int result; // eax
  _POOL_TYPE v9; // ebx
  ULONG Tag; // edi
  void *v11; // rax
  FX_POOL *p_FxPoolFrameworks; // r15
  FxCmResList *v13; // rax
  _FX_DRIVER_GLOBALS *v14; // rdx
  FxCmResList *v15; // rdi
  _FX_DRIVER_GLOBALS *v16; // rax
  KIRQL v17; // al
  _FX_DRIVER_GLOBALS *v18; // rdx
  FxObject *v19; // rbx
  FxDeviceBase *m_DeviceBase; // rdi
  KIRQL v21; // al
  KIRQL v22; // r15
  KIRQL v23; // r8
  _LIST_ENTRY *v24; // rdx
  _LIST_ENTRY *v25; // rcx
  int v26; // r15d
  _FX_DRIVER_GLOBALS *v27; // rax
  FxCmResList *m_Resources; // rcx
  unsigned int v29; // edx
  _POOL_TYPE v30; // ebx
  ULONG v31; // edi
  void *v32; // rax
  FxCmResList *v33; // rax
  _FX_DRIVER_GLOBALS *v34; // rdx
  FxCmResList *v35; // rbx
  _FX_DRIVER_GLOBALS *v36; // rax
  KIRQL v37; // al
  _FX_DRIVER_GLOBALS *v38; // rdx
  FxDeviceBase *Driver; // rdi
  KIRQL v40; // al
  KIRQL v41; // r15
  KIRQL v42; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  int v45; // r15d
  _FX_DRIVER_GLOBALS *v46; // rax
  FxCmResList *m_ResourcesRaw; // rcx
  unsigned int v48; // r14d
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  _FX_DRIVER_GLOBALS *v50; // rdx
  FxTagTracker *v51; // rcx
  _FX_DRIVER_GLOBALS *v52; // rdx
  FxTagTracker *v53; // rcx
  unsigned __int64 Size[4]; // [rsp+38h] [rbp-60h] BYREF
  void *Caller; // [rsp+98h] [rbp+0h]
  KIRQL v56; // [rsp+A0h] [rbp+8h]
  KIRQL v57; // [rsp+A0h] [rbp+8h]
  FxVerifierLock *v58; // [rsp+A8h] [rbp+10h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 Total; // [rsp+B8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = DeviceInit->ReleaseHardwareOrderOnFailure == WdfReleaseHardwareOrderOnFailureAfterDescendants;
  KeInitializeEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_QueryInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_DeviceInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_DeviceInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  PowerPolicyOwner = DeviceInit->PnpPower.PowerPolicyOwner;
  if ( PowerPolicyOwner == WdfTrue )
    goto LABEL_5;
  if ( PowerPolicyOwner == WdfFalse )
    goto LABEL_10;
  if ( DeviceInit->InitType != FxDeviceInitTypePdo )
  {
    if ( !DeviceInit->Fdo.Filter )
      goto LABEL_5;
LABEL_10:
    v9 = ExDefaultNonPagedPoolType;
    this->m_Resources = 0LL;
    Tag = m_Globals->Tag;
    if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0x98u, 0, 0LL, &Total) < 0 )
      goto LABEL_97;
    if ( m_Globals->FxPoolTrackingOn )
      v11 = Caller;
    else
      v11 = 0LL;
    p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
    v13 = (FxCmResList *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v9, Total, Tag, v11);
    v15 = v13;
    if ( v13 )
    {
      if ( m_Globals->FxVerifierHandle )
      {
        memset(v13, 0, 0x30uLL);
        LODWORD(v15->m_ChildListHead.Flink) = 1146058822;
        v15 = (FxCmResList *)((char *)v15 + 48);
      }
      memset(&v15[1].m_Type, 0, 0x30uLL);
      *(_QWORD *)&v15[1].m_Type = v15;
    }
    if ( !v15 )
      goto LABEL_97;
    v15->m_Globals = m_Globals;
    v15->__vftable = (FxCmResList_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v15->m_Type = 10489910;
    v15->m_SpinLock.m_Lock = 0LL;
    v15->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v15->m_Refcnt = 1;
    *(_DWORD *)&v15->m_ObjectFlags = 0x10000;
    v15->m_ParentObject = 0LL;
    v15->m_ChildListHead.Blink = &v15->m_ChildListHead;
    v15->m_ChildListHead.Flink = &v15->m_ChildListHead;
    v15->m_ChildEntry.Blink = &v15->m_ChildEntry;
    v15->m_ChildEntry.Flink = &v15->m_ChildEntry;
    v16 = v15->m_Globals;
    v15->m_DisposeSingleEntry.Next = 0LL;
    v15->m_DeviceBase = 0LL;
    if ( v16->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v15, v14, 0);
    v15->__vftable = (FxCmResList_vtbl *)FxNonPagedObject::`vftable';
    v15->m_NPLock.m_Lock = 0LL;
    v15->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
    {
      v50 = v15->m_Globals;
      if ( v50->FxVerifierLock )
      {
        VerifierLock = 0LL;
        FxVerifierLock::CreateAndInitialize(&VerifierLock, v50, v15);
        v15[-1].m_NPLock.m_Lock = (unsigned __int64)VerifierLock;
      }
    }
    v15->m_Count = 0;
    v15->m_ListHead.Blink = &v15->m_ListHead;
    v15->m_ListHead.Flink = &v15->m_ListHead;
    v15->__vftable = (FxCmResList_vtbl *)FxIoResList::`vftable';
    *(_WORD *)&v15->m_AccessFlags = 0;
    v17 = KeAcquireSpinLockRaiseToDpc(&v15->m_SpinLock.m_Lock);
    v15->m_ObjectFlags |= 2u;
    KeReleaseSpinLock(&v15->m_SpinLock.m_Lock, v17);
    v19 = v15;
    v15->__vftable = (FxCmResList_vtbl *)FxCmResList::`vftable';
    this->m_Resources = v15;
    if ( v15->m_ObjectSize )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( !m_DeviceBase
        && (v19->m_ParentObject || (m_DeviceBase = (FxDeviceBase *)v19->m_Globals->Driver, m_DeviceBase == v19))
        || !m_DeviceBase )
      {
LABEL_33:
        v27 = v19->m_Globals;
        v19->m_ObjectFlags |= 8u;
        if ( v27->FxVerifierOn )
          FxObject::Vf_VerifyLeakDetectionConsiderObject(v19, v18);
        m_Resources = this->m_Resources;
        v29 = _InterlockedIncrement(&m_Resources->m_Refcnt);
        if ( SLOBYTE(m_Resources->m_ObjectFlags) < 0 )
        {
          v51 = *(FxTagTracker **)&m_Resources[-1].m_NPLock.m_DbgFlagIsInitialized;
          if ( v51 )
            FxTagTracker::UpdateTagHistory(
              v51,
              this,
              498,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
              TagAddRef,
              v29);
        }
        v30 = ExDefaultNonPagedPoolType;
        this->m_ResourcesRaw = 0LL;
        v31 = m_Globals->Tag;
        if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0x98u, 0, 0LL, Size) >= 0 )
        {
          if ( m_Globals->FxPoolTrackingOn )
            v32 = Caller;
          else
            v32 = 0LL;
          v33 = (FxCmResList *)FxPoolAllocator(m_Globals, p_FxPoolFrameworks, v30, Size[0], v31, v32);
          v35 = v33;
          if ( v33 )
          {
            if ( m_Globals->FxVerifierHandle )
            {
              memset(v33, 0, 0x30uLL);
              LODWORD(v35->m_ChildListHead.Flink) = 1146058822;
              v35 = (FxCmResList *)((char *)v35 + 48);
            }
            memset(&v35[1].m_Type, 0, 0x30uLL);
            *(_QWORD *)&v35[1].m_Type = v35;
          }
          if ( v35 )
          {
            v35->m_Globals = m_Globals;
            v35->__vftable = (FxCmResList_vtbl *)&FxObject::`vftable';
            *(_DWORD *)&v35->m_Type = 10489910;
            v35->m_SpinLock.m_Lock = 0LL;
            v35->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v35->m_Refcnt = 1;
            *(_DWORD *)&v35->m_ObjectFlags = 0x10000;
            v35->m_ParentObject = 0LL;
            v35->m_ChildListHead.Blink = &v35->m_ChildListHead;
            v35->m_ChildListHead.Flink = &v35->m_ChildListHead;
            v35->m_ChildEntry.Blink = &v35->m_ChildEntry;
            v35->m_ChildEntry.Flink = &v35->m_ChildEntry;
            v36 = v35->m_Globals;
            v35->m_DisposeSingleEntry.Next = 0LL;
            v35->m_DeviceBase = 0LL;
            if ( v36->FxVerifierOn )
              FxObject::Vf_VerifyConstruct(v35, v34, 0);
            v35->__vftable = (FxCmResList_vtbl *)FxNonPagedObject::`vftable';
            v35->m_NPLock.m_Lock = 0LL;
            v35->m_NPLock.m_DbgFlagIsInitialized = 1;
            if ( SLOBYTE(v35->m_ObjectFlags) < 0 )
            {
              v52 = v35->m_Globals;
              if ( v52->FxVerifierLock )
              {
                v58 = 0LL;
                FxVerifierLock::CreateAndInitialize(&v58, v52, v35);
                v35[-1].m_NPLock.m_Lock = (unsigned __int64)v58;
              }
            }
            v35->m_Count = 0;
            v35->m_ListHead.Blink = &v35->m_ListHead;
            v35->m_ListHead.Flink = &v35->m_ListHead;
            v35->__vftable = (FxCmResList_vtbl *)FxIoResList::`vftable';
            *(_WORD *)&v35->m_AccessFlags = 0;
            v37 = KeAcquireSpinLockRaiseToDpc(&v35->m_SpinLock.m_Lock);
            v35->m_ObjectFlags |= 2u;
            KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v37);
            v35->__vftable = (FxCmResList_vtbl *)FxCmResList::`vftable';
            this->m_ResourcesRaw = v35;
            if ( v35->m_ObjectSize )
            {
              Driver = this->m_DeviceBase;
              if ( !Driver
                && (v35->m_ParentObject
                 || (Driver = (FxDeviceBase *)v35->m_Globals->Driver, Driver == (FxDeviceBase *)v35))
                || (Size[1] = (unsigned __int64)Driver) == 0 )
              {
LABEL_58:
                v46 = v35->m_Globals;
                v35->m_ObjectFlags |= 8u;
                if ( v46->FxVerifierOn )
                  FxObject::Vf_VerifyLeakDetectionConsiderObject(v35, v38);
                m_ResourcesRaw = this->m_ResourcesRaw;
                v48 = _InterlockedIncrement(&m_ResourcesRaw->m_Refcnt);
                if ( SLOBYTE(m_ResourcesRaw->m_ObjectFlags) < 0 )
                {
                  v53 = *(FxTagTracker **)&m_ResourcesRaw[-1].m_NPLock.m_DbgFlagIsInitialized;
                  if ( v53 )
                    FxTagTracker::UpdateTagHistory(
                      v53,
                      this,
                      527,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
                      TagAddRef,
                      v48);
                }
                result = FxPkgPnp::RegisterCallbacks(this, &DeviceInit->PnpPower.PnpPowerEventCallbacks);
                if ( result >= 0 )
                {
                  m_Owner = this->m_PowerPolicyMachine.m_Owner;
                  if ( m_Owner )
                  {
                    m_Owner->m_DeviceArmWakeFromS0.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceArmWakeFromS0;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceArmWakeFromSx;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx.m_MethodWithReason = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceArmWakeFromSxWithReason;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceDisarmWakeFromS0;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromSx.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceDisarmWakeFromSx;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromS0Triggered.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceWakeFromS0Triggered;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromSxTriggered.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceWakeFromSxTriggered;
                  }
                }
                return result;
              }
              v40 = KeAcquireSpinLockRaiseToDpc(&v35->m_SpinLock.m_Lock);
              v41 = v40;
              v57 = v40;
              if ( v35->m_ObjectState == 1 )
              {
                if ( v35->m_ParentObject )
                {
                  KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v40);
                  v45 = -1071644147;
                }
                else
                {
                  v42 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                  if ( Driver->m_ObjectState == 1 )
                  {
                    Blink = Driver->m_ChildListHead.Blink;
                    p_m_ChildEntry = &v35->m_ChildEntry;
                    if ( Blink->Flink != &Driver->m_ChildListHead )
                      __fastfail(3u);
                    p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
                    v35->m_ChildEntry.Blink = Blink;
                    Blink->Flink = p_m_ChildEntry;
                    Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                    if ( !v35->m_DeviceBase )
                      v35->m_DeviceBase = Driver->m_DeviceBase;
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v42);
                    v35->m_ParentObject = Driver;
                    v45 = 0;
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v42);
                    v45 = -1073741738;
                  }
                  KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v57);
                  if ( v45 >= 0 )
                    goto LABEL_58;
                }
              }
              else
              {
                FxObject::TraceDroppedEvent(v35, FxObjectDroppedEventAssignParentObject);
                KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v41);
                v45 = -1073741738;
              }
            }
            else
            {
              v45 = -1073741816;
            }
            FxObject::DeleteFromFailedCreate(this->m_ResourcesRaw);
            result = v45;
            this->m_ResourcesRaw = 0LL;
            return result;
          }
        }
LABEL_97:
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xCu, WPP_FxResource_hpp_Traceguids, -1073741670);
        return -1073741670;
      }
      v21 = KeAcquireSpinLockRaiseToDpc(&v19->m_SpinLock.m_Lock);
      v22 = v21;
      LOBYTE(v58) = v21;
      if ( v19->m_ObjectState == 1 )
      {
        if ( v19->m_ParentObject )
        {
          KeReleaseSpinLock(&v19->m_SpinLock.m_Lock, v21);
          v26 = -1071644147;
        }
        else
        {
          v23 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
          v56 = v23;
          if ( m_DeviceBase->m_ObjectState == 1 )
          {
            v24 = m_DeviceBase->m_ChildListHead.Blink;
            v25 = &v19->m_ChildEntry;
            if ( v24->Flink != &m_DeviceBase->m_ChildListHead )
              __fastfail(3u);
            v25->Flink = &m_DeviceBase->m_ChildListHead;
            v19->m_ChildEntry.Blink = v24;
            v24->Flink = v25;
            m_DeviceBase->m_ChildListHead.Blink = v25;
            if ( !v19->m_DeviceBase )
              v19->m_DeviceBase = m_DeviceBase->m_DeviceBase;
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v23);
            v26 = 0;
            v19->m_ParentObject = m_DeviceBase;
          }
          else
          {
            FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v56);
            v26 = -1073741738;
          }
          KeReleaseSpinLock(&v19->m_SpinLock.m_Lock, (KIRQL)v58);
          if ( v26 >= 0 )
          {
            p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
            goto LABEL_33;
          }
        }
      }
      else
      {
        FxObject::TraceDroppedEvent(v19, FxObjectDroppedEventAssignParentObject);
        KeReleaseSpinLock(&v19->m_SpinLock.m_Lock, v22);
        v26 = -1073741738;
      }
    }
    else
    {
      v26 = -1073741816;
    }
    FxObject::DeleteFromFailedCreate(this->m_Resources);
    result = v26;
    this->m_Resources = 0LL;
    return result;
  }
  if ( !DeviceInit->Pdo.Raw )
    goto LABEL_10;
LABEL_5:
  v6 = (FxPowerPolicyOwnerSettings *)FxPoolAllocator(
                                       m_Globals,
                                       &m_Globals->FxPoolFrameworks,
                                       ExDefaultNonPagedPoolType,
                                       0x238uLL,
                                       m_Globals->Tag,
                                       Caller);
  if ( v6 )
    FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings(v6, this);
  else
    v7 = 0LL;
  this->m_PowerPolicyMachine.m_Owner = v7;
  if ( !v7 )
    return -1073741670;
  result = FxPowerPolicyOwnerSettings::Init(v7);
  if ( result >= 0 )
  {
    FxPkgPnp::QueryForD3ColdInterface(this);
    goto LABEL_10;
  }
  return result;
}

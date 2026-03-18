/*
 * XREFs of ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00227C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C0020D3C (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0029418 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002A790 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z @ 0x1C002D874 (-Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C002DF70 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxPkgFdo::Initialize(FxPkgFdo *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  _POOL_TYPE v5; // ebx
  FxDevice *m_Device; // r14
  ULONG Tag; // edi
  void *Caller; // rax
  FxChildList *v9; // rax
  FxChildList *v10; // rdi
  FxChildList *v11; // rax
  FxChildList *v12; // rbx
  _FX_DRIVER_GLOBALS *v13; // rdx
  FxDeviceBase *m_DeviceBase; // rdi
  KIRQL v15; // al
  KIRQL v16; // r12
  KIRQL v17; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  int v20; // r15d
  _FX_DRIVER_GLOBALS *v21; // rax
  FxChildList *m_StaticDeviceList; // rcx
  unsigned int v23; // ebp
  FxTagTracker *m_ScanTag; // rcx
  _WDF_CHILD_LIST_CONFIG config; // [rsp+30h] [rbp-98h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+0h]
  unsigned __int64 totalDescriptionSize; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 Size; // [rsp+E0h] [rbp+18h] BYREF
  FxDeviceBase *v29; // [rsp+E8h] [rbp+20h]

  m_Globals = this->m_Globals;
  totalDescriptionSize = 0LL;
  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result < 0 )
    return result;
  result = FxPkgPnp::AllocateEnumInfo(this);
  if ( result < 0 )
    return result;
  memset(&config, 0, sizeof(config));
  config.Size = 96;
  config.IdentificationDescriptionSize = 16;
  config.EvtChildListCreateDevice = 0LL;
  result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, &config, &totalDescriptionSize);
  if ( result < 0 )
    return result;
  v5 = ExDefaultNonPagedPoolType;
  m_Device = this->m_Device;
  this->m_StaticDeviceList = 0LL;
  Tag = m_Globals->Tag;
  if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0x168u, 0, 0LL, &Size) < 0 )
    goto LABEL_41;
  if ( m_Globals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v9 = (FxChildList *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v5, Size, Tag, Caller);
  v10 = v9;
  if ( v9 )
  {
    if ( m_Globals->FxVerifierHandle )
    {
      memset(v9, 0, 0x30uLL);
      LODWORD(v10->m_ChildListHead.Flink) = 1146058822;
      v10 = (FxChildList *)((char *)v10 + 48);
    }
    memset(&v10[1].m_Type, 0, 0x30uLL);
    *(_QWORD *)&v10[1].m_Type = v10;
  }
  if ( !v10 || (FxChildList::FxChildList(v10, m_Globals, totalDescriptionSize, m_Device, 1u), (v12 = v11) == 0LL) )
  {
LABEL_41:
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xAu, WPP_FxChildList_cpp_Traceguids, -1073741670);
    return -1073741670;
  }
  FxChildList::Initialize(v11, &config);
  this->m_StaticDeviceList = v12;
  if ( !v12->m_ObjectSize )
  {
    v20 = -1073741816;
    goto LABEL_31;
  }
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase
    || !v12->m_ParentObject
    && (m_DeviceBase = (FxDeviceBase *)v12->m_Globals->Driver, m_DeviceBase != (FxDeviceBase *)v12) )
  {
    v29 = m_DeviceBase;
    if ( m_DeviceBase )
    {
      v15 = KeAcquireSpinLockRaiseToDpc(&v12->m_SpinLock.m_Lock);
      v16 = v15;
      if ( v12->m_ObjectState == 1 )
      {
        if ( v12->m_ParentObject )
        {
          KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v15);
          v20 = -1071644147;
        }
        else
        {
          v17 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
          if ( m_DeviceBase->m_ObjectState == 1 )
          {
            Blink = m_DeviceBase->m_ChildListHead.Blink;
            p_m_ChildEntry = &v12->m_ChildEntry;
            if ( Blink->Flink != &m_DeviceBase->m_ChildListHead )
              __fastfail(3u);
            p_m_ChildEntry->Flink = &m_DeviceBase->m_ChildListHead;
            v12->m_ChildEntry.Blink = Blink;
            Blink->Flink = p_m_ChildEntry;
            m_DeviceBase->m_ChildListHead.Blink = p_m_ChildEntry;
            if ( !v12->m_DeviceBase )
              v12->m_DeviceBase = m_DeviceBase->m_DeviceBase;
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v17);
            v12->m_ParentObject = m_DeviceBase;
            v20 = 0;
          }
          else
          {
            FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v17);
            v20 = -1073741738;
          }
          KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v16);
          if ( v20 >= 0 )
            goto LABEL_24;
        }
      }
      else
      {
        FxObject::TraceDroppedEvent(v12, FxObjectDroppedEventAssignParentObject);
        KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v16);
        v20 = -1073741738;
      }
LABEL_31:
      FxObject::DeleteFromFailedCreate(this->m_StaticDeviceList);
      result = v20;
      this->m_StaticDeviceList = 0LL;
      return result;
    }
  }
LABEL_24:
  v21 = v12->m_Globals;
  v12->m_ObjectFlags |= 8u;
  if ( v21->FxVerifierOn )
    FxObject::Vf_VerifyLeakDetectionConsiderObject(v12, v13);
  m_StaticDeviceList = this->m_StaticDeviceList;
  v23 = _InterlockedIncrement(&m_StaticDeviceList->m_Refcnt);
  if ( SLOBYTE(m_StaticDeviceList->m_ObjectFlags) < 0 )
  {
    m_ScanTag = (FxTagTracker *)m_StaticDeviceList[-1].m_ScanTag;
    if ( m_ScanTag )
      FxTagTracker::UpdateTagHistory(
        m_ScanTag,
        this,
        448,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\km\\fxpkgfdokm.cpp",
        TagAddRef,
        v23);
  }
  return 0;
}

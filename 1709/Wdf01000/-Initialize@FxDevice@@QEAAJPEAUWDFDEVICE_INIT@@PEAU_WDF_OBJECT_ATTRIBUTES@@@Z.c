/*
 * XREFs of ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001D760
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0019320 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0018490 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001CA08 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C001D50C (-ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     ?_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x1C009FF1C (-_InitializeContext@FxPrePostCallback@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFCXDEVICE_INIT@@PEAPEAVF.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall FxDevice::Initialize(
        FxDevice *this,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  unsigned __int64 v7; // r9
  ULONG v8; // ecx
  unsigned __int64 flags; // r15
  void *Caller; // rax
  _FX_DRIVER_GLOBALS *v11; // rdx
  FxDefaultIrpHandler *v12; // rbx
  _FX_DRIVER_GLOBALS *v13; // rax
  unsigned int v14; // edx
  KIRQL v15; // r13
  KIRQL v16; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  unsigned __int64 m_RequestLookasideListElementSize; // rdx
  unsigned int v20; // r8d
  unsigned __int16 v21; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  _LIST_ENTRY *i; // r12
  __int64 v24; // rdi
  int id; // ebx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  ULONG v28; // ecx
  unsigned __int64 v29; // r9
  bool v30; // zf
  void *v31; // rax
  FX_POOL *p_FxPoolFrameworks; // r15
  FxObject *v33; // rax
  _FX_DRIVER_GLOBALS *v34; // rdx
  FxObject *v35; // rbx
  _FX_DRIVER_GLOBALS *v36; // rax
  unsigned int v37; // edx
  KIRQL v38; // al
  KIRQL v39; // r13
  KIRQL v40; // r12
  _LIST_ENTRY *v41; // rdx
  _LIST_ENTRY *v42; // rcx
  ULONG v43; // ecx
  FxVerifierLock *v44; // r9
  void *v45; // rax
  FxWmiIrpHandler *v46; // rax
  _FX_DRIVER_GLOBALS *v47; // rdx
  FxWmiIrpHandler *v48; // rdi
  _FX_DRIVER_GLOBALS *v49; // rax
  unsigned int v50; // edx
  KIRQL v51; // r13
  KIRQL v52; // r12
  _LIST_ENTRY *v53; // rdx
  _LIST_ENTRY *v54; // rcx
  ULONG v55; // ecx
  unsigned __int64 v56; // r9
  void *v57; // rax
  FxPkgIo *v58; // rax
  _FX_DRIVER_GLOBALS *v59; // rdx
  FxPkgIo *v60; // rbx
  _FX_DRIVER_GLOBALS *v61; // rax
  unsigned int v62; // edx
  KIRQL v63; // r15
  KIRQL v64; // r12
  _LIST_ENTRY *v65; // rdx
  _LIST_ENTRY *v66; // rcx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  _FX_DRIVER_GLOBALS *v69; // rdx
  FxTagTracker *Flink; // rcx
  _LIST_ENTRY **v71; // rax
  _LIST_ENTRY **v72; // r13
  _LIST_ENTRY *v73; // rdx
  _WDF_OBJECT_ATTRIBUTES *v74; // rcx
  __int64 v75; // rbx
  unsigned __int64 v76; // rax
  unsigned int v77; // edi
  _FX_DRIVER_GLOBALS *v78; // rdx
  FxTagTracker *m_Lock; // rcx
  _FX_DRIVER_GLOBALS *v80; // rdx
  FxTagTracker *v81; // rcx
  _FX_DRIVER_GLOBALS *v82; // rdx
  FxTagTracker *v83; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-98h]
  FxVerifierLock *v85; // [rsp+50h] [rbp-68h] BYREF
  FxVerifierLock *v86[5]; // [rsp+58h] [rbp-60h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v88; // [rsp+C0h] [rbp+8h]
  FxVerifierLock *VerifierLock; // [rsp+C8h] [rbp+10h] BYREF
  FxVerifierLock *v90; // [rsp+D8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  this->m_Exclusive = DeviceInit->Exclusive;
  v88 = 0;
  this->m_ObjectFlags |= 0x800u;
  result = FxDeviceBase::ConfigureConstraints(this, DeviceAttributes);
  if ( result < 0 )
    return result;
  v7 = 120LL;
  v8 = m_Globals->Tag;
  if ( m_Globals->FxVerifierHandle )
    v7 = 168LL;
  flags = 0LL;
  v86[4] = (FxVerifierLock *)v7;
  if ( m_Globals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v12 = (FxDefaultIrpHandler *)FxPoolAllocator(
                                 m_Globals,
                                 &m_Globals->FxPoolFrameworks,
                                 ExDefaultNonPagedPoolType,
                                 v7,
                                 v8,
                                 Caller);
  if ( !v12 )
    goto LABEL_114;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v12, 0, 0x30uLL);
    LODWORD(v12->m_ChildListHead.Flink) = 1146058822;
    v12 = (FxDefaultIrpHandler *)((char *)v12 + 48);
  }
  if ( v12 )
  {
    v12->__vftable = (FxDefaultIrpHandler_vtbl *)&FxObject::`vftable';
    v12->m_Globals = m_Globals;
    *(_DWORD *)&v12->m_Type = 4357;
    v12->m_SpinLock.m_Lock = 0LL;
    v12->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v12->m_Refcnt = 1;
    *(_DWORD *)&v12->m_ObjectFlags = 0x10000;
    v12->m_ParentObject = 0LL;
    v12->m_ChildListHead.Blink = &v12->m_ChildListHead;
    v12->m_ChildListHead.Flink = &v12->m_ChildListHead;
    v12->m_ChildEntry.Blink = &v12->m_ChildEntry;
    v12->m_ChildEntry.Flink = &v12->m_ChildEntry;
    v13 = v12->m_Globals;
    v12->m_DisposeSingleEntry.Next = 0LL;
    v12->m_DeviceBase = 0LL;
    if ( v13->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v12, v11, 0);
    v12->__vftable = (FxDefaultIrpHandler_vtbl *)FxNonPagedObject::`vftable';
    v12->m_NPLock.m_Lock = 0LL;
    v12->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v12->m_ObjectFlags) < 0 )
    {
      v69 = v12->m_Globals;
      if ( v69->FxVerifierLock )
      {
        VerifierLock = 0LL;
        FxVerifierLock::CreateAndInitialize(&VerifierLock, v69, v12);
        v12[-1].m_ChildEntry.Blink = (_LIST_ENTRY *)VerifierLock;
      }
    }
    v12->m_DeviceBase = this;
    v12->__vftable = (FxDefaultIrpHandler_vtbl *)FxDefaultIrpHandler::`vftable';
  }
  else
  {
LABEL_114:
    v12 = 0LL;
  }
  this->m_PkgDefault = v12;
  if ( !v12 )
    return -1073741670;
  v14 = _InterlockedIncrement(&v12->m_Refcnt);
  if ( SLOBYTE(v12->m_ObjectFlags) < 0 )
  {
    Flink = (FxTagTracker *)v12[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(Flink, 0LL, 0, 0LL, TagAddRef, v14);
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&v12->m_SpinLock.m_Lock);
  if ( v12->m_ObjectState == 1 )
  {
    if ( !v12->m_ParentObject )
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      if ( this->m_ObjectState == 1 )
      {
        Blink = this->m_ChildListHead.Blink;
        p_m_ChildEntry = &v12->m_ChildEntry;
        if ( Blink->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        p_m_ChildEntry->Flink = &this->m_ChildListHead;
        v12->m_ChildEntry.Blink = Blink;
        Blink->Flink = p_m_ChildEntry;
        this->m_ChildListHead.Blink = p_m_ChildEntry;
        if ( !v12->m_DeviceBase )
          v12->m_DeviceBase = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v16);
        v12->m_ParentObject = this;
      }
      else
      {
        FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v16);
      }
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(v12, FxObjectDroppedEventAssignParentObject);
  }
  KeReleaseSpinLock(&v12->m_SpinLock.m_Lock, v15);
  if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
    this->m_Legacy = 1;
  if ( DeviceInit->RequestAttributes.Size )
  {
    *(_OWORD *)&this->m_RequestAttributes.Size = *(_OWORD *)&DeviceInit->RequestAttributes.Size;
    *(_OWORD *)&this->m_RequestAttributes.EvtDestroyCallback = *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback;
    *(_OWORD *)&this->m_RequestAttributes.ParentObject = *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject;
    this->m_RequestAttributes.ContextTypeInfo = DeviceInit->RequestAttributes.ContextTypeInfo;
  }
  if ( this != (FxDevice *)-584LL )
  {
    ContextTypeInfo = this->m_RequestAttributes.ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      flags = this->m_RequestAttributes.ContextSizeOverride;
      if ( !flags )
        flags = ContextTypeInfo->ContextSize;
    }
  }
  for ( i = DeviceInit->CxDeviceInitListHead.Flink; i != &DeviceInit->CxDeviceInitListHead; i = i->Flink )
  {
    v71 = (_LIST_ENTRY **)FxPoolAllocator(
                            m_Globals,
                            &m_Globals->FxPoolFrameworks,
                            ExDefaultNonPagedPoolType,
                            0xB0uLL,
                            m_Globals->Tag,
                            retaddr);
    v72 = v71;
    if ( !v71 )
      return -1073741670;
    v71[2] = 0LL;
    v71[3] = 0LL;
    *((_BYTE *)v71 + 88) = 0;
    v71[1] = (_LIST_ENTRY *)v71;
    *v71 = (_LIST_ENTRY *)v71;
    memset(v71 + 4, 0, 0x38uLL);
    memset(v72 + 12, 0, 0x50uLL);
    *((_BYTE *)v72 + 88) = ++v88;
    v72[2] = i[1].Blink[4].Blink;
    v72[3] = i[2].Blink;
    *((_LIST_ENTRY *)v72 + 2) = i[3];
    *((_LIST_ENTRY *)v72 + 3) = i[4];
    *((_LIST_ENTRY *)v72 + 4) = i[5];
    v72[10] = i[6].Flink;
    v73 = this->m_CxDeviceInfoListHead.Blink;
    if ( v73->Flink != &this->m_CxDeviceInfoListHead )
      __fastfail(3u);
    *v72 = &this->m_CxDeviceInfoListHead;
    v72[1] = v73;
    v73->Flink = (_LIST_ENTRY *)v72;
    this->m_CxDeviceInfoListHead.Blink = (_LIST_ENTRY *)v72;
    i[26].Blink = (_LIST_ENTRY *)v72;
    if ( FxGetContextSize((_WDF_OBJECT_ATTRIBUTES *)&i[3]) > flags )
      flags = FxGetContextSize(v74);
    if ( LOBYTE(i[26].Flink) == 1 )
    {
      v75 = 0LL;
      do
      {
        result = FxPrePostCallback::_InitializeContext(
                   this->m_Globals,
                   (WDFCXDEVICE_INIT *)i,
                   (FxCxPnpPowerCallbackContext **)&v72[v75 + 12],
                   (FxCxCallbackType)v75);
        if ( result < 0 )
          return result;
        v75 = (unsigned int)(v75 + 1);
      }
      while ( (unsigned int)v75 < 0xA );
    }
  }
  this->m_RequestLookasideListElementSize = 416LL;
  if ( flags )
  {
    v67 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v67 < flags )
      return -1073741675;
    v68 = v67 + 416;
    if ( v68 < 0x1A0 )
    {
      id = -1073741675;
      this->m_RequestLookasideListElementSize = -1LL;
LABEL_134:
      WPP_IFR_SF_DDxd(m_Globals, m_RequestLookasideListElementSize, v20, v21, Tag, 0x168u, 0, flags, id);
      return id;
    }
    this->m_RequestLookasideListElementSize = v68;
  }
  v24 = -1LL;
  if ( m_Globals->FxVerifierHandle )
  {
    m_RequestLookasideListElementSize = this->m_RequestLookasideListElementSize;
    v76 = -1LL;
    if ( m_RequestLookasideListElementSize + 48 >= m_RequestLookasideListElementSize )
      v76 = m_RequestLookasideListElementSize + 48;
    id = m_RequestLookasideListElementSize + 48 < m_RequestLookasideListElementSize ? 0xC0000095 : 0;
    this->m_RequestLookasideListElementSize = v76;
  }
  else
  {
    id = 0;
  }
  if ( id < 0 )
    goto LABEL_134;
  v26 = this->m_RequestLookasideListElementSize;
  if ( v26 + 16 < v26 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxPoolInlines_hpp_Traceguids, -1073741675);
    return -1073741675;
  }
  v27 = v26 + 16;
  if ( m_Globals->FxPoolTrackingOn )
  {
    if ( v26 + 80 >= v26 + 16 )
      v24 = v26 + 80;
    v27 = v24;
    v77 = v26 + 80 < v26 + 16 ? 0xC0000095 : 0;
    if ( v26 + 80 < v26 + 16 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xBu, WPP_FxPoolInlines_hpp_Traceguids, v26 + 80 < v26 + 16 ? 0xC0000095 : 0);
      return v77;
    }
  }
  this->m_RequestLookasideListElementSize = v27;
  ExInitializeNPagedLookasideList(
    &this->m_RequestLookasideList,
    0LL,
    0LL,
    ExDefaultNonPagedPoolType,
    this->m_RequestLookasideListElementSize,
    m_Globals->Tag,
    0);
  FxDevice::ConfigureAutoForwardCleanupClose(this, DeviceInit);
  v28 = m_Globals->Tag;
  if ( m_Globals->FxVerifierHandle )
    v29 = 248LL;
  else
    v29 = 200LL;
  v30 = m_Globals->FxPoolTrackingOn == 0;
  v86[1] = (FxVerifierLock *)v29;
  if ( v30 )
    v31 = 0LL;
  else
    v31 = retaddr;
  p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
  v33 = (FxObject *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, ExDefaultNonPagedPoolType, v29, v28, v31);
  v35 = v33;
  if ( !v33 )
    goto LABEL_147;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v33, 0, 0x30uLL);
    LODWORD(v35->m_ChildListHead.Flink) = 1146058822;
    v35 = (FxObject *)((char *)v35 + 48);
  }
  if ( v35 )
  {
    v35->m_Globals = m_Globals;
    v35->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v35->m_Type = 4356;
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
    v35->__vftable = (FxObject_vtbl *)FxNonPagedObject::`vftable';
    *(_QWORD *)&v35[1].m_Type = 0LL;
    LOBYTE(v35[1].__vftable) = 1;
    if ( SLOBYTE(v35->m_ObjectFlags) < 0 )
    {
      v78 = v35->m_Globals;
      if ( v78->FxVerifierLock )
      {
        v90 = 0LL;
        FxVerifierLock::CreateAndInitialize(&v90, v78, v35);
        v35[-1].m_ParentObject = (FxObject *)v90;
      }
    }
    v35->m_DeviceBase = this;
    v35->__vftable = (FxObject_vtbl *)FxPkgGeneral::`vftable';
    v35[1].m_DisposeSingleEntry.Next = 0LL;
    LODWORD(v35[1].m_Globals) = 1;
    v35[1].m_ChildListHead.Flink = (_LIST_ENTRY *)&v35[1].24;
    *(_QWORD *)&v35[1].m_ObjectFlags = (char *)v35 + 128;
    LODWORD(v35[1].m_SpinLock.m_Lock) = 0;
    HIDWORD(v35[1].m_SpinLock.m_Lock) = 1;
    LODWORD(v35[1].m_ParentObject) = 1;
    v35[1].m_ChildEntry.Flink = 0LL;
    v35[1].m_ChildEntry.Blink = 0LL;
    *(_QWORD *)&v35[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    v35[1].m_ChildListHead.Blink = 0LL;
  }
  else
  {
LABEL_147:
    v35 = 0LL;
  }
  this->m_PkgGeneral = (FxPkgGeneral *)v35;
  if ( !v35 )
    return -1073741670;
  v37 = _InterlockedIncrement(&v35->m_Refcnt);
  if ( SLOBYTE(v35->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)v35[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(m_Lock, 0LL, 0, 0LL, TagAddRef, v37);
  }
  v38 = KeAcquireSpinLockRaiseToDpc(&v35->m_SpinLock.m_Lock);
  v39 = v38;
  if ( v35->m_ObjectState == 1 )
  {
    if ( v35->m_ParentObject )
    {
      KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v38);
    }
    else
    {
      v40 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      if ( this->m_ObjectState == 1 )
      {
        v41 = this->m_ChildListHead.Blink;
        v42 = &v35->m_ChildEntry;
        if ( v41->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        v42->Flink = &this->m_ChildListHead;
        v35->m_ChildEntry.Blink = v41;
        v41->Flink = v42;
        this->m_ChildListHead.Blink = v42;
        if ( !v35->m_DeviceBase )
          v35->m_DeviceBase = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v40);
        v35->m_ParentObject = this;
      }
      else
      {
        FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v40);
      }
      KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v39);
      p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(v35, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(&v35->m_SpinLock.m_Lock, v39);
  }
  v43 = m_Globals->Tag;
  v44 = (FxVerifierLock *)(m_Globals->FxVerifierHandle ? 256LL : 208LL);
  v30 = m_Globals->FxPoolTrackingOn == 0;
  v86[2] = v44;
  v45 = v30 ? 0LL : retaddr;
  v46 = (FxWmiIrpHandler *)FxPoolAllocator(
                             m_Globals,
                             p_FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             (unsigned __int64)v44,
                             v43,
                             v45);
  v48 = v46;
  if ( !v46 )
    goto LABEL_158;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v46, 0, 0x30uLL);
    LODWORD(v48->m_ChildListHead.Flink) = 1146058822;
    v48 = (FxWmiIrpHandler *)((char *)v48 + 48);
  }
  if ( v48 )
  {
    v48->m_Globals = m_Globals;
    v48->__vftable = (FxWmiIrpHandler_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v48->m_Type = 4355;
    v48->m_SpinLock.m_Lock = 0LL;
    v48->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v48->m_Refcnt = 1;
    *(_DWORD *)&v48->m_ObjectFlags = 0x10000;
    v48->m_ParentObject = 0LL;
    v48->m_ChildListHead.Blink = &v48->m_ChildListHead;
    v48->m_ChildListHead.Flink = &v48->m_ChildListHead;
    v48->m_ChildEntry.Blink = &v48->m_ChildEntry;
    v48->m_ChildEntry.Flink = &v48->m_ChildEntry;
    v49 = v48->m_Globals;
    v48->m_DisposeSingleEntry.Next = 0LL;
    v48->m_DeviceBase = 0LL;
    if ( v49->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v48, v47, 0);
    v48->__vftable = (FxWmiIrpHandler_vtbl *)FxNonPagedObject::`vftable';
    v48->m_NPLock.m_Lock = 0LL;
    v48->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v48->m_ObjectFlags) < 0 )
    {
      v80 = v48->m_Globals;
      if ( v80->FxVerifierLock )
      {
        v85 = 0LL;
        FxVerifierLock::CreateAndInitialize(&v85, v80, v48);
        v48[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)v85;
      }
    }
    v48->m_DeviceBase = this;
    v48->__vftable = (FxWmiIrpHandler_vtbl *)FxWmiIrpHandler::`vftable';
    *(_QWORD *)&v48->m_NumProviders = 0LL;
    v48->m_WorkItem = 0LL;
    v48->m_UpdateCount = 1;
    v48->m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = 0;
    KeInitializeEvent(&v48->m_UpdateEvent.m_Event.m_Event, SynchronizationEvent, 0);
    v48->m_UpdateEvent.m_Event.m_DbgFlagIsInitialized = 1;
    v48->m_WorkItemEvent = 0LL;
    v48->m_WorkItemQueued = 0;
    v48->m_ProvidersListHead.Blink = &v48->m_ProvidersListHead;
    v48->m_ProvidersListHead.Flink = &v48->m_ProvidersListHead;
  }
  else
  {
LABEL_158:
    v48 = 0LL;
  }
  this->m_PkgWmi = v48;
  if ( !v48 )
    return -1073741670;
  v50 = _InterlockedIncrement(&v48->m_Refcnt);
  if ( SLOBYTE(v48->m_ObjectFlags) < 0 )
  {
    v81 = *(FxTagTracker **)&v48[-1].m_UpdateEvent.m_Event.m_Event.Header.Lock;
    if ( v81 )
      FxTagTracker::UpdateTagHistory(v81, 0LL, 0, 0LL, TagAddRef, v50);
  }
  v51 = KeAcquireSpinLockRaiseToDpc(&v48->m_SpinLock.m_Lock);
  if ( v48->m_ObjectState != 1 )
  {
    FxObject::TraceDroppedEvent(v48, FxObjectDroppedEventAssignParentObject);
    goto LABEL_162;
  }
  if ( v48->m_ParentObject )
  {
LABEL_162:
    KeReleaseSpinLock(&v48->m_SpinLock.m_Lock, v51);
    goto LABEL_80;
  }
  v52 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
  {
    v53 = this->m_ChildListHead.Blink;
    v54 = &v48->m_ChildEntry;
    if ( v53->Flink != &this->m_ChildListHead )
      __fastfail(3u);
    v54->Flink = &this->m_ChildListHead;
    v48->m_ChildEntry.Blink = v53;
    v53->Flink = v54;
    this->m_ChildListHead.Blink = v54;
    if ( !v48->m_DeviceBase )
      v48->m_DeviceBase = this->m_DeviceBase;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v52);
    v48->m_ParentObject = this;
  }
  else
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v52);
  }
  KeReleaseSpinLock(&v48->m_SpinLock.m_Lock, v51);
  p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
LABEL_80:
  v55 = m_Globals->Tag;
  if ( m_Globals->FxVerifierHandle )
    v56 = 448LL;
  else
    v56 = 400LL;
  v30 = m_Globals->FxPoolTrackingOn == 0;
  v86[3] = (FxVerifierLock *)v56;
  if ( v30 )
    v57 = 0LL;
  else
    v57 = retaddr;
  v58 = (FxPkgIo *)FxPoolAllocator(m_Globals, p_FxPoolFrameworks, ExDefaultNonPagedPoolType, v56, v55, v57);
  v60 = v58;
  if ( !v58 )
    goto LABEL_169;
  if ( m_Globals->FxVerifierHandle )
  {
    memset(v58, 0, 0x30uLL);
    LODWORD(v60->m_ChildListHead.Flink) = 1146058822;
    v60 = (FxPkgIo *)((char *)v60 + 48);
  }
  if ( v60 )
  {
    v60->m_Globals = m_Globals;
    v60->__vftable = (FxPkgIo_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v60->m_Type = 4352;
    v60->m_SpinLock.m_Lock = 0LL;
    v60->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v60->m_Refcnt = 1;
    *(_DWORD *)&v60->m_ObjectFlags = 0x10000;
    v60->m_ParentObject = 0LL;
    v60->m_ChildListHead.Blink = &v60->m_ChildListHead;
    v60->m_ChildListHead.Flink = &v60->m_ChildListHead;
    v60->m_ChildEntry.Blink = &v60->m_ChildEntry;
    v60->m_ChildEntry.Flink = &v60->m_ChildEntry;
    v61 = v60->m_Globals;
    v60->m_DisposeSingleEntry.Next = 0LL;
    v60->m_DeviceBase = 0LL;
    if ( v61->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v60, v59, 0);
    v60->__vftable = (FxPkgIo_vtbl *)FxNonPagedObject::`vftable';
    v60->m_NPLock.m_Lock = 0LL;
    v60->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v60->m_ObjectFlags) < 0 )
    {
      v82 = v60->m_Globals;
      if ( v82->FxVerifierLock )
      {
        v86[0] = 0LL;
        FxVerifierLock::CreateAndInitialize(v86, v82, v60);
        v60[-1].m_DispatchTable[27] = (FxIoQueue *)v86[0];
      }
    }
    v60->__vftable = (FxPkgIo_vtbl *)FxPkgIo::`vftable';
    v60->m_InCallerContextCallback.m_Method = 0LL;
    v60->m_DeviceBase = this;
    v60->m_DefaultQueue = 0LL;
    memset(v60->m_DispatchTable, 0, sizeof(v60->m_DispatchTable));
    *(_WORD *)&v60->m_Filter = 0;
    v60->m_QueuesAreShuttingDown = 0;
    v60->m_IoQueueListHead.Blink = &v60->m_IoQueueListHead;
    v60->m_IoQueueListHead.Flink = &v60->m_IoQueueListHead;
    v60->m_DynamicDispatchInfoListHead.Blink = &v60->m_DynamicDispatchInfoListHead;
    v60->m_DynamicDispatchInfoListHead.Flink = &v60->m_DynamicDispatchInfoListHead;
    v60->m_RandomSeed = MEMORY[0xFFFFF78000000320];
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0xAu, WPP_FxPkgIo_cpp_Traceguids, v60);
  }
  else
  {
LABEL_169:
    v60 = 0LL;
  }
  this->m_PkgIo = v60;
  if ( !v60 )
    return -1073741670;
  v62 = _InterlockedIncrement(&v60->m_Refcnt);
  if ( SLOBYTE(v60->m_ObjectFlags) < 0 )
  {
    v83 = (FxTagTracker *)v60[-1].m_DispatchTable[26];
    if ( v83 )
      FxTagTracker::UpdateTagHistory(v83, 0LL, 0, 0LL, TagAddRef, v62);
  }
  v63 = KeAcquireSpinLockRaiseToDpc(&v60->m_SpinLock.m_Lock);
  if ( v60->m_ObjectState == 1 )
  {
    if ( !v60->m_ParentObject )
    {
      v64 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      if ( this->m_ObjectState == 1 )
      {
        v65 = this->m_ChildListHead.Blink;
        v66 = &v60->m_ChildEntry;
        if ( v65->Flink != &this->m_ChildListHead )
          __fastfail(3u);
        v66->Flink = &this->m_ChildListHead;
        v60->m_ChildEntry.Blink = v65;
        v65->Flink = v66;
        this->m_ChildListHead.Blink = v66;
        if ( !v60->m_DeviceBase )
          v60->m_DeviceBase = this->m_DeviceBase;
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v64);
        v60->m_ParentObject = this;
      }
      else
      {
        FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v64);
      }
    }
  }
  else
  {
    FxObject::TraceDroppedEvent(v60, FxObjectDroppedEventAssignParentObject);
  }
  KeReleaseSpinLock(&v60->m_SpinLock.m_Lock, v63);
  this->m_PkgIo->m_InCallerContextCallback.m_Method = DeviceInit->IoInCallerContextCallback;
  if ( DeviceInit->RequiresSelfIoTarget )
    this->m_SelfIoTargetNeeded = 1;
  return 0;
}

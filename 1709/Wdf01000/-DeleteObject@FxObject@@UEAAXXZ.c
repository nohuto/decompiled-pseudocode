/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00263F0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0063264 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C007D6F0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C007E560 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C00A1CB0 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000A490 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000B190 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000B2A0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C000E9E8 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001FDCC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003B710 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003B78C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C003C838 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003C900 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003C970 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003CF48 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003D3F8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // r14
  FxRequest *_a1; // rbx
  KIRQL v3; // al
  KIRQL v4; // si
  int m_ObjectState; // eax
  FxObject *v6; // rdi
  KIRQL v7; // r15
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  char v12; // al
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v15; // rsi
  unsigned __int16 v16; // ax
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  __int64 (__fastcall *Release)(FxObject *, volatile signed __int32 *, __int64, const char *); // rax
  unsigned __int16 v19; // cx
  FxTagTracker *v20; // r14
  unsigned __int16 v21; // cx
  _QWORD *j; // rsi
  void (__fastcall *v23)(unsigned __int64); // rax
  void (__fastcall *v24)(unsigned __int64); // rax
  unsigned __int16 v25; // ax
  _QWORD *v26; // rcx
  _QWORD *v27; // rsi
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  FxRequest *(__fastcall *v29)(FxRequest *, char); // rax
  void *m_Lock; // rcx
  FxObject_vtbl *v31; // rcx
  FX_POOL_TRACKER *m_InternalContext; // rdi
  FX_POOL_TRACKER *v33; // rcx
  unsigned __int8 m_Reserved; // r14
  unsigned __int8 m_IrpAllocation; // bp
  unsigned __int8 m_CanComplete; // r13
  signed __int32 v37; // esi
  unsigned __int16 v38; // ax
  _MDL *m_AllocatedMdl; // rcx
  FxObject *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx
  unsigned __int16 v43; // cx
  FxTagTracker *v44; // r8
  unsigned __int16 v45; // cx
  _QWORD *v46; // r15
  void (__fastcall *v47)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *); // rax
  void (__fastcall *v48)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *); // rax
  unsigned __int16 v49; // ax
  _QWORD *v50; // rcx
  _QWORD *v51; // r15
  FxObject_vtbl *v52; // rdx
  void (__fastcall *v53)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v54; // rcx
  FxDeviceBase *m_DeviceBase; // rdi
  FxObject *v56; // rcx
  _IRP *v57; // r15
  FxRequestTimer *v58; // rcx
  FxRequest *v59; // r15
  __int64 v60; // rax
  _SLIST_ENTRY *v61; // r15
  MxLock *p_m_SpinLock; // rdi
  unsigned __int64 v63; // rbp
  KIRQL v64; // r15
  __int16 v65; // cx
  unsigned __int8 v66; // al
  FxRequest *(__fastcall *v67)(FxRequest *, char); // rax
  void *v68; // rcx
  FxObject_vtbl *v69; // rcx
  unsigned __int64 *p_Blink; // rax
  FX_POOL_TRACKER *v71; // rdi
  _MDL *v72; // rcx
  FxObject *v73; // rcx
  _IRP *v74; // rdi
  FxRequestTimer *v75; // rcx
  _QWORD *v76; // rcx
  _SLIST_ENTRY *v77; // r15
  FxObject *m_ParentObject; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *v81; // rcx
  const void *v82; // rdx
  _FX_DRIVER_GLOBALS *v83; // rcx
  const void *v84; // rdx
  _FX_DRIVER_GLOBALS *v85; // rcx
  const void *v86; // rdx
  KIRQL v87; // di
  unsigned __int16 m_ObjectSize; // ax
  char *i; // rdi
  void (__fastcall *v90)(unsigned __int64); // rax
  _FX_DRIVER_GLOBALS *v91; // rcx
  const void *v92; // rdx
  FxTagTracker *v93; // rcx
  FxObject *v94; // rcx
  FxVerifierLock *v95; // rcx
  FxTagTracker *v96; // rcx
  FxObject *v97; // rcx
  FxVerifierLock *v98; // rcx
  FX_POOL_HEADER *v99; // rax
  FxObject *v100; // rcx
  FxVerifierLock *v101; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rsi
  _IRP *v104; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v106; // r8
  FxTagTracker *v107; // rcx
  FxTagTracker *v108; // [rsp+50h] [rbp-58h]
  ULONG_PTR retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+B8h] [rbp+10h] BYREF
  KIRQL v111; // [rsp+C0h] [rbp+18h]
  KIRQL v112; // [rsp+C8h] [rbp+20h]

  p_m_Lock = &this->m_SpinLock.m_Lock;
  _a1 = (FxRequest *)this;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  _a1->m_ObjectFlags |= 4u;
  v4 = v3;
  m_ObjectState = _a1->m_ObjectState;
  if ( m_ObjectState != 1 )
  {
    if ( m_ObjectState != 2 )
    {
      FxObject::TraceDroppedEvent(_a1, FxObjectDroppedEventDeleteObject);
      KeReleaseSpinLock(p_m_Lock, v4);
      return;
    }
    m_ParentObject = _a1->m_ParentObject;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, _a1) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForParentDeleteAndDisposed);
        KeReleaseSpinLock(p_m_Lock, v4);
        return;
      }
      _a1->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(_a1, v4, 1u);
    return;
  }
  v6 = _a1->m_ParentObject;
  if ( v6 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&v6->m_SpinLock.m_Lock);
    if ( v6->m_ObjectState != 1 )
    {
      FxObject::TraceDroppedEvent(v6, FxObjectDroppedEventRemoveChildObjectInternal);
      KeReleaseSpinLock(&v6->m_SpinLock.m_Lock, v7);
      FxObject::SetObjectStateLocked(_a1, FxObjectStateWaitingForEarlyDispose);
      KeReleaseSpinLock(p_m_Lock, v4);
      return;
    }
    Flink = _a1->m_ChildEntry.Flink;
    p_m_ChildEntry = &_a1->m_ChildEntry;
    if ( Flink->Blink != &_a1->m_ChildEntry || (Blink = _a1->m_ChildEntry.Blink, Blink->Flink != p_m_ChildEntry) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    _a1->m_ChildEntry.Blink = &_a1->m_ChildEntry;
    p_m_ChildEntry->Flink = p_m_ChildEntry;
    KeReleaseSpinLock(&v6->m_SpinLock.m_Lock, v7);
    _a1->m_ParentObject = 0LL;
  }
  m_ObjectFlags = _a1->m_ObjectFlags;
  v111 = v4;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v4 )
    goto LABEL_191;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = _a1->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !_a1->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, _a2, _a1->m_ObjectState, 9u);
    }
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_ForwardProgressQueue) - 32) = 9;
  }
  v12 = _a1->m_ObjectFlags;
  _a1->m_ObjectState = 9;
  if ( (v12 & 0x20) != 0 )
  {
    if ( v4 )
      goto LABEL_191;
  }
  v13 = _a1->m_ChildListHead.Flink;
  p_m_ChildListHead = &_a1->m_ChildListHead;
  if ( v13 != &_a1->m_ChildListHead )
  {
    while ( !v4 || ((__int64)v13[-3].Flink & 0x10) == 0 )
    {
      v13 = v13->Flink;
      if ( v13 == p_m_ChildListHead )
        goto LABEL_13;
    }
LABEL_191:
    FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(p_m_Lock, v4);
    return;
  }
LABEL_13:
  KeReleaseSpinLock(p_m_Lock, v4);
  v15 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_14:
    if ( (_a1->m_ObjectFlags & 0x800) == 0 || _a1->Dispose(_a1) )
    {
      v16 = _a1->m_ObjectFlags;
      if ( (v16 & 0x400) != 0 && (v16 & 8) != 0 )
      {
        m_ObjectSize = _a1->m_ObjectSize;
        if ( m_ObjectSize )
        {
          for ( i = (char *)_a1 + m_ObjectSize; i; i = (char *)*((_QWORD *)i + 1) )
          {
            v90 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)i + 2);
            if ( v90 )
            {
              v90((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              *((_QWORD *)i + 2) = 0LL;
            }
          }
        }
        _a1->m_ObjectFlags &= ~0x400u;
      }
    }
    if ( (_a1->m_ObjectFlags & 0x200) != 0 )
    {
      v91 = _a1->m_Globals;
      if ( v91->FxVerboseOn )
      {
        v92 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !_a1->m_ObjectSize )
          v92 = 0LL;
        WPP_IFR_SF_qqLL(v91, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, v92, _a1->m_ObjectState, 0xAu);
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_ForwardProgressQueue) - 32) = 10;
    }
    _a1->m_ObjectState = 10;
    FxObject::DestroyChildren(_a1);
    Release = (__int64 (__fastcall *)(FxObject *, volatile signed __int32 *, __int64, const char *))_a1->Release;
    if ( Release == FxObject::Release )
    {
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        v93 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
        if ( v93 )
          FxTagTracker::UpdateTagHistory(
            v93,
            0LL,
            1246,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      if ( _InterlockedDecrement(&_a1->m_Refcnt) )
        return;
      v19 = _a1->m_ObjectFlags;
      if ( (v19 & 0x20) == 0 && ((v19 & 0x10) == 0 || !KeGetCurrentIrql()) )
      {
        if ( (v19 & 0x80u) != 0 )
        {
          v20 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
          if ( v20 )
            FxTagTracker::CheckForAbandondedTags((FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink);
        }
        else
        {
          v20 = 0LL;
        }
        v21 = _a1->m_ObjectSize;
        if ( v21 && (_a1->m_ObjectFlags & 8) != 0 )
        {
          for ( j = (FxRequest_vtbl **)((char *)&_a1->__vftable + v21); j; j = (_QWORD *)j[1] )
          {
            v23 = (void (__fastcall *)(unsigned __int64))j[2];
            if ( v23 )
            {
              v23((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              j[2] = 0LL;
            }
            v24 = (void (__fastcall *)(unsigned __int64))j[3];
            if ( v24 )
            {
              v24((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              j[3] = 0LL;
            }
          }
          v25 = _a1->m_ObjectSize;
          LOBYTE(FxVerifyLeakDetection) = 1;
          if ( v25 )
          {
            v26 = (FxRequest_vtbl **)((char *)&_a1->__vftable + v25);
            if ( v26 )
            {
              do
              {
                v27 = (_QWORD *)v26[1];
                if ( !(_BYTE)FxVerifyLeakDetection )
                  FxPoolFree(v26);
                LOBYTE(FxVerifyLeakDetection) = 0;
                v26 = v27;
              }
              while ( v27 );
            }
          }
        }
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          if ( BYTE4(_a1[-1].m_ForwardProgressQueue) )
          {
            _InterlockedDecrement(&_a1->m_Globals->FxVerifyLeakDetection->ObjectCnt);
            if ( _a1->m_Type == 4098
              && _InterlockedExchangeAdd(&_a1->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
            {
              FxVerifyLeakDetection = _a1->m_Globals->FxVerifyLeakDetection;
              _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
            }
          }
        }
        if ( v20 )
        {
          _a1[-1].m_OwnerListEntry2.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'(v20, (unsigned int)FxVerifyLeakDetection);
        }
        SelfDestruct = _a1->SelfDestruct;
        if ( SelfDestruct != FxObject::SelfDestruct )
        {
          _a1->SelfDestruct(_a1);
          return;
        }
        v29 = (FxRequest *(__fastcall *)(FxRequest *, char))_a1->~FxObject;
        if ( (char *)v29 == (char *)FxRegKey::`scalar deleting destructor' )
        {
          _a1->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
          m_Lock = (void *)_a1->m_NPLock.m_Lock;
          if ( m_Lock )
          {
            ZwClose(m_Lock);
            _a1->m_NPLock.m_Lock = 0LL;
          }
          v31 = *(FxObject_vtbl **)&_a1->m_NPLock.m_DbgFlagIsInitialized;
          _a1->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
          if ( v31 )
          {
            FxPoolFree(v31);
            *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = 0LL;
          }
          FxObject::~FxObject(_a1);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            _a1 = (FxRequest *)((char *)_a1 - 48);
          if ( !_a1 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
          {
LABEL_52:
            m_InternalContext = (FX_POOL_TRACKER *)_a1[-1].m_InternalContext;
            if ( *(_BYTE *)(*(_QWORD *)&_a1[-1].m_Presented + 264LL) )
            {
              if ( FxIsPagedPoolType(m_InternalContext->PoolType) )
                FxPoolRemovePagedAllocateTracker(m_InternalContext);
              else
                FxPoolRemoveNonPagedAllocateTracker(m_InternalContext);
              memset(m_InternalContext, 0, m_InternalContext->Size + 64);
            }
            v33 = m_InternalContext;
            goto LABEL_54;
          }
        }
        else
        {
          if ( v29 == FxRequest::`scalar deleting destructor' )
          {
            _a1->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
            m_AllocatedMdl = _a1->m_AllocatedMdl;
            if ( m_AllocatedMdl )
            {
              if ( _a1->m_Globals->FxVerifierOn )
                FxMdlFreeDebug(_a1->m_Globals, _a1->m_AllocatedMdl);
              else
                IoFreeMdl(m_AllocatedMdl);
            }
            m_RequestContext = (FxObject *)_a1->m_RequestContext;
            m_Irp = _a1->m_Irp.m_Irp;
            if ( m_RequestContext )
            {
              if ( m_Irp )
                ((void (__fastcall *)(FxObject *, FxRequest *))m_RequestContext->AddRefOverride)(m_RequestContext, _a1);
              v94 = (FxObject *)_a1->m_RequestContext;
              if ( v94 )
                ((void (__fastcall *)(FxObject *, __int64))v94->SelfDestruct)(v94, 1LL);
            }
            if ( m_Irp && _a1->m_IrpAllocation == 1 )
              IoFreeIrp(_a1->m_Irp.m_Irp);
            m_Timer = _a1->m_Timer;
            if ( m_Timer )
              FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)SelfDestruct);
            _a1->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            {
              v95 = (FxVerifierLock *)_a1[-1].m_ForwardProgressList.Flink;
              if ( v95 )
              {
                FxVerifierLock::`scalar deleting destructor'(v95, (unsigned int)SelfDestruct);
                _a1[-1].m_ForwardProgressList.Flink = 0LL;
              }
            }
            _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
            FxObject::~FxObject(_a1);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              _a1 = (FxRequest *)((char *)_a1 - 48);
            FxPoolFree(_a1);
            return;
          }
          if ( (char *)v29 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
          {
            v29(_a1, 1);
            return;
          }
          _a1->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
          *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
          FxObject::~FxObject(_a1);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            _a1 = (FxRequest *)((char *)_a1 - 48);
          if ( !_a1 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
            goto LABEL_52;
        }
        v33 = (FX_POOL_TRACKER *)_a1;
LABEL_54:
        ExFreePoolWithTag(v33, 0);
        return;
      }
LABEL_310:
      FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(_a1->m_Globals->Driver->m_DisposeList, _a1);
      return;
    }
    if ( (char *)Release == (char *)FxRequest::Release )
    {
      m_Reserved = _a1->m_Reserved;
      m_IrpAllocation = _a1->m_IrpAllocation;
      m_CanComplete = _a1->m_CanComplete;
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        v96 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
        if ( v96 )
          FxTagTracker::UpdateTagHistory(
            v96,
            0LL,
            1246,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      v37 = _InterlockedDecrement(&_a1->m_Refcnt);
      if ( v37 )
        goto LABEL_58;
      v43 = _a1->m_ObjectFlags;
      if ( (v43 & 0x20) != 0 || (v43 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(_a1, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(_a1->m_Globals->Driver->m_DisposeList, _a1);
        goto LABEL_58;
      }
      if ( (v43 & 0x80u) != 0 )
      {
        v44 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
        v108 = v44;
        if ( v44 )
        {
          FxTagTracker::CheckForAbandondedTags(v44);
          v44 = v108;
        }
      }
      else
      {
        v44 = 0LL;
        v108 = 0LL;
      }
      v45 = _a1->m_ObjectSize;
      if ( v45 && (_a1->m_ObjectFlags & 8) != 0 )
      {
        v46 = (FxRequest_vtbl **)((char *)&_a1->__vftable + v45);
        if ( v46 )
        {
          do
          {
            v47 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *))v46[2];
            if ( v47 )
            {
              v47((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v44);
              v46[2] = 0LL;
            }
            v48 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *))v46[3];
            if ( v48 )
            {
              v48((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v44);
              v46[3] = 0LL;
            }
            v46 = (_QWORD *)v46[1];
          }
          while ( v46 );
          v44 = v108;
        }
        v49 = _a1->m_ObjectSize;
        LOBYTE(FxVerifyLeakDetection) = 1;
        if ( v49 )
        {
          v50 = (FxRequest_vtbl **)((char *)&_a1->__vftable + v49);
          if ( v50 )
          {
            do
            {
              v51 = (_QWORD *)v50[1];
              if ( !(_BYTE)FxVerifyLeakDetection )
                FxPoolFree(v50);
              LOBYTE(FxVerifyLeakDetection) = 0;
              v50 = v51;
            }
            while ( v51 );
            v44 = v108;
          }
        }
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        if ( BYTE4(_a1[-1].m_ForwardProgressQueue) )
        {
          _InterlockedDecrement(&_a1->m_Globals->FxVerifyLeakDetection->ObjectCnt);
          if ( _a1->m_Type == 4098
            && _InterlockedExchangeAdd(&_a1->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
          {
            FxVerifyLeakDetection = _a1->m_Globals->FxVerifyLeakDetection;
            _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
          }
        }
      }
      if ( v44 )
      {
        _a1[-1].m_OwnerListEntry2.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'(v44, (unsigned int)FxVerifyLeakDetection);
      }
      v52 = (FxObject_vtbl *)_a1->__vftable;
      v53 = (void (__fastcall *)(FxRequestFromLookaside *, unsigned int))_a1->SelfDestruct;
      if ( v53 == FxRequestFromLookaside::SelfDestruct )
      {
        v54 = _a1->m_AllocatedMdl;
        m_DeviceBase = _a1->m_DeviceBase;
        _a1->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
        if ( v54 )
        {
          if ( _a1->m_Globals->FxVerifierOn )
            FxMdlFreeDebug(_a1->m_Globals, v54);
          else
            IoFreeMdl(v54);
        }
        v56 = (FxObject *)_a1->m_RequestContext;
        v57 = _a1->m_Irp.m_Irp;
        if ( v56 )
        {
          if ( v57 )
            ((void (__fastcall *)(FxObject *, FxRequest *))v56->AddRefOverride)(v56, _a1);
          v97 = (FxObject *)_a1->m_RequestContext;
          if ( v97 )
            ((void (__fastcall *)(FxObject *, __int64))v97->SelfDestruct)(v97, 1LL);
        }
        if ( v57 && _a1->m_IrpAllocation == 1 )
          IoFreeIrp(_a1->m_Irp.m_Irp);
        v58 = _a1->m_Timer;
        if ( v58 )
          FxRequestTimer::`scalar deleting destructor'(v58, (unsigned int)v52);
        _a1->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          v98 = (FxVerifierLock *)_a1[-1].m_ForwardProgressList.Flink;
          if ( v98 )
          {
            FxVerifierLock::`scalar deleting destructor'(v98, (unsigned int)v52);
            _a1[-1].m_ForwardProgressList.Flink = 0LL;
          }
        }
        _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
        FxObject::~FxObject(_a1);
        if ( _a1->m_ForwardRequestToParent )
        {
          v99 = FxObject::_CleanupPointer(_a1->m_Globals, _a1);
          ExFreePoolWithTag(v99->Base, 0);
        }
        else
        {
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            v59 = (FxRequest *)((char *)_a1 - 48);
          else
            v59 = _a1;
          if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
            FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v59[-1].m_InternalContext);
          v60 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v60 && *(_WORD *)(v60 + 8) == 4354 && *(_BYTE *)(v60 + 1683) )
          {
            v77 = (_SLIST_ENTRY *)v59[-1].m_InternalContext;
            if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
              (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(v77);
            else
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, v77);
          }
          else
          {
            v61 = (_SLIST_ENTRY *)v59[-1].m_InternalContext;
            p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
            ++HIDWORD(p_m_SpinLock[1].m_Lock);
            if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
            {
              ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
              ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v61);
            }
            else
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v61);
            }
          }
        }
        goto LABEL_58;
      }
      if ( (char *)v53 != (char *)FxObject::SelfDestruct )
      {
        ((void (__fastcall *)(FxRequest *))v53)(_a1);
        goto LABEL_58;
      }
      v67 = (FxRequest *(__fastcall *)(FxRequest *, char))v52->~FxObject;
      if ( (char *)v67 == (char *)FxRegKey::`scalar deleting destructor' )
      {
        _a1->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
        v68 = (void *)_a1->m_NPLock.m_Lock;
        if ( v68 )
        {
          ZwClose(v68);
          _a1->m_NPLock.m_Lock = 0LL;
        }
        v69 = *(FxObject_vtbl **)&_a1->m_NPLock.m_DbgFlagIsInitialized;
        _a1->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
        if ( v69 )
        {
          FxPoolFree(v69);
          *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = 0LL;
        }
        FxObject::~FxObject(_a1);
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          p_Blink = (unsigned __int64 *)&_a1[-1].m_OwnerListEntry2.Blink;
        else
          p_Blink = (unsigned __int64 *)_a1;
        if ( !p_Blink )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      }
      else
      {
        if ( v67 == FxRequest::`scalar deleting destructor' )
        {
          _a1->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
          v72 = _a1->m_AllocatedMdl;
          if ( v72 )
          {
            if ( _a1->m_Globals->FxVerifierOn )
              FxMdlFreeDebug(_a1->m_Globals, _a1->m_AllocatedMdl);
            else
              IoFreeMdl(v72);
          }
          v73 = (FxObject *)_a1->m_RequestContext;
          v74 = _a1->m_Irp.m_Irp;
          if ( v73 )
          {
            if ( v74 )
              ((void (__fastcall *)(FxObject *, FxRequest *))v73->AddRefOverride)(v73, _a1);
            v100 = (FxObject *)_a1->m_RequestContext;
            if ( v100 )
              ((void (__fastcall *)(FxObject *, __int64))v100->SelfDestruct)(v100, 1LL);
          }
          if ( v74 && _a1->m_IrpAllocation == 1 )
            IoFreeIrp(_a1->m_Irp.m_Irp);
          v75 = _a1->m_Timer;
          if ( v75 )
            FxRequestTimer::`scalar deleting destructor'(v75, (unsigned int)v52);
          _a1->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            v101 = (FxVerifierLock *)_a1[-1].m_ForwardProgressList.Flink;
            if ( v101 )
            {
              FxVerifierLock::`scalar deleting destructor'(v101, (unsigned int)v52);
              _a1[-1].m_ForwardProgressList.Flink = 0LL;
            }
          }
          _a1->m_NPLock.m_DbgFlagIsInitialized = 0;
          FxObject::~FxObject(_a1);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            v76 = &_a1[-1].m_OwnerListEntry2.Blink;
          else
            v76 = &_a1->__vftable;
          FxPoolFree(v76);
          goto LABEL_58;
        }
        if ( (char *)v67 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
        {
          v67(_a1, 1);
LABEL_58:
          if ( m_Reserved && v37 == 1 && _a1->m_Completed )
          {
            FxIoQueue::ReturnReservedRequest(_a1->m_ForwardProgressQueue, _a1);
          }
          else if ( m_IrpAllocation )
          {
            if ( m_CanComplete )
            {
              if ( v37 == 1 )
              {
                if ( _a1->m_Completed )
                {
                  m_CompletionState = _a1->m_CompletionState;
                  m_IoQueue = _a1->m_IoQueue;
                  v104 = _a1->m_Irp.m_Irp;
                  m_PriorityBoost = _a1->m_PriorityBoost;
                  _a1->m_CompletionState = 0;
                  _a1->m_IoQueue = 0LL;
                  _a1->m_Irp.m_Irp = 0LL;
                  IofCompleteRequest(v104, m_PriorityBoost);
                  if ( m_CompletionState == 1 )
                  {
                    FxNonPagedObject::Lock(m_IoQueue, &PreviousIrql, v106);
                    --m_IoQueue->m_TwoPhaseCompletions;
                    --m_IoQueue->m_DriverIoCount;
                    FxIoQueue::DispatchInternalEvents(m_IoQueue, PreviousIrql);
                  }
                }
              }
            }
          }
          return;
        }
        _a1->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
        *(_QWORD *)&_a1->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
        FxObject::~FxObject(_a1);
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          p_Blink = (unsigned __int64 *)&_a1[-1].m_OwnerListEntry2.Blink;
        else
          p_Blink = (unsigned __int64 *)_a1;
        if ( !p_Blink )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      }
      if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
      {
        v71 = (FX_POOL_TRACKER *)*(p_Blink - 2);
        if ( *(_BYTE *)(*(p_Blink - 1) + 264) )
        {
          if ( FxIsPagedPoolType(v71->PoolType) )
            FxPoolRemovePagedAllocateTracker(v71);
          else
            FxPoolRemoveNonPagedAllocateTracker(v71);
          memset(v71, 0, v71->Size + 64);
        }
        ExFreePoolWithTag(v71, 0);
      }
      else
      {
        ExFreePoolWithTag(p_Blink, 0);
      }
      goto LABEL_58;
    }
    if ( (char *)Release != (char *)FxMemoryObject::Release )
    {
      Release(_a1, 0LL, 1246LL, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      return;
    }
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
    {
      v107 = (FxTagTracker *)_a1[-1].m_OwnerListEntry2.Blink;
      if ( v107 )
        FxTagTracker::UpdateTagHistory(
          v107,
          0LL,
          1246,
          "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
          TagRelease,
          _a1->m_Refcnt - 1);
    }
    if ( _InterlockedExchangeAdd(&_a1->m_Refcnt, 0xFFFFFFFF) == 1 )
    {
      v38 = _a1->m_ObjectFlags;
      if ( (v38 & 0x20) == 0 && ((v38 & 0x10) == 0 || !KeGetCurrentIrql()) )
      {
        FxObject::ProcessDestroy(_a1);
        return;
      }
      goto LABEL_310;
    }
  }
  else
  {
    while ( 1 )
    {
      v63 = (unsigned __int64)&v15[-5].Blink;
      v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v15[-1]);
      if ( WORD1(v15[-3].Flink) != 1 )
      {
        switch ( WORD1(v15[-3].Flink) )
        {
          case 5:
            v66 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v15[-5].Blink, v64, 0);
            goto LABEL_139;
          case 7:
            v66 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v15[-5].Blink, v64, 0);
            goto LABEL_139;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v15[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)(v63 + 56), v64);
            goto LABEL_140;
        }
      }
      v112 = v64;
      if ( (*(_WORD *)(v63 + 24) & 0x200) != 0 )
      {
        v81 = *(_FX_DRIVER_GLOBALS **)(v63 + 16);
        if ( v81->FxVerboseOn )
        {
          v82 = (const void *)(v63 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v63 + 10) )
            v82 = 0LL;
          WPP_IFR_SF_qqLL(v81, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v15[-5].Blink, v82, 1u, 3u);
        }
        if ( *(char *)(v63 + 24) < 0 )
          *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v15[-6]) + v63 - 32) = 3;
      }
      *(_WORD *)(v63 + 26) = 3;
      if ( (*(_WORD *)(v63 + 24) & 0x200) != 0 )
      {
        v83 = *(_FX_DRIVER_GLOBALS **)(v63 + 16);
        if ( v83->FxVerboseOn )
        {
          v84 = (const void *)(v63 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v63 + 10) )
            v84 = 0LL;
          WPP_IFR_SF_qqLL(v83, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v15[-5].Blink, v84, 3u, 4u);
        }
        if ( *(char *)(v63 + 24) < 0 )
          *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v15[-6]) + v63 - 32) = 4;
      }
      *(_WORD *)(v63 + 26) = 4;
      if ( FxObject::DisposeChildrenWorker((FxObject *)&v15[-5].Blink, FxObjectStateDeferedDisposing, v64, 0) )
      {
        v65 = *(_WORD *)(v63 + 24);
        if ( (v65 & 0x104) == 0x104 )
        {
          FxObject::DeletedAndDisposedWorkerLocked((FxObject *)&v15[-5].Blink, v64, 0);
        }
        else
        {
          if ( (v65 & 0x200) != 0 )
          {
            v85 = *(_FX_DRIVER_GLOBALS **)(v63 + 16);
            if ( v85->FxVerboseOn )
            {
              v86 = (const void *)(v63 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v63 + 10) )
                v86 = 0LL;
              WPP_IFR_SF_qqLL(
                v85,
                5u,
                0x14u,
                0xAu,
                WPP_FxObject_hpp_Traceguids,
                &v15[-5].Blink,
                v86,
                *(unsigned __int16 *)(v63 + 26),
                2u);
            }
            if ( *(char *)(v63 + 24) < 0 )
              *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v15[-6]) + v63 - 32) = 2;
          }
          *(_WORD *)(v63 + 26) = 2;
        }
        v66 = 1;
      }
      else
      {
        v66 = 0;
      }
LABEL_139:
      if ( !v66 )
        break;
LABEL_140:
      v15 = v15->Flink;
      if ( v15 == p_m_ChildListHead )
        goto LABEL_14;
    }
    v87 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(p_m_Lock, v87);
  }
}

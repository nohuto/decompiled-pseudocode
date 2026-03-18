/*
 * XREFs of imp_WdfRegistryClose @ 0x1C0032140
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
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
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfRegistryClose(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Key)
{
  FxRegKey *v2; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *m_Key; // rcx
  FxRegKey *_a1; // rbx
  void (__fastcall *DeleteObject)(FxObject *); // rax
  KIRQL v8; // al
  KIRQL v9; // si
  int m_ObjectState; // eax
  FxObject *v11; // rdi
  KIRQL v12; // r14
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  char v17; // al
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v20; // rsi
  unsigned __int16 v21; // ax
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  unsigned int v23; // r8d
  __int64 (__fastcall *Release)(FxObject *, volatile signed __int32 *, __int64, const char *); // rax
  unsigned __int16 v25; // cx
  FxTagTracker *v26; // r14
  unsigned __int16 v27; // cx
  _QWORD *j; // rsi
  void (__fastcall *v29)(unsigned __int64); // rax
  void (__fastcall *v30)(unsigned __int64); // rax
  unsigned __int16 v31; // ax
  _QWORD *v32; // rcx
  _QWORD *v33; // rsi
  void (__fastcall *SelfDestruct)(FxObject *, unsigned int); // rdx
  FxRequest *(__fastcall *v35)(FxRequest *, char); // rax
  void *v36; // rcx
  MxPagedLock *m_Lock; // rcx
  FX_POOL_TRACKER *v38; // rdi
  FX_POOL_TRACKER *v39; // rcx
  char v40; // r14
  char v41; // bp
  char v42; // r12
  signed __int32 v43; // esi
  unsigned __int16 v44; // ax
  _MDL *v45; // rcx
  _LIST_ENTRY *v46; // rcx
  __int64 v47; // rdi
  FxRequestTimer *v48; // rcx
  unsigned __int16 v49; // cx
  FxTagTracker *v50; // r8
  unsigned __int16 v51; // cx
  _QWORD *v52; // r15
  void (__fastcall *v53)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *); // rax
  void (__fastcall *v54)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *); // rax
  unsigned __int16 v55; // ax
  _QWORD *v56; // rcx
  _QWORD *v57; // r15
  FxRegKey_vtbl *v58; // rdx
  void (__fastcall *v59)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v60; // rcx
  FxDeviceBase *m_DeviceBase; // rdi
  _LIST_ENTRY *v62; // rcx
  __int64 v63; // r15
  FxRequestTimer *v64; // rcx
  FxRegKey *v65; // r15
  __int64 v66; // rax
  _SLIST_ENTRY *v67; // r15
  MxLock *p_m_SpinLock; // rdi
  unsigned __int64 v69; // r14
  KIRQL v70; // r12
  __int16 v71; // cx
  unsigned __int8 v72; // al
  FxRequest *(__fastcall *v73)(FxRequest *, char); // rax
  void *v74; // rcx
  MxPagedLock *v75; // rcx
  _LIST_ENTRY **p_Blink; // rax
  FX_POOL_TRACKER *v77; // rdi
  _SLIST_ENTRY *v78; // r15
  FxObject *m_ParentObject; // rcx
  _MDL *v80; // rcx
  _LIST_ENTRY *v81; // rcx
  __int64 v82; // rdi
  FxRequestTimer *v83; // rcx
  _QWORD *v84; // rcx
  unsigned __int8 CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v86; // rcx
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *v88; // rcx
  const void *v89; // rdx
  _FX_DRIVER_GLOBALS *v90; // rcx
  const void *v91; // rdx
  _FX_DRIVER_GLOBALS *v92; // rcx
  const void *v93; // rdx
  KIRQL v94; // di
  unsigned __int16 m_ObjectSize; // ax
  char *i; // rdi
  void (__fastcall *v97)(unsigned __int64); // rax
  _FX_DRIVER_GLOBALS *v98; // rcx
  const void *v99; // rdx
  FxTagTracker *v100; // rcx
  _LIST_ENTRY *v101; // rcx
  FxVerifierLock *Next; // rcx
  FxTagTracker *v103; // rcx
  _LIST_ENTRY *v104; // rcx
  FxVerifierLock *v105; // rcx
  FX_POOL_HEADER *v106; // rax
  _LIST_ENTRY *v107; // rcx
  FxVerifierLock *v108; // rcx
  char v109; // di
  FxIoQueue *v110; // rsi
  _IRP *v111; // rcx
  CCHAR v112; // dl
  unsigned __int8 v113; // r8
  unsigned __int8 v114; // r8
  unsigned __int16 v115; // r9
  FxTagTracker *v116; // rcx
  FxTagTracker *v117; // [rsp+50h] [rbp-48h]
  FxRegKey *pKey; // [rsp+58h] [rbp-40h] BYREF
  ULONG_PTR retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+A8h] [rbp+10h] BYREF
  KIRQL v121; // [rsp+B0h] [rbp+18h]
  KIRQL v122; // [rsp+B8h] [rbp+20h]

  if ( !Key )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1006uLL);
  v2 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Key & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxRegKey *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4102 )
  {
    pKey = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pKey, (void *)Key, 0x1006u, Offset);
    v2 = pKey;
  }
  m_Globals = v2->FxPagedObject::FxObject::m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      FxVerifierDbgBreakPoint(m_Globals);
      return;
    }
  }
  m_Key = v2->m_Key;
  v2->m_Key = 0LL;
  ZwClose(m_Key);
  _a1 = pKey;
  DeleteObject = pKey->DeleteObject;
  if ( DeleteObject != FxObject::DeleteObject )
  {
    DeleteObject(pKey);
    return;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&pKey->m_SpinLock.m_Lock);
  _a1->m_ObjectFlags |= 4u;
  v9 = v8;
  m_ObjectState = _a1->m_ObjectState;
  if ( m_ObjectState != 1 )
  {
    if ( m_ObjectState != 2 )
    {
      FxObject::TraceDroppedEvent(_a1, FxObjectDroppedEventDeleteObject);
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
      return;
    }
    m_ParentObject = _a1->m_ParentObject;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, _a1) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(_a1, 8u);
        KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
        return;
      }
      _a1->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(_a1, v9, 1u);
    return;
  }
  v11 = _a1->m_ParentObject;
  if ( v11 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&v11->m_SpinLock.m_Lock);
    if ( v11->m_ObjectState != 1 )
    {
      FxObject::TraceDroppedEvent(v11, FxObjectDroppedEventRemoveChildObjectInternal);
      KeReleaseSpinLock(&v11->m_SpinLock.m_Lock, v12);
      FxObject::SetObjectStateLocked(_a1, 7u);
      KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
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
    KeReleaseSpinLock(&v11->m_SpinLock.m_Lock, v12);
    _a1->m_ParentObject = 0LL;
  }
  m_ObjectFlags = _a1->m_ObjectFlags;
  v121 = v9;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v9 )
    goto LABEL_203;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    v86 = _a1->FxPagedObject::FxObject::m_Globals;
    if ( v86->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !_a1->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(v86, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, _a2, _a1->m_ObjectState, 9u);
    }
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_Lock) - 32) = 9;
  }
  v17 = _a1->m_ObjectFlags;
  _a1->m_ObjectState = 9;
  if ( (v17 & 0x20) != 0 )
  {
    if ( v9 )
      goto LABEL_203;
  }
  v18 = _a1->m_ChildListHead.Flink;
  p_m_ChildListHead = &_a1->m_ChildListHead;
  if ( v18 != &_a1->m_ChildListHead )
  {
    while ( !v9 || ((__int64)v18[-3].Flink & 0x10) == 0 )
    {
      v18 = v18->Flink;
      if ( v18 == p_m_ChildListHead )
        goto LABEL_20;
    }
LABEL_203:
    FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
    return;
  }
LABEL_20:
  KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v9);
  v20 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_21:
    if ( (_a1->m_ObjectFlags & 0x800) == 0 || _a1->Dispose(_a1) )
    {
      v21 = _a1->m_ObjectFlags;
      if ( (v21 & 0x400) != 0 && (v21 & 8) != 0 )
      {
        m_ObjectSize = _a1->m_ObjectSize;
        if ( m_ObjectSize )
        {
          for ( i = (char *)_a1 + m_ObjectSize; i; i = (char *)*((_QWORD *)i + 1) )
          {
            v97 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)i + 2);
            if ( v97 )
            {
              v97((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              *((_QWORD *)i + 2) = 0LL;
            }
          }
        }
        _a1->m_ObjectFlags &= ~0x400u;
      }
    }
    if ( (_a1->m_ObjectFlags & 0x200) != 0 )
    {
      v98 = _a1->FxPagedObject::FxObject::m_Globals;
      if ( v98->FxVerboseOn )
      {
        v99 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !_a1->m_ObjectSize )
          v99 = 0LL;
        WPP_IFR_SF_qqLL(v98, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, _a1, v99, _a1->m_ObjectState, 0xAu);
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_Lock) - 32) = 10;
    }
    _a1->m_ObjectState = 10;
    FxObject::DestroyChildren(_a1);
    Release = (__int64 (__fastcall *)(FxObject *, volatile signed __int32 *, __int64, const char *))_a1->Release;
    if ( Release == FxObject::Release )
    {
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        v100 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
        if ( v100 )
          FxTagTracker::UpdateTagHistory(
            v100,
            0LL,
            1246,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      if ( _InterlockedDecrement(&_a1->m_Refcnt) )
        return;
      v25 = _a1->m_ObjectFlags;
      if ( (v25 & 0x20) == 0 && ((v25 & 0x10) == 0 || !KeGetCurrentIrql()) )
      {
        if ( (v25 & 0x80u) != 0 )
        {
          v26 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
          if ( v26 )
            FxTagTracker::CheckForAbandondedTags((FxTagTracker *)_a1[-1].m_ChildEntry.Blink);
        }
        else
        {
          v26 = 0LL;
        }
        v27 = _a1->m_ObjectSize;
        if ( v27 && (_a1->m_ObjectFlags & 8) != 0 )
        {
          for ( j = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v27); j; j = (_QWORD *)j[1] )
          {
            v29 = (void (__fastcall *)(unsigned __int64))j[2];
            if ( v29 )
            {
              v29((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              j[2] = 0LL;
            }
            v30 = (void (__fastcall *)(unsigned __int64))j[3];
            if ( v30 )
            {
              v30((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
              j[3] = 0LL;
            }
          }
          v31 = _a1->m_ObjectSize;
          LOBYTE(FxVerifyLeakDetection) = 1;
          if ( v31 )
          {
            v32 = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v31);
            if ( v32 )
            {
              do
              {
                v33 = (_QWORD *)v32[1];
                if ( !(_BYTE)FxVerifyLeakDetection )
                  FxPoolFree(v32);
                LOBYTE(FxVerifyLeakDetection) = 0;
                v32 = v33;
              }
              while ( v33 );
            }
          }
        }
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          if ( BYTE4(_a1[-1].m_Lock) )
          {
            _InterlockedDecrement(&_a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->ObjectCnt);
            if ( _a1->m_Type == 4098
              && _InterlockedExchangeAdd(
                   &_a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->DeviceCnt,
                   0xFFFFFFFF) != 1 )
            {
              FxVerifyLeakDetection = _a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection;
              _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
            }
          }
        }
        if ( v26 )
        {
          _a1[-1].m_ChildEntry.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'(v26, (unsigned int)FxVerifyLeakDetection);
        }
        SelfDestruct = (void (__fastcall *)(FxObject *, unsigned int))_a1->SelfDestruct;
        if ( SelfDestruct != FxObject::SelfDestruct )
        {
          _a1->SelfDestruct(_a1);
          return;
        }
        v35 = (FxRequest *(__fastcall *)(FxRequest *, char))_a1->~FxObject;
        if ( (char *)v35 == (char *)FxRegKey::`scalar deleting destructor' )
        {
          _a1->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
          v36 = _a1->m_Key;
          if ( v36 )
          {
            ZwClose(v36);
            _a1->m_Key = 0LL;
          }
          m_Lock = _a1->m_Lock;
          _a1->__vftable = (FxRegKey_vtbl *)FxPagedObject::`vftable';
          if ( m_Lock )
          {
            FxPoolFree(m_Lock);
            _a1->m_Lock = 0LL;
          }
          FxObject::~FxObject(_a1, (unsigned int)SelfDestruct, v23);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            _a1 = (FxRegKey *)((char *)_a1 - 48);
          if ( !_a1 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
          {
LABEL_59:
            v38 = (FX_POOL_TRACKER *)_a1[-1].m_Key;
            if ( _a1[-1].m_Globals->FxPoolTrackingOn )
            {
              if ( FxIsPagedPoolType(v38->PoolType) )
                FxPoolRemovePagedAllocateTracker(v38);
              else
                FxPoolRemoveNonPagedAllocateTracker(v38);
              memset(v38, 0, v38->Size + 64);
            }
            v39 = v38;
            goto LABEL_61;
          }
        }
        else
        {
          if ( v35 == FxRequest::`scalar deleting destructor' )
          {
            _a1->__vftable = (FxRegKey_vtbl *)FxRequestBase::`vftable';
            v45 = (_MDL *)_a1[1].m_Key;
            if ( v45 )
            {
              if ( _a1->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
                FxMdlFreeDebug(_a1->FxPagedObject::FxObject::m_Globals, (_MDL *)_a1[1].m_Key);
              else
                IoFreeMdl(v45);
            }
            v46 = _a1[1].m_ChildListHead.Blink;
            v47 = *(_QWORD *)&_a1[1].m_ObjectFlags;
            if ( v46 )
            {
              if ( v47 )
                ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))v46->Flink[1].Blink)(v46, _a1);
              v101 = _a1[1].m_ChildListHead.Blink;
              if ( v101 )
                ((void (__fastcall *)(_LIST_ENTRY *, __int64))v101->Flink->Flink)(v101, 1LL);
            }
            if ( v47 && BYTE5(_a1[1].m_ChildEntry.Blink) == 1 )
              IoFreeIrp(*(PIRP *)&_a1[1].m_ObjectFlags);
            v48 = *(FxRequestTimer **)&_a1[1].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v48 )
              FxRequestTimer::`scalar deleting destructor'(v48, (unsigned int)SelfDestruct);
            _a1->__vftable = (FxRegKey_vtbl *)FxNonPagedObject::`vftable';
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            {
              Next = (FxVerifierLock *)_a1[-1].m_DisposeSingleEntry.Next;
              if ( Next )
              {
                FxVerifierLock::`scalar deleting destructor'(Next, (unsigned int)SelfDestruct);
                _a1[-1].m_DisposeSingleEntry.Next = 0LL;
              }
            }
            LOBYTE(_a1->m_Lock) = 0;
            FxObject::~FxObject(_a1, (unsigned int)SelfDestruct, v23);
            if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
              _a1 = (FxRegKey *)((char *)_a1 - 48);
            FxPoolFree(_a1);
            return;
          }
          if ( (char *)v35 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
          {
            v35((FxRequest *)_a1, 1);
            return;
          }
          _a1->__vftable = (FxRegKey_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
          _a1->m_Lock = (MxPagedLock *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
          FxObject::~FxObject(_a1, (unsigned int)SelfDestruct, v23);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            _a1 = (FxRegKey *)((char *)_a1 - 48);
          if ( !_a1 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
          if ( ((unsigned __int16)_a1 & 0xFFF) != 0 )
            goto LABEL_59;
        }
        v39 = (FX_POOL_TRACKER *)_a1;
LABEL_61:
        ExFreePoolWithTag(v39, 0);
        return;
      }
LABEL_321:
      FxObject::SetObjectStateLocked(_a1, 0xBu);
      FxDisposeList::Add(_a1->FxPagedObject::FxObject::m_Globals->Driver->m_DisposeList, _a1);
      return;
    }
    if ( (char *)Release == (char *)FxRequest::Release )
    {
      v40 = BYTE2(_a1[2].m_Device);
      v41 = BYTE5(_a1[1].m_ChildEntry.Blink);
      v42 = BYTE6(_a1[1].m_Lock);
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        v103 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
        if ( v103 )
          FxTagTracker::UpdateTagHistory(
            v103,
            0LL,
            1246,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            _a1->m_Refcnt - 1);
      }
      v43 = _InterlockedDecrement(&_a1->m_Refcnt);
      if ( v43 )
        goto LABEL_65;
      v49 = _a1->m_ObjectFlags;
      if ( (v49 & 0x20) != 0 || (v49 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(_a1, 0xBu);
        FxDisposeList::Add(_a1->FxPagedObject::FxObject::m_Globals->Driver->m_DisposeList, _a1);
        goto LABEL_65;
      }
      if ( (v49 & 0x80u) != 0 )
      {
        v50 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
        v117 = v50;
        if ( v50 )
        {
          FxTagTracker::CheckForAbandondedTags(v50);
          v50 = v117;
        }
      }
      else
      {
        v50 = 0LL;
        v117 = 0LL;
      }
      v51 = _a1->m_ObjectSize;
      if ( v51 && (_a1->m_ObjectFlags & 8) != 0 )
      {
        v52 = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v51);
        if ( v52 )
        {
          do
          {
            v53 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *))v52[2];
            if ( v53 )
            {
              v53((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v50);
              v52[2] = 0LL;
            }
            v54 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, FxTagTracker *))v52[3];
            if ( v54 )
            {
              v54((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL, FxVerifyLeakDetection, v50);
              v52[3] = 0LL;
            }
            v52 = (_QWORD *)v52[1];
          }
          while ( v52 );
          v50 = v117;
        }
        v55 = _a1->m_ObjectSize;
        LOBYTE(FxVerifyLeakDetection) = 1;
        if ( v55 )
        {
          v56 = (FxRegKey_vtbl **)((char *)&_a1->__vftable + v55);
          if ( v56 )
          {
            do
            {
              v57 = (_QWORD *)v56[1];
              if ( !(_BYTE)FxVerifyLeakDetection )
                FxPoolFree(v56);
              LOBYTE(FxVerifyLeakDetection) = 0;
              v56 = v57;
            }
            while ( v57 );
            v50 = v117;
          }
        }
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
      {
        if ( BYTE4(_a1[-1].m_Lock) )
        {
          _InterlockedDecrement(&_a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->ObjectCnt);
          if ( _a1->m_Type == 4098
            && _InterlockedExchangeAdd(
                 &_a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->DeviceCnt,
                 0xFFFFFFFF) != 1 )
          {
            FxVerifyLeakDetection = _a1->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection;
            _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
          }
        }
      }
      if ( v50 )
      {
        _a1[-1].m_ChildEntry.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'(v50, (unsigned int)FxVerifyLeakDetection);
      }
      v58 = _a1->__vftable;
      v59 = (void (__fastcall *)(FxRequestFromLookaside *, unsigned int))_a1->SelfDestruct;
      if ( v59 == FxRequestFromLookaside::SelfDestruct )
      {
        v60 = (_MDL *)_a1[1].m_Key;
        m_DeviceBase = _a1->m_DeviceBase;
        _a1->__vftable = (FxRegKey_vtbl *)FxRequestBase::`vftable';
        if ( v60 )
        {
          if ( _a1->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
            FxMdlFreeDebug(_a1->FxPagedObject::FxObject::m_Globals, v60);
          else
            IoFreeMdl(v60);
        }
        v62 = _a1[1].m_ChildListHead.Blink;
        v63 = *(_QWORD *)&_a1[1].m_ObjectFlags;
        if ( v62 )
        {
          if ( v63 )
            ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))v62->Flink[1].Blink)(v62, _a1);
          v104 = _a1[1].m_ChildListHead.Blink;
          if ( v104 )
            ((void (__fastcall *)(_LIST_ENTRY *, __int64))v104->Flink->Flink)(v104, 1LL);
        }
        if ( v63 && BYTE5(_a1[1].m_ChildEntry.Blink) == 1 )
          IoFreeIrp(*(PIRP *)&_a1[1].m_ObjectFlags);
        v64 = *(FxRequestTimer **)&_a1[1].m_SpinLock.m_DbgFlagIsInitialized;
        if ( v64 )
          FxRequestTimer::`scalar deleting destructor'(v64, (unsigned int)v58);
        _a1->__vftable = (FxRegKey_vtbl *)FxNonPagedObject::`vftable';
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        {
          v105 = (FxVerifierLock *)_a1[-1].m_DisposeSingleEntry.Next;
          if ( v105 )
          {
            FxVerifierLock::`scalar deleting destructor'(v105, (unsigned int)v58);
            _a1[-1].m_DisposeSingleEntry.Next = 0LL;
          }
        }
        LOBYTE(_a1->m_Lock) = 0;
        FxObject::~FxObject(_a1, (unsigned int)v58, (unsigned int)v50);
        if ( BYTE3(_a1[2].m_Device) )
        {
          v106 = FxObject::_CleanupPointer(_a1->FxPagedObject::FxObject::m_Globals, _a1);
          ExFreePoolWithTag(v106->Base, 0);
        }
        else
        {
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            v65 = (FxRegKey *)((char *)_a1 - 48);
          else
            v65 = _a1;
          if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
            FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v65[-1].m_Key);
          v66 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v66 && *(_WORD *)(v66 + 8) == 4354 && *(_BYTE *)(v66 + 1683) )
          {
            v78 = (_SLIST_ENTRY *)v65[-1].m_Key;
            if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
              (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(v78);
            else
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, v78);
          }
          else
          {
            v67 = (_SLIST_ENTRY *)v65[-1].m_Key;
            p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
            ++HIDWORD(p_m_SpinLock[1].m_Lock);
            if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
            {
              ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
              ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v67);
            }
            else
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v67);
            }
          }
        }
        goto LABEL_65;
      }
      if ( (char *)v59 != (char *)FxObject::SelfDestruct )
      {
        ((void (__fastcall *)(FxRegKey *))v59)(_a1);
        goto LABEL_65;
      }
      v73 = (FxRequest *(__fastcall *)(FxRequest *, char))v58->~FxObject;
      if ( (char *)v73 == (char *)FxRegKey::`scalar deleting destructor' )
      {
        _a1->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
        v74 = _a1->m_Key;
        if ( v74 )
        {
          ZwClose(v74);
          _a1->m_Key = 0LL;
        }
        v75 = _a1->m_Lock;
        _a1->__vftable = (FxRegKey_vtbl *)FxPagedObject::`vftable';
        if ( v75 )
        {
          FxPoolFree(v75);
          _a1->m_Lock = 0LL;
        }
        FxObject::~FxObject(_a1, (unsigned int)v58, (unsigned int)v50);
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          p_Blink = &_a1[-1].m_ChildEntry.Blink;
        else
          p_Blink = (_LIST_ENTRY **)_a1;
        if ( !p_Blink )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      }
      else
      {
        if ( v73 == FxRequest::`scalar deleting destructor' )
        {
          _a1->__vftable = (FxRegKey_vtbl *)FxRequestBase::`vftable';
          v80 = (_MDL *)_a1[1].m_Key;
          if ( v80 )
          {
            if ( _a1->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
              FxMdlFreeDebug(_a1->FxPagedObject::FxObject::m_Globals, (_MDL *)_a1[1].m_Key);
            else
              IoFreeMdl(v80);
          }
          v81 = _a1[1].m_ChildListHead.Blink;
          v82 = *(_QWORD *)&_a1[1].m_ObjectFlags;
          if ( v81 )
          {
            if ( v82 )
              ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))v81->Flink[1].Blink)(v81, _a1);
            v107 = _a1[1].m_ChildListHead.Blink;
            if ( v107 )
              ((void (__fastcall *)(_LIST_ENTRY *, __int64))v107->Flink->Flink)(v107, 1LL);
          }
          if ( v82 && BYTE5(_a1[1].m_ChildEntry.Blink) == 1 )
            IoFreeIrp(*(PIRP *)&_a1[1].m_ObjectFlags);
          v83 = *(FxRequestTimer **)&_a1[1].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v83 )
            FxRequestTimer::`scalar deleting destructor'(v83, (unsigned int)v58);
          _a1->__vftable = (FxRegKey_vtbl *)FxNonPagedObject::`vftable';
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          {
            v108 = (FxVerifierLock *)_a1[-1].m_DisposeSingleEntry.Next;
            if ( v108 )
            {
              FxVerifierLock::`scalar deleting destructor'(v108, (unsigned int)v58);
              _a1[-1].m_DisposeSingleEntry.Next = 0LL;
            }
          }
          LOBYTE(_a1->m_Lock) = 0;
          FxObject::~FxObject(_a1, (unsigned int)v58, (unsigned int)v50);
          if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
            v84 = &_a1[-1].m_ChildEntry.Blink;
          else
            v84 = &_a1->__vftable;
          FxPoolFree(v84);
          goto LABEL_65;
        }
        if ( (char *)v73 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
        {
          v73((FxRequest *)_a1, 1);
LABEL_65:
          if ( v40 && v43 == 1 && BYTE6(_a1[1].m_ChildEntry.Blink) )
          {
            FxIoQueue::ReturnReservedRequest((FxIoQueue *)_a1[2].m_ChildEntry.Blink, (FxRequest *)_a1);
          }
          else if ( v41 )
          {
            if ( v42 )
            {
              if ( v43 == 1 )
              {
                if ( BYTE6(_a1[1].m_ChildEntry.Blink) )
                {
                  v109 = BYTE5(_a1[1].m_Lock);
                  v110 = (FxIoQueue *)_a1[1].m_Globals;
                  v111 = *(_IRP **)&_a1[1].m_ObjectFlags;
                  v112 = BYTE4(_a1[1].m_Lock);
                  BYTE5(_a1[1].m_Lock) = 0;
                  _a1[1].m_Globals = 0LL;
                  *(_QWORD *)&_a1[1].m_ObjectFlags = 0LL;
                  IofCompleteRequest(v111, v112);
                  if ( v109 == 1 )
                  {
                    FxNonPagedObject::Lock(v110, &PreviousIrql, v113);
                    --v110->m_TwoPhaseCompletions;
                    --v110->m_DriverIoCount;
                    FxIoQueue::DispatchInternalEvents(v110, PreviousIrql, v114, v115);
                  }
                }
              }
            }
          }
          return;
        }
        _a1->__vftable = (FxRegKey_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
        _a1->m_Lock = (MxPagedLock *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
        FxObject::~FxObject(_a1, (unsigned int)v58, (unsigned int)v50);
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
          p_Blink = &_a1[-1].m_ChildEntry.Blink;
        else
          p_Blink = (_LIST_ENTRY **)_a1;
        if ( !p_Blink )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      }
      if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
      {
        v77 = (FX_POOL_TRACKER *)*(p_Blink - 2);
        if ( LOBYTE((*(p_Blink - 1))[16].Blink) )
        {
          if ( FxIsPagedPoolType(v77->PoolType) )
            FxPoolRemovePagedAllocateTracker(v77);
          else
            FxPoolRemoveNonPagedAllocateTracker(v77);
          memset(v77, 0, v77->Size + 64);
        }
        ExFreePoolWithTag(v77, 0);
      }
      else
      {
        ExFreePoolWithTag(p_Blink, 0);
      }
      goto LABEL_65;
    }
    if ( (char *)Release != (char *)FxMemoryObject::Release )
    {
      Release(_a1, 0LL, 1246LL, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      return;
    }
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
    {
      v116 = (FxTagTracker *)_a1[-1].m_ChildEntry.Blink;
      if ( v116 )
        FxTagTracker::UpdateTagHistory(
          v116,
          0LL,
          1246,
          "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
          TagRelease,
          _a1->m_Refcnt - 1);
    }
    if ( _InterlockedExchangeAdd(&_a1->m_Refcnt, 0xFFFFFFFF) == 1 )
    {
      v44 = _a1->m_ObjectFlags;
      if ( (v44 & 0x20) == 0 && ((v44 & 0x10) == 0 || !KeGetCurrentIrql()) )
      {
        FxObject::ProcessDestroy(_a1, FxVerifyLeakDetection, v23);
        return;
      }
      goto LABEL_321;
    }
  }
  else
  {
    while ( 1 )
    {
      v69 = (unsigned __int64)&v20[-5].Blink;
      v70 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v20[-1]);
      if ( WORD1(v20[-3].Flink) != 1 )
      {
        switch ( WORD1(v20[-3].Flink) )
        {
          case 5:
            v72 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v20[-5].Blink, v70, 0);
            goto LABEL_146;
          case 7:
            v72 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v20[-5].Blink, v70, 0);
            goto LABEL_146;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v20[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)(v69 + 56), v70);
            goto LABEL_147;
        }
      }
      v122 = v70;
      if ( (*(_WORD *)(v69 + 24) & 0x200) != 0 )
      {
        v88 = *(_FX_DRIVER_GLOBALS **)(v69 + 16);
        if ( v88->FxVerboseOn )
        {
          v89 = (const void *)(v69 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v69 + 10) )
            v89 = 0LL;
          WPP_IFR_SF_qqLL(v88, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v20[-5].Blink, v89, 1u, 3u);
        }
        if ( *(char *)(v69 + 24) < 0 )
          *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v20[-6]) + v69 - 32) = 3;
      }
      *(_WORD *)(v69 + 26) = 3;
      if ( (*(_WORD *)(v69 + 24) & 0x200) != 0 )
      {
        v90 = *(_FX_DRIVER_GLOBALS **)(v69 + 16);
        if ( v90->FxVerboseOn )
        {
          v91 = (const void *)(v69 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v69 + 10) )
            v91 = 0LL;
          WPP_IFR_SF_qqLL(v90, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, &v20[-5].Blink, v91, 3u, 4u);
        }
        if ( *(char *)(v69 + 24) < 0 )
          *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v20[-6]) + v69 - 32) = 4;
      }
      *(_WORD *)(v69 + 26) = 4;
      if ( FxObject::DisposeChildrenWorker((FxObject *)&v20[-5].Blink, FxObjectStateDeferedDisposing, v70, 0) )
      {
        v71 = *(_WORD *)(v69 + 24);
        if ( (v71 & 0x104) == 0x104 )
        {
          FxObject::DeletedAndDisposedWorkerLocked((FxObject *)&v20[-5].Blink, v70, 0);
        }
        else
        {
          if ( (v71 & 0x200) != 0 )
          {
            v92 = *(_FX_DRIVER_GLOBALS **)(v69 + 16);
            if ( v92->FxVerboseOn )
            {
              v93 = (const void *)(v69 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v69 + 10) )
                v93 = 0LL;
              WPP_IFR_SF_qqLL(
                v92,
                5u,
                0x14u,
                0xAu,
                WPP_FxObject_hpp_Traceguids,
                &v20[-5].Blink,
                v93,
                *(unsigned __int16 *)(v69 + 26),
                2u);
            }
            if ( *(char *)(v69 + 24) < 0 )
              *(_BYTE *)(_InterlockedIncrement((volatile signed __int32 *)&v20[-6]) + v69 - 32) = 2;
          }
          *(_WORD *)(v69 + 26) = 2;
        }
        v72 = 1;
      }
      else
      {
        v72 = 0;
      }
LABEL_146:
      if ( !v72 )
        break;
LABEL_147:
      v20 = v20->Flink;
      if ( v20 == p_m_ChildListHead )
        goto LABEL_21;
    }
    v94 = KeAcquireSpinLockRaiseToDpc(&_a1->m_SpinLock.m_Lock);
    FxObject::QueueDeferredDisposeLocked(_a1, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v94);
  }
}

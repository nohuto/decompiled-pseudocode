/*
 * XREFs of ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C0003610
 * Callers:
 *     imp_WdfTimerStart @ 0x1C0003500 (imp_WdfTimerStart.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003C900 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003C970 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

__int64 __fastcall FxTimer::Start(FxTimer *this, _LARGE_INTEGER DueTime, unsigned __int8 a3)
{
  BOOLEAN v3; // r14
  char v4; // si
  FxRequest *v6; // rdi
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // r8
  unsigned int v9; // edx
  __int64 m_Mdl_high; // r9
  BOOLEAN v11; // al
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r8
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  unsigned int (__fastcall *Release)(FxObject *, void *, int, const char *); // rax
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v19; // r15
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rbx
  void (__fastcall *v22)(unsigned __int64); // rax
  void (__fastcall *v23)(unsigned __int64); // rax
  unsigned __int16 v24; // ax
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  void (__fastcall *SelfDestruct)(FxObject *); // rdx
  void *(__fastcall *v28)(FxRequest *, unsigned int); // rax
  void *m_Lock; // rcx
  void *v30; // rcx
  FX_POOL_TRACKER *m_InternalContext; // rbx
  _MDL *m_AllocatedMdl; // rcx
  _LIST_ENTRY *m_RequestContext; // rcx
  _LIST_ENTRY *m_Irp; // rbx
  FxRequestTimer *m_Timer; // rcx
  void (__fastcall *m_Callback)(WDFTIMER__ *); // rcx
  const void *_a1; // rcx
  const void *v38; // rcx
  FxVerifierLock *Flink; // rcx
  FxTagTracker *Blink; // rcx
  FxVerifierLock *v41; // rcx
  FxVerifierLock *v42; // rcx
  FxTagTracker *v43; // rcx
  _LIST_ENTRY *v44; // rcx
  FxVerifierLock *v45; // rcx
  unsigned __int8 irql[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v47; // [rsp+48h] [rbp-40h] BYREF
  __int64 v48; // [rsp+50h] [rbp-38h]
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]

  v3 = 0;
  v4 = 0;
  v6 = (FxRequest *)this;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Callback = this[-1].m_Callback) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_Callback, irql, a3);
    v7 = irql[0];
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
    irql[0] = v7;
  }
  if ( BYTE2(v6->m_InternalContext) )
  {
    _a1 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(v6->m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(v6->m_Globals);
  }
  else if ( v6->m_ForwardProgressQueue )
  {
    v38 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6->m_ObjectSize )
      v38 = 0LL;
    WPP_IFR_SF_qq(v6->m_Globals, 2u, 0x12u, 0x10u, WPP_FxTimer_cpp_Traceguids, v38, v6->m_ForwardProgressQueue);
    BYTE1(v6->m_InternalContext) = 1;
  }
  else
  {
    v4 = 1;
  }
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (Flink = (FxVerifierLock *)v6[-1].m_ForwardProgressList.Flink) != 0LL )
    FxVerifierLock::Unlock(Flink, v7, v8);
  else
    KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v7);
  if ( v4 )
  {
    v9 = _InterlockedIncrement(&v6->m_Refcnt);
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
    {
      Blink = (FxTagTracker *)v6[-1].m_OwnerListEntry2.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          Blink,
          v6,
          629,
          "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
          TagAddRef,
          v9);
    }
    m_Mdl_high = HIDWORD(v6->m_OutputBuffer.m_Mdl);
    if ( BYTE4(v6->m_ListEntry.Flink) )
    {
      v47 = 0LL;
      v48 = 0LL;
      if ( (_DWORD)m_Mdl_high == -1 )
        v48 = -1LL;
      else
        v48 = 10000 * m_Mdl_high;
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
              v6->m_CsqContext.Csq,
              (_LARGE_INTEGER)DueTime.QuadPart,
              10000LL * (int)v6->m_CsqContext.Type,
              &v47);
    }
    else
    {
      v11 = KeSetCoalescableTimer(
              (PKTIMER)(&v6->m_ListEntry + 1),
              DueTime,
              v6->m_CsqContext.Type,
              m_Mdl_high,
              (PKDPC)&v6->m_TargetCompletionContext);
    }
    v3 = v11;
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v41 = (FxVerifierLock *)v6[-1].m_ForwardProgressList.Flink) != 0LL )
    {
      FxVerifierLock::Lock(v41, irql, v12);
      v13 = irql[0];
    }
    else
    {
      v13 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
      irql[0] = v13;
    }
    if ( v6->m_ForwardProgressQueue )
      LOBYTE(v6->m_InternalContext) = 1;
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v42 = (FxVerifierLock *)v6[-1].m_ForwardProgressList.Flink) != 0LL )
      FxVerifierLock::Unlock(v42, v13, v14);
    else
      KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v13);
    Release = v6->Release;
    if ( Release != FxObject::Release )
    {
      Release(v6, v6, 646, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
      return v3;
    }
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
    {
      v43 = (FxTagTracker *)v6[-1].m_OwnerListEntry2.Blink;
      if ( v43 )
        FxTagTracker::UpdateTagHistory(
          v43,
          v6,
          646,
          "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
          TagRelease,
          v6->m_Refcnt - 1);
    }
    if ( !_InterlockedDecrement(&v6->m_Refcnt) )
    {
      m_ObjectFlags = v6->m_ObjectFlags;
      if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(v6, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(v6->m_Globals->Driver->m_DisposeList, v6);
        return v3;
      }
      if ( (m_ObjectFlags & 0x80u) != 0 )
      {
        v19 = (FxTagTracker *)v6[-1].m_OwnerListEntry2.Blink;
        if ( v19 )
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v6[-1].m_OwnerListEntry2.Blink);
      }
      else
      {
        v19 = 0LL;
      }
      m_ObjectSize = v6->m_ObjectSize;
      if ( m_ObjectSize && (v6->m_ObjectFlags & 8) != 0 )
      {
        for ( i = (FxRequest_vtbl **)((char *)&v6->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
        {
          v22 = (void (__fastcall *)(unsigned __int64))i[2];
          if ( v22 )
          {
            v22((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[2] = 0LL;
          }
          v23 = (void (__fastcall *)(unsigned __int64))i[3];
          if ( v23 )
          {
            v23((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[3] = 0LL;
          }
        }
        v24 = v6->m_ObjectSize;
        LOBYTE(FxVerifyLeakDetection) = 1;
        if ( v24 )
        {
          v25 = (FxRequest_vtbl **)((char *)&v6->__vftable + v24);
          if ( v25 )
          {
            do
            {
              v26 = (_QWORD *)v25[1];
              if ( !(_BYTE)FxVerifyLeakDetection )
                FxPoolFree(v25);
              LOBYTE(FxVerifyLeakDetection) = 0;
              v25 = v26;
            }
            while ( v26 );
          }
        }
      }
      if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
      {
        if ( BYTE4(v6[-1].m_ForwardProgressQueue) )
        {
          _InterlockedDecrement(&v6->m_Globals->FxVerifyLeakDetection->ObjectCnt);
          if ( v6->m_Type == 4098
            && _InterlockedExchangeAdd(&v6->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
          {
            FxVerifyLeakDetection = v6->m_Globals->FxVerifyLeakDetection;
            _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
          }
        }
      }
      if ( v19 )
      {
        v6[-1].m_OwnerListEntry2.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'(v19, (unsigned int)FxVerifyLeakDetection);
      }
      SelfDestruct = v6->SelfDestruct;
      if ( SelfDestruct != FxObject::SelfDestruct )
      {
        v6->SelfDestruct(v6);
        return v3;
      }
      v28 = (void *(__fastcall *)(FxRequest *, unsigned int))v6->~FxObject;
      if ( (char *)v28 == (char *)FxRegKey::`scalar deleting destructor' )
      {
        v6->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
        m_Lock = (void *)v6->m_NPLock.m_Lock;
        if ( m_Lock )
        {
          ZwClose(m_Lock);
          v6->m_NPLock.m_Lock = 0LL;
        }
        v30 = *(void **)&v6->m_NPLock.m_DbgFlagIsInitialized;
        v6->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
        if ( v30 )
        {
          FxPoolFree(v30);
          *(_QWORD *)&v6->m_NPLock.m_DbgFlagIsInitialized = 0LL;
        }
        FxObject::~FxObject(v6);
        if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
          v6 = (FxRequest *)((char *)v6 - 48);
        if ( !v6 )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        if ( ((unsigned __int16)v6 & 0xFFF) != 0 )
          goto LABEL_53;
      }
      else
      {
        if ( v28 == FxRequest::`scalar deleting destructor' )
        {
          v6->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
          m_AllocatedMdl = v6->m_AllocatedMdl;
          if ( m_AllocatedMdl )
          {
            if ( v6->m_Globals->FxVerifierOn )
              FxMdlFreeDebug(v6->m_Globals, v6->m_AllocatedMdl);
            else
              IoFreeMdl(m_AllocatedMdl);
          }
          m_RequestContext = (_LIST_ENTRY *)v6->m_RequestContext;
          m_Irp = (_LIST_ENTRY *)v6->m_Irp.m_Irp;
          if ( m_RequestContext )
          {
            if ( m_Irp )
              ((void (__fastcall *)(_LIST_ENTRY *, FxRequest *))m_RequestContext->Flink[1].Blink)(m_RequestContext, v6);
            v44 = (_LIST_ENTRY *)v6->m_RequestContext;
            if ( v44 )
              ((void (__fastcall *)(_LIST_ENTRY *, __int64))v44->Flink->Flink)(v44, 1LL);
          }
          if ( m_Irp && v6->m_IrpAllocation == 1 )
            IoFreeIrp(v6->m_Irp.m_Irp);
          m_Timer = v6->m_Timer;
          if ( m_Timer )
            FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)SelfDestruct);
          v6->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
          if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
          {
            v45 = (FxVerifierLock *)v6[-1].m_ForwardProgressList.Flink;
            if ( v45 )
            {
              FxVerifierLock::`scalar deleting destructor'(v45, (unsigned int)SelfDestruct);
              v6[-1].m_ForwardProgressList.Flink = 0LL;
            }
          }
          v6->m_NPLock.m_DbgFlagIsInitialized = 0;
          FxObject::~FxObject(v6);
          if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
            v6 = (FxRequest *)((char *)v6 - 48);
          FxPoolFree(v6);
          return v3;
        }
        if ( (char *)v28 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
        {
          v28(v6, 1u);
          return v3;
        }
        v6->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
        *(_QWORD *)&v6->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
        FxObject::~FxObject(v6);
        if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
          v6 = (FxRequest *)((char *)v6 - 48);
        if ( !v6 )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        if ( ((unsigned __int16)v6 & 0xFFF) != 0 )
        {
LABEL_53:
          m_InternalContext = (FX_POOL_TRACKER *)v6[-1].m_InternalContext;
          if ( *(_BYTE *)(*(_QWORD *)&v6[-1].m_Presented + 264LL) )
          {
            if ( FxIsPagedPoolType(m_InternalContext->PoolType) )
              FxPoolRemovePagedAllocateTracker(m_InternalContext);
            else
              FxPoolRemoveNonPagedAllocateTracker(m_InternalContext);
            memset(m_InternalContext, 0, m_InternalContext->Size + 64);
          }
          ExFreePoolWithTag(m_InternalContext, 0);
          return v3;
        }
      }
      ExFreePoolWithTag(v6, 0);
    }
  }
  return v3;
}

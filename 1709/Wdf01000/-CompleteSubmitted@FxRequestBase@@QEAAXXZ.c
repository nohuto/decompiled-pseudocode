/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005420
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0004F00 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0023958 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0064C74 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C008833C (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088A88 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C003C838 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003C900 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003C970 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003D3F8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C00643E4 (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxRequestFromLookaside *v2; // rbx
  FxIoTarget *m_Target; // rsi
  FxRequestContext *m_RequestContext; // rcx
  FxTagTracker *v5; // r15
  FxRequestContext *v6; // rdi
  void (__fastcall *CopyParameters)(FxIoContext *, FxRequestBase *); // rax
  int v8; // ecx
  _IRP *v9; // r8
  void *UserBuffer; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // r10
  _KEVENT *v12; // rdi
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // r8
  unsigned __int64 v14; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v16; // rcx
  _LIST_ENTRY *Blink; // rax
  _IRP *m_Irp; // rax
  FxIoTarget *v19; // rdx
  void *m_TargetCompletionContext; // r9
  _IO_STATUS_BLOCK IoStatus; // xmm0
  unsigned int (__fastcall *Release)(FxRequest *, void *, int, const char *); // rax
  unsigned __int8 m_CanComplete; // cl
  unsigned __int8 m_IrpAllocation; // r12
  unsigned __int8 m_Reserved; // r13
  signed __int32 v26; // r14d
  int v27; // ecx
  int v28; // ecx
  unsigned __int16 v29; // cx
  FxTagTracker *v30; // r14
  unsigned __int16 v31; // cx
  _QWORD *j; // rdi
  void (__fastcall *v33)(unsigned __int64); // rax
  void (__fastcall *v34)(unsigned __int64); // rax
  unsigned __int16 v35; // ax
  _QWORD *v36; // rcx
  _QWORD *v37; // rdi
  void (__fastcall *v38)(FxObject *); // rdx
  void *(__fastcall *v39)(FxRegKey *, unsigned int); // rax
  void *v40; // rcx
  _QWORD *v41; // rcx
  FX_POOL_TRACKER *v42; // rdi
  unsigned __int16 m_ObjectFlags; // cx
  unsigned __int16 v44; // cx
  _QWORD *i; // rdi
  void (__fastcall *v46)(unsigned __int64); // rax
  void (__fastcall *v47)(unsigned __int64); // rax
  unsigned __int16 v48; // ax
  _QWORD *v49; // rcx
  _QWORD *v50; // rdi
  void (__fastcall *v51)(FxRequestFromLookaside *); // rdx
  void (__fastcall *SelfDestruct)(FxRequestFromLookaside *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequestContext *v55; // rcx
  _IRP *v56; // rsi
  FxRequestTimer *m_Timer; // rcx
  FxRequestFromLookaside *v58; // rsi
  __int64 v59; // rax
  _SLIST_ENTRY *v60; // rsi
  MxLock *p_m_SpinLock; // rdi
  void (__fastcall *v62)(FxObject *); // rdx
  void *(__fastcall *v63)(FxRequest *, unsigned int); // rax
  void *m_Lock; // rcx
  _QWORD *v65; // rcx
  void **p_Blink; // rax
  FX_POOL_TRACKER *v67; // rdi
  _MDL *v68; // rcx
  FxRequestContext *v69; // rcx
  _IRP *v70; // rdi
  FxRequestTimer *v71; // rcx
  _MDL *v72; // rcx
  FxRequestContext *v73; // rcx
  _IRP *v74; // rdi
  FxRequestTimer *v75; // rcx
  _QWORD *v76; // rcx
  _SLIST_ENTRY *m_InternalContext; // rsi
  FxTagTracker *v78; // rcx
  FxRequestContext *v79; // rcx
  FxVerifierLock *Flink; // rcx
  FX_POOL_HEADER *v81; // rax
  unsigned __int8 IsPagedPoolType; // al
  FX_POOL_TRACKER *v83; // rcx
  FxRequestContext *v84; // rcx
  FxVerifierLock *v85; // rcx
  unsigned __int8 v86; // al
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rsi
  _IRP *v89; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v91; // r8
  FxTagTracker *v92; // rcx
  FxRequestContext *v93; // rcx
  FxVerifierLock *v94; // rcx
  char v95; // [rsp+30h] [rbp-88h] BYREF
  int v96; // [rsp+34h] [rbp-84h]
  _IO_STATUS_BLOCK v97; // [rsp+38h] [rbp-80h]
  __int64 v98; // [rsp+48h] [rbp-70h]
  __int64 v99; // [rsp+50h] [rbp-68h]
  __int64 v100; // [rsp+58h] [rbp-60h]
  __int64 v101; // [rsp+60h] [rbp-58h]
  __int64 v102; // [rsp+68h] [rbp-50h]
  __int64 v103; // [rsp+70h] [rbp-48h]
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+0h]
  unsigned __int8 v105; // [rsp+C0h] [rbp+8h]
  unsigned __int8 PreviousIrql; // [rsp+C8h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  v2 = (FxRequestFromLookaside *)this;
  m_Target = this->m_Target;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( this->m_Globals->FxVerifierOn )
  {
    memset(&this->m_Irp.m_Irp->Tail, 0, 0x20uLL);
    FxRequestBase::VerifierClearFormatted(v2);
  }
  m_RequestContext = v2->m_RequestContext;
  v5 = 0LL;
  if ( !m_RequestContext )
  {
    m_Completion = v2->m_CompletionRoutine.m_Completion;
    if ( !m_Completion )
      goto LABEL_29;
    m_Irp = v2->m_Irp.m_Irp;
    v19 = v2->m_Target;
    m_TargetCompletionContext = v2->m_TargetCompletionContext;
    v96 = 255;
    IoStatus = m_Irp->IoStatus;
    v2->m_TargetCompletionContext = 0LL;
    v98 = 0LL;
    v97 = IoStatus;
    v99 = 0LL;
    v100 = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    v103 = 0LL;
    if ( v19->m_ObjectSize )
      v14 = (unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v14 = 0LL;
    if ( v2->m_ObjectSize )
      v16 = (unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v16 = 0LL;
    v2->m_CompletionRoutine.m_Completion = 0LL;
    p_m_CompletionParams = (_WDF_REQUEST_COMPLETION_PARAMS *)&v95;
    goto LABEL_28;
  }
  m_RequestContext->m_CompletionParams.IoStatus = v2->m_Irp.m_Irp->IoStatus;
  v6 = v2->m_RequestContext;
  CopyParameters = (void (__fastcall *)(FxIoContext *, FxRequestBase *))v6->CopyParameters;
  if ( CopyParameters != FxIoContext::CopyParameters )
  {
    CopyParameters((FxIoContext *)v2->m_RequestContext, v2);
    goto LABEL_13;
  }
  v8 = *((unsigned __int8 *)&v6[1].m_CompletionParams.Parameters.Usb + 35);
  if ( v8 != 15 )
  {
    v27 = v8 - 3;
    if ( !v27 || (v28 = v27 - 1) == 0 )
    {
      v6->m_CompletionParams.Parameters.Write.Length = v6->m_CompletionParams.IoStatus.Information;
      goto LABEL_9;
    }
    if ( v28 != 10 )
      goto LABEL_9;
  }
  v6->m_CompletionParams.Parameters.Ioctl.Output.Length = v6->m_CompletionParams.IoStatus.Information;
LABEL_9:
  m_Globals = (_FX_DRIVER_GLOBALS *)v6[1].__vftable;
  if ( m_Globals )
  {
    if ( *((_BYTE *)&v6[1].m_CompletionParams.Parameters.Usb + 32) )
    {
      v9 = v2->m_Irp.m_Irp;
      UserBuffer = v9->UserBuffer;
      if ( UserBuffer )
      {
        memmove(UserBuffer, m_Globals, v9->IoStatus.Information);
        *((_BYTE *)&v6[1].m_CompletionParams.Parameters.Usb + 32) = 0;
      }
    }
  }
LABEL_13:
  m_Completion = v2->m_CompletionRoutine.m_Completion;
  if ( !m_Completion )
    goto LABEL_29;
  v12 = (_KEVENT *)v2->m_TargetCompletionContext;
  p_m_CompletionParams = &v2->m_RequestContext->m_CompletionParams;
  v2->m_TargetCompletionContext = 0LL;
  if ( m_Target->m_ObjectSize )
    v14 = (unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v14 = 0LL;
  m_ObjectSize = v2->m_ObjectSize;
  v16 = (unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
  v2->m_CompletionRoutine.m_Completion = 0LL;
  if ( !m_ObjectSize )
    v16 = 0LL;
  if ( m_Completion != FxIoTarget::_SyncCompletionRoutine )
  {
    m_TargetCompletionContext = v12;
LABEL_28:
    m_Completion((WDFREQUEST__ *)v16, (WDFIOTARGET__ *)v14, p_m_CompletionParams, m_TargetCompletionContext);
    goto LABEL_29;
  }
  LODWORD(v12[1].Header.WaitListHead.Flink) = p_m_CompletionParams->IoStatus.Status;
  Blink = v12[1].Header.WaitListHead.Blink;
  if ( Blink )
    ((void (__fastcall *)(unsigned __int64, unsigned __int64, _WDF_REQUEST_COMPLETION_PARAMS *, _QWORD))Blink)(
      v16,
      v14,
      p_m_CompletionParams,
      *(_QWORD *)&v12[2].Header.Lock);
  KeSetEvent(v12, 0, 0);
LABEL_29:
  Release = (unsigned int (__fastcall *)(FxRequest *, void *, int, const char *))v2->Release;
  if ( Release == FxRequest::Release )
  {
    m_CanComplete = v2->m_CanComplete;
    m_IrpAllocation = v2->m_IrpAllocation;
    m_Reserved = v2->m_Reserved;
    v105 = m_CanComplete;
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
    {
      v78 = (FxTagTracker *)v2[-1].m_OwnerListEntry2.Blink;
      if ( v78 )
        FxTagTracker::UpdateTagHistory(
          v78,
          m_Target,
          530,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp",
          TagRelease,
          v2->m_Refcnt - 1);
      m_CanComplete = v105;
    }
    v26 = _InterlockedDecrement(&v2->m_Refcnt);
    if ( v26 )
      goto LABEL_32;
    m_ObjectFlags = v2->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(v2, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(v2->m_Globals->Driver->m_DisposeList, v2);
LABEL_110:
      m_CanComplete = v105;
LABEL_32:
      if ( m_Reserved && v26 == 1 && v2->m_Completed )
      {
        FxIoQueue::ReturnReservedRequest(v2->m_ForwardProgressQueue, v2);
      }
      else if ( m_IrpAllocation && m_CanComplete && v26 == 1 && v2->m_Completed )
      {
        m_CompletionState = v2->m_CompletionState;
        m_IoQueue = v2->m_IoQueue;
        v89 = v2->m_Irp.m_Irp;
        m_PriorityBoost = v2->m_PriorityBoost;
        v2->m_CompletionState = 0;
        v2->m_IoQueue = 0LL;
        v2->m_Irp.m_Irp = 0LL;
        IofCompleteRequest(v89, m_PriorityBoost);
        if ( m_CompletionState == 1 )
        {
          FxNonPagedObject::Lock(m_IoQueue, &PreviousIrql, v91);
          --m_IoQueue->m_TwoPhaseCompletions;
          --m_IoQueue->m_DriverIoCount;
          FxIoQueue::DispatchInternalEvents(m_IoQueue, PreviousIrql);
        }
      }
      return;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
    {
      v5 = (FxTagTracker *)v2[-1].m_OwnerListEntry2.Blink;
      if ( v5 )
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v2[-1].m_OwnerListEntry2.Blink);
    }
    v44 = v2->m_ObjectSize;
    if ( v44 && (v2->m_ObjectFlags & 8) != 0 )
    {
      for ( i = (FxRequestFromLookaside_vtbl **)((char *)&v2->__vftable + v44); i; i = (_QWORD *)i[1] )
      {
        v46 = (void (__fastcall *)(unsigned __int64))i[2];
        if ( v46 )
        {
          v46((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[2] = 0LL;
        }
        v47 = (void (__fastcall *)(unsigned __int64))i[3];
        if ( v47 )
        {
          v47((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[3] = 0LL;
        }
      }
      v48 = v2->m_ObjectSize;
      LOBYTE(m_Globals) = 1;
      if ( v48 )
      {
        v49 = (FxRequestFromLookaside_vtbl **)((char *)&v2->__vftable + v48);
        if ( v49 )
        {
          do
          {
            v50 = (_QWORD *)v49[1];
            if ( !(_BYTE)m_Globals )
              FxPoolFree(v49);
            LOBYTE(m_Globals) = 0;
            v49 = v50;
          }
          while ( v50 );
        }
      }
    }
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
    {
      if ( BYTE4(v2[-1].m_ForwardProgressQueue) )
      {
        _InterlockedDecrement(&v2->m_Globals->FxVerifyLeakDetection->ObjectCnt);
        if ( v2->m_Type == 4098
          && _InterlockedExchangeAdd(&v2->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
        {
          m_Globals = (_FX_DRIVER_GLOBALS *)v2->m_Globals->FxVerifyLeakDetection;
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)&m_Globals->Linkage.Blink,
            -HIDWORD(m_Globals->Linkage.Flink));
        }
      }
    }
    if ( v5 )
    {
      v2[-1].m_OwnerListEntry2.Blink = 0LL;
      FxTagTracker::`scalar deleting destructor'(v5, (unsigned int)m_Globals);
    }
    v51 = FxRequestFromLookaside::SelfDestruct;
    SelfDestruct = (void (__fastcall *)(FxRequestFromLookaside *))v2->SelfDestruct;
    if ( SelfDestruct == FxRequestFromLookaside::SelfDestruct )
    {
      m_AllocatedMdl = v2->m_AllocatedMdl;
      m_DeviceBase = v2->m_DeviceBase;
      v2->__vftable = (FxRequestFromLookaside_vtbl *)FxRequestBase::`vftable';
      if ( m_AllocatedMdl )
      {
        if ( v2->m_Globals->FxVerifierOn )
          FxMdlFreeDebug(v2->m_Globals, m_AllocatedMdl);
        else
          IoFreeMdl(m_AllocatedMdl);
      }
      v55 = v2->m_RequestContext;
      v56 = v2->m_Irp.m_Irp;
      if ( v55 )
      {
        if ( v56 )
          v55->ReleaseAndRestore(v55, v2);
        v79 = v2->m_RequestContext;
        if ( v79 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v79->~FxRequestContext)(v79, 1LL);
      }
      if ( v56 && v2->m_IrpAllocation == 1 )
        IoFreeIrp(v2->m_Irp.m_Irp);
      m_Timer = v2->m_Timer;
      if ( m_Timer )
        FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v51);
      v2->__vftable = (FxRequestFromLookaside_vtbl *)FxNonPagedObject::`vftable';
      if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
      {
        Flink = (FxVerifierLock *)v2[-1].m_ForwardProgressList.Flink;
        if ( Flink )
        {
          FxVerifierLock::`scalar deleting destructor'(Flink, (unsigned int)v51);
          v2[-1].m_ForwardProgressList.Flink = 0LL;
        }
      }
      v2->m_NPLock.m_DbgFlagIsInitialized = 0;
      FxObject::~FxObject(v2);
      if ( v2->m_ForwardRequestToParent )
      {
        v81 = FxObject::_CleanupPointer(v2->m_Globals, v2);
        ExFreePoolWithTag(v81->Base, 0);
      }
      else
      {
        if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
          v58 = (FxRequestFromLookaside *)((char *)v2 - 48);
        else
          v58 = v2;
        if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
          FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v58[-1].m_InternalContext);
        v59 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
        if ( v59 && *(_WORD *)(v59 + 8) == 4354 && *(_BYTE *)(v59 + 1683) )
        {
          m_InternalContext = (_SLIST_ENTRY *)v58[-1].m_InternalContext;
          if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
            m_CanComplete = v105;
            goto LABEL_32;
          }
          (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
        }
        else
        {
          v60 = (_SLIST_ENTRY *)v58[-1].m_InternalContext;
          p_m_SpinLock = &m_DeviceBase[2].m_SpinLock;
          ++HIDWORD(p_m_SpinLock[1].m_Lock);
          if ( ExQueryDepthSList((PSLIST_HEADER)p_m_SpinLock) >= *(_WORD *)&p_m_SpinLock[1].m_DbgFlagIsInitialized )
          {
            ++*(_DWORD *)&p_m_SpinLock[2].m_DbgFlagIsInitialized;
            ((void (__fastcall *)(_SLIST_ENTRY *))p_m_SpinLock[3].m_Lock)(v60);
          }
          else
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)p_m_SpinLock, v60);
          }
        }
      }
      goto LABEL_110;
    }
    v62 = FxObject::SelfDestruct;
    if ( (char *)SelfDestruct != (char *)FxObject::SelfDestruct )
    {
      SelfDestruct(v2);
      goto LABEL_110;
    }
    v63 = (void *(__fastcall *)(FxRequest *, unsigned int))v2->~FxObject;
    if ( (char *)v63 == (char *)FxRegKey::`scalar deleting destructor' )
    {
      v2->__vftable = (FxRequestFromLookaside_vtbl *)FxRegKey::`vftable';
      m_Lock = (void *)v2->m_NPLock.m_Lock;
      if ( m_Lock )
      {
        ZwClose(m_Lock);
        v2->m_NPLock.m_Lock = 0LL;
      }
      v65 = *(_QWORD **)&v2->m_NPLock.m_DbgFlagIsInitialized;
      v2->__vftable = (FxRequestFromLookaside_vtbl *)FxPagedObject::`vftable';
      if ( v65 )
      {
        FxPoolFree(v65);
        *(_QWORD *)&v2->m_NPLock.m_DbgFlagIsInitialized = 0LL;
      }
      FxObject::~FxObject(v2);
      if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
        p_Blink = (void **)&v2[-1].m_OwnerListEntry2.Blink;
      else
        p_Blink = (void **)&v2->__vftable;
      if ( !p_Blink )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
      {
        v67 = (FX_POOL_TRACKER *)*(p_Blink - 2);
        if ( !*((_BYTE *)*(p_Blink - 1) + 264) )
        {
LABEL_125:
          ExFreePoolWithTag(v67, 0);
          m_CanComplete = v105;
          goto LABEL_32;
        }
        IsPagedPoolType = FxIsPagedPoolType(v67->PoolType);
        v83 = v67;
        if ( IsPagedPoolType )
          goto LABEL_203;
        goto LABEL_204;
      }
    }
    else
    {
      if ( v63 == FxRequest::`scalar deleting destructor' )
      {
        v2->__vftable = (FxRequestFromLookaside_vtbl *)FxRequestBase::`vftable';
        v72 = v2->m_AllocatedMdl;
        if ( v72 )
        {
          if ( v2->m_Globals->FxVerifierOn )
            FxMdlFreeDebug(v2->m_Globals, v2->m_AllocatedMdl);
          else
            IoFreeMdl(v72);
        }
        v73 = v2->m_RequestContext;
        v74 = v2->m_Irp.m_Irp;
        if ( v73 )
        {
          if ( v74 )
            v73->ReleaseAndRestore(v73, v2);
          v84 = v2->m_RequestContext;
          if ( v84 )
            ((void (__fastcall *)(FxRequestContext *, __int64))v84->~FxRequestContext)(v84, 1LL);
        }
        if ( v74 && v2->m_IrpAllocation == 1 )
          IoFreeIrp(v2->m_Irp.m_Irp);
        v75 = v2->m_Timer;
        if ( v75 )
          FxRequestTimer::`scalar deleting destructor'(v75, (unsigned int)v62);
        v2->__vftable = (FxRequestFromLookaside_vtbl *)FxNonPagedObject::`vftable';
        if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
        {
          v85 = (FxVerifierLock *)v2[-1].m_ForwardProgressList.Flink;
          if ( v85 )
          {
            FxVerifierLock::`scalar deleting destructor'(v85, (unsigned int)v62);
            v2[-1].m_ForwardProgressList.Flink = 0LL;
          }
        }
        v2->m_NPLock.m_DbgFlagIsInitialized = 0;
        FxObject::~FxObject(v2);
        if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
          v76 = &v2[-1].m_OwnerListEntry2.Blink;
        else
          v76 = &v2->__vftable;
        FxPoolFree(v76);
        m_CanComplete = v105;
        goto LABEL_32;
      }
      if ( (char *)v63 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
      {
        v63(v2, 1u);
        m_CanComplete = v105;
        goto LABEL_32;
      }
      v2->__vftable = (FxRequestFromLookaside_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
      *(_QWORD *)&v2->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
      FxObject::~FxObject(v2);
      if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
        p_Blink = (void **)&v2[-1].m_OwnerListEntry2.Blink;
      else
        p_Blink = (void **)&v2->__vftable;
      if ( !p_Blink )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
      {
        v67 = (FX_POOL_TRACKER *)*(p_Blink - 2);
        if ( !*((_BYTE *)*(p_Blink - 1) + 264) )
          goto LABEL_125;
        v86 = FxIsPagedPoolType(v67->PoolType);
        v83 = v67;
        if ( v86 )
        {
LABEL_203:
          FxPoolRemovePagedAllocateTracker(v83);
LABEL_205:
          memset(v67, 0, v67->Size + 64);
          goto LABEL_125;
        }
LABEL_204:
        FxPoolRemoveNonPagedAllocateTracker(v67);
        goto LABEL_205;
      }
    }
    ExFreePoolWithTag(p_Blink, 0);
    goto LABEL_110;
  }
  if ( (char *)Release != (char *)FxObject::Release )
  {
    Release(v2, m_Target, 530, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
    return;
  }
  if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
  {
    v92 = (FxTagTracker *)v2[-1].m_OwnerListEntry2.Blink;
    if ( v92 )
      FxTagTracker::UpdateTagHistory(
        v92,
        m_Target,
        530,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp",
        TagRelease,
        v2->m_Refcnt - 1);
  }
  if ( !_InterlockedDecrement(&v2->m_Refcnt) )
  {
    v29 = v2->m_ObjectFlags;
    if ( (v29 & 0x20) != 0 || (v29 & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(v2, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(v2->m_Globals->Driver->m_DisposeList, v2);
      return;
    }
    if ( (v29 & 0x80u) != 0 )
    {
      v30 = (FxTagTracker *)v2[-1].m_OwnerListEntry2.Blink;
      if ( v30 )
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v2[-1].m_OwnerListEntry2.Blink);
    }
    else
    {
      v30 = 0LL;
    }
    v31 = v2->m_ObjectSize;
    if ( v31 && (v2->m_ObjectFlags & 8) != 0 )
    {
      for ( j = (FxRequestFromLookaside_vtbl **)((char *)&v2->__vftable + v31); j; j = (_QWORD *)j[1] )
      {
        v33 = (void (__fastcall *)(unsigned __int64))j[2];
        if ( v33 )
        {
          v33((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
          j[2] = 0LL;
        }
        v34 = (void (__fastcall *)(unsigned __int64))j[3];
        if ( v34 )
        {
          v34((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
          j[3] = 0LL;
        }
      }
      v35 = v2->m_ObjectSize;
      LOBYTE(m_Globals) = 1;
      if ( v35 )
      {
        v36 = (FxRequestFromLookaside_vtbl **)((char *)&v2->__vftable + v35);
        if ( v36 )
        {
          do
          {
            v37 = (_QWORD *)v36[1];
            if ( !(_BYTE)m_Globals )
              FxPoolFree(v36);
            LOBYTE(m_Globals) = 0;
            v36 = v37;
          }
          while ( v37 );
        }
      }
    }
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
    {
      if ( BYTE4(v2[-1].m_ForwardProgressQueue) )
      {
        _InterlockedDecrement(&v2->m_Globals->FxVerifyLeakDetection->ObjectCnt);
        if ( v2->m_Type == 4098
          && _InterlockedExchangeAdd(&v2->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
        {
          m_Globals = (_FX_DRIVER_GLOBALS *)v2->m_Globals->FxVerifyLeakDetection;
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)&m_Globals->Linkage.Blink,
            -HIDWORD(m_Globals->Linkage.Flink));
        }
      }
    }
    if ( v30 )
    {
      v2[-1].m_OwnerListEntry2.Blink = 0LL;
      FxTagTracker::`scalar deleting destructor'(v30, (unsigned int)m_Globals);
    }
    v38 = FxObject::SelfDestruct;
    if ( v2->SelfDestruct != FxObject::SelfDestruct )
    {
      v2->SelfDestruct(v2);
      return;
    }
    v39 = (void *(__fastcall *)(FxRegKey *, unsigned int))v2->~FxObject;
    if ( v39 == FxRegKey::`scalar deleting destructor' )
    {
      v2->__vftable = (FxRequestFromLookaside_vtbl *)FxRegKey::`vftable';
      v40 = (void *)v2->m_NPLock.m_Lock;
      if ( v40 )
      {
        ZwClose(v40);
        v2->m_NPLock.m_Lock = 0LL;
      }
      v41 = *(_QWORD **)&v2->m_NPLock.m_DbgFlagIsInitialized;
      v2->__vftable = (FxRequestFromLookaside_vtbl *)FxPagedObject::`vftable';
      if ( v41 )
      {
        FxPoolFree(v41);
        *(_QWORD *)&v2->m_NPLock.m_DbgFlagIsInitialized = 0LL;
      }
      FxObject::~FxObject(v2);
      if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
        v2 = (FxRequestFromLookaside *)((char *)v2 - 48);
      if ( !v2 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)v2 & 0xFFF) != 0 )
      {
LABEL_73:
        v42 = (FX_POOL_TRACKER *)v2[-1].m_InternalContext;
        if ( *(_BYTE *)(*(_QWORD *)&v2[-1].m_Presented + 264LL) )
        {
          if ( FxIsPagedPoolType(v42->PoolType) )
            FxPoolRemovePagedAllocateTracker(v42);
          else
            FxPoolRemoveNonPagedAllocateTracker(v42);
          memset(v42, 0, v42->Size + 64);
        }
        ExFreePoolWithTag(v42, 0);
        return;
      }
LABEL_238:
      ExFreePoolWithTag(v2, 0);
      return;
    }
    if ( (char *)v39 != (char *)FxRequest::`scalar deleting destructor' )
    {
      if ( (char *)v39 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
      {
        v39((FxRegKey *)v2, 1u);
        return;
      }
      v2->__vftable = (FxRequestFromLookaside_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
      *(_QWORD *)&v2->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
      FxObject::~FxObject(v2);
      if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
        v2 = (FxRequestFromLookaside *)((char *)v2 - 48);
      if ( !v2 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      if ( ((unsigned __int16)v2 & 0xFFF) != 0 )
        goto LABEL_73;
      goto LABEL_238;
    }
    v2->__vftable = (FxRequestFromLookaside_vtbl *)FxRequestBase::`vftable';
    v68 = v2->m_AllocatedMdl;
    if ( v68 )
    {
      if ( v2->m_Globals->FxVerifierOn )
        FxMdlFreeDebug(v2->m_Globals, v2->m_AllocatedMdl);
      else
        IoFreeMdl(v68);
    }
    v69 = v2->m_RequestContext;
    v70 = v2->m_Irp.m_Irp;
    if ( v69 )
    {
      if ( v70 )
        v69->ReleaseAndRestore(v69, v2);
      v93 = v2->m_RequestContext;
      if ( v93 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v93->~FxRequestContext)(v93, 1LL);
    }
    if ( v70 && v2->m_IrpAllocation == 1 )
      IoFreeIrp(v2->m_Irp.m_Irp);
    v71 = v2->m_Timer;
    if ( v71 )
      FxRequestTimer::`scalar deleting destructor'(v71, (unsigned int)v38);
    v2->__vftable = (FxRequestFromLookaside_vtbl *)FxNonPagedObject::`vftable';
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
    {
      v94 = (FxVerifierLock *)v2[-1].m_ForwardProgressList.Flink;
      if ( v94 )
      {
        FxVerifierLock::`scalar deleting destructor'(v94, (unsigned int)v38);
        v2[-1].m_ForwardProgressList.Flink = 0LL;
      }
    }
    v2->m_NPLock.m_DbgFlagIsInitialized = 0;
    FxObject::~FxObject(v2);
    if ( SLOBYTE(v2->m_ObjectFlags) < 0 )
      v2 = (FxRequestFromLookaside *)((char *)v2 - 48);
    FxPoolFree(v2);
  }
}

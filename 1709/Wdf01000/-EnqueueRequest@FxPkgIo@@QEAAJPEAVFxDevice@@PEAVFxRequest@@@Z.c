/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0008980
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0001F90 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000D760 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000DA0C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C000FF74 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C001A584 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0063FFC (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0064044 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00973D0 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00D814C (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00D8E7C (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00D8EC0 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, unsigned __int64 pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxRequest *v4; // rdi
  FxIoQueue *m_InternalContext; // rbx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned __int8 m_CompletionState; // al
  unsigned __int8 v11; // r8
  unsigned int m_QueueState; // r10d
  bool v13; // r13
  _FX_DRIVER_GLOBALS *v14; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v16; // edx
  _IRP *m_Irp; // r9
  $E83ED047D649F8330EF035260E0728C3 *v18; // r10
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int inserted; // ebp
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v23; // r14d
  __int64 v24; // rsi
  unsigned __int64 *v25; // r15
  KIRQL v26; // al
  char v27; // cl
  KIRQL v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int TargetStatesCount; // edx
  const FxPowerIdleTargetState *TargetStates; // r8
  int v33; // ebp
  FxTagTracker *v34; // rcx
  int v35; // esi
  int result; // eax
  unsigned int _a3; // ebp
  __int64 v38; // r15
  __int64 v39; // rcx
  const void *_a2; // rdx
  const void *_a1; // rcx
  char v42; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  const void *v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int16 v46; // ax
  const void *v47; // rbp
  unsigned __int16 v48; // ax
  unsigned __int64 v49; // rbp
  const void *v50; // rcx
  _FX_DRIVER_GLOBALS *v51; // rdx
  FxPkgIo *v52; // rcx
  FxRequestContext *m_RequestContext; // rax
  FxTagTracker *Blink; // rcx
  FxTagTracker *v55; // rcx
  const void *v56; // rcx
  FxVerifierLock *v57; // rcx
  const char *v58; // rdx
  const void *v59; // r8
  const void *v60; // rcx
  unsigned __int8 v61; // r8
  FxTagTracker *v62; // rcx
  __int64 v63; // r9
  __int64 v64; // r10
  FxRequest_vtbl *v65; // rax
  unsigned __int8 v66; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  __int16 origVerifierFlags[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v69; // [rsp+54h] [rbp-54h]
  _FX_DRIVER_GLOBALS *v70; // [rsp+58h] [rbp-50h]
  FxIrp Irp; // [rsp+60h] [rbp-48h] BYREF
  __int64 v72; // [rsp+68h] [rbp-40h]
  unsigned __int8 PreviousIrql; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v74; // [rsp+C0h] [rbp+18h]
  KIRQL v75; // [rsp+C8h] [rbp+20h]

  v74 = pRequest;
  m_Globals = this->m_Globals;
  v70 = m_Globals;
  v4 = (FxRequest *)pRequest;
  origVerifierFlags[0] = 0;
  if ( m_Globals->FxVerboseOn )
  {
    v44 = (const void *)(pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(pRequest + 10) )
      v44 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, WPP_FxPkgIo_cpp_Traceguids, v44);
  }
  if ( !m_Globals->FxVerifierOn
    || (result = FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(this, m_Globals, v4, origVerifierFlags), result >= 0) )
  {
    m_InternalContext = (FxIoQueue *)v4->m_InternalContext;
    v4->m_InternalContext = 0LL;
    if ( m_InternalContext
      || (m_InternalContext = this->m_DispatchTable[v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction]) != 0LL )
    {
      if ( !this->m_Filter
        || m_InternalContext != this->m_DefaultQueue
        || FxIoQueue::IsIoEventHandlerRegistered(
             m_InternalContext,
             (_WDF_REQUEST_TYPE)v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction) )
      {
        v8 = _InterlockedIncrement(&m_InternalContext->m_Refcnt);
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0 )
        {
          Blink = (FxTagTracker *)m_InternalContext[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(Blink, 0LL, 0, 0LL, TagAddRef, v8);
        }
        v9 = _InterlockedIncrement(&v4->m_Refcnt);
        if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
        {
          v55 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
          if ( v55 )
            FxTagTracker::UpdateTagHistory(
              v55,
              (void *)0x74617453,
              690,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              v9);
        }
        if ( v4->m_Completed )
        {
          v56 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v4->m_ObjectSize )
            v56 = 0LL;
          WPP_IFR_SF_q(v4->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v56);
          FxVerifierDbgBreakPoint(v4->m_Globals);
        }
        else
        {
          m_CompletionState = v4->m_CompletionState;
          v4->m_CompletionState = 0;
          if ( m_CompletionState )
            v4->Release(v4, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0
          && (v57 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v57, &PreviousIrql, pRequest);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
        }
        m_QueueState = m_InternalContext->m_QueueState;
        if ( (m_QueueState & 1) != 0 )
        {
          v13 = v4->m_IrpAllocation == 0;
          v14 = v4->m_Globals;
          p_m_Queue = &m_InternalContext->m_Queue;
          if ( !v14->FxVerifierOn
            || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(v4, v14, &m_InternalContext->m_Queue), inserted >= 0) )
          {
            v16 = _InterlockedIncrement(&v4->m_Refcnt);
            if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
            {
              v62 = (FxTagTracker *)v4[-1].m_OwnerListEntry2.Blink;
              if ( v62 )
                FxTagTracker::UpdateTagHistory(
                  v62,
                  (void *)0x75657551,
                  1900,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                  TagAddRef,
                  v16);
            }
            m_Irp = v4->m_Irp.m_Irp;
            v18 = &v4->120;
            v4->m_IrpQueue = p_m_Queue;
            Irp.m_Irp = m_Irp;
            if ( v4 == (FxRequest *)-120LL )
            {
              m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
            }
            else
            {
              m_Irp->Tail.Overlay.DriverContext[3] = v18;
              v4->m_CsqContext.Irp = m_Irp;
              v4->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
              v18->m_CsqContext.Type = 1;
            }
            v19 = m_InternalContext->m_Queue.m_Queue.Blink;
            p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
            if ( (FxIrpQueue *)v19->Flink != p_m_Queue )
              __fastfail(3u);
            p_ListEntry->Flink = &p_m_Queue->m_Queue;
            m_Irp->Tail.Overlay.ListEntry.Blink = v19;
            v19->Flink = p_ListEntry;
            m_InternalContext->m_Queue.m_Queue.Blink = p_ListEntry;
            ++m_InternalContext->m_Queue.m_RequestCount;
            m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            _InterlockedExchange64(
              (volatile __int64 *)&m_Irp->CancelRoutine,
              (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
            if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
            {
              FxIrpQueue::RemoveIrpFromListEntry(&m_InternalContext->m_Queue, &Irp);
              if ( v64 )
                *(_QWORD *)(v64 + 8) = 0LL;
              *(_QWORD *)(v63 + 144) = 0LL;
              v65 = v4->__vftable;
              v4->m_IrpQueue = 0LL;
              inserted = -1073741536;
              v65->Release(v4, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            }
            else
            {
              inserted = 0;
            }
          }
          v4->m_IoQueue = m_InternalContext;
          if ( inserted < 0 )
          {
            FxObject::AddRef(
              v4,
              (void *)0x75657551,
              2459,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue(m_InternalContext, v4, PreviousIrql);
            FxNonPagedObject::Lock(m_InternalContext, &PreviousIrql, v66);
          }
          else if ( m_InternalContext->m_Queue.m_RequestCount == 1
                 || m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest )
          {
            m_InternalContext->m_TransitionFromEmpty = 1;
            m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
            if ( m_InternalContext->m_IsDevicePowerPolicyOwner )
            {
              if ( m_InternalContext->m_PowerManaged && !m_InternalContext->m_PowerReferenced )
              {
                m_DeviceBase = m_InternalContext->m_DeviceBase;
                v23 = 0;
                v69 = 0;
                v24 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
                v25 = (unsigned __int64 *)(v24 + 16);
                v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 16));
                v27 = *(_BYTE *)(v24 + 224);
                v28 = v26;
                v75 = v26;
                if ( (v27 & 0x10) != 0 )
                {
                  v33 = -1073741101;
                }
                else if ( (v27 & 0x20) != 0 )
                {
                  v23 = ++*(_DWORD *)(v24 + 24);
                  v72 = *(_QWORD *)(v24 + 424);
                  v29 = *(unsigned __int8 *)(v24 + 225);
                  v69 = v23;
                  *(_DWORD *)(v24 + 4 * v29 + 232) = 512;
                  *(_BYTE *)(v24 + 225) = (*(_BYTE *)(v24 + 225) + 1) & 7;
                  v30 = 0LL;
                  TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v24 + 228) - 1].TargetStatesCount;
                  if ( TargetStatesCount )
                  {
                    TargetStates = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v24 + 228) - 1].TargetStates;
                    while ( TargetStates[v30].PowerIdleEvent != PowerIdleEventIoIncrement )
                    {
                      v30 = (unsigned int)(v30 + 1);
                      if ( (unsigned int)v30 >= TargetStatesCount )
                        goto LABEL_31;
                    }
                    _a3 = TargetStates[v30].PowerIdleState;
                    if ( _a3 != 35 )
                    {
                      v38 = v72;
                      do
                      {
                        v39 = *(_QWORD *)(v38 + 96);
                        _a2 = *(const void **)(v39 + 144);
                        if ( *(_WORD *)(v39 + 10) )
                          _a1 = (const void *)(v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        else
                          _a1 = 0LL;
                        WPP_IFR_SF_qqLL(
                          *(_FX_DRIVER_GLOBALS **)(v38 + 16),
                          4u,
                          0x15u,
                          0x11u,
                          WPP_PowerIdleStateMachine_cpp_Traceguids,
                          _a1,
                          _a2,
                          _a3,
                          *(_DWORD *)(v24 + 228));
                        *(_DWORD *)(v24 + 4LL * *(unsigned __int8 *)(v24 + 226) + 264) = _a3;
                        v42 = *(_BYTE *)(v24 + 226) + 1;
                        *(_DWORD *)(v24 + 228) = _a3;
                        *(_BYTE *)(v24 + 226) = v42 & 7;
                        StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
                        if ( !StateFunc )
                          break;
                        _a3 = StateFunc((FxPowerIdleMachine *)v24);
                      }
                      while ( _a3 != 35 );
                      v4 = (FxRequest *)v74;
                      v25 = (unsigned __int64 *)(v24 + 16);
                      v28 = v75;
                    }
                  }
LABEL_31:
                  if ( KeReadStateEvent((PRKEVENT)(v24 + 192)) )
                    v33 = 0;
                  else
                    v33 = 259;
                }
                else
                {
                  v33 = -1073741101;
                }
                KeReleaseSpinLock(v25, v28);
                v34 = *(FxTagTracker **)(v24 + 32);
                if ( v34 && (!v33 || v33 == 259) )
                  FxTagTracker::UpdateTagHistory(v34, 0LL, 0, 0LL, TagAddRef, v23);
                m_Globals = v70;
                if ( v33 >= 0 )
                  m_InternalContext->m_PowerReferenced = 1;
              }
            }
          }
          if ( v13 || !m_InternalContext->m_Dispatching )
            FxIoQueue::DispatchEvents(m_InternalContext, PreviousIrql, 0LL);
          else
            FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql, v11);
          v35 = 0;
        }
        else
        {
          v58 = "power stopping (Drain) in progress,";
          v59 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          v35 = -1071644156;
          if ( !v4->m_ObjectSize )
            v59 = 0LL;
          if ( (m_QueueState & 0x10000) == 0 )
            v58 = a5;
          v60 = (const void *)((unsigned __int64)m_InternalContext ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_InternalContext->m_ObjectSize )
            v60 = 0LL;
          WPP_IFR_SF_qLsqd(
            m_InternalContext->m_Globals,
            3u,
            (unsigned int)v59,
            0x2Bu,
            traceGuid,
            v60,
            m_QueueState,
            v58,
            v59,
            -1071644156);
          FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql, v61);
        }
        m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
        if ( v35 >= 0 )
          return v35;
        FxRequest::SetCompletionState(v4, FxRequestCompletionStateIoPkg);
        v4->Release(v4, (void *)1952543827, 722, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
LABEL_111:
        if ( m_Globals->FxVerifierOn )
          FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v52, v51, v4, origVerifierFlags[0]);
        return v35;
      }
    }
    else if ( !this->m_Filter )
    {
      v35 = -1073741808;
      v45 = (unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v46 = *(_WORD *)(Device + 10);
      if ( !v4->m_ObjectSize )
        v45 = 0LL;
      v47 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v46 )
        v47 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgIo_cpp_Traceguids, v47, v45, -1073741808);
LABEL_69:
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_111;
    }
    m_RequestContext = v4->m_RequestContext;
    if ( !m_RequestContext || !m_RequestContext->m_RequestType )
    {
      FxRequest::PreProcessSendAndForget(v4);
      IofCallDriver(*(PDEVICE_OBJECT *)(Device + 152), v4->m_Irp.m_Irp);
      FxRequest::PostProcessSendAndForget(v4);
      return 0;
    }
    v35 = -1073741808;
    v48 = *(_WORD *)(Device + 10);
    v49 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v48 )
      v49 = 0LL;
    v50 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v4->m_ObjectSize )
      v50 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x14u, WPP_FxPkgIo_cpp_Traceguids, v50, v49, -1073741808);
    goto LABEL_69;
  }
  return result;
}

/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00032B0 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008210 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0008980 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000CA10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000DB60 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0010260 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0019C10 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001B770 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C001B830 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00272F0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0033B10 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C003B1E0 (imp_WdfIoQueueStart.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00646D8 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1C0095E80 (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0095F10 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00969D4 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096F74 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0097128 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000C290 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000CC40 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C000D7C8 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C000FF74 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_qcq @ 0x1C0010C00 (WPP_IFR_SF_qcq.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0018BEC (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001A730 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001AB6C (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001FECC (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C003B834 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C003C838 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C898 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003C900 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003C970 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003D3F8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0064458 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0066320 (WPP_IFR_SF_ql.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00962E4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009647C (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009655C (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009663C (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00D814C (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::DispatchEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        FxRequest *NewRequest,
        unsigned __int16 a4)
{
  volatile unsigned __int8 m_Deleted; // al
  FxIoQueue *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 v7; // si
  FxCallbackLock *m_CallbackLockPtr; // rcx
  unsigned __int8 (*IsOwner)(void); // rax
  const _GUID *v10; // r8
  _LIST_ENTRY *p_m_Cancelled; // rdx
  __int16 v12; // r11
  int v13; // edi
  int m_PowerState; // edx
  int m_QueueState; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *v17; // rsi
  const void *_a1; // rax
  unsigned __int8 v20; // r8
  FxSystemWorkItem *v21; // rcx
  bool v22; // zf
  FxDeviceBase *v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rdi
  unsigned __int64 *v26; // r12
  KIRQL v27; // al
  char v28; // cl
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  unsigned int v32; // edx
  const FxPowerIdleTargetState *v33; // r8
  int v34; // r14d
  FxTagTracker *v35; // rcx
  bool v36; // sf
  _LIST_ENTRY *v37; // rdx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  unsigned __int8 v39; // r8
  __int64 v40; // r14
  __int64 v41; // rdi
  unsigned __int64 *v42; // r15
  _FX_DRIVER_GLOBALS *v43; // rsi
  KIRQL v44; // al
  KIRQL v45; // r12
  __int64 v46; // rax
  unsigned int v47; // r13d
  __int64 v48; // rsi
  __int64 v49; // rax
  unsigned int TargetStatesCount; // edx
  const FxPowerIdleTargetState *TargetStates; // r8
  FxTagTracker *v52; // rcx
  FxRequest *v53; // rdi
  const void *id; // rcx
  FxSystemWorkItem *m_SystemWorkItem; // rdi
  _FX_DRIVER_GLOBALS *v56; // r15
  unsigned __int8 v57; // r14
  unsigned __int8 v58; // r8
  FxIrpQueue *p_m_Queue; // r10
  _IRP *p_Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY **p_Flink; // rdx
  _QWORD *v64; // rsi
  __int64 v65; // rax
  __int64 (__fastcall *v66)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  char m_ObjectFlags; // al
  unsigned __int8 m_Reserved; // r13
  unsigned __int8 m_IrpAllocation; // cl
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  signed __int32 v71; // r12d
  _FX_DRIVER_GLOBALS *v72; // rdx
  FxIrpQueue *v73; // rsi
  unsigned __int8 v74; // r14
  signed __int32 v75; // edx
  FxRequest *v76; // rdi
  unsigned int v77; // edx
  _IRP *v78; // r9
  $E83ED047D649F8330EF035260E0728C3 *v79; // r10
  _LIST_ENTRY *v80; // rcx
  _LIST_ENTRY *v81; // rax
  int v82; // r15d
  unsigned __int16 v83; // cx
  FxTagTracker *v84; // r15
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v86; // rdi
  void (__fastcall *v87)(unsigned __int64); // rax
  void (__fastcall *v88)(unsigned __int64); // rax
  unsigned __int16 v89; // ax
  _QWORD *v90; // rcx
  _QWORD *v91; // rdi
  void (__fastcall *v92)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // r15
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v99; // r14
  __int64 v100; // rax
  _SLIST_ENTRY *v101; // r14
  void (__fastcall *v102)(FxObject *, unsigned int); // rdx
  FxRequest *(__fastcall *v103)(FxRequest *, char); // rax
  void *m_Lock; // rcx
  _QWORD *v105; // rcx
  _LIST_ENTRY **v106; // rax
  FX_POOL_TRACKER *v107; // rdi
  unsigned __int8 v108; // al
  _MDL *v109; // rcx
  FxRequestContext *v110; // rcx
  _IRP *v111; // rdi
  FxRequestTimer *v112; // rcx
  _QWORD *v113; // rcx
  _SLIST_ENTRY *m_InternalContext; // rdi
  FxVerifierLock *v115; // rcx
  unsigned __int8 v116; // r8
  FxVerifierLock *v117; // rcx
  FxVerifierLock *v118; // rcx
  const void *v119; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int inserted; // eax
  int v122; // eax
  unsigned __int8 v123; // al
  __int64 v124; // rax
  const void *v125; // rdx
  unsigned int v126; // edx
  unsigned int PowerIdleState; // edi
  __int64 v128; // rdx
  const void *v129; // rcx
  char v130; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  const void *v132; // rcx
  int v133; // eax
  unsigned __int8 v134; // dl
  const void *v135; // rcx
  int v136; // eax
  _LIST_ENTRY *v137; // rcx
  __int64 v138; // r9
  __int64 v139; // r10
  unsigned __int8 v140; // r8
  int v141; // eax
  FxTagTracker *Blink; // rcx
  FxRequestContext *v143; // rcx
  FxVerifierLock *v144; // rcx
  FX_POOL_HEADER *v145; // rax
  FxRequestContext *v146; // rcx
  FxVerifierLock *v147; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // r14
  _IRP *v150; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned int v152; // r14d
  const void *ObjectHandleUnchecked; // rax
  __int64 v154; // rdx
  char v155; // al
  FxPowerIdleStates (__fastcall *v156)(FxPowerIdleMachine *); // rax
  FxVerifierLock *v157; // rcx
  FxVerifierLock *v158; // rcx
  FxVerifierLock *v159; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  unsigned __int8 v161; // [rsp+58h] [rbp-29h]
  unsigned __int8 v162[7]; // [rsp+59h] [rbp-28h] BYREF
  unsigned __int8 v163[8]; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int8 v164; // [rsp+68h] [rbp-19h]
  unsigned __int8 v165[7]; // [rsp+69h] [rbp-18h] BYREF
  _FX_DRIVER_GLOBALS *v166; // [rsp+70h] [rbp-11h]
  unsigned int v167; // [rsp+78h] [rbp-9h]
  FxIrp Irp; // [rsp+80h] [rbp-1h] BYREF
  _QWORD *v169; // [rsp+88h] [rbp+7h]
  ULONG_PTR retaddr; // [rsp+E0h] [rbp+5Fh]
  unsigned __int8 flags; // [rsp+F0h] [rbp+6Fh] BYREF
  FxRequest *pRequest; // [rsp+F8h] [rbp+77h] BYREF
  KIRQL v174; // [rsp+100h] [rbp+7Fh]

  pRequest = NewRequest;
  flags = PreviousIrql;
  m_Deleted = this->m_Deleted;
  v5 = this;
  m_Globals = this->m_Globals;
  v166 = m_Globals;
  if ( m_Deleted )
  {
    FxNonPagedObject::Unlock(this, flags, (unsigned __int8)NewRequest);
    return 0;
  }
  v7 = flags;
  if ( flags && this->m_PassiveLevel )
  {
    if ( this->m_ObjectSize )
      id = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      id = 0LL;
    v7 = flags;
    WPP_IFR_SF_qcq(
      v5->m_Globals,
      PreviousIrql,
      (unsigned int)NewRequest,
      a4,
      traceGuid,
      KeGetCurrentThread(),
      flags,
      id);
    if ( v5->m_WorkItemQueued )
      goto LABEL_82;
    m_SystemWorkItem = v5->m_SystemWorkItem;
    v5->m_WorkItemQueued = 1;
    v56 = m_SystemWorkItem->m_Globals;
    if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
      && (v115 = *(FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount) != 0LL )
    {
      FxVerifierLock::Lock(v115, v162, v20);
      v57 = v162[0];
    }
    else
    {
      v57 = KeAcquireSpinLockRaiseToDpc(&m_SystemWorkItem->m_NPLock.m_Lock);
      v162[0] = v57;
    }
    if ( m_SystemWorkItem->m_Enqueued )
    {
      WPP_IFR_SF_qq(
        v56,
        2u,
        0x12u,
        0xEu,
        WPP_FxSystemWorkitem_cpp_Traceguids,
        m_SystemWorkItem,
        m_SystemWorkItem->m_WorkItem.m_WorkItem);
    }
    else
    {
      if ( !m_SystemWorkItem->m_RunningDown )
      {
        KeClearEvent(&m_SystemWorkItem->m_WorkItemCompleted.m_Event.m_Event);
        m_SystemWorkItem->m_CallbackArg = v5;
        m_SystemWorkItem->m_Callback = FxIoQueue::_DeferredDispatchThreadThunk;
        m_SystemWorkItem->m_Enqueued = 1;
        _InterlockedIncrement(&m_SystemWorkItem->m_OutStandingWorkItem);
        if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
          && (v117 = *(FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount) != 0LL )
        {
          FxVerifierLock::Unlock(v117, v162[0], v58);
        }
        else
        {
          KeReleaseSpinLock(&m_SystemWorkItem->m_NPLock.m_Lock, v162[0]);
        }
        IoQueueWorkItem(
          m_SystemWorkItem->m_WorkItem.m_WorkItem,
          (PIO_WORKITEM_ROUTINE)FxSystemWorkItem::_WorkItemThunk,
          DelayedWorkQueue,
          m_SystemWorkItem);
        v7 = flags;
LABEL_82:
        v22 = pRequest == 0LL;
        v5->m_RequeueDeferredDispatcher = 1;
        if ( !v22 )
          FxIoQueue::InsertNewRequestLocked(v5, &pRequest, v7);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v118 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v118, v7, v20);
        }
        else
        {
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v7);
        }
        return 1;
      }
      WPP_IFR_SF_q(v56, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, m_SystemWorkItem);
    }
    FxVerifierDbgBreakPoint(v56);
    FxNonPagedObject::Unlock(m_SystemWorkItem, v57, v116);
    v5->m_WorkItemQueued = 0;
    goto LABEL_82;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( !m_CallbackLockPtr )
    goto LABEL_6;
  IsOwner = (unsigned __int8 (*)(void))m_CallbackLockPtr->IsOwner;
  if ( (char *)IsOwner != (char *)FxCallbackMutexLock::IsOwner )
  {
    if ( (char *)IsOwner != (char *)FxCallbackSpinLock::IsOwner )
    {
      if ( !IsOwner() )
        goto LABEL_6;
LABEL_32:
      if ( v5->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_q(v5->m_Globals, 3u, 0xDu, 0x2Eu, WPP_FxIoQueue_cpp_Traceguids, _a1);
      if ( v5->m_PassiveLevel )
      {
        if ( !v5->m_WorkItemQueued )
        {
          v21 = v5->m_SystemWorkItem;
          v5->m_WorkItemQueued = 1;
          if ( !FxSystemWorkItem::EnqueueWorker(v21, FxIoQueue::_DeferredDispatchThreadThunk, v5, 1u) )
            v5->m_WorkItemQueued = 0;
        }
      }
      else if ( !v5->m_DpcQueued )
      {
        v5->m_DpcQueued = 1;
        KeInsertQueueDpc(&v5->m_Dpc, 0LL, 0LL);
      }
      goto LABEL_82;
    }
    if ( m_CallbackLockPtr->m_OwnerThread != KeGetCurrentThread() )
      goto LABEL_6;
LABEL_31:
    v7 = flags;
    goto LABEL_32;
  }
  if ( m_CallbackLockPtr->m_OwnerThread == KeGetCurrentThread() )
    goto LABEL_31;
LABEL_6:
  ++v5->m_Dispatching;
  v10 = WPP_FxIoQueue_cpp_Traceguids;
  if ( m_Globals->FxVerboseOn )
  {
    v119 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    CurrentThread = KeGetCurrentThread();
    if ( !v5->m_ObjectSize )
      v119 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Fu, WPP_FxIoQueue_cpp_Traceguids, CurrentThread, v119);
LABEL_58:
    v10 = WPP_FxIoQueue_cpp_Traceguids;
  }
LABEL_7:
  p_m_Cancelled = &v5->m_Cancelled;
  v12 = 4098;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = (pRequest != 0LL) + v5->m_Queue.m_RequestCount + v5->m_DriverIoCount;
          if ( p_m_Cancelled->Flink == p_m_Cancelled )
            break;
          if ( pRequest )
          {
            inserted = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
            p_m_Cancelled = &v5->m_Cancelled;
            v12 = 4098;
            v10 = WPP_FxIoQueue_cpp_Traceguids;
            if ( inserted < 0 )
              continue;
          }
          v108 = FxIoQueue::ProcessCancelledRequests(v5, &flags);
          p_m_Cancelled = &v5->m_Cancelled;
          v12 = 4098;
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          if ( !v108 )
            break;
        }
        if ( v5->m_CanceledOnQueueList.Flink == &v5->m_CanceledOnQueueList )
          break;
        if ( pRequest )
        {
          v122 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          p_m_Cancelled = &v5->m_Cancelled;
          v12 = 4098;
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          if ( v122 < 0 )
            continue;
        }
        v123 = FxIoQueue::ProcessCancelledRequestsOnQueue(v5, &flags);
        p_m_Cancelled = &v5->m_Cancelled;
        v12 = 4098;
        v10 = WPP_FxIoQueue_cpp_Traceguids;
        if ( !v123 )
          break;
      }
      if ( v5->m_IdleComplete.Method && v5->m_Dispatching == 1 && !v5->m_DriverIoCount )
      {
        if ( pRequest )
          FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
        v5->m_CancelDispatchedRequests = 0;
        FxIoQueue::ProcessIdleComplete(v5, &flags);
        goto LABEL_58;
      }
      if ( v5->m_PurgeComplete.Method && !v13 && v5->m_Dispatching == 1 )
      {
        if ( pRequest )
          FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
        v5->m_CancelDispatchedRequests = 0;
        FxIoQueue::ProcessPurgeComplete(v5, &flags);
        goto LABEL_58;
      }
      if ( v5->m_IsDevicePowerPolicyOwner
        && v5->m_PowerManaged
        && v5->m_PowerReferenced
        && !v13
        && v5->m_Dispatching == 1 )
      {
        v40 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
        v41 = *(_QWORD *)(v40 + 424);
        v42 = (unsigned __int64 *)(v40 + 16);
        v43 = *(_FX_DRIVER_GLOBALS **)(v41 + 16);
        v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 16));
        v22 = *(_DWORD *)(v40 + 24) == 0;
        v45 = v44;
        v174 = v44;
        if ( v22 )
        {
          v124 = *(_QWORD *)(v41 + 96);
          v125 = (const void *)(v124 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v124 + 10) )
            v125 = 0LL;
          WPP_IFR_SF_qq(
            v43,
            2u,
            0xCu,
            0xFu,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            v125,
            *(const void **)(v124 + 144));
          if ( v43->FxVerifierOn
            && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v43, v126, 0xBu) || v43->FxVerifyDownlevel) )
          {
            FxVerifierDbgBreakPoint(v43);
          }
        }
        v46 = *(unsigned __int8 *)(v40 + 225);
        v47 = --*(_DWORD *)(v40 + 24);
        v48 = *(_QWORD *)(v40 + 424);
        *(_DWORD *)(v40 + 4 * v46 + 232) = 256;
        *(_BYTE *)(v40 + 225) = (*(_BYTE *)(v40 + 225) + 1) & 7;
        v49 = 0LL;
        TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v40 + 228) - 1].TargetStatesCount;
        if ( TargetStatesCount )
        {
          TargetStates = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v40 + 228) - 1].TargetStates;
          while ( TargetStates[v49].PowerIdleEvent != PowerIdleEventIoDecrement )
          {
            v49 = (unsigned int)(v49 + 1);
            if ( (unsigned int)v49 >= TargetStatesCount )
              goto LABEL_65;
          }
          PowerIdleState = TargetStates[v49].PowerIdleState;
          if ( PowerIdleState != 35 )
          {
            do
            {
              v128 = *(_QWORD *)(v48 + 96);
              v129 = (const void *)(v128 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v128 + 10) )
                v129 = 0LL;
              WPP_IFR_SF_qqLL(
                *(_FX_DRIVER_GLOBALS **)(v48 + 16),
                4u,
                0x15u,
                0x11u,
                WPP_PowerIdleStateMachine_cpp_Traceguids,
                v129,
                *(const void **)(v128 + 144),
                PowerIdleState,
                *(_DWORD *)(v40 + 228));
              *(_DWORD *)(v40 + 4LL * *(unsigned __int8 *)(v40 + 226) + 264) = PowerIdleState;
              v130 = *(_BYTE *)(v40 + 226) + 1;
              *(_DWORD *)(v40 + 228) = PowerIdleState;
              *(_BYTE *)(v40 + 226) = v130 & 7;
              StateFunc = FxPowerIdleMachine::m_StateTable[PowerIdleState - 1].StateFunc;
              if ( !StateFunc )
                break;
              PowerIdleState = StateFunc((FxPowerIdleMachine *)v40);
            }
            while ( PowerIdleState != 35 );
            v5 = this;
            v42 = (unsigned __int64 *)(v40 + 16);
            v45 = v174;
          }
        }
LABEL_65:
        KeReleaseSpinLock(v42, v45);
        v52 = *(FxTagTracker **)(v40 + 32);
        if ( v52 )
          FxTagTracker::UpdateTagHistory(v52, 0LL, 0, 0LL, TagRelease, v47);
        m_Globals = v166;
        v10 = WPP_FxIoQueue_cpp_Traceguids;
        v5->m_PowerReferenced = 0;
        goto LABEL_7;
      }
      m_PowerState = v5->m_PowerState;
      if ( (unsigned int)(m_PowerState - 1) <= 1 )
        break;
      if ( m_Globals->FxVerboseOn )
      {
        v132 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v5->m_ObjectSize )
          v132 = 0LL;
        WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, WPP_FxIoQueue_cpp_Traceguids, v132, m_PowerState);
      }
      if ( pRequest )
      {
        v133 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
        p_m_Cancelled = &v5->m_Cancelled;
        v12 = 4098;
        v10 = WPP_FxIoQueue_cpp_Traceguids;
        if ( v133 < 0 )
          continue;
      }
      if ( FxIoQueue::ProcessPowerEvents(v5, &flags) )
        goto LABEL_58;
      goto $Done_4;
    }
    if ( v5->m_Disposing && !v13 && v5->m_Dispatching == 1 )
    {
      v134 = flags;
      v5->m_Deleted = 1;
      FxNonPagedObject::Unlock(v5, v134, (unsigned __int8)WPP_FxIoQueue_cpp_Traceguids);
      KeSetEvent(&v5->m_FinishDisposing.m_Event, 0, 0);
      return 1;
    }
    if ( v5->m_PowerState == FxIoQueuePowerOff )
      goto LABEL_87;
    m_QueueState = v5->m_QueueState;
    if ( (m_QueueState & 2) == 0 )
    {
      v135 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v5->m_ObjectSize )
        v135 = 0LL;
      WPP_IFR_SF_ql(m_Globals, 3u, 0xDu, 0x31u, WPP_FxIoQueue_cpp_Traceguids, v135, m_QueueState);
      goto LABEL_87;
    }
    m_Type = v5->m_Type;
    if ( m_Type != WdfIoQueueDispatchManual )
    {
      if ( (m_Type != WdfIoQueueDispatchSequential || v5->m_DriverIoCount <= 0)
        && (v5->m_Type != WdfIoQueueDispatchParallel || v5->m_DriverIoCount < v5->m_MaxParallelQueuePresentedRequests) )
      {
        if ( v5->m_Queue.m_RequestCount <= 0 )
          goto LABEL_25;
        p_m_Queue = &v5->m_Queue;
        p_Blink = 0LL;
        Flink = v5->m_Queue.m_Queue.Flink;
        if ( Flink != (_LIST_ENTRY *)&v5->m_Queue )
          p_Blink = (_IRP *)&Flink[-11].Blink;
        if ( p_Blink )
        {
          while ( !_InterlockedExchange64((volatile __int64 *)&p_Blink->CancelRoutine, 0LL) )
          {
            p_Blink = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, p_Blink, 0LL);
            if ( !p_Blink )
              goto LABEL_25;
          }
          p_ListEntry = &p_Blink->Tail.Overlay.ListEntry;
          v10 = (const _GUID *)p_Blink->Tail.Overlay.ListEntry.Flink;
          if ( *(_IRP **)v10->Data4 != (_IRP *)(&p_Blink->Tail.CompletionKey + 6)
            || (p_Flink = &p_Blink->Tail.Overlay.ListEntry.Blink->Flink, *p_Flink != p_ListEntry) )
          {
            __fastfail(3u);
          }
          *p_Flink = (_LIST_ENTRY *)v10;
          *(_QWORD *)v10->Data4 = p_Flink;
          p_Blink->Tail.Overlay.ListEntry.Blink = &p_Blink->Tail.Overlay.ListEntry;
          p_ListEntry->Flink = p_ListEntry;
          --p_m_Queue->m_RequestCount;
          v64 = p_Blink->Tail.Overlay.DriverContext[3];
          if ( *(_DWORD *)v64 == 1 )
            v64[1] = 0LL;
          p_Blink->Tail.Overlay.DriverContext[3] = 0LL;
          v65 = *(v64 - 15);
          v169 = v64;
          v17 = (FxRequest *)(v64 - 15);
          v66 = *(__int64 (__fastcall **)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))(v65 + 16);
          v17->m_IrpQueue = 0LL;
          if ( v66 == FxRequest::Release )
          {
            m_ObjectFlags = v17->m_ObjectFlags;
            m_Reserved = v17->m_Reserved;
            m_IrpAllocation = v17->m_IrpAllocation;
            LODWORD(FxVerifyLeakDetection) = v17->m_CanComplete;
            v164 = m_Reserved;
            v174 = m_IrpAllocation;
            v161 = (unsigned __int8)FxVerifyLeakDetection;
            if ( m_ObjectFlags < 0 )
            {
              Blink = (FxTagTracker *)v17[-1].m_OwnerListEntry2.Blink;
              if ( Blink )
              {
                FxTagTracker::UpdateTagHistory(
                  Blink,
                  (void *)0x75657551,
                  2062,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                  TagRelease,
                  v17->m_Refcnt - 1);
                LODWORD(FxVerifyLeakDetection) = v161;
                v12 = 4098;
              }
              m_IrpAllocation = v174;
            }
            v71 = _InterlockedDecrement(&v17->m_Refcnt);
            if ( !v71 )
            {
              v83 = v17->m_ObjectFlags;
              if ( (v83 & 0x20) != 0 || (v83 & 0x10) != 0 && KeGetCurrentIrql() )
              {
                FxObject::SetObjectStateLocked(v17, FxObjectStateDeferedDestroy);
                FxDisposeList::Add(v17->m_Globals->Driver->m_DisposeList, v17);
              }
              else
              {
                if ( (v83 & 0x80u) != 0 )
                {
                  v84 = (FxTagTracker *)v17[-1].m_OwnerListEntry2.Blink;
                  if ( v84 )
                  {
                    FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v17[-1].m_OwnerListEntry2.Blink);
                    v12 = 4098;
                  }
                }
                else
                {
                  v84 = 0LL;
                }
                m_ObjectSize = v17->m_ObjectSize;
                if ( m_ObjectSize && (v17->m_ObjectFlags & 8) != 0 )
                {
                  v86 = (FxRequest_vtbl **)((char *)&v17->__vftable + m_ObjectSize);
                  if ( v86 )
                  {
                    do
                    {
                      v87 = (void (__fastcall *)(unsigned __int64))v86[2];
                      if ( v87 )
                      {
                        v87((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        v86[2] = 0LL;
                      }
                      v88 = (void (__fastcall *)(unsigned __int64))v86[3];
                      if ( v88 )
                      {
                        v88((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
                        v86[3] = 0LL;
                      }
                      v86 = (_QWORD *)v86[1];
                    }
                    while ( v86 );
                    m_Reserved = v164;
                    v12 = 4098;
                  }
                  v89 = v17->m_ObjectSize;
                  LOBYTE(FxVerifyLeakDetection) = 1;
                  if ( v89 )
                  {
                    v90 = (FxRequest_vtbl **)((char *)&v17->__vftable + v89);
                    if ( v90 )
                    {
                      do
                      {
                        v91 = (_QWORD *)v90[1];
                        if ( !(_BYTE)FxVerifyLeakDetection )
                          FxPoolFree(v90);
                        LOBYTE(FxVerifyLeakDetection) = 0;
                        v90 = v91;
                      }
                      while ( v91 );
                      v12 = 4098;
                    }
                  }
                }
                if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                {
                  if ( BYTE4(v17[-1].m_ForwardProgressQueue) )
                  {
                    _InterlockedDecrement(&v17->m_Globals->FxVerifyLeakDetection->ObjectCnt);
                    if ( v12 == v17->m_Type
                      && _InterlockedExchangeAdd(&v17->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
                    {
                      FxVerifyLeakDetection = v17->m_Globals->FxVerifyLeakDetection;
                      _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
                    }
                  }
                }
                if ( v84 )
                {
                  v17[-1].m_OwnerListEntry2.Blink = 0LL;
                  FxTagTracker::`scalar deleting destructor'(v84, (unsigned int)FxVerifyLeakDetection);
                }
                v92 = FxRequestFromLookaside::SelfDestruct;
                SelfDestruct = v17->SelfDestruct;
                if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
                {
                  m_AllocatedMdl = v17->m_AllocatedMdl;
                  m_DeviceBase = v17->m_DeviceBase;
                  v17->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
                  if ( m_AllocatedMdl )
                  {
                    if ( v17->m_Globals->FxVerifierOn )
                      FxMdlFreeDebug(v17->m_Globals, m_AllocatedMdl);
                    else
                      IoFreeMdl(m_AllocatedMdl);
                  }
                  m_RequestContext = v17->m_RequestContext;
                  m_Irp = v17->m_Irp.m_Irp;
                  if ( m_RequestContext )
                  {
                    if ( m_Irp )
                      m_RequestContext->ReleaseAndRestore(m_RequestContext, v17);
                    v143 = v17->m_RequestContext;
                    if ( v143 )
                      ((void (__fastcall *)(FxRequestContext *, __int64))v143->~FxRequestContext)(v143, 1LL);
                  }
                  if ( m_Irp && v17->m_IrpAllocation == 1 )
                    IoFreeIrp(v17->m_Irp.m_Irp);
                  m_Timer = v17->m_Timer;
                  if ( m_Timer )
                    FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v92);
                  v17->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
                  if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                  {
                    v144 = (FxVerifierLock *)v17[-1].m_ForwardProgressList.Flink;
                    if ( v144 )
                    {
                      FxVerifierLock::`scalar deleting destructor'(v144, (unsigned int)v92);
                      v17[-1].m_ForwardProgressList.Flink = 0LL;
                    }
                  }
                  v17->m_NPLock.m_DbgFlagIsInitialized = 0;
                  FxObject::~FxObject(v17, (unsigned int)v92, (unsigned int)v10);
                  if ( v17->m_ForwardRequestToParent )
                  {
                    v145 = FxObject::_CleanupPointer(v17->m_Globals, v17);
                    ExFreePoolWithTag(v145->Base, 0);
                  }
                  else
                  {
                    if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                      v99 = (FxRequest *)((char *)v17 - 48);
                    else
                      v99 = v17;
                    if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
                      FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v99[-1].m_InternalContext);
                    v100 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
                    if ( v100 && *(_WORD *)(v100 + 8) == 4354 && *(_BYTE *)(v100 + 1683) )
                    {
                      m_InternalContext = (_SLIST_ENTRY *)v99[-1].m_InternalContext;
                      if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
                      {
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
                        m_IrpAllocation = v174;
                        LOBYTE(FxVerifyLeakDetection) = v161;
                        goto LABEL_100;
                      }
                      (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
                    }
                    else
                    {
                      v101 = (_SLIST_ENTRY *)v99[-1].m_InternalContext;
                      ++HIDWORD(m_DeviceBase[2].m_ChildEntry.Flink);
                      if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
                      {
                        ++LODWORD(m_DeviceBase[2].m_ChildEntry.Blink);
                        (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(v101);
                      }
                      else
                      {
                        ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, v101);
                      }
                    }
                  }
                }
                else
                {
                  v102 = FxObject::SelfDestruct;
                  if ( (char *)SelfDestruct == (char *)FxObject::SelfDestruct )
                  {
                    v103 = (FxRequest *(__fastcall *)(FxRequest *, char))v17->~FxObject;
                    if ( (char *)v103 == (char *)FxRegKey::`scalar deleting destructor' )
                    {
                      v17->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
                      m_Lock = (void *)v17->m_NPLock.m_Lock;
                      if ( m_Lock )
                      {
                        ZwClose(m_Lock);
                        v17->m_NPLock.m_Lock = 0LL;
                      }
                      v105 = *(_QWORD **)&v17->m_NPLock.m_DbgFlagIsInitialized;
                      v17->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
                      if ( v105 )
                      {
                        FxPoolFree(v105);
                        *(_QWORD *)&v17->m_NPLock.m_DbgFlagIsInitialized = 0LL;
                      }
                      FxObject::~FxObject(v17, (unsigned int)v102, (unsigned int)v10);
                      if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                        v106 = &v17[-1].m_OwnerListEntry2.Blink;
                      else
                        v106 = (_LIST_ENTRY **)v17;
                      if ( !v106 )
                        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                    }
                    else
                    {
                      if ( v103 == FxRequest::`scalar deleting destructor' )
                      {
                        v17->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
                        v109 = v17->m_AllocatedMdl;
                        if ( v109 )
                        {
                          if ( v17->m_Globals->FxVerifierOn )
                            FxMdlFreeDebug(v17->m_Globals, v17->m_AllocatedMdl);
                          else
                            IoFreeMdl(v109);
                        }
                        v110 = v17->m_RequestContext;
                        v111 = v17->m_Irp.m_Irp;
                        if ( v110 )
                        {
                          if ( v111 )
                            v110->ReleaseAndRestore(v110, v17);
                          v146 = v17->m_RequestContext;
                          if ( v146 )
                            ((void (__fastcall *)(FxRequestContext *, __int64))v146->~FxRequestContext)(v146, 1LL);
                        }
                        if ( v111 && v17->m_IrpAllocation == 1 )
                          IoFreeIrp(v17->m_Irp.m_Irp);
                        v112 = v17->m_Timer;
                        if ( v112 )
                          FxRequestTimer::`scalar deleting destructor'(v112, (unsigned int)v102);
                        v17->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
                        if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                        {
                          v147 = (FxVerifierLock *)v17[-1].m_ForwardProgressList.Flink;
                          if ( v147 )
                          {
                            FxVerifierLock::`scalar deleting destructor'(v147, (unsigned int)v102);
                            v17[-1].m_ForwardProgressList.Flink = 0LL;
                          }
                        }
                        v17->m_NPLock.m_DbgFlagIsInitialized = 0;
                        FxObject::~FxObject(v17, (unsigned int)v102, (unsigned int)v10);
                        if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                          v113 = &v17[-1].m_OwnerListEntry2.Blink;
                        else
                          v113 = &v17->__vftable;
                        FxPoolFree(v113);
                        m_IrpAllocation = v174;
                        LOBYTE(FxVerifyLeakDetection) = v161;
                        goto LABEL_100;
                      }
                      if ( (char *)v103 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
                      {
                        v103(v17, 1);
                        m_IrpAllocation = v174;
                        LOBYTE(FxVerifyLeakDetection) = v161;
                        goto LABEL_100;
                      }
                      v17->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
                      *(_QWORD *)&v17->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                      FxObject::~FxObject(v17, (unsigned int)FxObject::SelfDestruct, (unsigned int)v10);
                      if ( SLOBYTE(v17->m_ObjectFlags) < 0 )
                        v106 = &v17[-1].m_OwnerListEntry2.Blink;
                      else
                        v106 = (_LIST_ENTRY **)v17;
                      if ( !v106 )
                        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                    }
                    if ( ((unsigned __int16)v106 & 0xFFF) != 0 )
                    {
                      v107 = (FX_POOL_TRACKER *)*(v106 - 2);
                      if ( LOBYTE((*(v106 - 1))[16].Blink) )
                      {
                        if ( FxIsPagedPoolType(v107->PoolType) )
                          FxPoolRemovePagedAllocateTracker(v107);
                        else
                          FxPoolRemoveNonPagedAllocateTracker(v107);
                        memset(v107, 0, v107->Size + 64);
                      }
                      ExFreePoolWithTag(v107, 0);
                      m_IrpAllocation = v174;
                      LOBYTE(FxVerifyLeakDetection) = v161;
                      goto LABEL_100;
                    }
                    ExFreePoolWithTag(v106, 0);
                  }
                  else
                  {
                    SelfDestruct(v17);
                  }
                }
              }
              m_IrpAllocation = v174;
              LOBYTE(FxVerifyLeakDetection) = v161;
            }
LABEL_100:
            if ( m_Reserved && v71 == 1 && v17->m_Completed )
            {
              FxIoQueue::ReturnReservedRequest(v17->m_ForwardProgressQueue, v17);
            }
            else if ( m_IrpAllocation )
            {
              if ( (_BYTE)FxVerifyLeakDetection )
              {
                if ( v71 == 1 )
                {
                  if ( v17->m_Completed )
                  {
                    m_CompletionState = v17->m_CompletionState;
                    m_IoQueue = v17->m_IoQueue;
                    v150 = v17->m_Irp.m_Irp;
                    m_PriorityBoost = v17->m_PriorityBoost;
                    v17->m_CompletionState = 0;
                    v17->m_IoQueue = 0LL;
                    v17->m_Irp.m_Irp = 0LL;
                    IofCompleteRequest(v150, m_PriorityBoost);
                    if ( m_CompletionState == 1 )
                    {
                      FxNonPagedObject::Lock(m_IoQueue, v165, (unsigned __int8)v10);
                      --m_IoQueue->m_TwoPhaseCompletions;
                      --m_IoQueue->m_DriverIoCount;
                      FxIoQueue::DispatchInternalEvents(m_IoQueue, v165[0]);
                    }
                  }
                }
              }
            }
            m_Globals = v166;
          }
          else
          {
            v66(
              v17,
              (FxObjectDebugLeakDetection *)1969583441,
              2062LL,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          }
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
        }
        else
        {
LABEL_25:
          v17 = pRequest;
          if ( !pRequest )
            goto $Done_4;
          pRequest->m_IoQueue = v5;
          v22 = v5->m_IsDevicePowerPolicyOwner == 0;
          v5->m_TransitionFromEmpty = 1;
          v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( !v22 && v5->m_PowerManaged && !v5->m_PowerReferenced )
          {
            v23 = v5->m_DeviceBase;
            v24 = 0;
            v167 = 0;
            v25 = *(_QWORD *)(*(_QWORD *)&v23[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
            v26 = (unsigned __int64 *)(v25 + 16);
            v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v25 + 16));
            v28 = *(_BYTE *)(v25 + 224);
            v174 = v27;
            if ( (v28 & 0x10) != 0 )
            {
              v34 = -1073741101;
            }
            else if ( (v28 & 0x20) != 0 )
            {
              v29 = *(unsigned __int8 *)(v25 + 225);
              v24 = ++*(_DWORD *)(v25 + 24);
              v30 = *(_QWORD *)(v25 + 424);
              *(_DWORD *)(v25 + 4 * v29 + 232) = 512;
              LOBYTE(v29) = *(_BYTE *)(v25 + 225) + 1;
              v167 = v24;
              *(_BYTE *)(v25 + 225) = v29 & 7;
              v31 = 0LL;
              v32 = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v25 + 228) - 1].TargetStatesCount;
              if ( v32 )
              {
                v33 = FxPowerIdleMachine::m_StateTable[*(_DWORD *)(v25 + 228) - 1].TargetStates;
                while ( v33[v31].PowerIdleEvent != PowerIdleEventIoIncrement )
                {
                  v31 = (unsigned int)(v31 + 1);
                  if ( (unsigned int)v31 >= v32 )
                    goto LABEL_47;
                }
                v152 = v33[v31].PowerIdleState;
                if ( v152 != 35 )
                {
                  do
                  {
                    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(*(FxObject **)(v30 + 96));
                    WPP_IFR_SF_qqLL(
                      *(_FX_DRIVER_GLOBALS **)(v30 + 16),
                      4u,
                      0x15u,
                      0x11u,
                      WPP_PowerIdleStateMachine_cpp_Traceguids,
                      ObjectHandleUnchecked,
                      *(const void **)(v154 + 144),
                      v152,
                      *(_DWORD *)(v25 + 228));
                    *(_DWORD *)(v25 + 4LL * *(unsigned __int8 *)(v25 + 226) + 264) = v152;
                    v155 = *(_BYTE *)(v25 + 226) + 1;
                    *(_DWORD *)(v25 + 228) = v152;
                    *(_BYTE *)(v25 + 226) = v155 & 7;
                    v156 = FxPowerIdleMachine::m_StateTable[v152 - 1].StateFunc;
                    if ( !v156 )
                      break;
                    v152 = v156((FxPowerIdleMachine *)v25);
                  }
                  while ( v152 != 35 );
                  v5 = this;
                  v26 = (unsigned __int64 *)(v25 + 16);
                }
              }
LABEL_47:
              v34 = 259;
              v22 = KeReadStateEvent((PRKEVENT)(v25 + 192)) == 0;
              v27 = v174;
              if ( !v22 )
                v34 = 0;
            }
            else
            {
              v34 = -1073741101;
            }
            KeReleaseSpinLock(v26, v27);
            v35 = *(FxTagTracker **)(v25 + 32);
            if ( v35 && (!v34 || v34 == 259) )
              FxTagTracker::UpdateTagHistory(v35, 0LL, 0, 0LL, TagAddRef, v24);
            v36 = v34 < 0;
            m_Globals = v166;
            if ( !v36 )
              v5->m_PowerReferenced = 1;
          }
          pRequest = 0LL;
        }
        ++v5->m_DriverIoCount;
        v37 = v5->m_DriverOwned.Blink;
        p_m_OwnerListEntry2 = &v17->m_OwnerListEntry2;
        if ( v37->Flink != &v5->m_DriverOwned )
          __fastfail(3u);
        p_m_OwnerListEntry2->Flink = &v5->m_DriverOwned;
        v17->m_OwnerListEntry2.Blink = v37;
        v37->Flink = p_m_OwnerListEntry2;
        v5->m_DriverOwned.Blink = p_m_OwnerListEntry2;
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v157 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v157, flags, (unsigned __int8)v10);
        }
        else
        {
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
        }
        FxIoQueue::DispatchRequestToDriver(v5, v17);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v158 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v158, &flags, v39);
        }
        else
        {
          flags = KeAcquireSpinLockRaiseToDpc(&v5->m_NPLock.m_Lock);
        }
        goto LABEL_58;
      }
LABEL_87:
      if ( !pRequest )
        goto $Done_4;
      v141 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
      if ( v141 >= 0 )
        goto $Done_4;
      goto LABEL_58;
    }
    v53 = pRequest;
    if ( !pRequest )
      break;
    v72 = pRequest->m_Globals;
    v73 = &v5->m_Queue;
    v74 = flags;
    v163[0] = flags;
    if ( !v72->FxVerifierOn
      || (v136 = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v72, &v5->m_Queue),
          v10 = WPP_FxIoQueue_cpp_Traceguids,
          v82 = v136,
          v12 = 4098,
          v136 >= 0) )
    {
      v75 = _InterlockedExchangeAdd(&v53->m_Refcnt, 1u);
      v76 = pRequest;
      v77 = v75 + 1;
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        v137 = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( v137 )
        {
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v137,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v77);
          v10 = WPP_FxIoQueue_cpp_Traceguids;
          v12 = 4098;
        }
      }
      v78 = v76->m_Irp.m_Irp;
      v79 = &v76->120;
      v76->m_IrpQueue = v73;
      Irp.m_Irp = v78;
      if ( v76 == (FxRequest *)-120LL )
      {
        v78->Tail.Overlay.DriverContext[3] = v73;
      }
      else
      {
        v78->Tail.Overlay.DriverContext[3] = v79;
        v76->m_CsqContext.Irp = v78;
        v76->m_CsqContext.Csq = (_IO_CSQ *)v73;
        v79->m_CsqContext.Type = 1;
      }
      v80 = v5->m_Queue.m_Queue.Blink;
      v81 = &v78->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v80->Flink != v73 )
        __fastfail(3u);
      v81->Flink = &v73->m_Queue;
      v78->Tail.Overlay.ListEntry.Blink = v80;
      v80->Flink = v81;
      v5->m_Queue.m_Queue.Blink = v81;
      ++v5->m_Queue.m_RequestCount;
      v78->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&v78->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( v78->Cancel && _InterlockedExchange64((volatile __int64 *)&v78->CancelRoutine, 0LL) )
      {
        FxIrpQueue::RemoveIrpFromListEntry(&v5->m_Queue, &Irp);
        if ( v139 )
          *(_QWORD *)(v139 + 8) = 0LL;
        *(_QWORD *)(v138 + 144) = 0LL;
        v76->m_IrpQueue = 0LL;
        v53 = pRequest;
        v82 = -1073741536;
        pRequest->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        v10 = WPP_FxIoQueue_cpp_Traceguids;
        v12 = 4098;
      }
      else
      {
        v53 = pRequest;
        v82 = 0;
      }
      v74 = flags;
    }
    if ( v82 < 0 )
    {
      FxNonPagedObject::Unlock(v5, v74, (unsigned __int8)WPP_FxIoQueue_cpp_Traceguids);
      v53->m_Irp.m_Irp->IoStatus.Information = 0LL;
      FxRequest::Complete(v53, v82);
      v53->Release(v53, (void *)1886220099, 2636, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxNonPagedObject::Lock(v5, v163, v140);
LABEL_274:
      v10 = WPP_FxIoQueue_cpp_Traceguids;
      v12 = 4098;
      goto LABEL_117;
    }
    v53->m_IoQueue = v5;
    if ( v5->m_Queue.m_RequestCount == 1 || v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    {
      v22 = v5->m_IsDevicePowerPolicyOwner == 0;
      v5->m_TransitionFromEmpty = 1;
      v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
      if ( !v22 && v5->m_PowerManaged && !v5->m_PowerReferenced )
      {
        if ( FxPowerIdleMachine::PowerReferenceWorker(
               *(FxPowerIdleMachine **)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL),
               0,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL) >= 0 )
          v5->m_PowerReferenced = 1;
        goto LABEL_274;
      }
    }
LABEL_117:
    m_Globals = v166;
    p_m_Cancelled = &v5->m_Cancelled;
    pRequest = 0LL;
  }
  while ( v82 < 0 );
  if ( v5->m_ReadyNotify.Method && v5->m_TransitionFromEmpty )
  {
    FxIoQueue::ProcessReadyNotify(v5, &flags);
    goto LABEL_58;
  }
$Done_4:
  --v5->m_Dispatching;
  if ( SLOBYTE(v5->m_ObjectFlags) < 0 && (v159 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Unlock(v159, flags, (unsigned __int8)v10);
  else
    KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
  return 1;
}

/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C001BAB0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0039ED0 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0095280 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C0095310 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C000D7C8 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0010034 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001FECC (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C003B834 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003C78C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C7FC (-PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
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
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D93B4 (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D93FC (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxTagTracker *v5; // r13
  void (__fastcall ***v6)(FxRequestFromLookaside *, unsigned int); // rbx
  _FILE_OBJECT *v8; // r14
  _LIST_ENTRY *v10; // r8
  $E83ED047D649F8330EF035260E0728C3 *v11; // rdi
  void (__fastcall *v12)(FxObject *, unsigned int); // r11
  void (__fastcall *const *v13)(); // r10
  FxIrpQueue *p_m_Queue; // r9
  FxIrpQueue *Flink; // rdx
  _IRP *j; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *Blink; // rdx
  $E83ED047D649F8330EF035260E0728C3 *v19; // rbx
  _LIST_ENTRY *v20; // rax
  __int64 (__fastcall *v21)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  char v22; // cl
  char v23; // r12
  char v24; // r13
  signed __int32 v25; // r15d
  int v26; // edi
  void (__fastcall *v27)(FxRequestFromLookaside *, unsigned int); // rcx
  _LIST_ENTRY *v28; // rdx
  _LIST_ENTRY *v29; // rax
  unsigned __int64 v30; // rdx
  FxTagTracker *v31; // rcx
  unsigned int v32; // r8d
  char v33; // al
  __int64 v34; // rax
  __int64 (__fastcall *v35)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  char v36; // bp
  char v37; // r14
  char v38; // r12
  signed __int32 v39; // edi
  int result; // eax
  __int16 v41; // cx
  FxTagTracker *v42; // r14
  unsigned __int16 v43; // cx
  _QWORD *v44; // rdi
  void (__fastcall *v45)(unsigned __int64); // rax
  void (__fastcall *v46)(unsigned __int64); // rax
  unsigned __int16 v47; // ax
  _QWORD *v48; // rcx
  _QWORD *v49; // rdi
  void (__fastcall *v50)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *v51)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v52; // rcx
  void (__fastcall **v53)(FxRequestFromLookaside *, unsigned int); // r14
  void (__fastcall **v54)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v55)(FxRequestFromLookaside *, unsigned int); // rdi
  FxRequestTimer *v56; // rcx
  void (__fastcall ***v57)(FxRequestFromLookaside *, unsigned int); // rbp
  void (__fastcall *v58)(FxRequestFromLookaside *, unsigned int); // rax
  _SLIST_ENTRY *v59; // rbp
  __int16 v60; // cx
  unsigned __int16 v61; // cx
  _QWORD *v62; // rsi
  void (__fastcall *v63)(unsigned __int64, unsigned __int64); // rax
  void (__fastcall *v64)(unsigned __int64, unsigned __int64); // rax
  unsigned __int16 v65; // ax
  _QWORD *v66; // rcx
  _QWORD *v67; // rsi
  void (__fastcall *v68)(FxRequestFromLookaside *, unsigned int); // rdx
  void (__fastcall *v69)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v70; // rcx
  void (__fastcall **v71)(FxRequestFromLookaside *, unsigned int); // rsi
  void (__fastcall **v72)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v73)(FxRequestFromLookaside *, unsigned int); // r15
  FxRequestTimer *v74; // rcx
  void (__fastcall ***v75)(FxRequestFromLookaside *, unsigned int); // r15
  void (__fastcall *v76)(FxRequestFromLookaside *, unsigned int); // rax
  _SLIST_ENTRY *v77; // r15
  void (__fastcall **v78)(FxRequestFromLookaside *, unsigned int); // rsi
  void *(__fastcall *v79)(FxRegKey *, unsigned int); // rax
  void (__fastcall **v80)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v81)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall ***v82)(FxRequestFromLookaside *, unsigned int); // rax
  FX_POOL_TRACKER *v83; // rdi
  void (__fastcall *v84)(FxObject *, unsigned int); // rdx
  FxRequest *(__fastcall *v85)(FxRequest *, char); // rax
  void (__fastcall **v86)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v87)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall ***v88)(FxRequestFromLookaside *, unsigned int); // rax
  FX_POOL_TRACKER *v89; // rsi
  _MDL *v90; // rcx
  void (__fastcall **v91)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v92)(FxRequestFromLookaside *, unsigned int); // rdi
  FxRequestTimer *v93; // rcx
  void (__fastcall ***v94)(FxRequestFromLookaside *, unsigned int); // rcx
  _MDL *v95; // rcx
  void (__fastcall **v96)(FxRequestFromLookaside *, unsigned int); // rcx
  void (__fastcall **v97)(FxRequestFromLookaside *, unsigned int); // rsi
  FxRequestTimer *v98; // rcx
  void (__fastcall ***v99)(FxRequestFromLookaside *, unsigned int); // rcx
  _SLIST_ENTRY *v100; // rbp
  _SLIST_ENTRY *v101; // r15
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rsi
  FxVerifierLock *v104; // rcx
  unsigned __int16 v105; // r9
  const void *v106; // rcx
  unsigned __int8 v107; // r8
  FxTagTracker *v108; // rcx
  void (__fastcall **v109)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v110; // rcx
  FX_POOL_HEADER *v111; // rax
  void (__fastcall **v112)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v113; // rcx
  char v114; // di
  FxIoQueue *v115; // rbp
  _IRP *v116; // rcx
  CCHAR v117; // dl
  unsigned __int8 v118; // r8
  unsigned __int16 v119; // r9
  unsigned __int8 v120; // r8
  _FX_DRIVER_GLOBALS *v121; // rdx
  __int64 v122; // r8
  unsigned __int16 v123; // r9
  const void *_a2; // rdx
  const void *v125; // rcx
  __int64 v126; // r8
  const void *v127; // rdx
  const void *v128; // rcx
  __int64 v129; // r8
  unsigned __int16 v130; // r9
  unsigned __int8 v131; // r8
  FxVerifierLock *v132; // rcx
  const void *ObjectHandleUnchecked; // rax
  FxTagTracker *v134; // rcx
  void (__fastcall **v135)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v136; // rcx
  FX_POOL_HEADER *v137; // rax
  bool IsPagedPoolType; // al
  FX_POOL_TRACKER *v139; // rcx
  void (__fastcall **v140)(FxRequestFromLookaside *, unsigned int); // rcx
  FxVerifierLock *v141; // rcx
  bool v142; // al
  char v143; // di
  FxIoQueue *v144; // rsi
  _IRP *v145; // rcx
  CCHAR v146; // dl
  FxRequest *v147; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+41h] [rbp-67h] BYREF
  unsigned __int8 v150[6]; // [rsp+42h] [rbp-66h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+48h] [rbp-60h]
  $E83ED047D649F8330EF035260E0728C3 *i; // [rsp+50h] [rbp-58h]
  $E83ED047D649F8330EF035260E0728C3 *v153; // [rsp+58h] [rbp-50h]
  ULONG_PTR retaddr; // [rsp+A8h] [rbp+0h]
  char v155; // [rsp+B0h] [rbp+8h]
  FxTagTracker *v156; // [rsp+B0h] [rbp+8h]

  m_Globals = this->m_Globals;
  v5 = 0LL;
  v6 = 0LL;
  globals = m_Globals;
  v8 = FileObject;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyGetRequestUpdateFlags(this, m_Globals, TagRequest);
    if ( result < 0 )
      return result;
  }
  if ( ((this->m_Type - 1) & 0xFFFFFFFD) == 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v104 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v104, &irql, (unsigned __int8)TagRequest);
    }
    else
    {
      irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    if ( this->m_PowerState == FxIoQueuePowerOff )
    {
      v105 = 27;
      v106 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v106 = 0LL;
    }
    else
    {
      if ( (this->m_QueueState & 2) != 0 )
      {
        v11 = &TagRequest->120;
        if ( !TagRequest )
          v11 = 0LL;
        for ( i = v11; ; v11 = i )
        {
          v12 = FxObject::SelfDestruct;
          v13 = FxRequestBase::`vftable';
          p_m_Queue = &this->m_Queue;
          if ( v11 )
          {
            if ( FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &v11->m_CsqContext) )
            {
              v19 = v11;
              v13 = FxRequestBase::`vftable';
              v12 = FxObject::SelfDestruct;
              goto LABEL_21;
            }
            v26 = -1073741275;
          }
          else
          {
            Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
            for ( j = 0LL; Flink != p_m_Queue; j = 0LL )
            {
              j = (_IRP *)&Flink[-5].m_RequestCount;
              if ( !v8 )
                break;
              if ( j->Tail.Overlay.CurrentStackLocation->FileObject == v8 )
                break;
              Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
            }
            if ( j )
            {
              while ( !_InterlockedExchange64((volatile __int64 *)&j->CancelRoutine, 0LL) )
              {
                j = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, j, v8);
                p_m_Queue = &this->m_Queue;
                if ( !j )
                  goto LABEL_219;
              }
              p_ListEntry = &j->Tail.Overlay.ListEntry;
              v10 = j->Tail.Overlay.ListEntry.Flink;
              if ( (void **)v10->Blink != &j->Tail.CompletionKey + 6
                || (Blink = j->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
              {
                __fastfail(3u);
              }
              Blink->Flink = v10;
              v10->Blink = Blink;
              j->Tail.Overlay.ListEntry.Blink = &j->Tail.Overlay.ListEntry;
              p_ListEntry->Flink = p_ListEntry;
              --p_m_Queue->m_RequestCount;
              v19 = ($E83ED047D649F8330EF035260E0728C3 *)j->Tail.Overlay.DriverContext[3];
              if ( v19->m_CsqContext.Type == 1 )
                v19->m_CsqContext.Irp = 0LL;
              v153 = v19;
              j->Tail.Overlay.DriverContext[3] = 0LL;
LABEL_21:
              v20 = v19[-5].m_ListEntry.Flink;
              v6 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))&v19[-5];
              v21 = (__int64 (__fastcall *)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))v20[1].Flink;
              v6[28] = 0LL;
              if ( v21 != FxRequest::Release )
              {
                v21(
                  (FxRequest *)v6,
                  (FxObjectDebugLeakDetection *)1969583441,
                  2102LL,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
                goto LABEL_28;
              }
              v22 = *((_BYTE *)v6 + 238);
              v23 = *((_BYTE *)v6 + 354);
              v24 = *((_BYTE *)v6 + 213);
              v155 = v22;
              if ( *((char *)v6 + 24) < 0 )
              {
                v108 = (FxTagTracker *)*(v6 - 6);
                if ( v108 )
                {
                  FxTagTracker::UpdateTagHistory(
                    v108,
                    (void *)0x75657551,
                    2102,
                    "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                    TagRelease,
                    *((_DWORD *)v6 + 3) - 1);
                  v13 = FxRequestBase::`vftable';
                  v12 = FxObject::SelfDestruct;
                }
                v22 = v155;
              }
              v25 = _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
              if ( v25 )
              {
LABEL_24:
                if ( v23 && v25 == 1 && *((_BYTE *)v6 + 214) )
                {
                  FxIoQueue::ReturnReservedRequest((FxIoQueue *)v6[42], (FxRequest *)v6);
                  m_Globals = globals;
                  v5 = 0LL;
                }
                else
                {
                  if ( v24 && v22 && v25 == 1 )
                  {
                    v5 = 0LL;
                    if ( *((_BYTE *)v6 + 214) )
                    {
                      v114 = *((_BYTE *)v6 + 237);
                      v115 = (FxIoQueue *)v6[31];
                      v116 = (_IRP *)v6[19];
                      v117 = *((_BYTE *)v6 + 236);
                      *((_BYTE *)v6 + 237) = 0;
                      v6[31] = 0LL;
                      v6[19] = 0LL;
                      IofCompleteRequest(v116, v117);
                      if ( v114 == 1 )
                      {
                        FxNonPagedObject::Lock(v115, &PreviousIrql, (unsigned __int8)v10);
                        --v115->m_TwoPhaseCompletions;
                        --v115->m_DriverIoCount;
                        FxIoQueue::DispatchInternalEvents(v115, PreviousIrql, v118, v119);
                        m_Globals = globals;
                        goto LABEL_28;
                      }
                    }
                  }
                  else
                  {
                    v5 = 0LL;
                  }
                  m_Globals = globals;
                }
LABEL_28:
                v26 = 0;
                goto LABEL_29;
              }
              v41 = *((_WORD *)v6 + 12);
              if ( (v41 & 0x20) != 0 || (v41 & 0x10) != 0 && KeGetCurrentIrql() )
              {
                FxObject::SetObjectStateLocked((FxObject *)v6, FxObjectStateDeferedDestroy);
                FxDisposeList::Add(*((FxDisposeList **)v6[2][9] + 43), (FxObject *)v6);
LABEL_88:
                v22 = v155;
                goto LABEL_24;
              }
              if ( (v41 & 0x80u) != 0 )
              {
                v42 = (FxTagTracker *)*(v6 - 6);
                if ( v42 )
                {
                  FxTagTracker::CheckForAbandondedTags((FxTagTracker *)*(v6 - 6));
                  v13 = FxRequestBase::`vftable';
                  v12 = FxObject::SelfDestruct;
                }
              }
              else
              {
                v42 = 0LL;
              }
              v43 = *((_WORD *)v6 + 5);
              if ( v43 && ((_BYTE)v6[3] & 8) != 0 )
              {
                v44 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))((char *)v6 + v43);
                if ( v44 )
                {
                  do
                  {
                    v45 = (void (__fastcall *)(unsigned __int64))v44[2];
                    if ( v45 )
                    {
                      v45((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v44[2] = 0LL;
                    }
                    v46 = (void (__fastcall *)(unsigned __int64))v44[3];
                    if ( v46 )
                    {
                      v46((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      v44[3] = 0LL;
                    }
                    v44 = (_QWORD *)v44[1];
                  }
                  while ( v44 );
                  v13 = FxRequestBase::`vftable';
                  v12 = FxObject::SelfDestruct;
                }
                v47 = *((_WORD *)v6 + 5);
                LOBYTE(Blink) = 1;
                if ( v47 )
                {
                  v48 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))((char *)v6 + v47);
                  if ( v48 )
                  {
                    do
                    {
                      v49 = (_QWORD *)v48[1];
                      if ( !(_BYTE)Blink )
                        FxPoolFree(v48);
                      LOBYTE(Blink) = 0;
                      v48 = v49;
                    }
                    while ( v49 );
                    v13 = FxRequestBase::`vftable';
                    v12 = FxObject::SelfDestruct;
                  }
                }
              }
              if ( *((char *)v6 + 24) < 0 )
              {
                if ( *((_BYTE *)v6 - 20) )
                {
                  _InterlockedDecrement((volatile signed __int32 *)v6[2][41] + 3);
                  if ( *((_WORD *)v6 + 4) == 4098
                    && _InterlockedExchangeAdd((volatile signed __int32 *)v6[2][41] + 4, 0xFFFFFFFF) != 1 )
                  {
                    Blink = (_LIST_ENTRY *)v6[2][41];
                    _InterlockedExchangeAdd((volatile signed __int32 *)&Blink->Blink, -HIDWORD(Blink->Flink));
                  }
                }
              }
              if ( v42 )
              {
                *(v6 - 6) = 0LL;
                FxTagTracker::`scalar deleting destructor'(v42, (unsigned int)Blink);
                v13 = FxRequestBase::`vftable';
                v12 = FxObject::SelfDestruct;
              }
              v50 = FxRequestFromLookaside::SelfDestruct;
              v51 = **v6;
              if ( v51 == FxRequestFromLookaside::SelfDestruct )
              {
                v52 = (_MDL *)v6[30];
                v53 = v6[12];
                *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v13;
                if ( v52 )
                {
                  if ( *((_BYTE *)v6[2] + 316) )
                    FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v6[2], v52);
                  else
                    IoFreeMdl(v52);
                }
                v54 = v6[21];
                v55 = v6[19];
                if ( v54 )
                {
                  if ( v55 )
                    (*((void (__fastcall **)(_QWORD, _QWORD))*v54 + 3))(v54, v6);
                  v109 = v6[21];
                  if ( v109 )
                    (*(void (__fastcall **)(_QWORD, __int64))*v109)(v109, 1LL);
                }
                if ( v55 && *((_BYTE *)v6 + 213) == 1 )
                  IoFreeIrp((PIRP)v6[19]);
                v56 = (FxRequestTimer *)v6[22];
                if ( v56 )
                  FxRequestTimer::`scalar deleting destructor'(v56, (unsigned int)v50);
                *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxNonPagedObject::`vftable';
                if ( *((char *)v6 + 24) < 0 )
                {
                  v110 = (FxVerifierLock *)*(v6 - 5);
                  if ( v110 )
                  {
                    FxVerifierLock::`scalar deleting destructor'(v110, (unsigned int)v50);
                    *(v6 - 5) = 0LL;
                  }
                }
                *((_BYTE *)v6 + 104) = 0;
                FxObject::~FxObject((FxObject *)v6, (unsigned int)v50, (unsigned int)v10);
                if ( *((_BYTE *)v6 + 355) )
                {
                  v111 = FxObject::_CleanupPointer((_FX_DRIVER_GLOBALS *)v6[2], (FxObject *)v6);
                  ExFreePoolWithTag(v111->Base, 0);
                  v8 = FileObject;
                }
                else
                {
                  if ( *((char *)v6 + 24) < 0 )
                    v57 = v6 - 6;
                  else
                    v57 = v6;
                  if ( *((_BYTE *)v53[2] + 264) )
                    FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)*(v57 - 2));
                  v58 = v53[81];
                  if ( v58 && *((_WORD *)v58 + 4) == 4354 && *((_BYTE *)v58 + 1683) )
                  {
                    v100 = (_SLIST_ENTRY *)*(v57 - 2);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v53 + 28) < *((_WORD *)v53 + 232) )
                    {
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)v53 + 28, v100);
                      v22 = v155;
                      v8 = FileObject;
                      goto LABEL_24;
                    }
                    ((void (__fastcall *)(_SLIST_ENTRY *))v53[63])(v100);
                    v8 = FileObject;
                  }
                  else
                  {
                    v59 = (_SLIST_ENTRY *)*(v57 - 2);
                    ++*((_DWORD *)v53 + 119);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v53 + 28) >= *((_WORD *)v53 + 232) )
                    {
                      ++*((_DWORD *)v53 + 120);
                      ((void (__fastcall *)(_SLIST_ENTRY *))v53[63])(v59);
                    }
                    else
                    {
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)v53 + 28, v59);
                    }
                    v8 = FileObject;
                  }
                }
                goto LABEL_88;
              }
              if ( (char *)v51 == (char *)v12 )
              {
                v79 = (void *(__fastcall *)(FxRegKey *, unsigned int))(*v6)[1];
                if ( v79 == FxRegKey::`scalar deleting destructor' )
                {
                  *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxRegKey::`vftable';
                  v80 = v6[14];
                  if ( v80 )
                  {
                    ZwClose(v80);
                    v6[14] = 0LL;
                  }
                  v81 = v6[13];
                  *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxPagedObject::`vftable';
                  if ( v81 )
                  {
                    FxPoolFree(v81);
                    v6[13] = 0LL;
                  }
                  FxObject::~FxObject((FxObject *)v6, (unsigned int)v50, (unsigned int)v10);
                  if ( *((char *)v6 + 24) < 0 )
                    v82 = v6 - 6;
                  else
                    v82 = v6;
                  if ( !v82 )
                    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                  goto LABEL_139;
                }
                if ( (char *)v79 == (char *)FxRequest::`scalar deleting destructor' )
                {
                  *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v13;
                  v90 = (_MDL *)v6[30];
                  if ( v90 )
                  {
                    if ( *((_BYTE *)v6[2] + 316) )
                      FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v6[2], (_MDL *)v6[30]);
                    else
                      IoFreeMdl(v90);
                  }
                  v91 = v6[21];
                  v92 = v6[19];
                  if ( v91 )
                  {
                    if ( v92 )
                      (*((void (__fastcall **)(_QWORD, _QWORD))*v91 + 3))(v91, v6);
                    v112 = v6[21];
                    if ( v112 )
                      (*(void (__fastcall **)(_QWORD, __int64))*v112)(v112, 1LL);
                  }
                  if ( v92 && *((_BYTE *)v6 + 213) == 1 )
                    IoFreeIrp((PIRP)v6[19]);
                  v93 = (FxRequestTimer *)v6[22];
                  if ( v93 )
                    FxRequestTimer::`scalar deleting destructor'(v93, (unsigned int)v50);
                  *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxNonPagedObject::`vftable';
                  if ( *((char *)v6 + 24) < 0 )
                  {
                    v113 = (FxVerifierLock *)*(v6 - 5);
                    if ( v113 )
                    {
                      FxVerifierLock::`scalar deleting destructor'(v113, (unsigned int)v50);
                      *(v6 - 5) = 0LL;
                    }
                  }
                  *((_BYTE *)v6 + 104) = 0;
                  FxObject::~FxObject((FxObject *)v6, (unsigned int)v50, (unsigned int)v10);
                  if ( *((char *)v6 + 24) < 0 )
                    v94 = v6 - 6;
                  else
                    v94 = v6;
                  FxPoolFree(v94);
                  v22 = v155;
                  v8 = FileObject;
                  goto LABEL_24;
                }
                if ( (char *)v79 == (char *)FxMemoryBuffer::`scalar deleting destructor' )
                {
                  *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxMemoryBuffer::`vftable'{for `FxObject'};
                  v6[13] = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                  FxObject::~FxObject(
                    (FxObject *)v6,
                    (unsigned int)FxRequestFromLookaside::SelfDestruct,
                    (unsigned int)v10);
                  if ( *((char *)v6 + 24) < 0 )
                    v82 = v6 - 6;
                  else
                    v82 = v6;
                  if ( !v82 )
                    KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
LABEL_139:
                  if ( ((unsigned __int16)v82 & 0xFFF) != 0 )
                  {
                    v83 = (FX_POOL_TRACKER *)*(v82 - 2);
                    if ( *((_BYTE *)*(v82 - 1) + 264) )
                    {
                      if ( FxIsPagedPoolType(v83->PoolType) )
                        FxPoolRemovePagedAllocateTracker(v83);
                      else
                        FxPoolRemoveNonPagedAllocateTracker(v83);
                      memset(v83, 0, v83->Size + 64);
                    }
                    ExFreePoolWithTag(v83, 0);
                    v22 = v155;
                    v8 = FileObject;
                    goto LABEL_24;
                  }
                  ExFreePoolWithTag(v82, 0);
                }
                else
                {
                  v79((FxRegKey *)v6, 1u);
                }
              }
              else
              {
                ((void (__fastcall *)(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int)))v51)(v6);
              }
              v8 = FileObject;
              v22 = v155;
              goto LABEL_24;
            }
LABEL_219:
            v26 = -2147483622;
          }
LABEL_29:
          if ( v26 < 0 )
          {
            if ( v26 == -2147483622 && !v8 && !TagRequest && this->m_Queue.m_RequestCount > 0 )
              this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
            FxNonPagedObject::Unlock(this, irql, (unsigned __int8)v10);
            return v26;
          }
          if ( this->m_AllowZeroLengthRequests )
            goto LABEL_34;
          if ( *((_BYTE *)v6[2] + 321) )
          {
            FxNonPagedObject::Lock((FxNonPagedObject *)v6, v150, (unsigned __int8)v10);
            v121 = (_FX_DRIVER_GLOBALS *)v6[2];
            if ( v121->FxVerifierOn )
              FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v6, v121);
            FxNonPagedObject::Unlock((FxNonPagedObject *)v6, v150[0], v120);
          }
          v27 = v6[19][23];
          if ( *(_BYTE *)v27 == 3 )
          {
            if ( *((_DWORD *)v27 + 2) )
              goto LABEL_34;
            FxNonPagedObject::Unlock(this, irql, (unsigned __int8)v10);
            if ( m_Globals->FxVerboseOn )
            {
              _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                _a2 = 0LL;
              v125 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*((_WORD *)v6 + 5) )
                v125 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Du, WPP_FxIoQueue_cpp_Traceguids, v125, _a2);
            }
            v6[19][7] = 0LL;
            FxRequest::Complete((FxRequest *)v6, 0, v122, v123);
            v126 = 1123LL;
          }
          else
          {
            if ( *(_BYTE *)v27 != 4 || *((_DWORD *)v27 + 2) )
            {
LABEL_34:
              ++this->m_DriverIoCount;
              v28 = this->m_DriverOwned.Blink;
              v29 = (_LIST_ENTRY *)(v6 + 38);
              if ( v28->Flink != &this->m_DriverOwned )
                __fastfail(3u);
              v29->Flink = &this->m_DriverOwned;
              v6[39] = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))v28;
              v28->Flink = v29;
              this->m_DriverOwned.Blink = v29;
              if ( SLOBYTE(this->m_ObjectFlags) < 0
                && (v132 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Unlock(v132, irql, (unsigned __int8)v10);
              }
              else
              {
                KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
              }
              if ( *((_BYTE *)v6 + 214) )
              {
                ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)v6);
                WPP_IFR_SF_q(
                  (_FX_DRIVER_GLOBALS *)v6[2],
                  2u,
                  0x10u,
                  0x27u,
                  WPP_FxRequest_cpp_Traceguids,
                  ObjectHandleUnchecked);
                FxVerifierDbgBreakPoint((_FX_DRIVER_GLOBALS *)v6[2]);
              }
              else
              {
                v33 = *((_BYTE *)v6 + 237);
                *((_BYTE *)v6 + 237) = 1;
                if ( !v33 )
                {
                  v30 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v6 + 3);
                  if ( *((char *)v6 + 24) < 0 )
                  {
                    v31 = (FxTagTracker *)*(v6 - 6);
                    if ( v31 )
                      FxTagTracker::UpdateTagHistory(
                        v31,
                        (void *)0x74617453,
                        1820,
                        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                        TagAddRef,
                        v30);
                  }
                }
              }
              if ( m_Globals->FxVerifierOn )
                FxIoQueue::Vf_VerifyGetRequestRestoreFlags((FxIoQueue *)v31, (_FX_DRIVER_GLOBALS *)v30, (FxRequest *)v6);
              v34 = (__int64)*v6;
              *((_BYTE *)v6 + 352) = 1;
              v35 = *(__int64 (__fastcall **)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))(v34 + 16);
              if ( v35 != FxRequest::Release )
              {
                v35(
                  (FxRequest *)v6,
                  (FxObjectDebugLeakDetection *)1952543827,
                  1193LL,
                  "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
LABEL_47:
                *pOutRequest = (FxRequest *)v6;
                return 0;
              }
              v36 = *((_BYTE *)v6 + 354);
              v37 = *((_BYTE *)v6 + 213);
              v38 = *((_BYTE *)v6 + 238);
              if ( *((char *)v6 + 24) < 0 )
              {
                v134 = (FxTagTracker *)*(v6 - 6);
                if ( v134 )
                  FxTagTracker::UpdateTagHistory(
                    v134,
                    (void *)0x74617453,
                    1193,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                    TagRelease,
                    *((_DWORD *)v6 + 3) - 1);
              }
              v39 = _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
              if ( v39 )
              {
LABEL_45:
                if ( v36 && v39 == 1 && *((_BYTE *)v6 + 214) )
                {
                  FxIoQueue::ReturnReservedRequest((FxIoQueue *)v6[42], (FxRequest *)v6);
                }
                else if ( v37 && v38 && v39 == 1 && *((_BYTE *)v6 + 214) )
                {
                  v143 = *((_BYTE *)v6 + 237);
                  v144 = (FxIoQueue *)v6[31];
                  v145 = (_IRP *)v6[19];
                  v146 = *((_BYTE *)v6 + 236);
                  *((_BYTE *)v6 + 237) = 0;
                  v6[31] = 0LL;
                  v6[19] = 0LL;
                  IofCompleteRequest(v145, v146);
                  if ( v143 == 1 )
                    FxIoQueue::PostRequestCompletedCallback(v144, v147);
                }
                goto LABEL_47;
              }
              v60 = *((_WORD *)v6 + 12);
              if ( (v60 & 0x20) != 0 || (v60 & 0x10) != 0 && KeGetCurrentIrql() )
              {
                FxObject::SetObjectStateLocked((FxObject *)v6, FxObjectStateDeferedDestroy);
                FxDisposeList::Add(*((FxDisposeList **)v6[2][9] + 43), (FxObject *)v6);
                goto LABEL_45;
              }
              if ( (v60 & 0x80u) != 0 )
              {
                v5 = (FxTagTracker *)*(v6 - 6);
                v156 = v5;
                if ( v5 )
                  FxTagTracker::CheckForAbandondedTags(v5);
              }
              else
              {
                v156 = 0LL;
              }
              v61 = *((_WORD *)v6 + 5);
              if ( v61 && ((_BYTE)v6[3] & 8) != 0 )
              {
                v62 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))((char *)v6 + v61);
                if ( v62 )
                {
                  do
                  {
                    v63 = (void (__fastcall *)(unsigned __int64, unsigned __int64))v62[2];
                    if ( v63 )
                    {
                      v63((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL, v30);
                      v62[2] = 0LL;
                    }
                    v64 = (void (__fastcall *)(unsigned __int64, unsigned __int64))v62[3];
                    if ( v64 )
                    {
                      v64((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL, v30);
                      v62[3] = 0LL;
                    }
                    v62 = (_QWORD *)v62[1];
                  }
                  while ( v62 );
                  v5 = v156;
                }
                v65 = *((_WORD *)v6 + 5);
                LOBYTE(v30) = 1;
                if ( v65 )
                {
                  v66 = (void (__fastcall ***)(FxRequestFromLookaside *, unsigned int))((char *)v6 + v65);
                  if ( v66 )
                  {
                    do
                    {
                      v67 = (_QWORD *)v66[1];
                      if ( !(_BYTE)v30 )
                        FxPoolFree(v66);
                      LOBYTE(v30) = 0;
                      v66 = v67;
                    }
                    while ( v67 );
                  }
                }
              }
              if ( *((char *)v6 + 24) < 0 )
              {
                if ( *((_BYTE *)v6 - 20) )
                {
                  _InterlockedDecrement((volatile signed __int32 *)v6[2][41] + 3);
                  if ( *((_WORD *)v6 + 4) == 4098
                    && _InterlockedExchangeAdd((volatile signed __int32 *)v6[2][41] + 4, 0xFFFFFFFF) != 1 )
                  {
                    v30 = (unsigned __int64)v6[2][41];
                    _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 8), -*(_DWORD *)(v30 + 4));
                  }
                }
              }
              if ( v5 )
              {
                *(v6 - 6) = 0LL;
                FxTagTracker::`scalar deleting destructor'(v5, v30);
              }
              v68 = FxRequestFromLookaside::SelfDestruct;
              v69 = **v6;
              if ( v69 == FxRequestFromLookaside::SelfDestruct )
              {
                v70 = (_MDL *)v6[30];
                v71 = v6[12];
                *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxRequestBase::`vftable';
                if ( v70 )
                {
                  if ( *((_BYTE *)v6[2] + 316) )
                    FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v6[2], v70);
                  else
                    IoFreeMdl(v70);
                }
                v72 = v6[21];
                v73 = v6[19];
                if ( v72 )
                {
                  if ( v73 )
                    (*((void (__fastcall **)(_QWORD, _QWORD))*v72 + 3))(v72, v6);
                  v135 = v6[21];
                  if ( v135 )
                    (*(void (__fastcall **)(_QWORD, __int64))*v135)(v135, 1LL);
                }
                if ( v73 && *((_BYTE *)v6 + 213) == 1 )
                  IoFreeIrp((PIRP)v6[19]);
                v74 = (FxRequestTimer *)v6[22];
                if ( v74 )
                  FxRequestTimer::`scalar deleting destructor'(v74, (unsigned int)v68);
                *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxNonPagedObject::`vftable';
                if ( *((char *)v6 + 24) < 0 )
                {
                  v136 = (FxVerifierLock *)*(v6 - 5);
                  if ( v136 )
                  {
                    FxVerifierLock::`scalar deleting destructor'(v136, (unsigned int)v68);
                    *(v6 - 5) = 0LL;
                  }
                }
                *((_BYTE *)v6 + 104) = 0;
                FxObject::~FxObject((FxObject *)v6, (unsigned int)v68, v32);
                if ( *((_BYTE *)v6 + 355) )
                {
                  v137 = FxObject::_CleanupPointer((_FX_DRIVER_GLOBALS *)v6[2], (FxObject *)v6);
                  ExFreePoolWithTag(v137->Base, 0);
                }
                else
                {
                  if ( *((char *)v6 + 24) < 0 )
                    v75 = v6 - 6;
                  else
                    v75 = v6;
                  if ( *((_BYTE *)v71[2] + 264) )
                    FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)*(v75 - 2));
                  v76 = v71[81];
                  if ( v76 && *((_WORD *)v76 + 4) == 4354 && *((_BYTE *)v76 + 1683) )
                  {
                    v101 = (_SLIST_ENTRY *)*(v75 - 2);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v71 + 28) >= *((_WORD *)v71 + 232) )
                      ((void (__fastcall *)(_SLIST_ENTRY *))v71[63])(v101);
                    else
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)v71 + 28, v101);
                  }
                  else
                  {
                    v77 = (_SLIST_ENTRY *)*(v75 - 2);
                    v78 = v71 + 56;
                    ++*((_DWORD *)v78 + 7);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v78) >= *((_WORD *)v78 + 8) )
                    {
                      ++*((_DWORD *)v78 + 8);
                      ((void (__fastcall *)(_SLIST_ENTRY *))v78[7])(v77);
                    }
                    else
                    {
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)v78, v77);
                    }
                  }
                }
                goto LABEL_45;
              }
              v84 = FxObject::SelfDestruct;
              if ( (char *)v69 != (char *)FxObject::SelfDestruct )
              {
                ((void (__fastcall *)(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int)))v69)(v6);
                goto LABEL_45;
              }
              v85 = (FxRequest *(__fastcall *)(FxRequest *, char))(*v6)[1];
              if ( (char *)v85 == (char *)FxRegKey::`scalar deleting destructor' )
              {
                *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxRegKey::`vftable';
                v86 = v6[14];
                if ( v86 )
                {
                  ZwClose(v86);
                  v6[14] = 0LL;
                }
                v87 = v6[13];
                *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxPagedObject::`vftable';
                if ( v87 )
                {
                  FxPoolFree(v87);
                  v6[13] = 0LL;
                }
                FxObject::~FxObject((FxObject *)v6, (unsigned int)v84, v32);
                if ( *((char *)v6 + 24) < 0 )
                  v88 = v6 - 6;
                else
                  v88 = v6;
                if ( !v88 )
                  KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                if ( ((unsigned __int16)v88 & 0xFFF) != 0 )
                {
                  v89 = (FX_POOL_TRACKER *)*(v88 - 2);
                  if ( !*((_BYTE *)*(v88 - 1) + 264) )
                  {
LABEL_153:
                    ExFreePoolWithTag(v89, 0);
                    goto LABEL_45;
                  }
                  IsPagedPoolType = FxIsPagedPoolType(v89->PoolType);
                  v139 = v89;
                  if ( IsPagedPoolType )
                  {
LABEL_331:
                    FxPoolRemovePagedAllocateTracker(v139);
LABEL_333:
                    memset(v89, 0, v89->Size + 64);
                    goto LABEL_153;
                  }
LABEL_332:
                  FxPoolRemoveNonPagedAllocateTracker(v89);
                  goto LABEL_333;
                }
              }
              else
              {
                if ( v85 == FxRequest::`scalar deleting destructor' )
                {
                  *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxRequestBase::`vftable';
                  v95 = (_MDL *)v6[30];
                  if ( v95 )
                  {
                    if ( *((_BYTE *)v6[2] + 316) )
                      FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v6[2], (_MDL *)v6[30]);
                    else
                      IoFreeMdl(v95);
                  }
                  v96 = v6[21];
                  v97 = v6[19];
                  if ( v96 )
                  {
                    if ( v97 )
                      (*((void (__fastcall **)(_QWORD, _QWORD))*v96 + 3))(v96, v6);
                    v140 = v6[21];
                    if ( v140 )
                      (*(void (__fastcall **)(_QWORD, __int64))*v140)(v140, 1LL);
                  }
                  if ( v97 && *((_BYTE *)v6 + 213) == 1 )
                    IoFreeIrp((PIRP)v6[19]);
                  v98 = (FxRequestTimer *)v6[22];
                  if ( v98 )
                    FxRequestTimer::`scalar deleting destructor'(v98, (unsigned int)v84);
                  *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxNonPagedObject::`vftable';
                  if ( *((char *)v6 + 24) < 0 )
                  {
                    v141 = (FxVerifierLock *)*(v6 - 5);
                    if ( v141 )
                    {
                      FxVerifierLock::`scalar deleting destructor'(v141, (unsigned int)v84);
                      *(v6 - 5) = 0LL;
                    }
                  }
                  *((_BYTE *)v6 + 104) = 0;
                  FxObject::~FxObject((FxObject *)v6, (unsigned int)v84, v32);
                  if ( *((char *)v6 + 24) < 0 )
                    v99 = v6 - 6;
                  else
                    v99 = v6;
                  FxPoolFree(v99);
                  goto LABEL_45;
                }
                if ( (char *)v85 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
                {
                  v85((FxRequest *)v6, 1);
                  goto LABEL_45;
                }
                *v6 = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxMemoryBuffer::`vftable'{for `FxObject'};
                v6[13] = (void (__fastcall **)(FxRequestFromLookaside *, unsigned int))FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                FxObject::~FxObject((FxObject *)v6, (unsigned int)FxObject::SelfDestruct, v32);
                if ( *((char *)v6 + 24) < 0 )
                  v88 = v6 - 6;
                else
                  v88 = v6;
                if ( !v88 )
                  KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
                if ( ((unsigned __int16)v88 & 0xFFF) != 0 )
                {
                  v89 = (FX_POOL_TRACKER *)*(v88 - 2);
                  if ( !*((_BYTE *)*(v88 - 1) + 264) )
                    goto LABEL_153;
                  v142 = FxIsPagedPoolType(v89->PoolType);
                  v139 = v89;
                  if ( v142 )
                    goto LABEL_331;
                  goto LABEL_332;
                }
              }
              ExFreePoolWithTag(v88, 0);
              goto LABEL_45;
            }
            FxNonPagedObject::Unlock(this, irql, (unsigned __int8)v10);
            if ( m_Globals->FxVerboseOn )
            {
              v127 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v127 = 0LL;
              v128 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*((_WORD *)v6 + 5) )
                v128 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Eu, WPP_FxIoQueue_cpp_Traceguids, v128, v127);
            }
            v6[19][7] = 0LL;
            FxRequest::Complete((FxRequest *)v6, 0, v129, v130);
            v126 = 1139LL;
          }
          ((void (__fastcall *)(void (__fastcall ***)(FxRequestFromLookaside *, unsigned int), __int64, __int64, const char *))(*v6)[2])(
            v6,
            1886220099LL,
            v126,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxNonPagedObject::Lock(this, &irql, v131);
        }
      }
      v105 = 28;
      v106 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v106 = 0LL;
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, v105, WPP_FxIoQueue_cpp_Traceguids, v106, -1071644157);
    FxNonPagedObject::Unlock(this, irql, v107);
    return -1071644157;
  }
  m_ObjectSize = this->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Au, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741436);
  return -1073741436;
}

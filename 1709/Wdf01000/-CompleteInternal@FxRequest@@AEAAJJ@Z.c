/*
 * XREFs of ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360
 * Callers:
 *     imp_WdfRequestComplete @ 0x1C00071F0 (imp_WdfRequestComplete.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C000D7C8 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0032BD0 (imp_WdfRequestCompleteWithInformation.c)
 *     ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C0077F74 (-CompleteWithPriority@FxRequest@@QEAAJJD@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000A490 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?IsDebug@FxObject@@IEAAEXZ @ 0x1C000A570 (-IsDebug@FxObject@@IEAAEXZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000B190 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C000E9E8 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
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
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003CF48 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003CF8C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003D3F8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0063264 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00651F4 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_D @ 0x1C006E904 (WPP_IFR_SF_D.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C007C14C (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C007C1B0 (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C007C834 (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C007C964 (WPP_IFR_SF_qqqi.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C007DF50 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D7F3C (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00D7FB8 (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D976C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::CompleteInternal(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *Status,
        __int64 a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned int v5; // r14d
  _IRP *_a2; // rbp
  __int64 m_Irp; // rdx
  _IRP *v9; // r8
  __int64 v10; // rcx
  FxRequestCompletionState m_CompletionState; // esi
  FxIoQueue *m_IoQueue; // r12
  bool v13; // zf
  FxRequestContext *m_RequestContext; // rcx
  KIRQL v15; // di
  FxObject *m_ParentObject; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v18; // cx
  char v19; // al
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _IRP *v21; // rcx
  FxRegKey *m_DeviceBase; // r13
  unsigned __int8 v23; // r8
  _FX_DRIVER_GLOBALS *v24; // rdx
  unsigned __int8 v25; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v27; // rdx
  _LIST_ENTRY *v28; // rcx
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  __int64 (__fastcall *Release)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  unsigned __int8 m_CanComplete; // cl
  unsigned __int8 m_Reserved; // r15
  unsigned __int8 m_IrpAllocation; // r12
  signed __int32 v34; // esi
  unsigned __int16 v36; // cx
  _LIST_ENTRY *v37; // r14
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v39; // rdi
  void (__fastcall *v40)(unsigned __int64); // rax
  void (__fastcall *v41)(unsigned __int64); // rax
  unsigned __int16 v42; // ax
  _QWORD *v43; // rcx
  _QWORD *v44; // rdi
  void (__fastcall *v45)(FxRequestFromLookaside *); // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *v48; // r14
  FxRequestContext *v49; // rcx
  _IRP *v50; // rdi
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v52; // rbp
  __int64 v53; // rax
  _SLIST_ENTRY *v54; // rbp
  unsigned int v55; // edx
  FxPkgGeneral *v56; // rdi
  unsigned int (__fastcall *v57)(FxObject *, void *, int, const char *); // rax
  unsigned __int16 v58; // ax
  FxObjectDebugLeakDetection *v59; // rdx
  FxTagTracker *v60; // rsi
  unsigned __int16 v61; // cx
  _QWORD *i; // rbx
  void (__fastcall *v63)(unsigned __int64); // rax
  void (__fastcall *v64)(unsigned __int64); // rax
  unsigned __int16 v65; // ax
  _QWORD *v66; // rcx
  _QWORD *v67; // rbx
  void (__fastcall *v68)(FxObject *); // rdx
  void *(__fastcall *v69)(FxRegKey *, unsigned int); // rax
  void *m_Key; // rcx
  MxPagedLock *v71; // rcx
  FX_POOL_TRACKER *v72; // rbx
  void (__fastcall *v73)(FxObject *); // rdx
  void (__fastcall *v74)(FxObject *); // rax
  void *m_Lock; // rcx
  _QWORD *v76; // rcx
  FxRequest *v77; // rax
  FX_POOL_TRACKER *v78; // rdi
  _MDL *v79; // rcx
  FxCallbackLock *v80; // rcx
  _DEVICE_OBJECT *v81; // rbx
  FxRequestTimer *v82; // rcx
  char v83; // al
  _MDL *v84; // rcx
  FxRequestContext *v85; // rcx
  _IRP *v86; // rdi
  FxRequestTimer *v87; // rcx
  FxRequest *v88; // rcx
  _SLIST_ENTRY *m_InternalContext; // rdi
  const void *_a1; // rcx
  _FX_DRIVER_GLOBALS *v91; // rcx
  const void *v92; // rdx
  _FX_DRIVER_GLOBALS *v93; // rcx
  const void *v94; // rdx
  _FX_DRIVER_GLOBALS *v95; // rcx
  const void *v96; // rdx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v98; // rcx
  FxObject *p_Blink; // r13
  KIRQL v100; // al
  int m_ObjectState; // edx
  KIRQL v102; // si
  int v103; // edx
  int v104; // edx
  int v105; // edx
  _IRP *id; // rdi
  WDFMEMORY__ *v107; // rax
  unsigned __int64 v108; // r12
  const void *v109; // rcx
  __int64 v110; // rbp
  _MDL *v111; // rsi
  const void *v112; // rdi
  WDFMEMORY__ *v113; // rax
  unsigned __int8 v114; // dl
  unsigned int v115; // r8d
  __int64 v116; // rbp
  _MDL *v117; // rsi
  const void *v118; // rdi
  WDFMEMORY__ *v119; // rax
  unsigned __int8 v120; // dl
  unsigned int v121; // r8d
  FxTagTracker *Blink; // rcx
  FxVerifierLock *v123; // rcx
  FxVerifierLock *v124; // rcx
  KIRQL v125; // al
  FxObject *v126; // rcx
  KIRQL v127; // si
  _FX_DRIVER_GLOBALS *v128; // rcx
  const void *v129; // rdx
  _LIST_ENTRY *v130; // rcx
  FxRequestContext *v131; // rcx
  _LIST_ENTRY *v132; // rcx
  FX_POOL_HEADER *v133; // rax
  FxRequestContext *v134; // rcx
  _LIST_ENTRY *v135; // rcx
  unsigned __int8 v136; // di
  FxIoQueue *v137; // rsi
  _IRP *v138; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v140; // r8
  FxTagTracker *v141; // rcx
  FxCallbackLock *v142; // rcx
  FxVerifierLock *Next; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-98h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-98h]
  _LIST_ENTRY *v146; // [rsp+58h] [rbp-60h]
  FxIrp irp; // [rsp+60h] [rbp-58h] BYREF
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+0h]
  FxRequestCompletionState v149; // [rsp+C0h] [rbp+8h]
  unsigned __int8 v150; // [rsp+C0h] [rbp+8h]
  unsigned int v151; // [rsp+C8h] [rbp+10h]
  unsigned __int8 PreviousIrql; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int8 v153; // [rsp+D8h] [rbp+20h] BYREF

  v151 = (unsigned int)Status;
  m_Globals = this->m_Globals;
  v5 = (unsigned int)Status;
  _a2 = this->m_Irp.m_Irp;
  if ( !m_Globals->FxVerifierOn
    || (FxRequest::Vf_VerifyCompleteInternal(this, Status, (int)Status), !m_Globals->FxVerifierOn) )
  {
    this->m_Completed = 1;
  }
  m_Irp = (__int64)this->m_Irp.m_Irp;
  v9 = 0LL;
  v10 = *(_QWORD *)(m_Irp + 184);
  if ( *(_BYTE *)v10 == 14
    && (*(_DWORD *)(v10 + 24) & 3) == 0
    && *(_BYTE *)(m_Irp + 64) == 1
    && !*(_DWORD *)(v10 + 8)
    && (*(_DWORD *)(m_Irp + 16) & 0x40) != 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x10u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    if ( this->m_Irp.m_Irp->IoStatus.Information )
      FxVerifierDbgBreakPoint(m_Globals);
    this->m_Irp.m_Irp->Flags &= ~0x40u;
    v9 = 0LL;
  }
  if ( (v5 & 0xFFF0000) == 0x200000 )
  {
    WPP_IFR_SF_D(m_Globals, m_Irp, 0x10u, 0x11u, WPP_FxRequest_cpp_Traceguids, v5);
    switch ( v5 )
    {
      case 0xC0200201:
        v5 = -1073741595;
        break;
      case 0xC0200203:
      case 0xC0200204:
        v5 = -2147483631;
        break;
      case 0xC020020A:
      case 0xC0200213:
        goto LABEL_206;
      case 0xC0200214:
        v5 = -1073741670;
        break;
      default:
        WPP_IFR_SF_D(m_Globals, 0xC0000000, 0x10u, 0x12u, WPP_FxRequest_cpp_Traceguids, v5);
LABEL_206:
        v5 = -1073741808;
        break;
    }
    v151 = v5;
    WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequest_cpp_Traceguids, v5);
    v9 = 0LL;
  }
  if ( this->m_IrpAllocation && !this->m_CanComplete )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    v9 = 0LL;
  }
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  v149 = m_CompletionState;
  if ( !this->m_IrpAllocation )
  {
    v13 = this->m_Reserved == 0;
    this->m_CompletionState = 0;
    if ( v13 )
      this->m_IoQueue = 0LL;
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    ((void (__fastcall *)(FxRequestContext *, FxRequest *, _QWORD))m_RequestContext->ReleaseAndRestore)(
      m_RequestContext,
      this,
      0LL);
    v9 = 0LL;
  }
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  if ( !this->m_Reserved && !this->m_IrpAllocation )
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    if ( this->m_ObjectState == 1 )
    {
      m_ParentObject = this->m_ParentObject;
      if ( m_ParentObject )
      {
        if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
          goto LABEL_221;
        }
        this->m_ParentObject = 0LL;
      }
      this->m_ObjectFlags |= 0x100u;
      if ( (this->m_ObjectFlags & 0x200) != 0 )
      {
        v91 = this->m_Globals;
        if ( v91->FxVerboseOn )
        {
          v92 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v92 = 0LL;
          WPP_IFR_SF_qqLL(v91, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v92, this->m_ObjectState, 3u);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 3;
      }
      m_ObjectFlags = this->m_ObjectFlags;
      this->m_ObjectState = 3;
      if ( (m_ObjectFlags & 0x20) == 0 && ((m_ObjectFlags & 0x10) == 0 || !v15) )
      {
        if ( (m_ObjectFlags & 0x200) != 0 )
        {
          v93 = this->m_Globals;
          if ( v93->FxVerboseOn )
          {
            v94 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v94 = 0LL;
            WPP_IFR_SF_qqLL(v93, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v94, 3u, 4u);
          }
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
            *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 4;
        }
        this->m_ObjectState = 4;
        if ( FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, v15, 1u) )
        {
          v18 = this->m_ObjectFlags;
          m_Irp = 260LL;
          if ( (v18 & 0x104) == 0x104 )
          {
            FxObject::DeletedAndDisposedWorkerLocked(this, v15, 0);
          }
          else
          {
            if ( (v18 & 0x200) != 0 )
            {
              v95 = this->m_Globals;
              if ( v95->FxVerboseOn )
              {
                v96 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !this->m_ObjectSize )
                  v96 = 0LL;
                WPP_IFR_SF_qqLL(v95, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v96, this->m_ObjectState, 2u);
              }
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue)
                                - 32) = 2;
            }
            this->m_ObjectState = 2;
          }
          v19 = 1;
        }
        else
        {
          v19 = 0;
        }
        if ( v19 )
          goto LABEL_30;
        goto LABEL_222;
      }
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
    }
LABEL_221:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v15);
LABEL_222:
    m_Irp = (__int64)this->m_Globals;
    if ( *(_BYTE *)(m_Irp + 316) )
      FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, (_FX_DRIVER_GLOBALS *)m_Irp);
LABEL_30:
    p_m_ChildListHead = &this->m_ChildListHead;
    while ( 1 )
    {
      if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
      {
        m_CompletionState = v149;
        v9 = 0LL;
        v5 = v151;
        break;
      }
      Flink = p_m_ChildListHead->Flink;
      if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || (v98 = Flink->Flink, Flink->Flink->Blink != Flink) )
        __fastfail(3u);
      p_m_ChildListHead->Flink = v98;
      p_Blink = (FxObject *)&Flink[-5].Blink;
      v98->Blink = p_m_ChildListHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v100 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Flink[-1]);
      m_ObjectState = p_Blink->m_ObjectState;
      v102 = v100;
      p_Blink->m_ParentObject = 0LL;
      v103 = m_ObjectState - 2;
      if ( !v103 )
        goto LABEL_247;
      v104 = v103 - 2;
      if ( !v104 )
        goto LABEL_244;
      v105 = v104 - 4;
      if ( v105 )
      {
        if ( v105 == 1 )
          FxObject::TraceDroppedEvent(p_Blink, FxObjectDroppedEventParentDeleteEvent);
LABEL_244:
        KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v102);
      }
      else
      {
LABEL_247:
        FxObject::DeletedAndDisposedWorkerLocked(p_Blink, v100, 1u);
      }
    }
  }
  if ( this->m_IrpReferenceCount )
  {
    if ( (this->m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
    {
      id = (_IRP *)((__int64 (__fastcall *)(FxRequestOutputBuffer *, __int64, _IRP *))this->m_OutputBuffer.GetHandle)(
                     &this->m_OutputBuffer,
                     m_Irp,
                     v9);
      v9 = 0LL;
    }
    else
    {
      id = v9;
    }
    if ( (this->m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
      v107 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
    else
      v107 = (WDFMEMORY__ *)v9;
    v108 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v109 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v109 = 0LL;
    WPP_IFR_SF_qqDqq(
      m_Globals,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      (unsigned int)this->m_Irp.m_Irp,
      a4,
      traceGuid,
      v109,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      v107,
      id);
    if ( (this->m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
    {
      v110 = this->m_SystemBuffer.GetBufferSize(&this->m_SystemBuffer);
      v111 = this->m_SystemBuffer.GetMdl(&this->m_SystemBuffer);
      v112 = (const void *)this->m_SystemBuffer.GetBuffer(&this->m_SystemBuffer);
      v113 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v114, v115, 0x15u, traceGuida, v113, v112, v111, v110);
    }
    if ( (this->m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
    {
      v116 = this->m_OutputBuffer.GetBufferSize(&this->m_OutputBuffer);
      v117 = this->m_OutputBuffer.GetMdl(&this->m_OutputBuffer);
      v118 = (const void *)this->m_OutputBuffer.GetBuffer(&this->m_OutputBuffer);
      v119 = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v120, v121, 0x16u, traceGuida, v119, v118, v117, v116);
    }
    if ( !this->m_ObjectSize )
      v108 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_VERIFIER_FATAL_ERROR, v108, this->m_IrpReferenceCount);
  }
  irp.m_Irp = _a2;
  _a2->IoStatus.Status = v5;
  if ( this->m_IrpAllocation )
  {
    FxRequest::PreProcessCompletionForDriverRequest(this, m_CompletionState, m_IoQueue);
    return v5;
  }
  v21 = irp.m_Irp;
  this->m_Irp.m_Irp = v9;
  if ( v21->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    m_DeviceBase = (FxRegKey *)v9;
  }
  else
  {
    m_DeviceBase = (FxRegKey *)this->m_DeviceBase;
    v55 = _InterlockedIncrement(&m_DeviceBase->m_Refcnt);
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
    {
      Blink = (FxTagTracker *)m_DeviceBase[-1].m_ChildEntry.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          Blink,
          &irp,
          858,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          (FxTagRefType)v9,
          v55);
    }
    v21 = irp.m_Irp;
    v56 = (FxPkgGeneral *)m_DeviceBase[5].FxPagedObject::FxObject::m_Globals;
    if ( irp.m_Irp->IoStatus.Status < 0 )
    {
      FxFileObject::_DestroyFileObject(
        v56->m_Device,
        (_WDF_FILEOBJECT_CLASS)v56->m_DeviceBase[1].m_DisposeSingleEntry.Next,
        irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
      FxPkgGeneral::DecrementOpenHandleCount(v56);
      v21 = irp.m_Irp;
    }
  }
  IofCompleteRequest(v21, this->m_PriorityBoost);
  irp.m_Irp = 0LL;
  if ( this->m_Reserved )
  {
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
    goto LABEL_55;
  }
  if ( m_CompletionState )
  {
    if ( (m_CompletionState & 0x80u) == 0 )
    {
      v24 = m_IoQueue->m_Globals;
      if ( v24->FxVerifierOn )
        FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v24, this);
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v123 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v123, &PreviousIrql, v23);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
      v27 = this->m_OwnerListEntry2.Flink;
      if ( v27->Blink != &this->m_OwnerListEntry2
        || (v28 = this->m_OwnerListEntry2.Blink, v28->Flink != p_m_OwnerListEntry2) )
      {
        __fastfail(3u);
      }
      v28->Flink = v27;
      v27->Blink = v28;
      this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
      p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
      --m_IoQueue->m_DriverIoCount;
      if ( m_IoQueue->m_Dispatching )
      {
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v124 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v124, PreviousIrql, v25);
        }
        else
        {
          KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
        }
      }
      else
      {
        FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL);
      }
    }
    this->m_ObjectFlags |= 4u;
    if ( this->m_ParentObject )
    {
      v125 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v126 = this->m_ParentObject;
      v127 = v125;
      if ( v126 )
      {
        if ( FxObject::RemoveChildObjectInternal(v126, this) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
          KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v127);
          goto LABEL_55;
        }
        this->m_ParentObject = 0LL;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v127);
    }
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      v128 = this->m_Globals;
      if ( v128->FxVerboseOn )
      {
        v129 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v129 = 0LL;
        WPP_IFR_SF_qqLL(v128, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v129, this->m_ObjectState, 0xAu);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 10;
    }
    this->m_ObjectState = 10;
    FxObject::DestroyChildren(this);
    Release = (__int64 (__fastcall *)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))this->Release;
    if ( Release == FxRequest::Release )
    {
      m_CanComplete = this->m_CanComplete;
      m_Reserved = this->m_Reserved;
      m_IrpAllocation = this->m_IrpAllocation;
      v150 = m_CanComplete;
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        v130 = this[-1].m_OwnerListEntry2.Blink;
        if ( v130 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v130,
            0LL,
            1246,
            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
            TagRelease,
            this->m_Refcnt - 1);
        m_CanComplete = v150;
      }
      v34 = _InterlockedDecrement(&this->m_Refcnt);
      if ( v34 )
        goto LABEL_53;
      v36 = this->m_ObjectFlags;
      if ( (v36 & 0x20) != 0 || (v36 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
      }
      else
      {
        if ( (v36 & 0x80u) != 0 )
        {
          v37 = this[-1].m_OwnerListEntry2.Blink;
          v146 = v37;
          if ( v37 )
            FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v37);
        }
        else
        {
          v37 = 0LL;
          v146 = 0LL;
        }
        m_ObjectSize = this->m_ObjectSize;
        if ( m_ObjectSize && (this->m_ObjectFlags & 8) != 0 )
        {
          v39 = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize);
          if ( v39 )
          {
            do
            {
              v40 = (void (__fastcall *)(unsigned __int64))v39[2];
              if ( v40 )
              {
                v40((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                v39[2] = 0LL;
              }
              v41 = (void (__fastcall *)(unsigned __int64))v39[3];
              if ( v41 )
              {
                v41((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                v39[3] = 0LL;
              }
              v39 = (_QWORD *)v39[1];
            }
            while ( v39 );
            v37 = v146;
          }
          v42 = this->m_ObjectSize;
          LOBYTE(FxVerifyLeakDetection) = 1;
          if ( v42 )
          {
            v43 = (FxRequest_vtbl **)((char *)&this->__vftable + v42);
            if ( v43 )
            {
              do
              {
                v44 = (_QWORD *)v43[1];
                if ( !(_BYTE)FxVerifyLeakDetection )
                  FxPoolFree(v43);
                LOBYTE(FxVerifyLeakDetection) = 0;
                v43 = v44;
              }
              while ( v44 );
            }
          }
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        {
          if ( BYTE4(this[-1].m_ForwardProgressQueue) )
          {
            _InterlockedDecrement(&this->m_Globals->FxVerifyLeakDetection->ObjectCnt);
            if ( this->m_Type == 4098
              && _InterlockedExchangeAdd(&this->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
            {
              FxVerifyLeakDetection = this->m_Globals->FxVerifyLeakDetection;
              _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
            }
          }
        }
        if ( v37 )
        {
          this[-1].m_OwnerListEntry2.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v37, (unsigned int)FxVerifyLeakDetection);
        }
        v45 = FxRequestFromLookaside::SelfDestruct;
        SelfDestruct = this->SelfDestruct;
        if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
        {
          m_AllocatedMdl = this->m_AllocatedMdl;
          v48 = this->m_DeviceBase;
          this->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
          if ( m_AllocatedMdl )
          {
            if ( this->m_Globals->FxVerifierOn )
              FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
            else
              IoFreeMdl(m_AllocatedMdl);
          }
          v49 = this->m_RequestContext;
          v50 = this->m_Irp.m_Irp;
          if ( v49 )
          {
            if ( v50 )
              v49->ReleaseAndRestore(v49, this);
            v131 = this->m_RequestContext;
            if ( v131 )
              ((void (__fastcall *)(FxRequestContext *, __int64))v131->~FxRequestContext)(v131, 1LL);
          }
          if ( v50 && this->m_IrpAllocation == 1 )
            IoFreeIrp(this->m_Irp.m_Irp);
          m_Timer = this->m_Timer;
          if ( m_Timer )
            FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v45);
          this->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          {
            v132 = this[-1].m_ForwardProgressList.Flink;
            if ( v132 )
            {
              FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)v132, (unsigned int)v45);
              this[-1].m_ForwardProgressList.Flink = 0LL;
            }
          }
          this->m_NPLock.m_DbgFlagIsInitialized = 0;
          FxObject::~FxObject(this);
          if ( this->m_ForwardRequestToParent )
          {
            v133 = FxObject::_CleanupPointer(this->m_Globals, this);
            ExFreePoolWithTag(v133->Base, 0);
            v5 = v151;
          }
          else
          {
            if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              v52 = (FxRequest *)((char *)this - 48);
            else
              v52 = this;
            if ( v48->m_Globals->FxPoolTrackingOn )
              FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v52[-1].m_InternalContext);
            v53 = *(_QWORD *)&v48[3].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v53 && *(_WORD *)(v53 + 8) == 4354 && *(_BYTE *)(v53 + 1683) )
            {
              m_InternalContext = (_SLIST_ENTRY *)v52[-1].m_InternalContext;
              if ( ExQueryDepthSList((PSLIST_HEADER)&v48[2].m_SpinLock) < LOWORD(v48[2].m_ParentObject) )
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)&v48[2].m_SpinLock, m_InternalContext);
                m_CanComplete = v150;
                v5 = v151;
                goto LABEL_53;
              }
              (*(void (__fastcall **)(_SLIST_ENTRY *))&v48[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
              v5 = v151;
            }
            else
            {
              v54 = (_SLIST_ENTRY *)v52[-1].m_InternalContext;
              ++HIDWORD(v48[2].m_ChildEntry.Flink);
              if ( ExQueryDepthSList((PSLIST_HEADER)&v48[2].m_SpinLock) >= LOWORD(v48[2].m_ParentObject) )
              {
                ++LODWORD(v48[2].m_ChildEntry.Blink);
                (*(void (__fastcall **)(_SLIST_ENTRY *))&v48[2].m_NPLock.m_DbgFlagIsInitialized)(v54);
              }
              else
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)&v48[2].m_SpinLock, v54);
              }
              v5 = v151;
            }
          }
        }
        else
        {
          v73 = FxObject::SelfDestruct;
          if ( SelfDestruct == FxObject::SelfDestruct )
          {
            v74 = this->~FxObject;
            if ( (char *)v74 == (char *)FxRegKey::`scalar deleting destructor' )
            {
              this->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
              m_Lock = (void *)this->m_NPLock.m_Lock;
              if ( m_Lock )
              {
                ZwClose(m_Lock);
                this->m_NPLock.m_Lock = 0LL;
              }
              v76 = *(_QWORD **)&this->m_NPLock.m_DbgFlagIsInitialized;
              this->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
              if ( v76 )
              {
                FxPoolFree(v76);
                *(_QWORD *)&this->m_NPLock.m_DbgFlagIsInitialized = 0LL;
              }
              FxObject::~FxObject(this);
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                v77 = (FxRequest *)((char *)this - 48);
              else
                v77 = this;
              if ( !v77 )
                KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
            }
            else
            {
              if ( (char *)v74 == (char *)FxRequest::`scalar deleting destructor' )
              {
                this->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
                v84 = this->m_AllocatedMdl;
                if ( v84 )
                {
                  if ( this->m_Globals->FxVerifierOn )
                    FxMdlFreeDebug(this->m_Globals, this->m_AllocatedMdl);
                  else
                    IoFreeMdl(v84);
                }
                v85 = this->m_RequestContext;
                v86 = this->m_Irp.m_Irp;
                if ( v85 )
                {
                  if ( v86 )
                    v85->ReleaseAndRestore(v85, this);
                  v134 = this->m_RequestContext;
                  if ( v134 )
                    ((void (__fastcall *)(FxRequestContext *, __int64))v134->~FxRequestContext)(v134, 1LL);
                }
                if ( v86 && this->m_IrpAllocation == 1 )
                  IoFreeIrp(this->m_Irp.m_Irp);
                v87 = this->m_Timer;
                if ( v87 )
                  FxRequestTimer::`scalar deleting destructor'(v87, (unsigned int)v73);
                this->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
                if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                {
                  v135 = this[-1].m_ForwardProgressList.Flink;
                  if ( v135 )
                  {
                    FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)v135, (unsigned int)v73);
                    this[-1].m_ForwardProgressList.Flink = 0LL;
                  }
                }
                this->m_NPLock.m_DbgFlagIsInitialized = 0;
                FxObject::~FxObject(this);
                if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                  v88 = (FxRequest *)((char *)this - 48);
                else
                  v88 = this;
                FxPoolFree(v88);
                m_CanComplete = v150;
                v5 = v151;
                goto LABEL_53;
              }
              if ( (char *)v74 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
              {
                ((void (__fastcall *)(FxRequest *, __int64))v74)(this, 1LL);
                m_CanComplete = v150;
                v5 = v151;
                goto LABEL_53;
              }
              this->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
              *(_QWORD *)&this->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
              FxObject::~FxObject(this);
              if ( SLOBYTE(this->m_ObjectFlags) < 0 )
                v77 = (FxRequest *)((char *)this - 48);
              else
                v77 = this;
              if ( !v77 )
                KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
            }
            if ( ((unsigned __int16)v77 & 0xFFF) != 0 )
            {
              v78 = (FX_POOL_TRACKER *)v77[-1].m_InternalContext;
              if ( *(_BYTE *)(*(_QWORD *)&v77[-1].m_Presented + 264LL) )
              {
                if ( FxIsPagedPoolType(v78->PoolType) )
                  FxPoolRemovePagedAllocateTracker(v78);
                else
                  FxPoolRemoveNonPagedAllocateTracker(v78);
                memset(v78, 0, v78->Size + 64);
              }
              ExFreePoolWithTag(v78, 0);
              m_CanComplete = v150;
              v5 = v151;
              goto LABEL_53;
            }
            ExFreePoolWithTag(v77, 0);
            v5 = v151;
          }
          else
          {
            SelfDestruct(this);
            v5 = v151;
          }
        }
      }
      m_CanComplete = v150;
LABEL_53:
      if ( m_Reserved && v34 == 1 && this->m_Completed )
      {
        FxIoQueue::ReturnReservedRequest(this->m_ForwardProgressQueue, this);
      }
      else if ( m_IrpAllocation )
      {
        if ( m_CanComplete )
        {
          if ( v34 == 1 )
          {
            if ( this->m_Completed )
            {
              v136 = this->m_CompletionState;
              v137 = this->m_IoQueue;
              v138 = this->m_Irp.m_Irp;
              m_PriorityBoost = this->m_PriorityBoost;
              this->m_IoQueue = 0LL;
              this->m_Irp.m_Irp = 0LL;
              this->m_CompletionState = 0;
              IofCompleteRequest(v138, m_PriorityBoost);
              if ( v136 == 1 )
              {
                FxNonPagedObject::Lock(v137, &v153, v140);
                --v137->m_TwoPhaseCompletions;
                --v137->m_DriverIoCount;
                FxIoQueue::DispatchInternalEvents(v137, v153);
              }
            }
          }
        }
      }
      goto LABEL_55;
    }
    Release(this, 0LL, 1246LL, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
  }
  else
  {
    FxObject::AddRef(this, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    this->DeleteObject(this);
  }
LABEL_55:
  if ( m_DeviceBase )
  {
    v57 = m_DeviceBase->Release;
    if ( v57 != FxObject::Release )
    {
      v57(m_DeviceBase, &irp, 879, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      return v5;
    }
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
    {
      v141 = (FxTagTracker *)m_DeviceBase[-1].m_ChildEntry.Blink;
      if ( v141 )
        FxTagTracker::UpdateTagHistory(
          v141,
          &irp,
          879,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagRelease,
          m_DeviceBase->m_Refcnt - 1);
    }
    if ( !_InterlockedDecrement(&m_DeviceBase->m_Refcnt) )
    {
      v58 = m_DeviceBase->m_ObjectFlags;
      if ( (v58 & 0x20) != 0 || (v58 & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(m_DeviceBase, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(m_DeviceBase->FxPagedObject::FxObject::m_Globals->Driver->m_DisposeList, m_DeviceBase);
        return v5;
      }
      if ( FxObject::IsDebug(m_DeviceBase) )
      {
        v60 = (FxTagTracker *)m_DeviceBase[-1].m_ChildEntry.Blink;
        if ( v60 )
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)m_DeviceBase[-1].m_ChildEntry.Blink);
      }
      else
      {
        v60 = 0LL;
      }
      v61 = m_DeviceBase->m_ObjectSize;
      if ( v61 && (m_DeviceBase->m_ObjectFlags & 8) != 0 )
      {
        for ( i = (FxRegKey_vtbl **)((char *)&m_DeviceBase->__vftable + v61); i; i = (_QWORD *)i[1] )
        {
          v63 = (void (__fastcall *)(unsigned __int64))i[2];
          if ( v63 )
          {
            v63((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[2] = 0LL;
          }
          v64 = (void (__fastcall *)(unsigned __int64))i[3];
          if ( v64 )
          {
            v64((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[3] = 0LL;
          }
        }
        v65 = m_DeviceBase->m_ObjectSize;
        LOBYTE(v59) = 1;
        if ( v65 )
        {
          v66 = (FxRegKey_vtbl **)((char *)&m_DeviceBase->__vftable + v65);
          if ( v66 )
          {
            do
            {
              v67 = (_QWORD *)v66[1];
              if ( !(_BYTE)v59 )
                FxPoolFree(v66);
              LOBYTE(v59) = 0;
              v66 = v67;
            }
            while ( v67 );
          }
        }
      }
      if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
      {
        if ( BYTE4(m_DeviceBase[-1].m_Lock) )
        {
          _InterlockedDecrement(&m_DeviceBase->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->ObjectCnt);
          if ( m_DeviceBase->m_Type == 4098
            && _InterlockedExchangeAdd(
                 &m_DeviceBase->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection->DeviceCnt,
                 0xFFFFFFFF) != 1 )
          {
            v59 = m_DeviceBase->FxPagedObject::FxObject::m_Globals->FxVerifyLeakDetection;
            _InterlockedExchangeAdd(&v59->LimitScaled, -v59->Limit);
          }
        }
      }
      if ( v60 )
      {
        m_DeviceBase[-1].m_ChildEntry.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'(v60, (unsigned int)v59);
      }
      v68 = m_DeviceBase->SelfDestruct;
      if ( v68 != FxObject::SelfDestruct )
      {
        m_DeviceBase->SelfDestruct(m_DeviceBase);
        return v5;
      }
      v69 = (void *(__fastcall *)(FxRegKey *, unsigned int))m_DeviceBase->~FxObject;
      if ( v69 == FxRegKey::`scalar deleting destructor' )
      {
        m_DeviceBase->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
        m_Key = m_DeviceBase->m_Key;
        if ( m_Key )
        {
          ZwClose(m_Key);
          m_DeviceBase->m_Key = 0LL;
        }
        v71 = m_DeviceBase->m_Lock;
        m_DeviceBase->__vftable = (FxRegKey_vtbl *)FxPagedObject::`vftable';
        if ( v71 )
        {
          FxPoolFree(v71);
          m_DeviceBase->m_Lock = 0LL;
        }
        FxObject::~FxObject(m_DeviceBase);
        if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
          m_DeviceBase = (FxRegKey *)((char *)m_DeviceBase - 48);
        if ( !m_DeviceBase )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        if ( ((unsigned __int16)m_DeviceBase & 0xFFF) != 0 )
        {
LABEL_137:
          v72 = (FX_POOL_TRACKER *)m_DeviceBase[-1].m_Key;
          if ( m_DeviceBase[-1].m_Globals->FxPoolTrackingOn )
          {
            if ( FxIsPagedPoolType(v72->PoolType) )
              FxPoolRemovePagedAllocateTracker(v72);
            else
              FxPoolRemoveNonPagedAllocateTracker(v72);
            memset(v72, 0, v72->Size + 64);
          }
          ExFreePoolWithTag(v72, 0);
          return v5;
        }
LABEL_351:
        ExFreePoolWithTag(m_DeviceBase, 0);
        return v5;
      }
      if ( (char *)v69 != (char *)FxRequest::`scalar deleting destructor' )
      {
        if ( (char *)v69 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
        {
          v69(m_DeviceBase, 1u);
          return v5;
        }
        m_DeviceBase->__vftable = (FxRegKey_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
        m_DeviceBase->m_Lock = (MxPagedLock *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
        FxObject::~FxObject(m_DeviceBase);
        if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
          m_DeviceBase = (FxRegKey *)((char *)m_DeviceBase - 48);
        if ( !m_DeviceBase )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        if ( ((unsigned __int16)m_DeviceBase & 0xFFF) != 0 )
          goto LABEL_137;
        goto LABEL_351;
      }
      m_DeviceBase->__vftable = (FxRegKey_vtbl *)FxRequestBase::`vftable';
      v79 = (_MDL *)m_DeviceBase[1].m_Key;
      if ( v79 )
      {
        if ( m_DeviceBase->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
          FxMdlFreeDebug(m_DeviceBase->FxPagedObject::FxObject::m_Globals, (_MDL *)m_DeviceBase[1].m_Key);
        else
          IoFreeMdl(v79);
      }
      v80 = (FxCallbackLock *)m_DeviceBase[1].m_ChildListHead.Blink;
      v81 = *(_DEVICE_OBJECT **)&m_DeviceBase[1].m_ObjectFlags;
      if ( v80 )
      {
        if ( v81 )
          v80->Unlock(v80, (unsigned __int8)m_DeviceBase);
        v142 = (FxCallbackLock *)m_DeviceBase[1].m_ChildListHead.Blink;
        if ( v142 )
          ((void (__fastcall *)(FxCallbackLock *, __int64))v142->~FxCallbackLock)(v142, 1LL);
      }
      if ( v81 && BYTE5(m_DeviceBase[1].m_ChildEntry.Blink) == 1 )
        IoFreeIrp(*(PIRP *)&m_DeviceBase[1].m_ObjectFlags);
      v82 = *(FxRequestTimer **)&m_DeviceBase[1].m_SpinLock.m_DbgFlagIsInitialized;
      if ( v82 )
        FxRequestTimer::`scalar deleting destructor'(v82, (unsigned int)v68);
      v83 = m_DeviceBase->m_ObjectFlags;
      m_DeviceBase->__vftable = (FxRegKey_vtbl *)FxNonPagedObject::`vftable';
      if ( v83 < 0 )
      {
        Next = (FxVerifierLock *)m_DeviceBase[-1].m_DisposeSingleEntry.Next;
        if ( Next )
        {
          FxVerifierLock::`scalar deleting destructor'(Next, (unsigned int)v68);
          m_DeviceBase[-1].m_DisposeSingleEntry.Next = 0LL;
        }
      }
      LOBYTE(m_DeviceBase->m_Lock) = 0;
      FxObject::~FxObject(m_DeviceBase);
      if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
        m_DeviceBase = (FxRegKey *)((char *)m_DeviceBase - 48);
      FxPoolFree(m_DeviceBase);
    }
  }
  return v5;
}

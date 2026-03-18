/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00072B0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00272F0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C000D7C8 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C000EEC4 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0013178 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C001BAB0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0020188 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x1C003B27C (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x1C003B2A4 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0063264 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C0063294 (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0064458 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00646D8 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0064924 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C007D9DC (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x1C007DE50 (-DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00973D0 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _IRP *m_Irp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIrp *v5; // r10
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FILE_OBJECT *v7; // r8
  FxDeviceBase *m_DeviceBase; // rdi
  int v9; // eax
  unsigned __int64 ContextSizeOverride; // rcx
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r12
  __int64 ContextTypeInfo; // rdx
  _LIST_ENTRY *Blink; // r13
  int v14; // r15d
  _FX_DRIVER_GLOBALS *v15; // r14
  unsigned __int64 flags; // r8
  ULONG v17; // r9d
  unsigned __int64 v18; // r13
  signed int id; // esi
  void *Caller; // rax
  FxFileObject *v21; // rax
  _FX_DRIVER_GLOBALS *v22; // rdx
  FxFileObject *v23; // rsi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v24; // rax
  _LIST_ENTRY *p_m_ChildEntry; // r14
  _FX_DRIVER_GLOBALS *v26; // rax
  KIRQL v27; // al
  KIRQL v28; // al
  KIRQL v29; // al
  bool v30; // zf
  KIRQL v31; // al
  _LIST_ENTRY *v32; // rcx
  int v33; // r14d
  _FX_DRIVER_GLOBALS *v34; // rdx
  unsigned __int8 v35; // r8
  unsigned __int16 v36; // ax
  char *v37; // rax
  _FX_DRIVER_GLOBALS *v38; // rax
  unsigned __int8 v39; // r9
  _LIST_ENTRY *v40; // rcx
  FxDeviceBase_vtbl *v41; // r8
  _LIST_ENTRY *p_m_Link; // rdx
  _LIST_ENTRY *v43; // rdi
  _LIST_ENTRY *v44; // rax
  FxDeviceBase *v45; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v46; // xmm1_8
  FxDeviceBase *v47; // r13
  FxRequest *v48; // r15
  _FX_DRIVER_GLOBALS *v49; // r14
  __int64 v50; // rax
  _FX_DRIVER_GLOBALS *v51; // rdx
  FX_POOL_TRACKER *v52; // rdi
  int m_Refcnt; // r9d
  FX_POOL_TRACKER *v54; // r14
  _FX_DRIVER_GLOBALS *v55; // rax
  FX_POOL **p_Pool; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v57; // rax
  __int64 v58; // r8
  FX_POOL *v59; // rax
  _IRP *v60; // rcx
  FX_POOL *v61; // rcx
  unsigned __int8 *v62; // rdx
  unsigned __int8 v63; // al
  FxObject *v64; // rdx
  unsigned __int16 v65; // ax
  __int64 v66; // rax
  FX_POOL *v67; // rax
  _LIST_ENTRY *v68; // r13
  _LIST_ENTRY *v69; // rdi
  FxIoQueue *m_DefaultQueueForCreates; // r13
  KIRQL v71; // al
  unsigned __int8 v72; // r8
  unsigned __int16 v73; // r9
  unsigned int m_QueueState; // r11d
  _FX_DRIVER_GLOBALS *v75; // rcx
  char v76; // dl
  FxIoQueue *m_DriverCreatedQueue; // rcx
  unsigned __int64 v78; // r15
  FxDeviceBase *v79; // rbx
  unsigned __int64 v80; // rbx
  _LIST_ENTRY *v81; // rcx
  _LIST_ENTRY *v82; // rcx
  _IRP *v84; // rax
  _IO_STACK_LOCATION *v85; // rcx
  NTSTATUS v86; // eax
  FxIrp *v87; // rdi
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int64 v91; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v93; // rdi
  bool v94; // cf
  _FX_DRIVER_GLOBALS *v95; // rdx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v97; // rcx
  __m128i v98; // xmm2
  _LIST_ENTRY *v99; // rdx
  unsigned __int64 Flink; // rdx
  unsigned __int16 v101; // ax
  FxDeviceBase *v102; // rcx
  const void *v103; // rdx
  unsigned __int16 v104; // ax
  const void *v105; // rcx
  FxIrp *v106; // rdi
  _IO_STACK_LOCATION *v107; // rcx
  _LIST_ENTRY *v108; // rax
  _FX_DRIVER_GLOBALS *v109; // rdx
  FX_POOL *NonPagedBytes; // rax
  _LIST_ENTRY *v111; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v112; // xmm1_8
  FxDeviceBase *v113; // rax
  _LIST_ENTRY *v114; // rdx
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v116; // ax
  FxDeviceBase *v117; // rcx
  unsigned __int64 v118; // rdx
  unsigned __int16 v119; // ax
  const void *v120; // rcx
  FxDeviceBase *v121; // rcx
  unsigned __int16 v122; // ax
  const void *v123; // rcx
  FxVerifierLock *v124; // rcx
  _FX_DRIVER_GLOBALS *v125; // rcx
  const char *v126; // r8
  const void *v127; // r10
  const void *v128; // rdx
  __int64 v129; // r8
  unsigned __int16 v130; // r9
  FxIoQueue *v131; // rcx
  unsigned __int16 v132; // r9
  unsigned __int16 v133; // ax
  const void *v134; // rcx
  FxIoQueue *v135; // rcx
  unsigned __int16 v136; // ax
  const void *v137; // r8
  const void *v138; // rdx
  unsigned __int8 v139; // r8
  _FX_DRIVER_GLOBALS *v140; // rdx
  unsigned __int8 v141; // r8
  _LIST_ENTRY *v142; // r14
  FxDeviceBase *v143; // r13
  unsigned __int64 v144; // rdx
  unsigned __int64 v145; // r13
  char v146; // di
  int v147; // edi
  FxIoQueue *v148; // rdx
  unsigned __int16 v149; // cx
  const void *v150; // rdx
  __int64 v151; // r8
  unsigned __int16 v152; // r9
  FxDeviceBase *v153; // rcx
  unsigned __int16 v154; // ax
  const void *v155; // rcx
  FxDeviceBase *v156; // rcx
  unsigned __int16 v157; // ax
  const void *v158; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-B9h]
  KIRQL v160; // [rsp+50h] [rbp-89h] BYREF
  char v161; // [rsp+51h] [rbp-88h]
  unsigned __int8 PreviousIrql[2]; // [rsp+52h] [rbp-87h] BYREF
  unsigned __int8 v163[4]; // [rsp+54h] [rbp-85h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+58h] [rbp-81h]
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+60h] [rbp-79h] BYREF
  _LIST_ENTRY *v166; // [rsp+98h] [rbp-41h]
  unsigned __int64 v167; // [rsp+A0h] [rbp-39h]
  _FILE_OBJECT *FileObject; // [rsp+A8h] [rbp-31h]
  void *PPObject; // [rsp+B0h] [rbp-29h] BYREF
  FxFileObject *pFxFO; // [rsp+B8h] [rbp-21h]
  _IRP *v171; // [rsp+C0h] [rbp-19h]
  FxVerifierLock *VerifierLock; // [rsp+C8h] [rbp-11h] BYREF
  FxVerifierLock *v173; // [rsp+D0h] [rbp-9h] BYREF
  FxRequest *Request; // [rsp+D8h] [rbp-1h] BYREF
  FxRequest *outputRequest; // [rsp+E0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+138h] [rbp+5Fh]
  unsigned __int16 v177; // [rsp+140h] [rbp+67h] BYREF
  FxIrp *Irp; // [rsp+148h] [rbp+6Fh]
  char v179; // [rsp+150h] [rbp+77h]
  _FX_DRIVER_GLOBALS *v180; // [rsp+158h] [rbp+7Fh] BYREF

  Irp = FxIrp;
  m_Irp = FxIrp->m_Irp;
  m_Globals = this->m_Globals;
  v167 = 0LL;
  v5 = FxIrp;
  v161 = 0;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  v179 = 0;
  globals = m_Globals;
  v166 = 0LL;
  v7 = CurrentStackLocation->FileObject;
  FileObject = v7;
  LODWORD(m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v9 = (_DWORD)m_Irp + 1;
  if ( BYTE4(m_DeviceBase[1].m_Globals) && v9 > 2 )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v93 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v93 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v93);
    v33 = -1073741790;
LABEL_316:
    v106 = Irp;
LABEL_317:
    FxPkgGeneral::DecrementOpenHandleCount(this);
    v106->m_Irp->IoStatus.Status = v33;
    v106->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(v106->m_Irp, 0);
    v106->m_Irp = 0LL;
$RequestIsGone:
    if ( v161 )
      KeLeaveCriticalRegion();
    return (unsigned int)v33;
  }
  ContextSizeOverride = 0LL;
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  ContextTypeInfo = 0LL;
  memset(&attributes.Size + 1, 0, 20);
  attributes.Size = 56;
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  memset(&attributes.ParentObject, 0, 24);
  if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
  {
    Blink = this->m_FileObjectInfoHeadList.Blink;
    v166 = Blink;
    if ( LODWORD(Blink[5].Blink) )
    {
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
      ContextTypeInfo = (__int64)attributes.ContextTypeInfo;
      ContextSizeOverride = attributes.ContextSizeOverride;
    }
    attributes.ExecutionLevel = this->m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
  }
  v14 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
  v15 = m_DeviceBase->m_Globals;
  if ( v14 == 1 )
  {
    v23 = 0LL;
    pFxFO = 0LL;
    goto LABEL_55;
  }
  if ( !v7 && (v14 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
  {
    if ( v15->FxVerboseOn )
      WPP_IFR_SF_q(v15, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, v5->m_Irp);
    FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
    v33 = -1073741438;
    goto LABEL_313;
  }
  flags = 0LL;
  v17 = v15->Tag;
  LODWORD(v180) = ExDefaultNonPagedPoolType;
  LODWORD(v167) = v17;
  if ( ContextTypeInfo )
  {
    if ( ContextSizeOverride )
      flags = ContextSizeOverride;
    else
      flags = *(_QWORD *)(ContextTypeInfo + 16);
  }
  v18 = 208LL;
  if ( flags )
  {
    v88 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v88 < flags )
    {
LABEL_312:
      v33 = -1073741670;
      goto LABEL_313;
    }
    v89 = v88 + 208;
    if ( v89 < 0xD0 )
    {
      id = -1073741675;
LABEL_161:
      WPP_IFR_SF_DDxd(v15, ContextTypeInfo, flags, v17, Tag, 0xA0u, 0, flags, id);
LABEL_311:
      m_Globals = globals;
      goto LABEL_312;
    }
    v18 = v89;
  }
  if ( v15->FxVerifierHandle )
  {
    ContextTypeInfo = -1LL;
    if ( v18 + 48 >= v18 )
      ContextTypeInfo = v18 + 48;
    v94 = v18 + 48 < v18;
    v18 = ContextTypeInfo;
    id = v94 ? 0xC0000095 : 0;
  }
  else
  {
    id = 0;
  }
  if ( id < 0 )
    goto LABEL_161;
  if ( v15->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v21 = (FxFileObject *)FxPoolAllocator(v15, &v15->FxPoolFrameworks, ExDefaultNonPagedPoolType, v18, v17, Caller);
  v23 = v21;
  if ( v21 )
  {
    if ( v15->FxVerifierHandle )
    {
      memset(v21, 0, 0x30uLL);
      LODWORD(v23->m_ChildListHead.Flink) = 1146058822;
      v23 = (FxFileObject *)((char *)v23 + 48);
    }
    *(_QWORD *)&v23[1].m_Type = 0LL;
    v23[1].m_Globals = 0LL;
    *(_QWORD *)&v23[1].m_ObjectFlags = 0LL;
    v23[1].m_ChildListHead.Flink = 0LL;
    v23[1].m_ChildListHead.Blink = 0LL;
    v23[1].FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)v23;
    v24 = attributes.ContextTypeInfo;
    if ( attributes.ContextTypeInfo )
    {
      ContextSize = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        ContextSize = attributes.ContextTypeInfo->ContextSize;
      memset(&v23[1].m_SpinLock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v24 = attributes.ContextTypeInfo;
    }
    v23[1].m_ChildListHead.Flink = (_LIST_ENTRY *)v24;
  }
  if ( !v23 )
    goto LABEL_311;
  p_m_ChildEntry = &v23->m_ChildEntry;
  v23->m_Globals = m_DeviceBase->m_Globals;
  v23->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)&FxObject::`vftable';
  *(_DWORD *)&v23->m_Type = 10489880;
  v23->m_SpinLock.m_Lock = 0LL;
  v23->m_SpinLock.m_DbgFlagIsInitialized = 1;
  v23->m_Refcnt = 1;
  *(_DWORD *)&v23->m_ObjectFlags = 0x10000;
  v23->m_ParentObject = 0LL;
  v23->m_ChildListHead.Blink = &v23->m_ChildListHead;
  v23->m_ChildListHead.Flink = &v23->m_ChildListHead;
  v23->m_ChildEntry.Blink = &v23->m_ChildEntry;
  v23->m_ChildEntry.Flink = &v23->m_ChildEntry;
  v26 = v23->m_Globals;
  v23->m_DisposeSingleEntry.Next = 0LL;
  v23->m_DeviceBase = 0LL;
  if ( v26->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(v23, v22, 0);
  v23->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxNonPagedObject::`vftable';
  v23->m_NPLock.m_Lock = 0LL;
  v23->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v23->m_ObjectFlags) < 0 )
  {
    v95 = v23->m_Globals;
    if ( v95->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v95, v23);
      v23[-1].IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)VerifierLock;
    }
  }
  v23->m_PkgContext = 0LL;
  v23->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxFileObject::`vftable'{for `FxNonPagedObject'};
  v23->m_DeviceBase = m_DeviceBase;
  v23->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
  v23->m_FileObject.m_FileObject = FileObject;
  v27 = KeAcquireSpinLockRaiseToDpc(&v23->m_SpinLock.m_Lock);
  v23->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v27);
  v171 = 0LL;
  if ( !v23->m_ObjectSize )
  {
    v33 = -1073741816;
LABEL_169:
    FxObject::DeleteFromFailedCreate(v23);
    m_Globals = globals;
LABEL_313:
    v156 = this->m_DeviceBase;
    v157 = v156->m_ObjectSize;
    v158 = (const void *)((unsigned __int64)v156 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v157 )
      v158 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v158, v33);
    goto LABEL_316;
  }
  if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
  {
    v28 = KeAcquireSpinLockRaiseToDpc(&v23->m_SpinLock.m_Lock);
    v23->m_ObjectFlags |= 0x11u;
    KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v28);
  }
  v171 = (_IRP *)m_DeviceBase;
  v29 = KeAcquireSpinLockRaiseToDpc(&v23->m_SpinLock.m_Lock);
  v30 = v23->m_ObjectState == 1;
  LOBYTE(v180) = v29;
  if ( !v30 )
  {
    FxObject::TraceDroppedEvent(v23, FxObjectDroppedEventAssignParentObject);
    KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, (KIRQL)v180);
    v33 = -1073741738;
    goto LABEL_169;
  }
  if ( v23->m_ParentObject )
  {
    KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, v29);
    v33 = -1071644147;
    goto LABEL_169;
  }
  v31 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
  v30 = m_DeviceBase->m_ObjectState == 1;
  v160 = v31;
  if ( v30 )
  {
    v32 = m_DeviceBase->m_ChildListHead.Blink;
    if ( v32->Flink != &m_DeviceBase->m_ChildListHead )
      __fastfail(3u);
    p_m_ChildEntry->Flink = &m_DeviceBase->m_ChildListHead;
    v23->m_ChildEntry.Blink = v32;
    v32->Flink = p_m_ChildEntry;
    m_DeviceBase->m_ChildListHead.Blink = p_m_ChildEntry;
    if ( !v23->m_DeviceBase )
      v23->m_DeviceBase = m_DeviceBase->m_DeviceBase;
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v31);
    v33 = 0;
    v23->m_ParentObject = m_DeviceBase;
  }
  else
  {
    FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v160);
    v33 = -1073741738;
  }
  KeReleaseSpinLock(&v23->m_SpinLock.m_Lock, (KIRQL)v180);
  if ( v33 < 0 )
    goto LABEL_169;
  v36 = v23->m_ObjectSize;
  if ( v36 )
    v37 = (char *)v23 + v36;
  else
    v37 = 0LL;
  if ( attributes.EvtDestroyCallback )
    *((_QWORD *)v37 + 3) = attributes.EvtDestroyCallback;
  if ( attributes.EvtCleanupCallback )
  {
    *((_QWORD *)v37 + 2) = attributes.EvtCleanupCallback;
    v23->m_ObjectFlags |= 0x400u;
  }
  v38 = v23->m_Globals;
  v23->m_ObjectFlags |= 8u;
  if ( v38->FxVerifierOn )
    FxObject::Vf_VerifyLeakDetectionConsiderObject(v23, v34);
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, PreviousIrql, v35);
    v39 = PreviousIrql[0];
  }
  else
  {
    v39 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
  }
  v40 = (_LIST_ENTRY *)&m_DeviceBase[2];
  v41 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  p_m_Link = &v23->m_Link;
  if ( (FxDeviceBase *)v41->~FxObject != &m_DeviceBase[2] )
    __fastfail(3u);
  p_m_Link->Flink = (_LIST_ENTRY *)v41;
  v23->m_Link.Blink = v40;
  v41->~FxObject = (void (__fastcall *)(FxObject *))p_m_Link;
  v40->Flink = p_m_Link;
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (v97 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Unlock(v97, v39, (unsigned __int8)v41);
  }
  else
  {
    KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v39);
  }
  if ( v14 == 2 )
  {
    FileObject->FsContext = v23;
  }
  else if ( v14 == 3 )
  {
    FileObject->FsContext2 = v23;
  }
  pFxFO = v23;
  if ( v23->m_ObjectSize )
    v167 = (unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v167 = 0LL;
  v43 = this->m_FileObjectInfoHeadList.Blink->Blink;
  if ( v43 != p_m_FileObjectInfoHeadList )
  {
    while ( 1 )
    {
      v98 = *(__m128i *)&v43[5].Blink;
      v166 = v43;
      *(__m128i *)&attributes.Size = v98;
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = *(_LIST_ENTRY *)((char *)v43 + 104);
      *(_LIST_ENTRY *)&attributes.ParentObject = *(_LIST_ENTRY *)((char *)v43 + 120);
      attributes.ContextTypeInfo = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v43[8].Blink;
      if ( _mm_cvtsi128_si32(v98) )
      {
        attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
        attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
        attributes.ParentObject = 0LL;
        v33 = FxObjectAllocateContext(v23, &attributes, 1u, 0LL);
        if ( v33 < 0 )
          break;
      }
      v43 = v43->Blink;
      if ( v43 == p_m_FileObjectInfoHeadList )
        goto LABEL_54;
    }
    v99 = v43[9].Blink;
    if ( v99 )
      Flink = (unsigned __int64)v99[1].Flink;
    else
      Flink = (unsigned __int64)this->m_DeviceBase->m_Driver;
    v101 = *(_WORD *)(Flink + 10);
    v102 = this->m_DeviceBase;
    v103 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v101 )
      v103 = 0LL;
    v104 = v102->m_ObjectSize;
    v105 = (const void *)((unsigned __int64)v102 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v104 )
      v105 = 0LL;
    WPP_IFR_SF_qqqd(globals, 2u, 0xDu, 0x17u, WPP_FxPkgGeneral_cpp_Traceguids, &v43[5].Blink, v105, v103, v33);
    v106 = Irp;
    goto LABEL_309;
  }
LABEL_54:
  v5 = Irp;
LABEL_55:
  if ( this->m_DriverCreatedQueue || (this->m_Flags & 0xC) != 0 )
  {
    if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList
      && (v44 = this->m_FileObjectInfoHeadList.Blink, v166 = v44, BYTE4(v44[9].Flink)) )
    {
      v108 = v44[9].Blink;
      *(_LIST_ENTRY *)&attributes.Size = v108[2];
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v108[3];
      *(_LIST_ENTRY *)&attributes.ParentObject = v108[4];
      v46 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v108[5].Flink;
    }
    else
    {
      v45 = this->m_DeviceBase;
      *(_OWORD *)&attributes.Size = *(_OWORD *)&v45[2].m_ExecutionLevel;
      *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v45[3].FxNonPagedObject::FxObject::__vftable;
      *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v45[3].m_Globals;
      v46 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v45[3].m_ChildListHead.Flink;
    }
    v47 = this->m_DeviceBase;
    attributes.ContextTypeInfo = v46;
    if ( *(FxDeviceBase **)&v47[1].m_ExecutionLevel != (FxDeviceBase *)&v47[1].m_ExecutionLevel )
    {
      attributes.ExecutionLevel = WdfExecutionLevelDispatch;
      attributes.SynchronizationScope = WdfSynchronizationScopeNone;
      attributes.ParentObject = 0LL;
    }
    v48 = 0LL;
    v49 = v47->m_Globals;
    v171 = v5->m_Irp;
    v50 = *(_QWORD *)&v47[3].m_SpinLock.m_DbgFlagIsInitialized;
    v180 = v49;
    if ( v50 && *(_WORD *)(v50 + 8) == 4354 && *(_BYTE *)(v50 + 1683) )
    {
      v52 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v47[2].m_SpinLock);
      if ( !v52 )
        v52 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v47[2].m_DeviceBase)(
                                   HIDWORD(v47[2].m_ChildEntry.Blink),
                                   HIDWORD(v47[2].m_DisposeSingleEntry.Next),
                                   LODWORD(v47[2].m_DisposeSingleEntry.Next));
    }
    else
    {
      ++HIDWORD(v47[2].m_ParentObject);
      v52 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&v47[2].m_SpinLock);
      if ( !v52 )
      {
        ++LODWORD(v47[2].m_ChildEntry.Flink);
        v52 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v47[2].m_DeviceBase)(
                                   HIDWORD(v47[2].m_ChildEntry.Blink),
                                   HIDWORD(v47[2].m_DisposeSingleEntry.Next),
                                   LODWORD(v47[2].m_DisposeSingleEntry.Next));
      }
      v49 = v180;
    }
    if ( !v52 )
      goto LABEL_302;
    if ( v49->FxPoolTrackingOn )
    {
      v54 = v52 + 1;
      FxPoolInsertNonPagedAllocateTracker(
        &v180->FxPoolFrameworks,
        v52,
        (unsigned __int64)v47[2].m_CallbackLockObjectPtr,
        v180->Tag,
        retaddr);
    }
    else
    {
      v54 = v52;
    }
    v55 = v180;
    v54->Link.Flink = &v52->Link;
    p_Pool = &v54->Pool;
    v54->Link.Blink = &v55->Linkage;
    if ( v55->FxVerifierHandle )
    {
      memset(&v54->Pool, 0, 0x30uLL);
      LODWORD(v54->CallersAddress) = 1146058822;
      p_Pool = (FX_POOL **)&v54[1];
    }
    p_Pool[47] = 0LL;
    p_Pool[48] = 0LL;
    p_Pool[49] = 0LL;
    p_Pool[50] = 0LL;
    p_Pool[51] = 0LL;
    p_Pool[46] = (FX_POOL *)p_Pool;
    v57 = attributes.ContextTypeInfo;
    if ( attributes.ContextTypeInfo )
    {
      v91 = attributes.ContextSizeOverride;
      if ( !attributes.ContextSizeOverride )
        v91 = attributes.ContextTypeInfo->ContextSize;
      memset(p_Pool + 52, 0, (v91 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v57 = attributes.ContextTypeInfo;
    }
    p_Pool[50] = (FX_POOL *)v57;
    if ( !p_Pool )
    {
LABEL_302:
      v33 = -1073741670;
      WPP_IFR_SF_d(v47->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
      goto LABEL_303;
    }
    p_Pool[2] = (FX_POOL *)v47->m_Globals;
    v33 = 0;
    *p_Pool = (FX_POOL *)&FxObject::`vftable';
    *((_DWORD *)p_Pool + 2) = 24121352;
    v58 = 1LL;
    p_Pool[7] = 0LL;
    *((_BYTE *)p_Pool + 48) = 1;
    *((_DWORD *)p_Pool + 3) = 1;
    *((_DWORD *)p_Pool + 6) = 0x10000;
    p_Pool[8] = 0LL;
    p_Pool[5] = (FX_POOL *)(p_Pool + 4);
    p_Pool[4] = (FX_POOL *)(p_Pool + 4);
    p_Pool[10] = (FX_POOL *)(p_Pool + 9);
    p_Pool[9] = (FX_POOL *)(p_Pool + 9);
    v59 = p_Pool[2];
    p_Pool[11] = 0LL;
    p_Pool[12] = 0LL;
    if ( LOBYTE(v59[1].PeakPagedAllocations) )
    {
      FxObject::Vf_VerifyConstruct((FxObject *)p_Pool, v51, 0);
      v58 = 1LL;
    }
    *p_Pool = (FX_POOL *)FxNonPagedObject::`vftable';
    p_Pool[14] = 0LL;
    *((_BYTE *)p_Pool + 104) = 1;
    if ( *((char *)p_Pool + 24) < 0 )
    {
      v109 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
      if ( v109->FxVerifierLock )
      {
        v173 = 0LL;
        FxVerifierLock::CreateAndInitialize(&v173, v109, (FxObject *)p_Pool);
        v58 = 1LL;
        *(p_Pool - 5) = (FX_POOL *)v173;
      }
    }
    v60 = v171;
    *p_Pool = (FX_POOL *)FxRequestBase::`vftable';
    p_Pool[19] = (FX_POOL *)v60;
    p_Pool[23] = 0LL;
    p_Pool[24] = 0LL;
    *((_WORD *)p_Pool + 106) = 0;
    *((_BYTE *)p_Pool + 238) = 1;
    p_Pool[20] = 0LL;
    p_Pool[25] = 0LL;
    *((_BYTE *)p_Pool + 214) = p_Pool[19] == 0LL;
    *((_BYTE *)p_Pool + 215) = 0;
    *((_BYTE *)p_Pool + 236) = 0;
    p_Pool[21] = 0LL;
    p_Pool[22] = 0LL;
    p_Pool[16] = (FX_POOL *)(p_Pool + 15);
    p_Pool[15] = (FX_POOL *)(p_Pool + 15);
    p_Pool[18] = 0LL;
    p_Pool[27] = (FX_POOL *)216;
    p_Pool[28] = 0LL;
    *((_DWORD *)p_Pool + 52) = 0;
    p_Pool[30] = 0LL;
    *((_DWORD *)p_Pool + 58) = 232;
    *((_BYTE *)p_Pool + 237) = 0;
    p_Pool[32] = (FX_POOL *)FxRequestSystemBuffer::`vftable';
    p_Pool[33] = 0LL;
    p_Pool[34] = (FX_POOL *)FxRequestOutputBuffer::`vftable';
    p_Pool[35] = 0LL;
    p_Pool[31] = 0LL;
    *((_BYTE *)p_Pool + 353) = 0;
    p_Pool[37] = (FX_POOL *)(p_Pool + 36);
    p_Pool[36] = (FX_POOL *)(p_Pool + 36);
    p_Pool[39] = (FX_POOL *)(p_Pool + 38);
    p_Pool[38] = (FX_POOL *)(p_Pool + 38);
    p_Pool[41] = (FX_POOL *)(p_Pool + 40);
    p_Pool[40] = (FX_POOL *)(p_Pool + 40);
    *p_Pool = (FX_POOL *)FxRequestFromLookaside::`vftable';
    *((_BYTE *)p_Pool + 352) = 0;
    *((_WORD *)p_Pool + 177) = 0;
    p_Pool[42] = 0LL;
    p_Pool[43] = 0LL;
    p_Pool[12] = (FX_POOL *)v47->m_DeviceBase;
    if ( !v60 )
    {
LABEL_80:
      if ( v47->m_Globals->FxRequestParentOptimizationOn )
      {
        v64 = 0LL;
        PPObject = 0LL;
        if ( !*((_WORD *)p_Pool + 5) )
        {
          v33 = -1073741816;
          goto LABEL_221;
        }
        if ( attributes.ExecutionLevel == WdfExecutionLevelPassive )
        {
          FxObject::MarkPassiveCallbacks((FxObject *)p_Pool, ObjectLock);
          v64 = (FxObject *)PPObject;
          v58 = 1LL;
        }
        if ( attributes.ParentObject )
        {
          FxObjectHandleGetPtr(
            (_FX_DRIVER_GLOBALS *)p_Pool[2],
            (unsigned __int64)attributes.ParentObject,
            0x1000u,
            &PPObject);
          v64 = (FxObject *)PPObject;
          v58 = 1LL;
        }
        if ( !v64 )
          goto LABEL_87;
        v33 = FxObject::AssignParentObject((FxObject *)p_Pool, v64);
        if ( v33 >= 0 )
        {
          v33 = 0;
          v58 = 1LL;
LABEL_87:
          v65 = *((_WORD *)p_Pool + 5);
          if ( v65 )
            v66 = (__int64)p_Pool + v65;
          else
            v66 = 0LL;
          if ( attributes.EvtDestroyCallback )
            *(_QWORD *)(v66 + 24) = attributes.EvtDestroyCallback;
          if ( attributes.EvtCleanupCallback )
          {
            *(_QWORD *)(v66 + 16) = attributes.EvtCleanupCallback;
            *((_WORD *)p_Pool + 12) |= 0x400u;
          }
          v67 = p_Pool[2];
          *((_WORD *)p_Pool + 12) |= 8u;
          if ( !LOBYTE(v67[1].PeakPagedAllocations) )
            goto LABEL_94;
          FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)p_Pool, (_FX_DRIVER_GLOBALS *)v64);
LABEL_228:
          v58 = 1LL;
LABEL_94:
          v48 = (FxRequest *)p_Pool;
          goto LABEL_95;
        }
      }
      else
      {
        v33 = FxObject::Commit((FxObject *)p_Pool, (_FX_DRIVER_GLOBALS *)&attributes, 0LL, v47, 0);
      }
      if ( v33 >= 0 )
        goto LABEL_228;
LABEL_221:
      WPP_IFR_SF_d(v47->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, v33);
      FxObject::DeleteFromFailedCreate((FxObject *)p_Pool);
      v58 = 1LL;
LABEL_95:
      if ( v33 >= 0 )
      {
        v68 = this->m_FileObjectInfoHeadList.Blink->Blink;
        if ( v68 != p_m_FileObjectInfoHeadList )
        {
          while ( 1 )
          {
            v30 = BYTE4(v68[9].Flink) == 0;
            v69 = v68;
            v166 = v68;
            if ( v30 )
            {
              v113 = this->m_DeviceBase;
              *(_OWORD *)&attributes.Size = *(_OWORD *)&v113[2].m_ExecutionLevel;
              *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v113[3].FxNonPagedObject::FxObject::__vftable;
              *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v113[3].m_Globals;
              v112 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v113[3].m_ChildListHead.Flink;
            }
            else
            {
              v111 = v68[9].Blink;
              *(_LIST_ENTRY *)&attributes.Size = v111[2];
              *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v111[3];
              *(_LIST_ENTRY *)&attributes.ParentObject = v111[4];
              v112 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v111[5].Flink;
            }
            attributes.ContextTypeInfo = v112;
            if ( attributes.Size )
            {
              attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
              attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
              attributes.ParentObject = 0LL;
              v33 = FxObjectAllocateContext(v48, &attributes, 1u, 0LL);
              if ( v33 < 0 )
              {
                v114 = v68[9].Blink;
                if ( v114 )
                  m_Driver = (unsigned __int64)v114[1].Flink;
                else
                  m_Driver = (unsigned __int64)this->m_DeviceBase->m_Driver;
                v116 = *(_WORD *)(m_Driver + 10);
                v117 = this->m_DeviceBase;
                v118 = m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
                if ( !v116 )
                  v118 = 0LL;
                v119 = v117->m_ObjectSize;
                v120 = (const void *)((unsigned __int64)v117 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v119 )
                  v120 = 0LL;
                WPP_IFR_SF_qid(globals, 2u, 0xDu, 0x19u, WPP_FxPkgGeneral_cpp_Traceguids, v120, v118, v33);
                goto LABEL_306;
              }
              v58 = 1LL;
            }
            v68 = v68->Blink;
            if ( v68 == p_m_FileObjectInfoHeadList )
              goto LABEL_98;
          }
        }
        v69 = v166;
LABEL_98:
        if ( KeGetCurrentIrql() <= 1u )
        {
          KeEnterCriticalRegion();
          v161 = 1;
        }
        if ( (this->m_Flags & 4) == 0 && this->m_DriverCreatedQueue )
        {
          v76 = 0;
LABEL_115:
          if ( (this->m_Flags & 4) != 0 )
          {
            v142 = this->m_FileObjectInfoHeadList.Blink;
            if ( v142 != p_m_FileObjectInfoHeadList )
            {
              do
              {
                v69 = v142;
                if ( !BYTE4(v142[9].Flink) )
                  break;
                if ( v23 )
                  v23->m_PkgContext = v142->Blink;
                v30 = v142[2].Blink == 0LL;
                v143 = this->m_DeviceBase;
                v177 = v48->m_ObjectSize;
                *(_WORD *)v163 = v143->m_ObjectSize;
                if ( !v30 )
                {
                  LOBYTE(v180) = 0;
                  FxLockedCallback::CallbackStart((FxLockedCallback *)&v142[2], (unsigned __int8 *)&v180);
                  v144 = (unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL;
                  if ( !v177 )
                    v144 = 0LL;
                  v145 = (unsigned __int64)v143 ^ 0xFFFFFFFFFFFFFFF8uLL;
                  if ( !*(_WORD *)v163 )
                    v145 = 0LL;
                  v146 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v142[2].Blink)(
                           v145,
                           v144,
                           v167);
                  FxLockedCallback::CallbackEnd((FxLockedCallback *)&v142[2], (unsigned __int8)v180);
                  if ( v146 )
                    goto LABEL_126;
                  v69 = v142;
                }
                v142 = v142->Blink;
              }
              while ( v142 != p_m_FileObjectInfoHeadList );
              v76 = v179;
            }
          }
          m_DriverCreatedQueue = this->m_DriverCreatedQueue;
          if ( !m_DriverCreatedQueue )
          {
            if ( (this->m_Flags & 8) != 0 )
            {
              if ( v48->m_ObjectSize )
                v78 = (unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v78 = 0LL;
              v79 = this->m_DeviceBase;
              if ( v79->m_ObjectSize )
                v80 = (unsigned __int64)v79 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v80 = 0LL;
              if ( v69[1].Blink )
              {
                v81 = v69[1].Flink;
                v160 = 0;
                if ( v81 )
                  ((void (__fastcall *)(_LIST_ENTRY *, KIRQL *))v81->Flink[1].Flink)(v81, &v160);
                ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))v69[1].Blink)(
                  v80,
                  v78,
                  v167);
                v82 = v69[1].Flink;
                if ( v82 )
                {
                  ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v82->Flink[1].Blink)(v82, v160);
                  v33 = 259;
                  goto $RequestIsGone;
                }
              }
            }
            else
            {
              if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
              {
                FxRequest::Complete(v48, 0, v58, m_Refcnt);
                v33 = 259;
                goto $RequestIsGone;
              }
              FxPkgGeneral::ForwardCreateRequest(this, Irp, FxPkgGeneral::_CreateCompletionRoutine2, v48);
            }
LABEL_126:
            v33 = 259;
            goto $RequestIsGone;
          }
          if ( v76 )
          {
            v147 = FxIoQueue::ForwardRequest(this->m_DefaultQueueForCreates, this->m_DriverCreatedQueue, v48);
            if ( v147 < 0 )
            {
              v148 = this->m_DriverCreatedQueue;
              v149 = v148->m_ObjectSize;
              v150 = (const void *)((unsigned __int64)v148 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v149 )
                v150 = 0LL;
              WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v150, v147);
              FxRequest::Complete(v48, v147, v151, v152);
              v33 = 259;
              goto $RequestIsGone;
            }
            goto LABEL_126;
          }
          v33 = FxIoQueue::QueueRequest(m_DriverCreatedQueue, v48);
          if ( v33 >= 0 )
            goto $RequestIsGone;
          v135 = this->m_DriverCreatedQueue;
          v136 = v135->m_ObjectSize;
          v134 = (const void *)((unsigned __int64)v135 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v136 )
            v134 = 0LL;
          v132 = 29;
LABEL_264:
          WPP_IFR_SF_qd(globals, 2u, 0xDu, v132, WPP_FxPkgGeneral_cpp_Traceguids, v134, v33);
          goto $RequestIsGone;
        }
        if ( this->m_ExecutionLevel != WdfExecutionLevelPassive || KeGetCurrentIrql() < 2u )
        {
          m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
          Request = v48;
          if ( SLOBYTE(m_DefaultQueueForCreates->m_ObjectFlags) < 0
            && (v124 = *(FxVerifierLock **)&m_DefaultQueueForCreates[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v124, (unsigned __int8 *)&v177, v58);
            v71 = v177;
          }
          else
          {
            v71 = KeAcquireSpinLockRaiseToDpc(&m_DefaultQueueForCreates->m_NPLock.m_Lock);
            LOBYTE(v177) = v71;
          }
          if ( v48->m_Reserved )
          {
            FxObject::AddRef(
              v48,
              (void *)0x50647746,
              2311,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            v71 = v177;
          }
          m_QueueState = m_DefaultQueueForCreates->m_QueueState;
          if ( (m_QueueState & 1) == 0 )
          {
            v125 = m_DefaultQueueForCreates->m_Globals;
            v33 = -1073741436;
            if ( v125->FxVerboseOn )
            {
              v126 = "power stopping (Drain) in progress,";
              v127 = (const void *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v48->m_ObjectSize )
                v127 = 0LL;
              if ( (m_QueueState & 0x10000) == 0 )
                v126 = a5;
              v128 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !m_DefaultQueueForCreates->m_ObjectSize )
                v128 = 0LL;
              WPP_IFR_SF_qLsqd(v125, 5u, (unsigned int)v126, 0x29u, Tag, v128, m_QueueState, v126, v127, -1073741436);
              v71 = v177;
            }
            FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v71, v72);
            v48->m_Irp.m_Irp->IoStatus.Information = 0LL;
            FxRequest::Complete(v48, 0xC0000184, v129, v130);
            v48->Release(
              v48,
              (void *)1886220099,
              2338,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            v131 = this->m_DefaultQueueForCreates;
            v132 = 27;
            v133 = v131->m_ObjectSize;
            v134 = (const void *)((unsigned __int64)v131 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v133 )
              v134 = 0LL;
            goto LABEL_264;
          }
          v75 = m_DefaultQueueForCreates->m_Globals;
          if ( v75->FxVerboseOn )
          {
            v137 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_DefaultQueueForCreates->m_ObjectSize )
              v137 = 0LL;
            v138 = (const void *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v48->m_ObjectSize )
              v138 = 0LL;
            WPP_IFR_SF_qq(v75, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v138, v137);
          }
          if ( v48->m_Globals->FxVerifierIO )
          {
            FxNonPagedObject::Lock(v48, v163, v72);
            v140 = v48->m_Globals;
            if ( v140->FxVerifierOn )
              FxRequest::Vf_VerifyRequestIsNotCompleted(v48, v140);
            FxNonPagedObject::Unlock(v48, v163[0], v139);
          }
          v48->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          if ( v48->m_Reserved )
          {
            if ( m_DefaultQueueForCreates->m_Dispatching )
            {
              FxIoQueue::InsertNewRequestLocked(m_DefaultQueueForCreates, &Request, v177);
              FxNonPagedObject::Unlock(m_DefaultQueueForCreates, v177, v141);
              v23 = pFxFO;
              v69 = v166;
              goto LABEL_113;
            }
            v23 = pFxFO;
          }
          FxIoQueue::DispatchEvents(m_DefaultQueueForCreates, v177, v48, v73);
LABEL_113:
          if ( FxIoQueue::GetRequest(this->m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
            goto LABEL_126;
          v76 = 1;
          v179 = 1;
          goto LABEL_115;
        }
        v33 = -1073741808;
        v121 = this->m_DeviceBase;
        v106 = Irp;
        v122 = v121->m_ObjectSize;
        v123 = (const void *)((unsigned __int64)v121 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v122 )
          v123 = 0LL;
        WPP_IFR_SF_qid(
          globals,
          2u,
          0xDu,
          0x1Au,
          WPP_FxPkgGeneral_cpp_Traceguids,
          v123,
          (__int64)Irp->m_Irp,
          -1073741808);
        goto LABEL_307;
      }
LABEL_303:
      v153 = this->m_DeviceBase;
      v154 = v153->m_ObjectSize;
      v155 = (const void *)((unsigned __int64)v153 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v154 )
        v155 = 0LL;
      WPP_IFR_SF_qd(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v155, v33);
LABEL_306:
      v106 = Irp;
LABEL_307:
      if ( v48 )
        FxObject::DeleteFromFailedCreate(v48);
LABEL_309:
      if ( v23 )
        FxFileObject::DeleteFileObjectFromFailedCreate(v23);
      goto LABEL_317;
    }
    v61 = p_Pool[19];
    m_Refcnt = v47[1].m_Refcnt;
    v62 = (unsigned __int8 *)v61[1].NonPagedHead.Blink;
    v63 = *v62;
    if ( *v62 < 3u )
    {
LABEL_79:
      v58 = 1LL;
      goto LABEL_80;
    }
    if ( v63 <= 4u )
    {
      if ( !--m_Refcnt )
      {
        if ( v61->PagedLock.m_Lock.Event.Header.Type )
          goto LABEL_79;
        NonPagedBytes = (FX_POOL *)v61->NonPagedBytes;
        goto LABEL_215;
      }
      if ( m_Refcnt != 1 )
        goto LABEL_79;
    }
    else
    {
      if ( (unsigned __int8)(v63 - 14) > 1u )
        goto LABEL_79;
      if ( (*((_DWORD *)v62 + 6) & 3) == 0 )
      {
        p_Pool[33] = (FX_POOL *)v61->NonPagedHead.Blink;
        p_Pool[35] = (FX_POOL *)v61->NonPagedHead.Blink;
LABEL_216:
        if ( p_Pool[33] )
          *((_BYTE *)p_Pool + 235) |= 1u;
        v58 = 1LL;
        if ( p_Pool[35] )
          *((_BYTE *)p_Pool + 235) |= 2u;
        goto LABEL_80;
      }
      if ( (*((_DWORD *)v62 + 6) & 3) != 1 && (*((_DWORD *)v62 + 6) & 3) != 2 )
      {
        if ( (*((_DWORD *)v62 + 6) & 3) == 3 )
        {
          if ( *v62 != 15 && v61->PagedLock.m_Lock.Event.Header.Type )
            goto LABEL_79;
          p_Pool[33] = (FX_POOL *)*((_QWORD *)v62 + 4);
          p_Pool[35] = (FX_POOL *)v61->NonPagedBytes;
        }
        goto LABEL_216;
      }
    }
    NonPagedBytes = (FX_POOL *)v61->NonPagedHead.Blink;
LABEL_215:
    p_Pool[33] = NonPagedBytes;
    goto LABEL_216;
  }
  v84 = v5->m_Irp;
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    v85 = v84->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v85[-1].MajorFunction = *(_OWORD *)&v85->MajorFunction;
    *(_OWORD *)&v85[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v85->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v85[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v85->Parameters.SetQuota + 6);
    v85[-1].FileObject = v85->FileObject;
    v85[-1].Control = 0;
    v86 = IoSetCompletionRoutineEx(
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            v5->m_Irp,
            FxPkgGeneral::_CreateCompletionRoutine,
            this,
            1u,
            1u,
            1u);
    v87 = Irp;
    if ( v86 < 0 )
    {
      v107 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v107[-1].CompletionRoutine = FxPkgGeneral::_CreateCompletionRoutine;
      v107[-1].Context = this;
      v107[-1].Control = -32;
    }
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, v87->m_Irp);
  }
  else
  {
    v84->IoStatus.Status = 0;
    v33 = 0;
    v5->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(v5->m_Irp, 0);
    Irp->m_Irp = 0LL;
  }
  return (unsigned int)v33;
}

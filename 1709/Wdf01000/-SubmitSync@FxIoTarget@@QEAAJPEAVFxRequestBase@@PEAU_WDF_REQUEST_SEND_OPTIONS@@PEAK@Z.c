/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIoctl @ 0x1C0024710 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C00867C0 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0087410 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00889D0 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0089CE0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C008A9E0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C008B1D0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C008CD90 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C008F770 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C009151C (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0091878 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0091F00 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C009331C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0093FAC (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00941D8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0005F30 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0012470 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0037960 (-Cancel@FxRequestBase@@QEAAEXZ.c)
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
 *     WPP_IFR_SF_qD @ 0x1C006BFA0 (WPP_IFR_SF_qD.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C007C068 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequest *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  unsigned __int8 v8; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  char v10; // r12
  unsigned int v11; // esi
  unsigned int v12; // r13d
  unsigned __int8 v13; // r15
  int v14; // edi
  unsigned __int8 v15; // r8
  unsigned int v16; // r8d
  unsigned int v17; // esi
  _FX_DRIVER_GLOBALS *v18; // rcx
  FxTagTracker *v19; // r13
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rdx
  _FX_DRIVER_GLOBALS *v21; // rcx
  _IRP *m_Irp; // rdx
  void (__fastcall *Send)(FxIoTarget *, _IRP *); // rax
  _LARGE_INTEGER *Timeout; // rdi
  NTSTATUS v25; // edi
  unsigned int (__fastcall *Release)(FxObject *, void *, int, const char *); // rax
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // cx
  _QWORD *i; // rdi
  void (__fastcall *v30)(unsigned __int64); // rax
  void (__fastcall *v31)(unsigned __int64); // rax
  unsigned __int16 v32; // ax
  _QWORD *v33; // rcx
  _QWORD *v34; // rdi
  void (__fastcall *v35)(FxObject *); // rdx
  void (__fastcall *v36)(FxObject *); // rax
  void *v37; // rcx
  _QWORD *v38; // rcx
  FxRequest *v39; // rax
  FX_POOL_TRACKER *v40; // rdi
  char m_ObjectFlags; // al
  unsigned __int8 m_Reserved; // r13
  unsigned __int8 m_IrpAllocation; // cl
  unsigned __int64 m_CanComplete; // rdx
  signed __int32 v45; // edi
  FxRequestContext *v46; // rcx
  _FX_DRIVER_GLOBALS *v47; // rax
  unsigned __int16 v49; // cx
  FxTagTracker *v50; // r8
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v52; // r14
  void (__fastcall *v53)(unsigned __int64, unsigned __int64); // rax
  void (__fastcall *v54)(unsigned __int64, unsigned __int64); // rax
  unsigned __int16 v55; // ax
  _QWORD *v56; // rcx
  _QWORD *v57; // r14
  FxRequestBase_vtbl *v58; // rdx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  _MDL *m_AllocatedMdl; // rcx
  FxDeviceBase *m_DeviceBase; // r14
  FxRequestContext *m_RequestContext; // rcx
  _IRP *v63; // r15
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v65; // r15
  __int64 v66; // rax
  _SLIST_ENTRY *v67; // r15
  MxLock *p_m_SpinLock; // r14
  FxRequest *(__fastcall *v69)(FxRequest *, char); // rax
  void *m_Lock; // rcx
  _QWORD *v71; // rcx
  FxRequest *v72; // rax
  FX_POOL_TRACKER *v73; // r14
  _MDL *v74; // rcx
  FxRequestContext *v75; // rcx
  _IRP *v76; // rdi
  FxRequestTimer *v77; // rcx
  FxRequest *v78; // rcx
  _SLIST_ENTRY *m_InternalContext; // r15
  _MDL *v80; // rcx
  FxRequestContext *v81; // rcx
  _IRP *v82; // r14
  FxRequestTimer *v83; // rcx
  FxRequest *v84; // rcx
  unsigned __int64 v85; // rcx
  FxRequest *_a2; // r8
  const void *_a1; // rdx
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  _DEVICE_OBJECT *v89; // rcx
  unsigned __int64 v90; // rdx
  FxRequest *v91; // rax
  FxTagTracker *Blink; // rcx
  unsigned __int64 v93; // rdx
  FxRequest *v94; // rax
  unsigned __int8 v95; // dl
  unsigned __int8 v96; // r8
  FxTagTracker *v97; // rcx
  FxRequestContext *v98; // rcx
  FxVerifierLock *v99; // rcx
  FxTagTracker *v100; // r10
  FxRequestContext *v101; // rcx
  FxVerifierLock *Flink; // rcx
  FX_POOL_HEADER *v103; // rax
  FxRequestContext *v104; // rcx
  FxVerifierLock *v105; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // r14
  _IRP *v108; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v110; // r8
  unsigned __int8 v111; // r8
  unsigned __int16 v112; // r9
  int status; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int8 irql; // [rsp+44h] [rbp-45h] BYREF
  unsigned __int8 v115; // [rsp+45h] [rbp-44h]
  unsigned __int8 v116[2]; // [rsp+46h] [rbp-43h] BYREF
  FxTagTracker *v117; // [rsp+48h] [rbp-41h]
  FxTargetSubmitSyncParams params; // [rsp+50h] [rbp-39h] BYREF
  __int64 timeout; // [rsp+88h] [rbp-1h] BYREF
  ULONG_PTR retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 v121; // [rsp+F0h] [rbp+67h]
  unsigned __int8 v122; // [rsp+F8h] [rbp+6Fh]
  unsigned __int8 PreviousIrql; // [rsp+100h] [rbp+77h] BYREF
  unsigned int *v124; // [rsp+108h] [rbp+7Fh]

  v124 = Action;
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&params.SynchEvent.m_Event.m_Event, SynchronizationEvent, 0);
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 1;
  memset(&params.Status, 0, 24);
  status = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v85 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = Request;
    if ( !Request->m_ObjectSize )
      v85 = 0LL;
    if ( v85 )
      _a2 = (FxRequest *)v85;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x24u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  v10 = Request->m_RequestBaseFlags & 0x10;
  if ( Action )
    v11 = *Action;
  else
    v11 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    timeout = Options->Timeout;
    v11 |= 0x10u;
  }
  if ( (v11 & 0x20) != 0 )
  {
    params.OrigTargetCompletionContext = Request->m_TargetCompletionContext;
    params.OrigTargetCompletionRoutine = Request->m_CompletionRoutine.m_Completion;
  }
  else
  {
    params.OrigTargetCompletionContext = 0LL;
    params.OrigTargetCompletionRoutine = 0LL;
  }
  Request->m_CompletionRoutine.m_Completion = FxIoTarget::_SyncCompletionRoutine;
  Request->m_TargetCompletionContext = &params;
  if ( Options )
    v12 = Options->Flags & 0xFFFFFFFE;
  else
    v12 = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &PreviousIrql, v8);
    v13 = PreviousIrql;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    PreviousIrql = v13;
  }
  v14 = FxIoTarget::SubmitLocked(this, Request, Options, v12);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v89 = this[-1].m_TargetDevice) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v89, v13, v15);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v13);
  v17 = v14 | v11;
  v18 = this->m_Globals;
  if ( v18->FxVerboseOn )
  {
    v19 = 0LL;
    v90 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v91 = Request;
    if ( !Request->m_ObjectSize )
      v90 = 0LL;
    if ( v90 )
      v91 = (FxRequest *)v90;
    WPP_IFR_SF_qD(v18, v90, 0xEu, 0x26u, WPP_FxIoTarget_cpp_Traceguids, v91, v17);
  }
  else
  {
    v19 = 0LL;
  }
  LODWORD(FxVerifyLeakDetection) = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    Blink = (FxTagTracker *)Request[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(
        Blink,
        &status,
        1754,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        (unsigned int)FxVerifyLeakDetection);
  }
  if ( (v17 & 1) != 0 )
  {
    v21 = this->m_Globals;
    if ( v21->FxVerboseOn )
    {
      v93 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v94 = Request;
      if ( !Request->m_ObjectSize )
        v93 = 0LL;
      if ( v93 )
        v94 = (FxRequest *)v93;
      WPP_IFR_SF_qq(v21, 5u, 0xEu, 0x27u, WPP_FxIoTarget_cpp_Traceguids, v94, Request->m_Irp.m_Irp);
    }
    m_Irp = Request->m_Irp.m_Irp;
    Send = this->Send;
    if ( Send == FxIoTarget::Send )
      IofCallDriver(this->m_TargetDevice, m_Irp);
    else
      Send(this, m_Irp);
    v17 |= 0xCu;
  }
  else if ( (v17 & 2) != 0 )
  {
    v17 |= 0xCu;
  }
  else if ( (v17 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = params.OrigTargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = params.OrigTargetCompletionRoutine;
  }
  if ( (v17 & 4) != 0 )
  {
    if ( (v17 & 8) != 0 )
    {
      Timeout = (v17 & 0x10) != 0 ? (_LARGE_INTEGER *)&timeout : 0LL;
      KeEnterCriticalRegion();
      v25 = KeWaitForSingleObject(&params, Executive, 0, 0, Timeout);
      KeLeaveCriticalRegion();
      status = v25;
      if ( v25 == 258 )
      {
        FxNonPagedObject::Lock(this, &irql, v16);
        v95 = irql;
        Request->m_TargetFlags |= 8u;
        FxNonPagedObject::Unlock(this, v95, v96);
        FxRequestBase::Cancel(Request);
        KeEnterCriticalRegion();
        KeWaitForSingleObject(&params, Executive, 0, 0, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    status = params.Status;
  }
  else
  {
    status = Request->m_Irp.m_Irp->IoStatus.Status;
  }
  Release = Request->Release;
  if ( (char *)Release != (char *)FxObject::Release )
  {
    if ( (char *)Release != (char *)FxRequest::Release )
    {
      Release(Request, &status, 1865, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
      goto LABEL_68;
    }
    m_ObjectFlags = Request->m_ObjectFlags;
    m_Reserved = Request->m_Reserved;
    m_IrpAllocation = Request->m_IrpAllocation;
    m_CanComplete = Request->m_CanComplete;
    v115 = m_Reserved;
    v121 = m_IrpAllocation;
    v122 = m_CanComplete;
    if ( m_ObjectFlags < 0 )
    {
      v100 = (FxTagTracker *)Request[-1].m_OwnerListEntry2.Blink;
      if ( v100 )
      {
        FxTagTracker::UpdateTagHistory(
          v100,
          &status,
          1865,
          "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
          TagRelease,
          Request->m_Refcnt - 1);
        m_IrpAllocation = v121;
        m_CanComplete = v122;
      }
    }
    v45 = _InterlockedDecrement(&Request->m_Refcnt);
    if ( v45 )
      goto LABEL_66;
    v49 = Request->m_ObjectFlags;
    if ( (v49 & 0x20) != 0 || (v49 & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(Request, 0xBu);
      FxDisposeList::Add(Request->m_Globals->Driver->m_DisposeList, Request);
    }
    else
    {
      if ( (v49 & 0x80u) != 0 )
      {
        v50 = (FxTagTracker *)Request[-1].m_OwnerListEntry2.Blink;
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
      m_ObjectSize = Request->m_ObjectSize;
      if ( m_ObjectSize && (Request->m_ObjectFlags & 8) != 0 )
      {
        v52 = (FxRequest_vtbl **)((char *)&Request->__vftable + m_ObjectSize);
        if ( v52 )
        {
          do
          {
            v53 = (void (__fastcall *)(unsigned __int64, unsigned __int64))v52[2];
            if ( v53 )
            {
              v53((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL, m_CanComplete);
              v52[2] = 0LL;
            }
            v54 = (void (__fastcall *)(unsigned __int64, unsigned __int64))v52[3];
            if ( v54 )
            {
              v54((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL, m_CanComplete);
              v52[3] = 0LL;
            }
            v52 = (_QWORD *)v52[1];
          }
          while ( v52 );
          m_Reserved = v115;
          v50 = v117;
        }
        v55 = Request->m_ObjectSize;
        LOBYTE(m_CanComplete) = 1;
        if ( v55 )
        {
          v56 = (FxRequest_vtbl **)((char *)&Request->__vftable + v55);
          if ( v56 )
          {
            do
            {
              v57 = (_QWORD *)v56[1];
              if ( !(_BYTE)m_CanComplete )
                FxPoolFree(v56);
              LOBYTE(m_CanComplete) = 0;
              v56 = v57;
            }
            while ( v57 );
            v50 = v117;
          }
        }
      }
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
      {
        if ( BYTE4(Request[-1].m_ForwardProgressQueue) )
        {
          _InterlockedDecrement(&Request->m_Globals->FxVerifyLeakDetection->ObjectCnt);
          if ( Request->m_Type == 4098
            && _InterlockedExchangeAdd(&Request->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
          {
            m_CanComplete = (unsigned __int64)Request->m_Globals->FxVerifyLeakDetection;
            _InterlockedExchangeAdd((volatile signed __int32 *)(m_CanComplete + 8), -*(_DWORD *)(m_CanComplete + 4));
          }
        }
      }
      if ( v50 )
      {
        Request[-1].m_OwnerListEntry2.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'(v50, m_CanComplete);
      }
      v58 = (FxRequestBase_vtbl *)Request->__vftable;
      SelfDestruct = Request->SelfDestruct;
      if ( (char *)SelfDestruct == (char *)FxRequestFromLookaside::SelfDestruct )
      {
        m_AllocatedMdl = Request->m_AllocatedMdl;
        m_DeviceBase = Request->m_DeviceBase;
        Request->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
        if ( m_AllocatedMdl )
        {
          if ( Request->m_Globals->FxVerifierOn )
            FxMdlFreeDebug(Request->m_Globals, m_AllocatedMdl);
          else
            IoFreeMdl(m_AllocatedMdl);
        }
        m_RequestContext = Request->m_RequestContext;
        v63 = Request->m_Irp.m_Irp;
        if ( m_RequestContext )
        {
          if ( v63 )
            m_RequestContext->ReleaseAndRestore(m_RequestContext, Request);
          v101 = Request->m_RequestContext;
          if ( v101 )
            ((void (__fastcall *)(FxRequestContext *, __int64))v101->~FxRequestContext)(v101, 1LL);
        }
        if ( v63 && Request->m_IrpAllocation == 1 )
          IoFreeIrp(Request->m_Irp.m_Irp);
        m_Timer = Request->m_Timer;
        if ( m_Timer )
          FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)v58);
        Request->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
        if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
        {
          Flink = (FxVerifierLock *)Request[-1].m_ForwardProgressList.Flink;
          if ( Flink )
          {
            FxVerifierLock::`scalar deleting destructor'(Flink, (unsigned int)v58);
            Request[-1].m_ForwardProgressList.Flink = 0LL;
          }
        }
        Request->m_NPLock.m_DbgFlagIsInitialized = 0;
        FxObject::~FxObject(Request, (unsigned int)v58, (unsigned int)v50);
        if ( Request->m_ForwardRequestToParent )
        {
          v103 = FxObject::_CleanupPointer(Request->m_Globals, Request);
          ExFreePoolWithTag(v103->Base, 0);
        }
        else
        {
          if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
            v65 = (FxRequest *)((char *)Request - 48);
          else
            v65 = Request;
          if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
            FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v65[-1].m_InternalContext);
          v66 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v66 && *(_WORD *)(v66 + 8) == 4354 && *(_BYTE *)(v66 + 1683) )
          {
            m_InternalContext = (_SLIST_ENTRY *)v65[-1].m_InternalContext;
            if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) < LOWORD(m_DeviceBase[2].m_ParentObject) )
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
              m_IrpAllocation = v121;
              LOBYTE(m_CanComplete) = v122;
              goto LABEL_66;
            }
            (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
          }
          else
          {
            v67 = (_SLIST_ENTRY *)v65[-1].m_InternalContext;
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
      }
      else if ( (char *)SelfDestruct == (char *)FxObject::SelfDestruct )
      {
        v69 = (FxRequest *(__fastcall *)(FxRequest *, char))v58->~FxObject;
        if ( (char *)v69 == (char *)FxRegKey::`scalar deleting destructor' )
        {
          Request->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
          m_Lock = (void *)Request->m_NPLock.m_Lock;
          if ( m_Lock )
          {
            ZwClose(m_Lock);
            Request->m_NPLock.m_Lock = 0LL;
          }
          v71 = *(_QWORD **)&Request->m_NPLock.m_DbgFlagIsInitialized;
          Request->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
          if ( v71 )
          {
            FxPoolFree(v71);
            *(_QWORD *)&Request->m_NPLock.m_DbgFlagIsInitialized = 0LL;
          }
          FxObject::~FxObject(Request, (unsigned int)v58, (unsigned int)v50);
          if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
            v72 = (FxRequest *)((char *)Request - 48);
          else
            v72 = Request;
          if ( !v72 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        }
        else
        {
          if ( v69 == FxRequest::`scalar deleting destructor' )
          {
            Request->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
            v80 = Request->m_AllocatedMdl;
            if ( v80 )
            {
              if ( Request->m_Globals->FxVerifierOn )
                FxMdlFreeDebug(Request->m_Globals, Request->m_AllocatedMdl);
              else
                IoFreeMdl(v80);
            }
            v81 = Request->m_RequestContext;
            v82 = Request->m_Irp.m_Irp;
            if ( v81 )
            {
              if ( v82 )
                v81->ReleaseAndRestore(v81, Request);
              v104 = Request->m_RequestContext;
              if ( v104 )
                ((void (__fastcall *)(FxRequestContext *, __int64))v104->~FxRequestContext)(v104, 1LL);
            }
            if ( v82 && Request->m_IrpAllocation == 1 )
              IoFreeIrp(Request->m_Irp.m_Irp);
            v83 = Request->m_Timer;
            if ( v83 )
              FxRequestTimer::`scalar deleting destructor'(v83, (unsigned int)v58);
            Request->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
            if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
            {
              v105 = (FxVerifierLock *)Request[-1].m_ForwardProgressList.Flink;
              if ( v105 )
              {
                FxVerifierLock::`scalar deleting destructor'(v105, (unsigned int)v58);
                Request[-1].m_ForwardProgressList.Flink = 0LL;
              }
            }
            Request->m_NPLock.m_DbgFlagIsInitialized = 0;
            FxObject::~FxObject(Request, (unsigned int)v58, (unsigned int)v50);
            if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
              v84 = (FxRequest *)((char *)Request - 48);
            else
              v84 = Request;
            FxPoolFree(v84);
            m_IrpAllocation = v121;
            LOBYTE(m_CanComplete) = v122;
            goto LABEL_66;
          }
          if ( (char *)v69 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
          {
            v69(Request, 1);
            m_IrpAllocation = v121;
            LOBYTE(m_CanComplete) = v122;
            goto LABEL_66;
          }
          Request->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
          *(_QWORD *)&Request->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
          FxObject::~FxObject(Request, (unsigned int)v58, (unsigned int)v50);
          if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
            v72 = (FxRequest *)((char *)Request - 48);
          else
            v72 = Request;
          if ( !v72 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        }
        if ( ((unsigned __int16)v72 & 0xFFF) != 0 )
        {
          v73 = (FX_POOL_TRACKER *)v72[-1].m_InternalContext;
          if ( *(_BYTE *)(*(_QWORD *)&v72[-1].m_Presented + 264LL) )
          {
            if ( FxIsPagedPoolType(v73->PoolType) )
              FxPoolRemovePagedAllocateTracker(v73);
            else
              FxPoolRemoveNonPagedAllocateTracker(v73);
            memset(v73, 0, v73->Size + 64);
          }
          ExFreePoolWithTag(v73, 0);
          m_IrpAllocation = v121;
          LOBYTE(m_CanComplete) = v122;
          goto LABEL_66;
        }
        ExFreePoolWithTag(v72, 0);
      }
      else
      {
        SelfDestruct(Request);
      }
    }
    m_IrpAllocation = v121;
    LOBYTE(m_CanComplete) = v122;
LABEL_66:
    if ( m_Reserved && v45 == 1 && Request->m_Completed )
    {
      FxIoQueue::ReturnReservedRequest(Request->m_ForwardProgressQueue, Request);
    }
    else if ( m_IrpAllocation )
    {
      if ( (_BYTE)m_CanComplete )
      {
        if ( v45 == 1 )
        {
          if ( Request->m_Completed )
          {
            m_CompletionState = Request->m_CompletionState;
            m_IoQueue = Request->m_IoQueue;
            v108 = Request->m_Irp.m_Irp;
            m_PriorityBoost = Request->m_PriorityBoost;
            Request->m_CompletionState = 0;
            Request->m_IoQueue = 0LL;
            Request->m_Irp.m_Irp = 0LL;
            IofCompleteRequest(v108, m_PriorityBoost);
            if ( m_CompletionState == 1 )
            {
              FxNonPagedObject::Lock(m_IoQueue, v116, v110);
              --m_IoQueue->m_TwoPhaseCompletions;
              --m_IoQueue->m_DriverIoCount;
              FxIoQueue::DispatchInternalEvents(m_IoQueue, v116[0], v111, v112);
            }
          }
        }
      }
    }
    goto LABEL_68;
  }
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    v97 = (FxTagTracker *)Request[-1].m_OwnerListEntry2.Blink;
    if ( v97 )
      FxTagTracker::UpdateTagHistory(
        v97,
        &status,
        1865,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagRelease,
        Request->m_Refcnt - 1);
  }
  if ( !_InterlockedDecrement(&Request->m_Refcnt) )
  {
    v27 = Request->m_ObjectFlags;
    if ( (v27 & 0x20) != 0 || (v27 & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(Request, 0xBu);
      FxDisposeList::Add(Request->m_Globals->Driver->m_DisposeList, Request);
      goto LABEL_68;
    }
    if ( (v27 & 0x80u) != 0 )
    {
      v19 = (FxTagTracker *)Request[-1].m_OwnerListEntry2.Blink;
      if ( v19 )
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)Request[-1].m_OwnerListEntry2.Blink);
    }
    v28 = Request->m_ObjectSize;
    if ( v28 && (Request->m_ObjectFlags & 8) != 0 )
    {
      for ( i = (FxRequest_vtbl **)((char *)&Request->__vftable + v28); i; i = (_QWORD *)i[1] )
      {
        v30 = (void (__fastcall *)(unsigned __int64))i[2];
        if ( v30 )
        {
          v30((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[2] = 0LL;
        }
        v31 = (void (__fastcall *)(unsigned __int64))i[3];
        if ( v31 )
        {
          v31((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[3] = 0LL;
        }
      }
      v32 = Request->m_ObjectSize;
      LOBYTE(FxVerifyLeakDetection) = 1;
      if ( v32 )
      {
        v33 = (FxRequest_vtbl **)((char *)&Request->__vftable + v32);
        if ( v33 )
        {
          do
          {
            v34 = (_QWORD *)v33[1];
            if ( !(_BYTE)FxVerifyLeakDetection )
              FxPoolFree(v33);
            LOBYTE(FxVerifyLeakDetection) = 0;
            v33 = v34;
          }
          while ( v34 );
        }
      }
    }
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    {
      if ( BYTE4(Request[-1].m_ForwardProgressQueue) )
      {
        _InterlockedDecrement(&Request->m_Globals->FxVerifyLeakDetection->ObjectCnt);
        if ( Request->m_Type == 4098
          && _InterlockedExchangeAdd(&Request->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
        {
          FxVerifyLeakDetection = Request->m_Globals->FxVerifyLeakDetection;
          _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
        }
      }
    }
    if ( v19 )
    {
      Request[-1].m_OwnerListEntry2.Blink = 0LL;
      FxTagTracker::`scalar deleting destructor'(v19, (unsigned int)FxVerifyLeakDetection);
    }
    v35 = Request->SelfDestruct;
    if ( (char *)v35 != (char *)FxObject::SelfDestruct )
    {
      Request->SelfDestruct(Request);
      goto LABEL_68;
    }
    v36 = Request->~FxObject;
    if ( (char *)v36 == (char *)FxRegKey::`scalar deleting destructor' )
    {
      Request->__vftable = (FxRequest_vtbl *)FxRegKey::`vftable';
      v37 = (void *)Request->m_NPLock.m_Lock;
      if ( v37 )
      {
        ZwClose(v37);
        Request->m_NPLock.m_Lock = 0LL;
      }
      v38 = *(_QWORD **)&Request->m_NPLock.m_DbgFlagIsInitialized;
      Request->__vftable = (FxRequest_vtbl *)FxPagedObject::`vftable';
      if ( v38 )
      {
        FxPoolFree(v38);
        *(_QWORD *)&Request->m_NPLock.m_DbgFlagIsInitialized = 0LL;
      }
      FxObject::~FxObject(Request, (unsigned int)v35, v16);
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
        v39 = (FxRequest *)((char *)Request - 48);
      else
        v39 = Request;
      if ( !v39 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
LABEL_60:
      if ( ((unsigned __int16)v39 & 0xFFF) != 0 )
      {
        v40 = (FX_POOL_TRACKER *)v39[-1].m_InternalContext;
        if ( *(_BYTE *)(*(_QWORD *)&v39[-1].m_Presented + 264LL) )
        {
          if ( FxIsPagedPoolType(v40->PoolType) )
            FxPoolRemovePagedAllocateTracker(v40);
          else
            FxPoolRemoveNonPagedAllocateTracker(v40);
          memset(v40, 0, v40->Size + 64);
        }
        ExFreePoolWithTag(v40, 0);
      }
      else
      {
        ExFreePoolWithTag(v39, 0);
      }
      goto LABEL_68;
    }
    if ( (char *)v36 != (char *)FxRequest::`scalar deleting destructor' )
    {
      if ( (char *)v36 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
      {
        ((void (__fastcall *)(FxRequest *, __int64))v36)(Request, 1LL);
        goto LABEL_68;
      }
      Request->__vftable = (FxRequest_vtbl *)FxMemoryBuffer::`vftable'{for `FxObject'};
      *(_QWORD *)&Request->m_NPLock.m_DbgFlagIsInitialized = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
      FxObject::~FxObject(Request, (unsigned int)v35, v16);
      if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
        v39 = (FxRequest *)((char *)Request - 48);
      else
        v39 = Request;
      if ( !v39 )
        KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
      goto LABEL_60;
    }
    Request->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
    v74 = Request->m_AllocatedMdl;
    if ( v74 )
    {
      if ( Request->m_Globals->FxVerifierOn )
        FxMdlFreeDebug(Request->m_Globals, Request->m_AllocatedMdl);
      else
        IoFreeMdl(v74);
    }
    v75 = Request->m_RequestContext;
    v76 = Request->m_Irp.m_Irp;
    if ( v75 )
    {
      if ( v76 )
        v75->ReleaseAndRestore(v75, Request);
      v98 = Request->m_RequestContext;
      if ( v98 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v98->~FxRequestContext)(v98, 1LL);
    }
    if ( v76 && Request->m_IrpAllocation == 1 )
      IoFreeIrp(Request->m_Irp.m_Irp);
    v77 = Request->m_Timer;
    if ( v77 )
      FxRequestTimer::`scalar deleting destructor'(v77, (unsigned int)v35);
    Request->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    {
      v99 = (FxVerifierLock *)Request[-1].m_ForwardProgressList.Flink;
      if ( v99 )
      {
        FxVerifierLock::`scalar deleting destructor'(v99, (unsigned int)v35);
        Request[-1].m_ForwardProgressList.Flink = 0LL;
      }
    }
    Request->m_NPLock.m_DbgFlagIsInitialized = 0;
    FxObject::~FxObject(Request, (unsigned int)v35, v16);
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
      v78 = (FxRequest *)((char *)Request - 48);
    else
      v78 = Request;
    FxPoolFree(v78);
  }
LABEL_68:
  if ( v124 )
    *v124 = v17;
  if ( v10 )
  {
    v46 = Request->m_RequestContext;
    if ( v46 )
    {
      if ( Request->m_Irp.m_Irp )
      {
        v46->ReleaseAndRestore(v46, Request);
        v47 = Request->m_Globals;
        if ( v47->FxVerifierOn )
        {
          if ( v47->FxVerifierIO )
            FxRequestBase::ClearVerifierFlags(Request, 128);
        }
      }
    }
  }
  return (unsigned int)status;
}

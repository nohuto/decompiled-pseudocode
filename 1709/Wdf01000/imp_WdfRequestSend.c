/*
 * XREFs of imp_WdfRequestSend @ 0x1C0004650
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0005F30 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000A490 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000B190 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C000E9E8 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003B78C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003CF48 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDd @ 0x1C0073AB8 (WPP_IFR_SF_qDd.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C007C14C (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D7F3C (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D81D8 (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D976C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

bool __fastcall imp_WdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        FxObject *Request,
        unsigned __int64 Target,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  unsigned int Flags; // esi
  unsigned __int64 v6; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v8; // r10
  __int64 v9; // rcx
  FxIoTarget *v10; // rdi
  KIRQL v11; // r15
  char v12; // bl
  unsigned __int8 v13; // r8
  _IRP *v14; // rdx
  void (__fastcall *v15)(FxIoTarget *, _IRP *); // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  _FX_DRIVER_GLOBALS **v21; // r15
  FxRequest *v22; // r14
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r13
  _IRP *m_Irp; // rax
  unsigned __int8 v26; // bl
  FxObject *m_ParentObject; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v29; // cx
  char v30; // al
  _LIST_ENTRY *p_m_ChildListHead; // r14
  unsigned __int8 v32; // r8
  FxRequest *v33; // rbx
  FxRequestCompletionState m_CompletionState; // edx
  FxIoQueue *m_IoQueue; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v37; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v39; // rcx
  _LIST_ENTRY *Blink; // rdx
  const void *v41; // rax
  const void *v42; // rax
  const void *_a2; // r12
  const void *v44; // r13
  const void *v45; // r8
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v47; // rcx
  FxObject *p_Blink; // r15
  KIRQL v49; // al
  int m_ObjectState; // edx
  KIRQL v51; // bl
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // edx
  FxVerifierLock *v56; // rcx
  FxVerifierLock *v57; // rcx
  KIRQL v58; // al
  FxObject *v59; // rcx
  KIRQL v60; // r14
  _FX_DRIVER_GLOBALS *v61; // rcx
  const void *v62; // rdx
  const void *v63; // rax
  FxVerifierLock *m_TargetDevice; // rcx
  FxVerifierLock *v65; // rcx
  unsigned __int8 PreviousIrql; // [rsp+58h] [rbp+7h] BYREF
  unsigned __int8 v67[23]; // [rsp+59h] [rbp+8h] BYREF
  _WDF_DRIVER_GLOBALS *Action; // [rsp+B8h] [rbp+67h] BYREF
  FxObject *ChildObject; // [rsp+C0h] [rbp+6Fh] BYREF
  void *PPObject; // [rsp+C8h] [rbp+77h] BYREF

  PPObject = (void *)Target;
  ChildObject = Request;
  Action = DriverGlobals;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  Flags = 0;
  v6 = ~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( ((unsigned __int8)Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v6;
    v6 -= Offset;
  }
  if ( *(_WORD *)(v6 + 8) == 4104 )
  {
    ChildObject = (FxObject *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, (void **)&ChildObject, Request, 0x1008u, Offset);
    Target = (unsigned __int64)PPObject;
    v6 = (unsigned __int64)ChildObject;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  if ( !Options )
  {
LABEL_7:
    if ( !Target )
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v6 + 16), WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
    LOWORD(v9) = 0;
    v10 = (FxIoTarget *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Target & 1) != 0 )
    {
      v9 = LOWORD(v10->__vftable);
      v10 = (FxIoTarget *)((char *)v10 - v9);
    }
    if ( v10->m_Type == 4608 )
    {
      PPObject = v10;
    }
    else
    {
      FxObjectHandleGetPtrQI(v10, &PPObject, (void *)Target, 0x1200u, v9);
      v10 = (FxIoTarget *)PPObject;
      v6 = (unsigned __int64)ChildObject;
    }
    if ( !Options || (v18 = Options->Flags, (v18 & 0xA) == 0) )
    {
      if ( *(_QWORD *)(v6 + 192) || *(_BYTE *)(v6 + 213) )
      {
        if ( Options )
          Flags = Options->Flags;
        if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (m_TargetDevice = (FxVerifierLock *)v10[-1].m_TargetDevice) != 0LL )
        {
          FxVerifierLock::Lock(m_TargetDevice, v67, Target);
          v11 = v67[0];
        }
        else
        {
          v11 = KeAcquireSpinLockRaiseToDpc(&v10->m_NPLock.m_Lock);
        }
        v12 = FxIoTarget::SubmitLocked(v10, (FxRequestBase *)v6, Options, Flags);
        if ( SLOBYTE(v10->m_ObjectFlags) < 0 && (v65 = (FxVerifierLock *)v10[-1].m_TargetDevice) != 0LL )
          FxVerifierLock::Unlock(v65, v11, v13);
        else
          KeReleaseSpinLock(&v10->m_NPLock.m_Lock, v11);
        LOBYTE(Flags) = v12;
        if ( (v12 & 1) != 0 )
        {
          LOBYTE(Flags) = v12 | 4;
          v14 = *(_IRP **)&ChildObject[1].m_SpinLock.m_DbgFlagIsInitialized;
          v15 = *(void (__fastcall **)(FxIoTarget *, _IRP *))(*(_QWORD *)PPObject + 104LL);
          if ( v15 == FxIoTarget::Send )
            IofCallDriver(*((PDEVICE_OBJECT *)PPObject + 38), v14);
          else
            v15((FxIoTarget *)PPObject, v14);
        }
        else if ( (v12 & 2) != 0 )
        {
          LOBYTE(Flags) = v12 | 4;
        }
      }
      else
      {
        if ( *(_WORD *)(v6 + 10) )
          v63 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v63 = 0LL;
        WPP_IFR_SF_qd(
          *(_FX_DRIVER_GLOBALS **)(v6 + 16),
          2u,
          0xEu,
          0x2Eu,
          WPP_FxRequestApi_cpp_Traceguids,
          v63,
          -1073741808);
        *(_DWORD *)(*(_QWORD *)&ChildObject[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741808;
        FxVerifierDbgBreakPoint(ChildObject->m_Globals);
      }
      return (Flags & 4) != 0;
    }
    if ( (v18 & 2) != 0 )
    {
      LODWORD(Action) = 32;
      FxIoTarget::SubmitSync(v10, (FxRequestBase *)v6, Options, (unsigned int *)&Action);
LABEL_31:
      LOBYTE(Flags) = (_BYTE)Action;
      return (Flags & 4) != 0;
    }
    if ( (v18 & 8) == 0 )
      goto LABEL_31;
    if ( *(_BYTE *)(v6 + 213) )
    {
      if ( *(_WORD *)(v6 + 10) )
        v41 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v41 = 0LL;
      WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v6 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v41);
      *(_DWORD *)(*(_QWORD *)&ChildObject[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741436;
      return (Flags & 4) != 0;
    }
    v19 = *(_QWORD *)(v6 + 168);
    if ( v19 && *(_BYTE *)(v19 + 88) )
    {
      if ( *(_WORD *)(v6 + 10) )
        v42 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v42 = 0LL;
      WPP_IFR_SF_qd(
        *(_FX_DRIVER_GLOBALS **)(v6 + 16),
        2u,
        0xEu,
        0x2Du,
        WPP_FxRequestApi_cpp_Traceguids,
        v42,
        -1073741808);
      *(_DWORD *)(*(_QWORD *)&ChildObject[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741808;
      FxVerifierDbgBreakPoint(ChildObject->m_Globals);
      return (Flags & 4) != 0;
    }
    v20 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
    v21 = (_FX_DRIVER_GLOBALS **)(v6 + 16);
    v22 = (FxRequest *)v6;
    v23 = v6;
    v24 = v6;
    if ( v20->FxVerifierOn )
    {
      FxRequest::Vf_VerifyPreProcessSendAndForget((FxRequest *)v6, v20);
      v10 = (FxIoTarget *)PPObject;
      v6 = (unsigned __int64)ChildObject;
    }
    if ( !v22->m_NextStackLocationFormatted )
    {
      m_Irp = v22->m_Irp.m_Irp;
      ++m_Irp->CurrentLocation;
      ++m_Irp->Tail.Overlay.CurrentStackLocation;
      v10 = (FxIoTarget *)PPObject;
      v6 = (unsigned __int64)ChildObject;
    }
    if ( !v22->m_Reserved )
    {
      v26 = KeAcquireSpinLockRaiseToDpc(&v22->m_SpinLock.m_Lock);
      if ( v22->m_ObjectState == 1 )
      {
        m_ParentObject = v22->m_ParentObject;
        if ( !m_ParentObject )
          goto LABEL_42;
        if ( FxObject::RemoveChildObjectInternal(m_ParentObject, v22) != -1073741738 )
        {
          v22->m_ParentObject = 0LL;
LABEL_42:
          v67[7] = v26;
          v22->m_ObjectFlags |= 0x100u;
          if ( (v22->m_ObjectFlags & 0x200) != 0 )
          {
            if ( (*v21)->FxVerboseOn )
            {
              _a2 = (const void *)(v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v22->m_ObjectSize )
                _a2 = 0LL;
              WPP_IFR_SF_qqLL(*v21, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, v22, _a2, v22->m_ObjectState, 3u);
            }
            if ( SLOBYTE(v22->m_ObjectFlags) < 0 )
              *((_BYTE *)v22 + _InterlockedIncrement((volatile signed __int32 *)&v22[-1].m_ForwardProgressQueue) - 32) = 3;
          }
          m_ObjectFlags = v22->m_ObjectFlags;
          v22->m_ObjectState = 3;
          if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v26 )
          {
            FxObject::QueueDeferredDisposeLocked(v22, FxObjectStateDeferedDisposing);
            KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v26);
          }
          else
          {
            if ( (m_ObjectFlags & 0x200) != 0 )
            {
              if ( (*v21)->FxVerboseOn )
              {
                v44 = (const void *)(v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v22->m_ObjectSize )
                  v44 = 0LL;
                WPP_IFR_SF_qqLL(*v21, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, v22, v44, 3u, 4u);
              }
              if ( SLOBYTE(v22->m_ObjectFlags) < 0 )
                *((_BYTE *)v22 + _InterlockedIncrement((volatile signed __int32 *)&v22[-1].m_ForwardProgressQueue) - 32) = 4;
            }
            v22->m_ObjectState = 4;
            if ( FxObject::DisposeChildrenWorker(v22, FxObjectStateDeferedDisposing, v26, 1u) )
            {
              v29 = v22->m_ObjectFlags;
              if ( (v29 & 0x104) == 0x104 )
              {
                FxObject::DeletedAndDisposedWorkerLocked(v22, v26, 0);
              }
              else
              {
                if ( (v29 & 0x200) != 0 )
                {
                  if ( (*v21)->FxVerboseOn )
                  {
                    v45 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !v22->m_ObjectSize )
                      v45 = 0LL;
                    WPP_IFR_SF_qqLL(
                      *v21,
                      5u,
                      0x14u,
                      0xAu,
                      WPP_FxObject_hpp_Traceguids,
                      v22,
                      v45,
                      v22->m_ObjectState,
                      2u);
                  }
                  if ( SLOBYTE(v22->m_ObjectFlags) < 0 )
                    *((_BYTE *)v22
                    + _InterlockedIncrement((volatile signed __int32 *)&v22[-1].m_ForwardProgressQueue)
                    - 32) = 2;
                }
                v22->m_ObjectState = 2;
              }
              v30 = 1;
            }
            else
            {
              v30 = 0;
            }
            if ( v30 )
              goto LABEL_52;
          }
LABEL_99:
          if ( (*v21)->FxVerifierOn )
            FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(v22, *v21);
LABEL_52:
          p_m_ChildListHead = &v22->m_ChildListHead;
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
                {
                  v10 = (FxIoTarget *)PPObject;
                  v6 = (unsigned __int64)ChildObject;
                  goto LABEL_55;
                }
                Flink = p_m_ChildListHead->Flink;
                if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead
                  || (v47 = Flink->Flink, Flink->Flink->Blink != Flink) )
                {
                  __fastfail(3u);
                }
                p_m_ChildListHead->Flink = v47;
                p_Blink = (FxObject *)&Flink[-5].Blink;
                v47->Blink = p_m_ChildListHead;
                Flink->Blink = Flink;
                Flink->Flink = Flink;
                v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Flink[-1]);
                m_ObjectState = p_Blink->m_ObjectState;
                v51 = v49;
                p_Blink->m_ParentObject = 0LL;
                v52 = m_ObjectState - 2;
                if ( v52 )
                {
                  v53 = v52 - 2;
                  if ( !v53 )
                    goto LABEL_124;
                  v54 = v53 - 4;
                  if ( v54 )
                    break;
                }
                FxObject::DeletedAndDisposedWorkerLocked(p_Blink, v49, 1u);
              }
              v55 = v54 - 1;
              if ( v55 )
                break;
              FxObject::TraceDroppedEvent(p_Blink, FxObjectDroppedEventParentDeleteEvent);
LABEL_124:
              KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v51);
            }
            if ( v55 == 1 )
              goto LABEL_124;
            KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v49);
          }
        }
        FxObject::SetObjectStateLocked(v22, FxObjectStateWaitingForEarlyDispose);
      }
      KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v26);
      goto LABEL_99;
    }
LABEL_55:
    v10->Send(v10, *(_IRP **)(v6 + 152));
    v33 = (FxRequest *)ChildObject;
    *(_QWORD *)&ChildObject[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
    m_CompletionState = v33->m_CompletionState;
    m_IoQueue = v33->m_IoQueue;
    v33->m_CompletionState = 0;
    if ( v33->m_Reserved )
    {
      v33->m_Completed = 1;
      FxRequest::PostProcessCompletionForReserved(v33, m_CompletionState, m_IoQueue);
      return 1;
    }
    if ( m_CompletionState )
    {
      if ( (m_CompletionState & 0x80u) == 0 )
      {
        m_Globals = m_IoQueue->m_Globals;
        if ( m_Globals->FxVerifierOn )
          FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, m_Globals, v33);
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v56 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v56, &PreviousIrql, v32);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
        }
        p_m_OwnerListEntry2 = &v33->m_OwnerListEntry2;
        v39 = v33->m_OwnerListEntry2.Flink;
        if ( v39->Blink != &v33->m_OwnerListEntry2
          || (Blink = v33->m_OwnerListEntry2.Blink, Blink->Flink != p_m_OwnerListEntry2) )
        {
          __fastfail(3u);
        }
        Blink->Flink = v39;
        v39->Blink = Blink;
        v33->m_OwnerListEntry2.Blink = &v33->m_OwnerListEntry2;
        p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
        --m_IoQueue->m_DriverIoCount;
        if ( m_IoQueue->m_Dispatching )
        {
          if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
            && (v57 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v57, PreviousIrql, v37);
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
      v33->m_ObjectFlags |= 4u;
      if ( !v33->m_ParentObject )
        goto LABEL_68;
      v58 = KeAcquireSpinLockRaiseToDpc(&v33->m_SpinLock.m_Lock);
      v59 = v33->m_ParentObject;
      v60 = v58;
      if ( v59 )
      {
        if ( FxObject::RemoveChildObjectInternal(v59, v33) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(v33, FxObjectStateWaitingForParentDeleteAndDisposed);
          KeReleaseSpinLock(&v33->m_SpinLock.m_Lock, v60);
          return 1;
        }
        v33->m_ParentObject = 0LL;
      }
      KeReleaseSpinLock(&v33->m_SpinLock.m_Lock, v60);
LABEL_68:
      if ( (v33->m_ObjectFlags & 0x200) != 0 )
      {
        v61 = v33->m_Globals;
        if ( v61->FxVerboseOn )
        {
          v62 = (const void *)((unsigned __int64)v33 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v33->m_ObjectSize )
            v62 = 0LL;
          WPP_IFR_SF_qqLL(v61, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, v33, v62, v33->m_ObjectState, 0xAu);
        }
        if ( SLOBYTE(v33->m_ObjectFlags) < 0 )
          *((_BYTE *)v33 + _InterlockedIncrement((volatile signed __int32 *)&v33[-1].m_ForwardProgressQueue) - 32) = 10;
      }
      v33->m_ObjectState = 10;
      FxObject::DestroyChildren(v33);
      v33->Release(v33, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      return 1;
    }
    FxObject::AddRef(v33, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    v33->DeleteObject(v33);
    return 1;
  }
  if ( Options->Size == 16 )
  {
    v17 = Options->Flags;
    if ( (v17 & 0xFFFFFFF0) != 0 )
    {
      WPP_IFR_SF_qDd(v8, v17, 6u, 0xBu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, v17, 0xFu);
    }
    else
    {
      if ( (v17 & 0xFFFFFFF7) == 0 || (v17 & 8) == 0 )
        goto LABEL_7;
      WPP_IFR_SF_qDd(v8, v17, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 8u, v17);
    }
  }
  else
  {
    WPP_IFR_SF_qdd(v8, 2u, 6u, 0xAu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 16, Options->Size);
  }
  *(_DWORD *)(*(_QWORD *)&ChildObject[1].m_SpinLock.m_DbgFlagIsInitialized + 48LL) = -1073741811;
  FxVerifierDbgBreakPoint(ChildObject->m_Globals);
  return 0;
}

/*
 * XREFs of imp_WdfRequestForwardToIoQueue @ 0x1C00032B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000CA10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000D760 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C007818C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0096888 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00D7D08 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00D903C (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D935C (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestForwardToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 DestinationQueue)
{
  __int16 updated; // r15
  FxIoQueue *v5; // rsi
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxTagTracker *v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  _FX_DRIVER_GLOBALS *v11; // rdx
  __int64 v12; // r13
  _FX_DRIVER_GLOBALS *RefCount; // rdx
  FxRequestCompletionState v14; // r12d
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // r8
  _QWORD *v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rcx
  int v20; // ebp
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // r8
  const void *v24; // rcx
  FxVerifierLock *v25; // rcx
  FxVerifierLock *v26; // rcx
  _QWORD *v27; // rcx
  unsigned __int8 v28; // dl
  FxVerifierLock *v29; // rcx
  FxVerifierLock *v30; // rcx
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF
  FxIoQueue *queue; // [rsp+80h] [rbp+18h] BYREF
  void *PPObject; // [rsp+88h] [rbp+20h] BYREF

  if ( !DestinationQueue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  updated = 0;
  v5 = (FxIoQueue *)(~DestinationQueue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DestinationQueue & 1) != 0 )
  {
    Offset = LOWORD(v5->FxNonPagedObject::FxObject::__vftable);
    v5 = (FxIoQueue *)((char *)v5 - Offset);
  }
  if ( v5->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    queue = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&queue, (void *)DestinationQueue, 0x1003u, Offset);
    v5 = queue;
  }
  m_Globals = v5->m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v8 = 0LL;
  v9 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Request & 1) != 0 )
  {
    v8 = (FxTagTracker *)*(unsigned __int16 *)v9;
    v9 -= (unsigned __int64)v8;
  }
  if ( *(_WORD *)(v9 + 8) == 4104 )
  {
    PPObject = (void *)v9;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v9, &PPObject, (void *)Request, 0x1008u, (unsigned __int16)v8);
    v5 = queue;
    v9 = (unsigned __int64)PPObject;
  }
  if ( *(_BYTE *)(v9 + 214) || (v10 = *(_QWORD *)(v9 + 248)) == 0 )
  {
    if ( m_Globals->FxVerifierOn )
    {
      v20 = Vf_VerifyWdfRequestForwardToIoQueue(m_Globals, (FxRequest *)v9);
      if ( v20 < 0 )
        return (unsigned int)v20;
      v5 = queue;
      v9 = (unsigned __int64)PPObject;
    }
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(v5, (FxRequest *)v9, 0);
  }
  v11 = *(_FX_DRIVER_GLOBALS **)(v10 + 16);
  if ( !v11->FxVerifierOn
    || (v20 = FxIoQueue::Vf_VerifyForwardRequest(*(FxIoQueue **)(v9 + 248), v11, v5, (FxRequest *)v9), v20 >= 0) )
  {
    v12 = *(_QWORD *)(v10 + 16);
    RefCount = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
    if ( *(char *)(v9 + 24) < 0 )
    {
      v8 = *(FxTagTracker **)(v9 - 48);
      if ( v8 )
        FxTagTracker::UpdateTagHistory(
          v8,
          (void *)0x74617453,
          1399,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          (unsigned int)RefCount);
    }
    if ( *(_BYTE *)(v9 + 214) )
    {
      v14 = FxRequestCompletionStateNone;
      v24 = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(v9 + 10) )
        v24 = 0LL;
      WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v9 + 16), 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v24);
      FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v9 + 16));
    }
    else
    {
      v14 = *(unsigned __int8 *)(v9 + 237);
      *(_BYTE *)(v9 + 237) = 0;
      if ( v14 )
        (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v9 + 16LL))(
          v9,
          1952543827LL,
          1813LL,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    if ( *(_BYTE *)(v12 + 316) )
      updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags((FxIoQueue *)v8, RefCount, (FxRequest *)v9);
    if ( *(char *)(v10 + 24) < 0 && (v25 = *(FxVerifierLock **)(v10 - 40)) != 0LL )
    {
      FxVerifierLock::Lock(v25, &PreviousIrql, DestinationQueue);
      v15 = PreviousIrql;
    }
    else
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 112));
      PreviousIrql = v15;
    }
    v17 = (_QWORD *)(v9 + 304);
    v18 = *(_QWORD *)(v9 + 304);
    if ( *(_QWORD *)(v18 + 8) != v9 + 304 || (v19 = *(_QWORD **)(v9 + 312), (_QWORD *)*v19 != v17) )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    *(_QWORD *)(v9 + 312) = v9 + 304;
    *v17 = v17;
    if ( *(char *)(v10 + 24) < 0 && (v26 = *(FxVerifierLock **)(v10 - 40)) != 0LL )
      FxVerifierLock::Unlock(v26, v15, v16);
    else
      KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 112), v15);
    v20 = FxIoQueue::QueueRequestFromForward(v5, (FxRequest *)v9);
    if ( v20 < 0 )
    {
      FxRequest::SetCompletionState((FxRequest *)v9, v14);
      if ( *(_BYTE *)(v12 + 316) )
        FxRequestBase::SetVerifierFlags((FxRequestBase *)v9, updated);
      (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v9 + 16LL))(
        v9,
        1952543827LL,
        1461LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxNonPagedObject::Lock((FxNonPagedObject *)v10, &PreviousIrql);
      v27 = *(_QWORD **)(v10 + 312);
      if ( *v27 != v10 + 304 )
        __fastfail(3u);
      v28 = PreviousIrql;
      *(_QWORD *)(v9 + 312) = v27;
      *v17 = v10 + 304;
      *v27 = v17;
      *(_QWORD *)(v10 + 312) = v17;
      FxNonPagedObject::Unlock((FxNonPagedObject *)v10, v28);
    }
    else
    {
      if ( *(char *)(v10 + 24) < 0 && (v29 = *(FxVerifierLock **)(v10 - 40)) != 0LL )
        FxVerifierLock::Lock(v29, &PreviousIrql, v21);
      else
        PreviousIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 112));
      --*(_DWORD *)(v10 + 376);
      if ( *(_DWORD *)(v10 + 368) )
      {
        if ( *(char *)(v10 + 24) < 0 && (v30 = *(FxVerifierLock **)(v10 - 40)) != 0LL )
          FxVerifierLock::Unlock(v30, PreviousIrql, v22);
        else
          KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 112), PreviousIrql);
      }
      else
      {
        FxIoQueue::DispatchEvents((FxIoQueue *)v10, PreviousIrql, 0LL);
      }
    }
  }
  return (unsigned int)v20;
}

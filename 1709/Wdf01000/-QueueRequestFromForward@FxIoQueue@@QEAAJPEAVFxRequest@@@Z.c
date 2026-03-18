/*
 * XREFs of ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000CA10
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00032B0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0064510 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0096888 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000CC40 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000DA0C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C000FF74 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00973D0 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00D814C (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequestFromForward(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  _FX_IO_QUEUE_STATE _a4; // r8d
  bool v6; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v9; // edx
  _IRP *m_Irp; // r9
  $E83ED047D649F8330EF035260E0728C3 *v11; // r10
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int inserted; // ebp
  FxVerifierLock *v16; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const char *_a5; // rdx
  const void *globals; // rdi
  const void *v20; // rcx
  unsigned __int8 v21; // r8
  _LIST_ENTRY *Blink; // rcx
  __int64 v23; // r9
  __int64 v24; // r10
  FxRequest_vtbl *v25; // rax
  unsigned __int8 v26; // r8
  const _GUID *Line; // [rsp+20h] [rbp-58h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  FxIrp Irp; // [rsp+90h] [rbp+18h] BYREF

  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v16 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v16, &irql, a3);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    v6 = pRequest->m_IrpAllocation == 0;
    m_Globals = pRequest->m_Globals;
    p_m_Queue = &this->m_Queue;
    if ( !m_Globals->FxVerifierOn
      || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, m_Globals, &this->m_Queue), inserted >= 0) )
    {
      v9 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v9);
      }
      m_Irp = pRequest->m_Irp.m_Irp;
      v11 = &pRequest->120;
      pRequest->m_IrpQueue = p_m_Queue;
      Irp.m_Irp = m_Irp;
      if ( pRequest == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v11;
        pRequest->m_CsqContext.Irp = m_Irp;
        pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
        v11->m_CsqContext.Type = 1;
      }
      v12 = this->m_Queue.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v12->Flink != p_m_Queue )
        __fastfail(3u);
      p_ListEntry->Flink = &p_m_Queue->m_Queue;
      m_Irp->Tail.Overlay.ListEntry.Blink = v12;
      v12->Flink = p_ListEntry;
      this->m_Queue.m_Queue.Blink = p_ListEntry;
      ++this->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        FxIrpQueue::RemoveIrpFromListEntry(&this->m_Queue, &Irp);
        if ( v24 )
          *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v23 + 144) = 0LL;
        v25 = pRequest->__vftable;
        pRequest->m_IrpQueue = 0LL;
        inserted = -1073741536;
        v25->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        inserted = 0;
      }
    }
    pRequest->m_IoQueue = this;
    if ( inserted < 0 )
    {
      FxObject::AddRef(
        pRequest,
        (void *)0x75657551,
        2459,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, pRequest, irql);
      FxNonPagedObject::Lock(this, &irql, v26);
    }
    else if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    {
      this->m_TransitionFromEmpty = 1;
      this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
      if ( this->m_IsDevicePowerPolicyOwner )
      {
        if ( this->m_PowerManaged
          && !this->m_PowerReferenced
          && FxPowerIdleMachine::PowerReferenceWorker(
               *(FxPowerIdleMachine **)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL),
               0,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL) >= 0 )
        {
          this->m_PowerReferenced = 1;
        }
      }
    }
    if ( v6 || !this->m_Dispatching )
      FxIoQueue::DispatchEvents(this, irql, 0LL, (unsigned __int16)m_Irp);
    else
      FxNonPagedObject::Unlock(this, irql, _a4);
    return 0LL;
  }
  else
  {
    m_ObjectSize = pRequest->m_ObjectSize;
    _a5 = "power stopping (Drain) in progress,";
    globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      globals = 0LL;
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v20 = 0LL;
    WPP_IFR_SF_qLsqd(this->m_Globals, 3u, _a4, 0x2Bu, Line, v20, _a4, _a5, globals, -1071644156);
    FxNonPagedObject::Unlock(this, irql, v21);
    return 3223323140LL;
  }
}

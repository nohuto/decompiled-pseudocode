/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000DB60
 * Callers:
 *     imp_WdfIoQueuePurge @ 0x1C000D840 (imp_WdfIoQueuePurge.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001B770 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueueDrain @ 0x1C0095110 (imp_WdfIoQueueDrain.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0095F10 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0096780 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0096E6C (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000DA0C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C000DD34 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001A640 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C001ACF0 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001AD6C (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v10; // edx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  FxRequest *NextRequest; // rax
  unsigned __int8 v14; // r8
  FxRequest *v15; // rbp
  FxRequest *v16; // rax
  unsigned __int8 v17; // r8
  FxRequest *v18; // rbp
  unsigned __int16 v19; // r9
  const void *_a2; // r8
  const void *_a1; // rdx
  const void *v23; // rdx
  unsigned int v24; // ebp
  unsigned __int8 v25; // r8
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // rdx
  const void *v27; // rcx
  const void *v28; // rcx
  unsigned __int8 v29; // dl
  const void *v30; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, CancelDriverRequests);
  if ( this->m_Deleted )
  {
    v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v24 = -1073741738;
    if ( !this->m_ObjectSize )
      v23 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x46u, WPP_FxIoQueue_cpp_Traceguids, v23, -1073741738);
    goto LABEL_30;
  }
  if ( !PurgeComplete )
    goto LABEL_3;
  Method = this->m_PurgeComplete.Method;
  if ( Method )
  {
    v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v24 = -1073741808;
    if ( !this->m_ObjectSize )
      v27 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x47u, WPP_FxIoQueue_cpp_Traceguids, v27, (__int64)Method, -1073741808);
LABEL_30:
    FxNonPagedObject::Unlock(this, irql, v25);
    return v24;
  }
  this->m_PurgeCompleteContext = Context;
  this->m_PurgeComplete.Method = PurgeComplete;
LABEL_3:
  FxIoQueue::SetState(this, FxIoQueueClearAcceptRequests);
  if ( CancelQueueRequests
    && CancelDriverRequests
    && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v10, 0xBu) )
  {
    this->m_CancelDispatchedRequests = 1;
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  if ( CancelQueueRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v12);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      v15 = NextRequest;
      if ( !NextRequest )
        break;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      _a1 = (const void *)((unsigned __int64)NextRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !NextRequest->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x49u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
      FxObject::AddRef(
        v15,
        (void *)0x75657551,
        4049,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v15, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v28 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, WPP_FxIoQueue_cpp_Traceguids, v28);
    }
    FxNonPagedObject::Unlock(this, irql, v14);
  }
  if ( CancelDriverRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v12);
      v16 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v18 = v16;
      if ( !v16 )
        break;
      v29 = irql;
      v16->m_Canceled = 1;
      FxNonPagedObject::Unlock(this, v29, v17);
      FxObject::AddRef(
        v18,
        (void *)0x75657551,
        4094,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v18);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v30 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x4Au, WPP_FxIoQueue_cpp_Traceguids, v30);
    }
    FxNonPagedObject::Unlock(this, irql, v17);
  }
  if ( this->m_SupportForwardProgress )
    FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
  FxNonPagedObject::Lock(this, &irql, v12);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v19);
  return 0LL;
}

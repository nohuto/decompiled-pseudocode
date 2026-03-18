/*
 * XREFs of ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0064510
 * Callers:
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0064924 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C00960B8 (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000CA10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000D760 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C001B8F0 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C007818C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D935C (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ForwardRequestWorker(FxIoQueue *this, FxRequest *Request, FxIoQueue *DestQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _FX_DRIVER_GLOBALS *v7; // rdx
  FxIoQueue *v8; // rcx
  unsigned __int8 v9; // r8
  FxRequestCompletionState v10; // r12d
  __int16 updated; // bp
  unsigned __int8 v12; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r8
  int v19; // r14d
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // r8
  _LIST_ENTRY *v22; // rcx
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // r8
  unsigned __int16 v25; // r9
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxObject::AddRef(
    Request,
    (void *)0x74617453,
    1399,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  v10 = (unsigned int)FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
  if ( m_Globals->FxVerifierOn )
    updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(v8, v7, Request);
  else
    updated = 0;
  FxNonPagedObject::Lock(this, &irql, v9);
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  if ( Flink->Blink != &Request->m_OwnerListEntry2
    || (Blink = Request->m_OwnerListEntry2.Blink, Blink->Flink != p_m_OwnerListEntry2) )
  {
    __fastfail(3u);
  }
  v16 = irql;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  FxNonPagedObject::Unlock(this, v16, v12);
  v19 = FxIoQueue::QueueRequestFromForward(DestQueue, Request, v17);
  if ( v19 >= 0 )
  {
    FxNonPagedObject::Lock(this, &irql, v18);
    --this->m_DriverIoCount;
    FxIoQueue::DispatchInternalEvents(this, irql, v24, v25);
  }
  else
  {
    FxRequest::SetCompletionState(Request, v10);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, updated);
    Request->Release(
      Request,
      (void *)1952543827,
      1461,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql, v20);
    v22 = this->m_DriverOwned.Blink;
    if ( v22->Flink != &this->m_DriverOwned )
      __fastfail(3u);
    v23 = irql;
    Request->m_OwnerListEntry2.Blink = v22;
    p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
    v22->Flink = p_m_OwnerListEntry2;
    this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
    FxNonPagedObject::Unlock(this, v23, v21);
  }
  return (unsigned int)v19;
}

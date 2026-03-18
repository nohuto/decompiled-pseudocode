/*
 * XREFs of ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0023468
 * Callers:
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C00232E0 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C00234D0 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0088010 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 * Callees:
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C00053F4 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C000FFB0 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x1C0064EAC (-ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::DrainPendedRequestsLocked(
        FxIoTarget *this,
        _LIST_ENTRY *RequestListHead,
        unsigned __int8 RequestWillBeResent)
{
  unsigned __int64 _a2; // rbx
  _LIST_ENTRY *v7; // rdi
  _IRP *v8; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 v10; // rcx
  const void *_a1; // rdx
  _LIST_ENTRY *Blink; // rax
  _IO_CSQ_IRP_CONTEXT *pContext; // [rsp+70h] [rbp+8h] BYREF

  while ( 1 )
  {
    pContext = 0LL;
    if ( !FxIrpQueue::RemoveNextIrpFromQueue(&this->m_PendedQueue, 0LL, &pContext) )
      break;
    _a2 = (unsigned __int64)&pContext[-5];
    v7 = (_LIST_ENTRY *)pContext;
    pContext->Irp = (_IRP *)pContext;
    v7->Flink = v7;
    v8 = *(_IRP **)(_a2 + 152);
    ++v8->CurrentLocation;
    ++v8->Tail.Overlay.CurrentStackLocation;
    *(_BYTE *)(_a2 + 212) &= ~2u;
    if ( !RequestWillBeResent
      || FxRequestBase::CancelTimer((FxRequestBase *)_a2)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(_a2 + 208), 0xFFFFFFFF) == 1 )
    {
      FxIoTarget::ClearCompletedRequestVerifierFlags(this, (FxRequestBase *)_a2);
      Blink = RequestListHead->Blink;
      if ( Blink->Flink != RequestListHead )
        __fastfail(3u);
      v7->Flink = RequestListHead;
      v7->Blink = Blink;
      Blink->Flink = v7;
      RequestListHead->Blink = v7;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(_a2 + 152) + 48LL) = -1073741536;
      *(_BYTE *)(_a2 + 212) |= 1u;
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        v10 = _a2 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*(_WORD *)(_a2 + 10) )
          v10 = 0LL;
        if ( v10 )
          _a2 = v10;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x10u, WPP_FxIoTarget_cpp_Traceguids, _a1, (const void *)_a2);
      }
    }
  }
}

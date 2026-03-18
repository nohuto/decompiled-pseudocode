/*
 * XREFs of ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C00234D0
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C008E7F0 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0023468 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxIoTarget::GotoStartState(FxIoTarget *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  unsigned int RefCount; // ecx
  _DEVICE_OBJECT *m_InStackDevice; // rax
  unsigned int v8; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *v11; // rcx
  unsigned int v12; // edx
  unsigned __int8 v13; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+18h] BYREF

  irql = 0;
  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    m_InStackDevice = this[-1].m_InStackDevice;
  else
    m_InStackDevice = 0LL;
  if ( m_InStackDevice )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_InStackDevice,
      (void *)0x74727453,
      318,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
      TagAddRef,
      RefCount);
  if ( Lock )
    goto LABEL_21;
  while ( this->m_State != WdfIoTargetDeleted )
  {
    if ( !this->m_WaitingForSentIo )
    {
      this->m_State = WdfIoTargetStarted;
      v8 = 0;
      this->m_WaitingForSentIo = 0;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
      FxIoTarget::DrainPendedRequestsLocked(this, RequestListHead, 1u);
      goto LABEL_9;
    }
    m_Globals = this->m_Globals;
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_q(m_Globals, 3u, 0xEu, 0xFu, WPP_FxIoTarget_cpp_Traceguids, v11);
    if ( m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 0xBu) || m_Globals->FxVerifyDownlevel)
      && irql )
    {
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock(this, irql, v13);
    this->WaitForSentIoToComplete(this);
LABEL_21:
    FxNonPagedObject::Lock(this, &irql, Lock);
  }
  v8 = -1073741436;
LABEL_9:
  if ( Lock )
    FxNonPagedObject::Unlock(this, irql, Lock);
  this->Release(this, (void *)1953657939, 391, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  return v8;
}

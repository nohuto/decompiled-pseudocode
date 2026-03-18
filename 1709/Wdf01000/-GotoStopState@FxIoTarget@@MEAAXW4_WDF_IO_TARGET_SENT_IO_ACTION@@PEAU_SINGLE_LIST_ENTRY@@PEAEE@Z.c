/*
 * XREFs of ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C00881B0
 * Callers:
 *     ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C008E950 (-GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00233E8 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0066320 (WPP_IFR_SF_ql.c)
 */

void __fastcall FxIoTarget::GotoStopState(
        FxIoTarget *this,
        _WDF_IO_TARGET_SENT_IO_ACTION Action,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  char v9; // r14
  unsigned __int8 m_WaitingForSentIo; // di
  unsigned __int8 v11; // bp
  _WDF_IO_TARGET_STATE _a2; // edx
  const void *_a1; // rcx
  int v14; // esi
  int v15; // esi
  _LIST_ENTRY *p_m_SentIoListHead; // r8
  const void *v17; // rcx
  FxCREvent *p_m_SentIoEvent; // rcx
  unsigned __int8 v19; // r8
  unsigned __int8 added; // [rsp+78h] [rbp+10h] BYREF

  v9 = 0;
  m_WaitingForSentIo = 0;
  v11 = 0;
  added = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &added, 0);
    v11 = added;
  }
  _a2 = this->m_State;
  if ( _a2 == WdfIoTargetStarted || _a2 == WdfIoTargetPurged )
  {
    this->m_State = WdfIoTargetStopped;
  }
  else if ( _a2 != WdfIoTargetStopped )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_ql(this->m_Globals, 4u, 0xEu, 0x11u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  v14 = Action - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
        m_WaitingForSentIo = 0;
      goto LABEL_22;
    }
  }
  else
  {
    v9 = 1;
  }
  p_m_SentIoListHead = &this->m_SentIoListHead;
  if ( p_m_SentIoListHead->Flink == p_m_SentIoListHead )
  {
    m_WaitingForSentIo = this->m_WaitingForSentIo;
    if ( m_WaitingForSentIo )
    {
      v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v17 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 3u, 0xEu, 0x12u, WPP_FxIoTarget_cpp_Traceguids, v17);
    }
  }
  else
  {
    m_WaitingForSentIo = 1;
    if ( v9 )
      FxIoTarget::GetSentRequestsListLocked(this, SentRequestListHead, p_m_SentIoListHead, (bool *)&added);
  }
LABEL_22:
  this->m_WaitingForSentIo = m_WaitingForSentIo;
  p_m_SentIoEvent = &this->m_SentIoEvent;
  *Wait = m_WaitingForSentIo;
  if ( m_WaitingForSentIo )
    KeClearEvent(&p_m_SentIoEvent->m_Event.m_Event);
  else
    KeSetEvent(&p_m_SentIoEvent->m_Event.m_Event, 0, 0);
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v11, v19);
}

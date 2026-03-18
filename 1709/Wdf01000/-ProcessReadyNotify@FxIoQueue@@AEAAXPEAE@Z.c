/*
 * XREFs of ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C009663C
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0096214 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

void __fastcall FxIoQueue::ProcessReadyNotify(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void *m_ReadyNotifyContext; // rbp
  __m128i m_ReadyNotify; // xmm6
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // r8
  WDFQUEUE__ *v10; // rdx
  const void *_a1; // rdx
  FxIoQueueIoState callback; // [rsp+30h] [rbp-28h] BYREF

  m_Globals = this->m_Globals;
  m_ReadyNotifyContext = this->m_ReadyNotifyContext;
  callback.m_CallbackLock = 0LL;
  callback.Method = 0LL;
  m_ReadyNotify = (__m128i)this->m_ReadyNotify;
  this->m_TransitionFromEmpty = 0;
  v8 = *PreviousIrql;
  callback = (FxIoQueueIoState)m_ReadyNotify;
  FxNonPagedObject::Unlock(this, v8, a3);
  if ( _mm_srli_si128(m_ReadyNotify, 8).m128i_u64[0] )
  {
    v10 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v10 = 0LL;
    FxIoQueueIoResume::Invoke(&callback, v10, m_ReadyNotifyContext);
  }
  else if ( m_Globals->FxVerifierOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x53u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v9);
}

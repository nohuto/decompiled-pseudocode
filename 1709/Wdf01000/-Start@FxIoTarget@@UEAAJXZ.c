/*
 * XREFs of ?Start@FxIoTarget@@UEAAJXZ @ 0x1C0088700
 * Callers:
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x1C00927D0 (-Start@FxUsbDevice@@MEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0064E58 (-SubmitPendedRequests@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall FxIoTarget::Start(FxIoTarget *this, __int64 a2, __int64 a3)
{
  unsigned int _a2; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // dx
  const void *_a1; // rbx
  _LIST_ENTRY head; // [rsp+40h] [rbp-18h] BYREF

  LOBYTE(a3) = 1;
  head.Blink = &head;
  head.Flink = &head;
  _a2 = this->GotoStartState(this, &head, a3);
  FxIoTarget::SubmitPendedRequests(this, &head);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0xEu, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  return _a2;
}

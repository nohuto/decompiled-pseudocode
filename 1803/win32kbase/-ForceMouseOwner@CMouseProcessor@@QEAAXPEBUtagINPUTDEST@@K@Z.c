/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0134680
 * Callers:
 *     ForceCapture @ 0x1C012DEB0 (ForceCapture.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C0065830 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, int a3)
{
  _BYTE v5[192]; // [rsp+30h] [rbp-D8h] BYREF

  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 1),
    4u,
    0xAu,
    0x11u,
    (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids,
    a3);
  if ( a2 )
  {
    CInputDest::CInputDest((CInputDest *)v5, a2);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 2552), (const struct CInputDest *)v5);
    CInputDest::SetEmpty((CInputDest *)v5);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 684, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 2552));
    _InterlockedExchange((volatile __int32 *)this + 684, 0);
  }
}

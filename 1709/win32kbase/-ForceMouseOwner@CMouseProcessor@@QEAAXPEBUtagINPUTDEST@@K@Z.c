/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0014260
 * Callers:
 *     ForceCapture @ 0x1C009BE30 (ForceCapture.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  const struct CInputDest *v3; // rsi
  _BYTE v5[208]; // [rsp+30h] [rbp-E8h] BYREF

  v3 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 1),
    (_DWORD)a2,
    10,
    17,
    (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids,
    a3);
  if ( v3 )
  {
    CInputDest::CInputDest((CInputDest *)v5, v3);
    CInputDest::operator=((char *)this + 2696, v5);
    _InterlockedExchange((volatile __int32 *)this + 724, 1);
    CInputDest::SetEmpty((CInputDest *)v5);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 724, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 2696));
    _InterlockedExchange((volatile __int32 *)this + 724, 0);
  }
}

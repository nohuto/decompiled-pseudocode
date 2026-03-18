/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0047B34
 * Callers:
 *     ForceCapture @ 0x1C0092680 (ForceCapture.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, char a3)
{
  const struct CInputDest *v3; // rsi
  _BYTE v5[208]; // [rsp+30h] [rbp-E8h] BYREF

  v3 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_D(
    *((_QWORD *)this + 1),
    (_DWORD)a2,
    10,
    17,
    (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids,
    a3);
  if ( v3 )
  {
    CInputDest::CInputDest((CInputDest *)v5, v3);
    CInputDest::operator=((char *)this + 2544, v5);
    _InterlockedExchange((volatile __int32 *)this + 686, 1);
    CInputDest::SetEmpty((CInputDest *)v5);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 686, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 2544));
    _InterlockedExchange((volatile __int32 *)this + 686, 0);
  }
}

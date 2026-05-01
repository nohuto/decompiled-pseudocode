/*
 * XREFs of ?get@?$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperationsTraceLogging@@P6AXXZ@Z @ 0x1800FA474
 * Callers:
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x18019D944 (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

LPVOID __fastcall wil::details::static_lazy<PrivilegedOperationsTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5)
    && (_DWORD)v4 )
  {
    v5 = &qword_180438CE8;
    qword_180438CE8 = &LockScreenServiceLogging::`vftable';
    qword_180438D00 = (struct _TlgProvider_t *)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438CE8, qword_180438D00);
    InitOnceComplete(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438CE8);
  }
  return v5;
}

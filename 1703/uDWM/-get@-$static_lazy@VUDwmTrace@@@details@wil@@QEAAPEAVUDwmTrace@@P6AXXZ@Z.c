/*
 * XREFs of ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180074B68
 * Callers:
 *     ??$UDwmHolographicDisplayConnected@AEAU_GUID@@_N@UDwmTrace@@SAXAEAU_GUID@@$$QEA_N@Z @ 0x180072BF8 (--$UDwmHolographicDisplayConnected@AEAU_GUID@@_N@UDwmTrace@@SAXAEAU_GUID@@$$QEA_N@Z.c)
 *     ?UDwmHolographicDisplayConnected_@UDwmTrace@@QEAAXU_GUID@@H@Z @ 0x1800746C8 (-UDwmHolographicDisplayConnected_@UDwmTrace@@QEAAXU_GUID@@H@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800172A8 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18004D034 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<UDwmTrace>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  fPending = a1;
  InitOnceBeginInitialize(&`UDwmTrace::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context);
  if ( (_DWORD)fPending )
  {
    Context = qword_1800C3A40;
    qword_1800C3A40[0] = &WindowFrameLogging::`vftable';
    qword_1800C3A58 = (struct _TlgProvider_t *)&`UDwmTrace::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1800C3A40, qword_1800C3A58, v3);
    InitOnceComplete(&`UDwmTrace::Instance'::`2'::wrapper, 0, qword_1800C3A40);
  }
  return Context;
}

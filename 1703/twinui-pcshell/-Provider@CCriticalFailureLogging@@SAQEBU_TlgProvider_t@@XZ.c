/*
 * XREFs of ?Provider@CCriticalFailureLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180177EC8
 * Callers:
 *     ?Instance@CCriticalFailureTelemetry@@KAPEAV1@XZ @ 0x180177FC4 (-Instance@CCriticalFailureTelemetry@@KAPEAV1@XZ.c)
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x1801780A4 (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *CCriticalFailureLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802451A8;
    qword_1802451A8 = (__int64)&ImmersiveIconsLogging::`vftable';
    qword_1802451C0 = (TraceLoggingHProvider)&`CCriticalFailureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_67a4077a10b7c017ab26ed22531248f2_::_lambda_invoker_cdecl_);
    qword_1802451B0 = (__int64)qword_1802451C0;
    byte_1802451B8 = 1;
    TraceLoggingRegister(qword_1802451C0);
    dword_1802451BC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802451A8 + 8))(&qword_1802451A8);
    InitOnceComplete(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, &qword_1802451A8);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}

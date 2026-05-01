/*
 * XREFs of ?Provider@CCriticalFailureLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C3F28
 * Callers:
 *     ?Instance@CCriticalFailureTelemetry@@KAPEAV1@XZ @ 0x1801C4024 (-Instance@CCriticalFailureTelemetry@@KAPEAV1@XZ.c)
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x1801C4104 (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *CCriticalFailureLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BB058;
    qword_1802BB058 = (__int64)&ImmersiveIconsLogging::`vftable';
    qword_1802BB070 = (TraceLoggingHProvider)&`CCriticalFailureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_67a4077a10b7c017ab26ed22531248f2_::_lambda_invoker_cdecl_);
    qword_1802BB060 = (__int64)qword_1802BB070;
    byte_1802BB068 = 1;
    TraceLoggingRegister(qword_1802BB070);
    dword_1802BB06C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BB058 + 8))(&qword_1802BB058);
    InitOnceComplete(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, &qword_1802BB058);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}

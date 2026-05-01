/*
 * XREFs of ?Instance@CCriticalFailureTelemetry@@KAPEAV1@XZ @ 0x180177FC4
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1801781F0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ?Provider@CCriticalFailureLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180177EC8 (-Provider@CCriticalFailureLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

struct CCriticalFailureTelemetry *CCriticalFailureTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CCriticalFailureTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_1802451D0 = (__int64)&ImmersiveIconsLogging::`vftable';
    Context = &qword_1802451D0;
    atexit(lambda_a7f0a761e664b789011006ea52c1fb72_::_lambda_invoker_cdecl_);
    qword_1802451D8 = (__int64)CCriticalFailureLogging::Provider();
    byte_1802451E0 = 0;
    dword_1802451E4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802451D0 + 8))(&qword_1802451D0);
    InitOnceComplete(&`CCriticalFailureTelemetry::Instance'::`2'::wrapper, 0, &qword_1802451D0);
  }
  return (struct CCriticalFailureTelemetry *)Context;
}

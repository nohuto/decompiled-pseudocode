/*
 * XREFs of ?FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z @ 0x1800BBD50
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ErrorHandlingHelpers::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdx
  WINBOOL v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 *v6; // [rsp+48h] [rbp+20h] BYREF

  InitOnceBeginInitialize(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6);
  if ( v5 )
  {
    v6 = &qword_1802BA748;
    qword_1802BA748 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BA760 = (TraceLoggingHProvider)&`wil::ErrorHandlingHelpers::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_8d5ca15cf69e69dee1fdb0dcddeb1e66_::_lambda_invoker_cdecl_);
    qword_1802BA750 = (__int64)qword_1802BA760;
    byte_1802BA758 = 1;
    TraceLoggingRegister(qword_1802BA760);
    dword_1802BA75C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BA748 + 8))(&qword_1802BA748);
    InitOnceComplete(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, &qword_1802BA748);
  }
  LOBYTE(v4) = a1;
  (*(void (__fastcall **)(__int64 *, __int64, const struct wil::FailureInfo *))(*v6 + 16))(v6, v4, a2);
}

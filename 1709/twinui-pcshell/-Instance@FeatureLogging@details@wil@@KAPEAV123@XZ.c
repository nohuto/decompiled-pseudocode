/*
 * XREFs of ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18002AB10
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18002AC10 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct wil::details::FeatureLogging *wil::details::FeatureLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BA050;
    qword_1802BA050 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BA068 = (TraceLoggingHProvider)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
    qword_1802BA058 = (__int64)qword_1802BA068;
    byte_1802BA060 = 1;
    TraceLoggingRegister(qword_1802BA068);
    dword_1802BA064 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BA050 + 8))(&qword_1802BA050);
    InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &qword_1802BA050);
  }
  return (struct wil::details::FeatureLogging *)Context;
}

/*
 * XREFs of ?Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180074A24
 * Callers:
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x180074B34 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x180074C1C (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1800E1670 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *RawInputProvidersTelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`RawInputProvidersTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_180136928;
    qword_180136928 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180136940 = (TraceLoggingHProvider)&`RawInputProvidersTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_57da4f32860180830fc4458af3e8f3e0_::_lambda_invoker_cdecl_);
    qword_180136930 = (__int64)qword_180136940;
    byte_180136938 = 1;
    TraceLoggingRegister(qword_180136940);
    dword_18013693C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180136928 + 8))(&qword_180136928);
    InitOnceComplete(&`RawInputProvidersTelemetry::Instance'::`2'::wrapper, 0, &qword_180136928);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}

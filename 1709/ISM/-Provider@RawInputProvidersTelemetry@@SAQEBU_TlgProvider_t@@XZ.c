/*
 * XREFs of ?Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18009C444
 * Callers:
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x18009C544 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x18009C62C (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1800CA61C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *RawInputProvidersTelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`RawInputProvidersTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1801105E8;
    qword_1801105E8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180110600 = (TraceLoggingHProvider)&`RawInputProvidersTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_57da4f32860180830fc4458af3e8f3e0_::_lambda_invoker_cdecl_);
    qword_1801105F0 = (__int64)qword_180110600;
    byte_1801105F8 = 1;
    TraceLoggingRegister(qword_180110600);
    dword_1801105FC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1801105E8 + 8))(&qword_1801105E8);
    InitOnceComplete(&`RawInputProvidersTelemetry::Instance'::`2'::wrapper, 0, &qword_1801105E8);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}

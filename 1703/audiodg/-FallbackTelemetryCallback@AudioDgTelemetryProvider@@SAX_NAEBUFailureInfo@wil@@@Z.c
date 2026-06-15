/*
 * XREFs of ?FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1400358D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400014A8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AudioDgTelemetryProvider::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdx
  void (__stdcall *v5)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v6; // r8
  union _RTL_RUN_ONCE *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  WINBOOL v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h] BYREF

  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v10);
  if ( v9 )
  {
    v7 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    v10 = &qword_140086158;
    qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v8 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v7, v5, v6);
  }
  LOBYTE(v4) = a1;
  (*(void (__fastcall **)(__int64 *, __int64, const struct wil::FailureInfo *))(*v10 + 16))(v10, v4, a2);
}

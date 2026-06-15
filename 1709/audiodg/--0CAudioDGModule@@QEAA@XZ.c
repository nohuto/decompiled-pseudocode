/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x1400130E0
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x1400010C0 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14001BD18 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     atexit @ 0x14001D22C (atexit.c)
 */

CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  int v1; // eax
  int v2; // ecx
  void (__stdcall *v3)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v4; // r8
  CAudioDGModule *result; // rax
  GUID *v6; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+48h] [rbp-10h]
  CAudioDGModule *fPending; // [rsp+60h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp+10h] BYREF

  fPending = this;
  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>();
  _AtlModule = &CAudioDGModule::`vftable';
  qword_140089FA0 = 0LL;
  v6 = &GUID_NULL;
  byte_140089FAC = 0;
  *(_OWORD *)&hEvent = 0LL;
  qword_140089FB0 = 0LL;
  g_fEventTracingEnabled = 1;
  v1 = EtwRegisterTraceGuidsW(AeWmiCallback, 0LL, &AEWMIGUID);
  v2 = g_fEventTracingEnabled;
  if ( v1 )
    v2 = 0;
  g_fEventTracingEnabled = v2;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioDgTelemetryProvider::FallbackTelemetryCallback )
  {
    __fastfail(7u);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))AudioDgTelemetryProvider::FallbackTelemetryCallback;
  InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context);
  if ( (_DWORD)fPending )
  {
    v6 = (GUID *)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_14008A158;
    qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v7 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v6, v3, v4);
  }
  result = (CAudioDGModule *)&_AtlModule;
  g_SysFxUtilTlp = (TraceLoggingHProvider)*((_QWORD *)Context + 1);
  return result;
}

/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x140014F34
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x1400010C0 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14001AE24 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  int v1; // eax
  __int64 v2; // rcx

  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>(this);
  _AtlModule = &CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  pftDueTime = (_FILETIME)&CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  qword_140087F98 = 0LL;
  *(_OWORD *)hHandle = 0LL;
  byte_140087FB4 = 0;
  qword_140087FB8 = 0LL;
  g_fEventTracingEnabled = 1;
  v1 = EtwRegisterTraceGuidsW(AeWmiCallback, 0LL, &AEWMIGUID);
  v2 = (unsigned int)g_fEventTracingEnabled;
  if ( v1 )
    v2 = 0LL;
  g_fEventTracingEnabled = v2;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioDgTelemetryProvider::FallbackTelemetryCallback )
  {
    __fastfail(7u);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))AudioDgTelemetryProvider::FallbackTelemetryCallback;
  g_SysFxUtilTlp = (TraceLoggingHProvider)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                            v2,
                                            lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
  return (CAudioDGModule *)&_AtlModule;
}

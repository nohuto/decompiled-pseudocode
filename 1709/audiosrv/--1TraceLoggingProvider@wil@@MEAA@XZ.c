/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18005F670
 * Callers:
 *     ??_EAudioSrvTelemetryProvider@@UEAAPEAXI@Z @ 0x18005F6B0 (--_EAudioSrvTelemetryProvider@@UEAAPEAXI@Z.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18005F6F0 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 *     ??_ENUIAudioTracing@@UEAAPEAXI@Z @ 0x1800E0E50 (--_ENUIAudioTracing@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  bool v1; // zf
  __int64 v2; // rbx

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( !v1 )
  {
    v2 = *((_QWORD *)this + 1);
    EtwEventUnregister(*(_QWORD *)(v2 + 32));
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)v2 = 0;
  }
}

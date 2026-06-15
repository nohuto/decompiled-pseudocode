/*
 * XREFs of TraceLoggingRegisterEx @ 0x14001BFBC
 * Callers:
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x140001230 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140001250 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessTelemetryProviderRegistration__ @ 0x140001270 (_dynamic_initializer_for__g_SpatialCrossProcessTelemetryProviderRegistration__.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000BDA0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000C200 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000C9D0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140012CB4 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140035300 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  __int128 v4; // xmm0
  int v5; // eax
  TLG_STATUS v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_OWORD *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
  v8 = v4;
  v5 = EtwEventRegister(&v8, TlgEnableCallback, hProvider, (char *)hProvider + 32);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      *((_QWORD *)hProvider + 4),
      2LL,
      *((_QWORD *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  }
  return v6;
}

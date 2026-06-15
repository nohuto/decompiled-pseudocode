/*
 * XREFs of TraceLoggingRegisterEx @ 0x18003820C
 * Callers:
 *     _dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__ @ 0x1800011F0 (_dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SarmTelemetryProviderRegistration__ @ 0x180001230 (_dynamic_initializer_for__g_SarmTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x1800012C0 (_dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__.c)
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x1800012E0 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__ @ 0x1800013D0 (_dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__.c)
 *     PdcInitializeETW @ 0x180035020 (PdcInitializeETW.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
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
  v5 = EtwEventRegister(&v8, TlgEnableCallback);
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

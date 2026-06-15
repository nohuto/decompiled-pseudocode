/*
 * XREFs of TraceLoggingRegisterEx @ 0x18005A060
 * Callers:
 *     _dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__ @ 0x180001200 (_dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SarmTelemetryProviderRegistration__ @ 0x180001230 (_dynamic_initializer_for__g_SarmTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x1800012D0 (_dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__.c)
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x1800012F0 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__ @ 0x1800013E0 (_dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     Pdcv2ActivationClientRegister @ 0x1800DE140 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
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
  v5 = ((__int64 (__fastcall *)(__int128 *, void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID), TraceLoggingHProvider, char *))EtwEventRegister)(
         &v8,
         TlgEnableCallback,
         hProvider,
         (char *)hProvider + 32);
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

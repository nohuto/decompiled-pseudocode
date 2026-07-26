/*
 * XREFs of TraceLoggingRegisterEx @ 0x1C00CA8C0
 * Callers:
 *     InitializeTelemetryAssertsKM @ 0x1C00149C8 (InitializeTelemetryAssertsKM.c)
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v4; // xmm0
  TLG_STATUS v5; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = (GUID)*((_OWORD *)hProvider->ProviderMetadataPtr - 1);
  hProvider->EnableCallback = 0LL;
  hProvider->CallbackContext = 0LL;
  ProviderId = v4;
  v5 = EtwRegister(&ProviderId, TlgEnableCallback, (PVOID)hProvider, &hProvider->RegHandle);
  if ( !v5 )
    EtwSetInformation(
      hProvider->RegHandle,
      EventProviderSetTraits,
      (PVOID)hProvider->ProviderMetadataPtr,
      *hProvider->ProviderMetadataPtr);
  return v5;
}

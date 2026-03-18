/*
 * XREFs of TraceLoggingRegisterEx @ 0x14058919C
 * Callers:
 *     IopInitializeSystemVariableService @ 0x140167C00 (IopInitializeSystemVariableService.c)
 *     BapdRecordFirmwareBootStats @ 0x14040ECB0 (BapdRecordFirmwareBootStats.c)
 *     VRegSetup @ 0x14059F830 (VRegSetup.c)
 *     TtmInit @ 0x1405A7710 (TtmInit.c)
 *     TlgRegisterAggregateProviderEx @ 0x1405CDEF8 (TlgRegisterAggregateProviderEx.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     PopDiagInitialize @ 0x140812630 (PopDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140825458 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     EtwSetInformation @ 0x1405892A0 (EtwSetInformation.c)
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
  hProvider->CallbackContext = pCallbackContext;
  hProvider->EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))pEnableCallback;
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

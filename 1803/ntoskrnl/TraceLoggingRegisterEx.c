/*
 * XREFs of TraceLoggingRegisterEx @ 0x140613338
 * Callers:
 *     IopInitializeSystemVariableService @ 0x140186430 (IopInitializeSystemVariableService.c)
 *     BapdRecordFirmwareBootStats @ 0x140478A90 (BapdRecordFirmwareBootStats.c)
 *     VRegSetup @ 0x140621500 (VRegSetup.c)
 *     TtmInit @ 0x140627A80 (TtmInit.c)
 *     TlgRegisterAggregateProviderEx @ 0x14064AF18 (TlgRegisterAggregateProviderEx.c)
 *     EtwpInitializeCoverage @ 0x1406558C0 (EtwpInitializeCoverage.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 *     PopDiagInitialize @ 0x1408A5C04 (PopDiagInitialize.c)
 *     SeRmInitPhase1 @ 0x1408B209C (SeRmInitPhase1.c)
 *     VslpIumInitializeTelemetry @ 0x1408C9530 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     EtwSetInformation @ 0x140603DA0 (EtwSetInformation.c)
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

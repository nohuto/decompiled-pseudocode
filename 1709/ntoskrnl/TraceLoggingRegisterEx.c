/*
 * XREFs of TraceLoggingRegisterEx @ 0x1405AB2CC
 * Callers:
 *     IopInitializeSystemVariableService @ 0x14015C34C (IopInitializeSystemVariableService.c)
 *     BapdRecordFirmwareBootStats @ 0x140424BFC (BapdRecordFirmwareBootStats.c)
 *     TlgRegisterAggregateProviderEx @ 0x1405AB198 (TlgRegisterAggregateProviderEx.c)
 *     EtwpInitializeCoverage @ 0x1405ABC40 (EtwpInitializeCoverage.c)
 *     VRegSetup @ 0x1405C7A40 (VRegSetup.c)
 *     TtmInit @ 0x1405F0520 (TtmInit.c)
 *     PopDiagInitialize @ 0x140827B48 (PopDiagInitialize.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     SeRmInitPhase1 @ 0x140849C70 (SeRmInitPhase1.c)
 *     VslpIumInitializeTelemetry @ 0x1408569A4 (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     EtwSetInformation @ 0x1405ABE40 (EtwSetInformation.c)
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

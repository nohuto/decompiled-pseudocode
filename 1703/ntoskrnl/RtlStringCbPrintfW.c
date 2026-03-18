/*
 * XREFs of RtlStringCbPrintfW @ 0x140088044
 * Callers:
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402567B0 (EtwpGetAutoLoggerEventNameFilter.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14044C490 (PiBuildDeviceNodeInstancePath.c)
 *     PfSnOperationProcess @ 0x140454168 (PfSnOperationProcess.c)
 *     WmipSecurityMethod @ 0x1404575E0 (WmipSecurityMethod.c)
 *     EtwpGenerateFileName @ 0x14045E0F4 (EtwpGenerateFileName.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140465F50 (PfSnOpenVolumesForPrefetch.c)
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     WmipInsertStaticNames @ 0x1404BE684 (WmipInsertStaticNames.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404C633C (PopDiagTracePowerRequestCreate.c)
 *     PiNormalizeDeviceText @ 0x1404DAC60 (PiNormalizeDeviceText.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1404F2EF8 (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404F3A00 (IopGetLegacyVetoListDrivers.c)
 *     ExProcessorCounterSetCallback @ 0x1404F65F0 (ExProcessorCounterSetCallback.c)
 *     EtwpRealtimeCreateLogfile @ 0x14054FF60 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateNtFileName @ 0x140558818 (EtwpCreateNtFileName.c)
 *     EtwpExpandFileName @ 0x1405588EC (EtwpExpandFileName.c)
 *     PfSnGetPrefetchInstructions @ 0x140565894 (PfSnGetPrefetchInstructions.c)
 *     PfpSourceGetPrefetchSupport @ 0x140578C50 (PfpSourceGetPrefetchSupport.c)
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140584010 (IoWMIDeviceObjectToInstanceName.c)
 *     CmpCreatePerfKeys @ 0x1405A4700 (CmpCreatePerfKeys.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405AE838 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405AED28 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpInitializeAutoLoggers @ 0x1405B059C (EtwpInitializeAutoLoggers.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     SepReadAndPopulateCapes @ 0x1405C5FA4 (SepReadAndPopulateCapes.c)
 *     PpmWmiRegisterInfo @ 0x1405C7234 (PpmWmiRegisterInfo.c)
 *     PnpUnloadAttachedDriver @ 0x1405CBF9C (PnpUnloadAttachedDriver.c)
 *     SepSetSystemPaths @ 0x1405CE854 (SepSetSystemPaths.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1406954A0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1406AC760 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1406AC870 (KiSynchNumaCounterSetCallback.c)
 *     WmipIncludeStaticNames @ 0x140707FDC (WmipIncludeStaticNames.c)
 *     sub_140722B10 @ 0x140722B10 (sub_140722B10.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140733628 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x140735AEC (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x140739078 (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     MiSystemPartitionObjectCreate @ 0x1407FFB40 (MiSystemPartitionObjectCreate.c)
 *     CreateSystemRootLink @ 0x140821624 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140826610 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x14082676C (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x140836488 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1408365E0 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x140169530 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      pszDest[v6] = 0;
      return v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      pszDest[v6] = 0;
      return -2147483643;
    }
  }
  return v5;
}

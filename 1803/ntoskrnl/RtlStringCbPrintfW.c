/*
 * XREFs of RtlStringCbPrintfW @ 0x140061AF0
 * Callers:
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402B2230 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1402B25C0 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnOperationProcess @ 0x14048C2D0 (PfSnOperationProcess.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14048F544 (PfSnOpenVolumesForPrefetch.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404D45D0 (IopGetLegacyVetoListDrivers.c)
 *     WmipInsertStaticNames @ 0x14051A548 (WmipInsertStaticNames.c)
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     PopDiagTracePowerRequestCreate @ 0x1405243F0 (PopDiagTracePowerRequestCreate.c)
 *     PfSnGetPrefetchInstructions @ 0x140527FA4 (PfSnGetPrefetchInstructions.c)
 *     ExProcessorCounterSetCallback @ 0x14052B910 (ExProcessorCounterSetCallback.c)
 *     WmipSecurityMethod @ 0x14055D0F0 (WmipSecurityMethod.c)
 *     EtwpGenerateFileName @ 0x1405878D8 (EtwpGenerateFileName.c)
 *     EtwpCreateNtFileName @ 0x1405883F8 (EtwpCreateNtFileName.c)
 *     EtwpRealtimeCreateLogfile @ 0x14058E69C (EtwpRealtimeCreateLogfile.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14059189C (EtwpGetSecurityDescriptorByGuid.c)
 *     PiNormalizeDeviceText @ 0x1405E47BC (PiNormalizeDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1405E4F04 (PiBuildDeviceNodeInstancePath.c)
 *     EtwpExpandFileName @ 0x1405E82A4 (EtwpExpandFileName.c)
 *     PfpSourceGetPrefetchSupport @ 0x1405E883C (PfpSourceGetPrefetchSupport.c)
 *     PnpUnloadAttachedDriver @ 0x1405F5E0C (PnpUnloadAttachedDriver.c)
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 *     PipMakeGloballyUniqueId @ 0x140603F8C (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140613010 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140629F3C (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpEnableAutoLoggerProviders @ 0x14062A638 (EtwpEnableAutoLoggerProviders.c)
 *     CmpCreatePerfKeys @ 0x14062EB44 (CmpCreatePerfKeys.c)
 *     SepReadAndPopulateCapes @ 0x140631A88 (SepReadAndPopulateCapes.c)
 *     EtwpInitializeAutoLoggers @ 0x14063DCC0 (EtwpInitializeAutoLoggers.c)
 *     PpmWmiRegisterInfo @ 0x14064A804 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x14064C744 (SepSetSystemPaths.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140654768 (EtwpLoadMicroarchitecturalPmcs.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140726F40 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x140741960 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140741A70 (KiSynchNumaCounterSetCallback.c)
 *     WmipIncludeStaticNames @ 0x1407A3C9C (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1407AA830 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407AAA00 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1407AB52C (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407AB938 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407ABDF4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     sub_1407CA0A0 @ 0x1407CA0A0 (sub_1407CA0A0.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1407E0520 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x1407E2904 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x1407E62CC (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 *     CreateSystemRootLink @ 0x1408C5094 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x1408C9EE8 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x1408CA0E4 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x1408E241C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1408E2570 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x140187B70 (_vsnwprintf.c)
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

/*
 * XREFs of RtlStringCbPrintfW @ 0x140019294
 * Callers:
 *     EtwpGetAutoLoggerEventNameFilter @ 0x14027F384 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x14027F714 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14028EEE0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404412FC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnOperationProcess @ 0x140447278 (PfSnOperationProcess.c)
 *     PfSnGetPrefetchInstructions @ 0x140453D1C (PfSnGetPrefetchInstructions.c)
 *     WmipSecurityMethod @ 0x140483DC0 (WmipSecurityMethod.c)
 *     IopGetLegacyVetoListDrivers @ 0x140483F0C (IopGetLegacyVetoListDrivers.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14048685C (EtwpGetSecurityDescriptorByGuid.c)
 *     ExProcessorCounterSetCallback @ 0x1404875F0 (ExProcessorCounterSetCallback.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404F1EC8 (PopDiagTracePowerRequestCreate.c)
 *     WmipInsertStaticNames @ 0x14051B2F4 (WmipInsertStaticNames.c)
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     EtwpRealtimeCreateLogfile @ 0x140532AB0 (EtwpRealtimeCreateLogfile.c)
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     PnpUnloadAttachedDriver @ 0x14055DBD0 (PnpUnloadAttachedDriver.c)
 *     EtwpCreateNtFileName @ 0x14057859C (EtwpCreateNtFileName.c)
 *     PiNormalizeDeviceText @ 0x1405854E0 (PiNormalizeDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140588924 (PiBuildDeviceNodeInstancePath.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     EtwpGenerateFileName @ 0x14059E648 (EtwpGenerateFileName.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405A8348 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405A8A70 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpInitializeAutoLoggers @ 0x1405A8E4C (EtwpInitializeAutoLoggers.c)
 *     CmpCreatePerfKeys @ 0x1405C104C (CmpCreatePerfKeys.c)
 *     PpmWmiRegisterInfo @ 0x1405DAC24 (PpmWmiRegisterInfo.c)
 *     EtwpExpandFileName @ 0x1405DFEEC (EtwpExpandFileName.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1405E4F50 (IoWMIDeviceObjectToInstanceName.c)
 *     SepSetSystemPaths @ 0x1405E63C4 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x1405EB5EC (SepReadAndPopulateCapes.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1406C1260 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1406D7A50 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1406D7B60 (KiSynchNumaCounterSetCallback.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406F37E4 (PfpSourceGetPrefetchSupport.c)
 *     WmipIncludeStaticNames @ 0x140741BCC (WmipIncludeStaticNames.c)
 *     sub_1407625C0 @ 0x1407625C0 (sub_1407625C0.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140777798 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x140779F30 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x14077D8D0 (SiGetEfiSystemDevice.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     CreateSystemRootLink @ 0x140854AC8 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140857D7C (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140857ED8 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x14086D6C0 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x14086D810 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x14015DE70 (_vsnwprintf.c)
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

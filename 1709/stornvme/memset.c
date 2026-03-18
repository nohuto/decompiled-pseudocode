/*
 * XREFs of memset @ 0x1C0013D00
 * Callers:
 *     NVMeControllerStartFailureEventLog @ 0x1C0001008 (NVMeControllerStartFailureEventLog.c)
 *     DriverEntry @ 0x1C0001320 (DriverEntry.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0001418 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C00015C0 (NVMeHwFindAdapter.c)
 *     NVMeHwBuildIo @ 0x1C00021D0 (NVMeHwBuildIo.c)
 *     AdminQueueInitialize @ 0x1C0002BB8 (AdminQueueInitialize.c)
 *     AdminQueuesFreeResources @ 0x1C0002D98 (AdminQueuesFreeResources.c)
 *     IoSqToIoCqMapping @ 0x1C0002E54 (IoSqToIoCqMapping.c)
 *     IoQueuesInitialize @ 0x1C0003054 (IoQueuesInitialize.c)
 *     GetProcessorGroupInformation @ 0x1C00035E4 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C00037BC (GetProcessorInformation.c)
 *     GetInterruptMessageInformation @ 0x1C0003B4C (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C0003DA4 (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C0003EDC (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C000414C (IoQueuesDeletion.c)
 *     NVMeQueuesReInit @ 0x1C000456C (NVMeQueuesReInit.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C0004AC8 (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerStop @ 0x1C0004E58 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004F80 (NVMeControllerRemove.c)
 *     NVMePowerInitialize @ 0x1C00058CC (NVMePowerInitialize.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000672C (NVMeInitHostMemoryBuffer.c)
 *     MdlToPrp @ 0x1C0006E34 (MdlToPrp.c)
 *     SglToPrp @ 0x1C0007118 (SglToPrp.c)
 *     BuildReadWriteCommand @ 0x1C00073B0 (BuildReadWriteCommand.c)
 *     FormInquiryStandardData @ 0x1C000782C (FormInquiryStandardData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0007D74 (FormInquiryDeviceIdentifiersData.c)
 *     ScsiInquiryRequest @ 0x1C00081A8 (ScsiInquiryRequest.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0008610 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0008730 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C000897C (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C0008E48 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0009054 (LogSenseInformationalExceptions.c)
 *     ScsiLogSenseRequest @ 0x1C00091F8 (ScsiLogSenseRequest.c)
 *     ScsiUnmapRequest @ 0x1C00095B0 (ScsiUnmapRequest.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C000A250 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareGetInfo @ 0x1C000A5FC (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C000AA74 (FirmwareDownload.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B4A0 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000B644 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B8DC (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000BF64 (IoctlQueryTemperatureInfoProcess.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000C27C (NVMeGetRichDeviceDescription.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000C578 (IoctlStorageStreamsGetParameters.c)
 *     ProtocolCommandCompletion @ 0x1C000D0D0 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000D250 (ProtocolCommandToNVMe.c)
 *     NVMeLogTelemetry @ 0x1C000D608 (NVMeLogTelemetry.c)
 *     NVMeControllerIdentify @ 0x1C000DDE8 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000DF54 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000E398 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000E658 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E7DC (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000E8E4 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000EA50 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000EBEC (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000ED30 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000EE0C (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000EEDC (NVMeConfigAsyncEvent.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F110 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000F3C8 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000F460 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F7EC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000F9C4 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FAA0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C000FC78 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C000FD60 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000FE48 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeMapError @ 0x1C0011D04 (NVMeMapError.c)
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C001238C (NVMeSyncHostTime.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C00126E4 (ReadMultiSzRegistryValueAndCompareId.c)
 *     GetRegistrySettings @ 0x1C00128E0 (GetRegistrySettings.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
mset20:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto mset20;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0013DBD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}

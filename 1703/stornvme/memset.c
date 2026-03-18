/*
 * XREFs of memset @ 0x1C0012380
 * Callers:
 *     NVMeControllerStartFailureEventLog @ 0x1C00010DC (NVMeControllerStartFailureEventLog.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00013E0 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0001580 (NVMeHwFindAdapter.c)
 *     NVMeHwBuildIo @ 0x1C0002130 (NVMeHwBuildIo.c)
 *     AdminQueueInitialize @ 0x1C0002910 (AdminQueueInitialize.c)
 *     AdminQueuesFreeResources @ 0x1C0002AF0 (AdminQueuesFreeResources.c)
 *     IoSqToIoCqMapping @ 0x1C0002BAC (IoSqToIoCqMapping.c)
 *     IoQueuesInitialize @ 0x1C0002DAC (IoQueuesInitialize.c)
 *     GetProcessorGroupInformation @ 0x1C000333C (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C0003514 (GetProcessorInformation.c)
 *     GetInterruptMessageInformation @ 0x1C00038A4 (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C0003AFC (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C0003C34 (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0003EAC (IoQueuesDeletion.c)
 *     NVMeQueuesReInit @ 0x1C00042C8 (NVMeQueuesReInit.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000480C (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerStop @ 0x1C0004B70 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004C98 (NVMeControllerRemove.c)
 *     NVMePowerInitialize @ 0x1C00054B0 (NVMePowerInitialize.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000631C (NVMeInitHostMemoryBuffer.c)
 *     MdlToPrp @ 0x1C0006A1C (MdlToPrp.c)
 *     SglToPrp @ 0x1C0006CDC (SglToPrp.c)
 *     BuildReadWriteCommand @ 0x1C0006F74 (BuildReadWriteCommand.c)
 *     FormInquiryStandardData @ 0x1C00073E0 (FormInquiryStandardData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0007810 (FormInquiryDeviceIdentifiersData.c)
 *     ScsiInquiryRequest @ 0x1C0007C5C (ScsiInquiryRequest.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C00080D0 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00081F0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C0008430 (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C0008908 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0008B18 (LogSenseInformationalExceptions.c)
 *     ScsiLogSenseRequest @ 0x1C0008CBC (ScsiLogSenseRequest.c)
 *     ScsiUnmapRequest @ 0x1C0008F74 (ScsiUnmapRequest.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0009C40 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareGetInfo @ 0x1C0009F2C (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C000A3A4 (FirmwareDownload.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000AD60 (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000AF04 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000B188 (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000B7F4 (IoctlQueryTemperatureInfoProcess.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000BB0C (NVMeGetRichDeviceDescription.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000BE0C (IoctlStorageStreamsGetParameters.c)
 *     ProtocolCommandCompletion @ 0x1C000C960 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000CAE0 (ProtocolCommandToNVMe.c)
 *     NVMeLogTelemetry @ 0x1C000CE9C (NVMeLogTelemetry.c)
 *     NVMeControllerIdentify @ 0x1C000D674 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000D7E0 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000DC18 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000DED0 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E054 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000E15C (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000E2C0 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000E45C (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000E5A0 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000E67C (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000E74C (NVMeConfigAsyncEvent.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000E980 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000EC38 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000ECD0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F05C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000F224 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000F300 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C000F4D8 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C000F5C0 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C000F6A8 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeMapError @ 0x1C0010570 (NVMeMapError.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0010C94 (ReadMultiSzRegistryValueAndCompareId.c)
 *     GetRegistrySettings @ 0x1C0010E90 (GetRegistrySettings.c)
 *     GsDriverEntry @ 0x1C0018010 (GsDriverEntry.c)
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
LABEL_5:
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
    goto LABEL_5;
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C001243D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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

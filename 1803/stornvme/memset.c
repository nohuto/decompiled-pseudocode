/*
 * XREFs of memset @ 0x1C0014380
 * Callers:
 *     NVMeControllerStartFailureEventLog @ 0x1C0001008 (NVMeControllerStartFailureEventLog.c)
 *     DriverEntry @ 0x1C00012F8 (DriverEntry.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00013F0 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0001590 (NVMeHwFindAdapter.c)
 *     NVMeHwBuildIo @ 0x1C0002120 (NVMeHwBuildIo.c)
 *     AdminQueueInitialize @ 0x1C0002B58 (AdminQueueInitialize.c)
 *     AdminQueuesFreeResources @ 0x1C0002D54 (AdminQueuesFreeResources.c)
 *     IoSqToIoCqMapping @ 0x1C0002E10 (IoSqToIoCqMapping.c)
 *     IoQueuesInitialize @ 0x1C0003010 (IoQueuesInitialize.c)
 *     GetProcessorGroupInformation @ 0x1C00035F4 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C00037D4 (GetProcessorInformation.c)
 *     GetInterruptMessageInformation @ 0x1C0003B64 (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C0003DBC (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C0003F00 (IoQueuesCreation.c)
 *     IoQueuesDeletion @ 0x1C0004170 (IoQueuesDeletion.c)
 *     NVMeQueuesReInit @ 0x1C0004594 (NVMeQueuesReInit.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C0004AEC (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerStop @ 0x1C0004EAC (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004FE4 (NVMeControllerRemove.c)
 *     NVMePowerInitialize @ 0x1C000592C (NVMePowerInitialize.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C00069A4 (NVMeInitHostMemoryBuffer.c)
 *     MdlToPrp @ 0x1C00070DC (MdlToPrp.c)
 *     SglToPrp @ 0x1C00073DC (SglToPrp.c)
 *     BuildReadWriteCommand @ 0x1C00076A4 (BuildReadWriteCommand.c)
 *     FormInquiryStandardData @ 0x1C0007B20 (FormInquiryStandardData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0008074 (FormInquiryDeviceIdentifiersData.c)
 *     ScsiInquiryRequest @ 0x1C00084D0 (ScsiInquiryRequest.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0008970 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0008A90 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1C0008CF0 (ScsiModeSenseRequest.c)
 *     LogSenseTemperature @ 0x1C00091F4 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0009404 (LogSenseInformationalExceptions.c)
 *     ScsiLogSenseRequest @ 0x1C00095B4 (ScsiLogSenseRequest.c)
 *     ScsiUnmapRequest @ 0x1C0009980 (ScsiUnmapRequest.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C000A630 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     FirmwareGetInfo @ 0x1C000A9DC (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C000AE68 (FirmwareDownload.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C000B8AC (QueryProtocolInfoIdentifyData.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000BA3C (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x1C000BCD4 (QueryProtocolInfoFeatureData.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000C36C (IoctlQueryTemperatureInfoProcess.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000C688 (NVMeGetRichDeviceDescription.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000C9A8 (IoctlStorageStreamsGetParameters.c)
 *     ProtocolCommandCompletion @ 0x1C000D590 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000D704 (ProtocolCommandToNVMe.c)
 *     NVMeLogTelemetry @ 0x1C000DABC (NVMeLogTelemetry.c)
 *     NVMeControllerIdentify @ 0x1C000E2A8 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000E414 (NVMeNameSpaceIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000E864 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000EB30 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000ECB4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000EDB8 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000EF30 (NVMeGetTemperatureThreshold.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000F0D8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000F228 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetPowerState @ 0x1C000F304 (NVMeSetPowerState.c)
 *     NVMeConfigAsyncEvent @ 0x1C000F3D4 (NVMeConfigAsyncEvent.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C000F620 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000F8D8 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000F970 (NVMeSetHostMemoryBuffer.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000FCFC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000FEBC (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FF98 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0010158 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0010240 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0010328 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeMapError @ 0x1C0012230 (NVMeMapError.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C00128EC (NVMeSyncHostTime.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0012C34 (ReadMultiSzRegistryValueAndCompareId.c)
 *     GetRegistrySettings @ 0x1C0012E34 (GetRegistrySettings.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}

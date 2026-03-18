/*
 * XREFs of ProbeForWrite @ 0x140527A00
 * Callers:
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 *     PfpMemoryRangesQuery @ 0x1400251A8 (PfpMemoryRangesQuery.c)
 *     PfpMemoryListQuery @ 0x1400365BC (PfpMemoryListQuery.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     PsQueryCpuQuotaInformation @ 0x140168578 (PsQueryCpuQuotaInformation.c)
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 *     NtQueryMutant @ 0x14041EF34 (NtQueryMutant.c)
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 *     RtlpWriteExtendedContext @ 0x140425A98 (RtlpWriteExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140425B50 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     NtQuerySecurityObject @ 0x140434360 (NtQuerySecurityObject.c)
 *     NtQuerySymbolicLinkObject @ 0x140436C30 (NtQuerySymbolicLinkObject.c)
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 *     PiCMReturnHandleResultData @ 0x14043E134 (PiCMReturnHandleResultData.c)
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     ExHandleSPCall2 @ 0x140440AC4 (ExHandleSPCall2.c)
 *     NtQueryEvent @ 0x140441754 (NtQueryEvent.c)
 *     NtQueryInformationAtom @ 0x140442C90 (NtQueryInformationAtom.c)
 *     NtGetCachedSigningLevel @ 0x140443840 (NtGetCachedSigningLevel.c)
 *     NtQuerySection @ 0x1404458F0 (NtQuerySection.c)
 *     NtNotifyChangeDirectoryFile @ 0x140445BB0 (NtNotifyChangeDirectoryFile.c)
 *     PfpQueryGpuUtilization @ 0x140446E28 (PfpQueryGpuUtilization.c)
 *     NtQueryWnfStateNameInformation @ 0x1404476C4 (NtQueryWnfStateNameInformation.c)
 *     NtQueryMultipleValueKey @ 0x140448D38 (NtQueryMultipleValueKey.c)
 *     PfSnGetCompletedTrace @ 0x140449F58 (PfSnGetCompletedTrace.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     PfpPrefetchRequest @ 0x1404634E8 (PfpPrefetchRequest.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     NtAdjustGroupsToken @ 0x14046D64C (NtAdjustGroupsToken.c)
 *     NtSecureConnectPort @ 0x140470F8C (NtSecureConnectPort.c)
 *     AlpcpProbeMessageAttributes @ 0x140472940 (AlpcpProbeMessageAttributes.c)
 *     NtQueryDirectoryObject @ 0x14047C040 (NtQueryDirectoryObject.c)
 *     BuildQueryDirectoryIrp @ 0x14047F470 (BuildQueryDirectoryIrp.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x14047FCC0 (PiControlCopyUserModeCallersBuffer.c)
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     PiCMReturnBufferResultData @ 0x14048A83C (PiCMReturnBufferResultData.c)
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     PfGetCompletedTrace @ 0x140498110 (PfGetCompletedTrace.c)
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 *     NtSetInformationVirtualMemory @ 0x14049A7B0 (NtSetInformationVirtualMemory.c)
 *     NtAdjustPrivilegesToken @ 0x14049CF30 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x14049D7B0 (NtPrivilegeCheck.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     NtQueryLicenseValue @ 0x1404A7D10 (NtQueryLicenseValue.c)
 *     PiDqIrpQueryGetResult @ 0x1404B80E4 (PiDqIrpQueryGetResult.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PiCMReturnBasicResultData @ 0x1404E6BA8 (PiCMReturnBasicResultData.c)
 *     PiCMReturnStatusResultData @ 0x1404E8078 (PiCMReturnStatusResultData.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1404EDB74 (NtGetCompleteWnfStateSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x1404EED08 (NtSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404EF144 (NtQueryWnfStateData.c)
 *     NtQuerySecurityAttributesToken @ 0x1404F7910 (NtQuerySecurityAttributesToken.c)
 *     NtQueryObject @ 0x1404FAD40 (NtQueryObject.c)
 *     NtEnumerateKey @ 0x1404FD330 (NtEnumerateKey.c)
 *     NtAlpcQueryInformationMessage @ 0x140516968 (NtAlpcQueryInformationMessage.c)
 *     PfpPfnPrioRequest @ 0x1405206B0 (PfpPfnPrioRequest.c)
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 *     NtRemoveIoCompletionEx @ 0x140527090 (NtRemoveIoCompletionEx.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     IopValidateQueryInformationParameters @ 0x14052C8E0 (IopValidateQueryInformationParameters.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140551788 (EtwpGetLoggerInfoFromContext.c)
 *     NtGetMUIRegistryInfo @ 0x140568580 (NtGetMUIRegistryInfo.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140585BC8 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetSystemPlatformBinary @ 0x1405D2774 (ExpGetSystemPlatformBinary.c)
 *     NtQueryOpenSubKeysEx @ 0x14065EFBC (NtQueryOpenSubKeysEx.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 *     PiCMReturnDepthResultData @ 0x1406A5B5C (PiCMReturnDepthResultData.c)
 *     NtQueryInformationPort @ 0x1406B0CD8 (NtQueryInformationPort.c)
 *     AlpcpCopyRequestData @ 0x1406B1584 (AlpcpCopyRequestData.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 *     ObQueryRefTraceInformation @ 0x1406C22F4 (ObQueryRefTraceInformation.c)
 *     PfpQueryFileExtentsRequest @ 0x1406C3FD8 (PfpQueryFileExtentsRequest.c)
 *     NtGetCurrentProcessorNumberEx @ 0x1406DFD7C (NtGetCurrentProcessorNumberEx.c)
 *     NtQuerySecurityPolicy @ 0x1406F01C0 (NtQuerySecurityPolicy.c)
 *     SmProcessListRequest @ 0x14070085C (SmProcessListRequest.c)
 *     ExpGetDeviceDataInformation @ 0x140714E94 (ExpGetDeviceDataInformation.c)
 *     NtEnumerateBootEntries @ 0x14071C3B8 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14071C988 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14071CE24 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x14071D114 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14071D380 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x14071D67C (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x14071D9A0 (NtQuerySystemEnvironmentValue.c)
 *     NtTranslateFilePath @ 0x14071E874 (NtTranslateFilePath.c)
 *     ExpProfileCreate @ 0x1407203E0 (ExpProfileCreate.c)
 *     NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140720908 (NtConvertBetweenAuxiliaryCounterAndPerformanceCounter.c)
 *     NtQueryAuxiliaryCounterFrequency @ 0x140720B7C (NtQueryAuxiliaryCounterFrequency.c)
 *     NtSystemDebugControl @ 0x140722478 (NtSystemDebugControl.c)
 *     KdpPrompt @ 0x14078BE68 (KdpPrompt.c)
 * Callees:
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForWrite(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  unsigned __int64 v3; // rdx
  volatile void *v4; // rdx

  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
    v3 = (unsigned __int64)Address + Length - 1;
    if ( (unsigned __int64)Address > v3 || v3 >= 0x7FFFFFFF0000LL )
    {
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
    }
    else
    {
      v4 = (volatile void *)((v3 & 0xFFFFFFFFFFFFF000uLL) + 4096);
      do
      {
        *(_BYTE *)Address = *(_BYTE *)Address;
        Address = (volatile void *)(((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL) + 4096);
      }
      while ( Address != v4 );
    }
  }
}

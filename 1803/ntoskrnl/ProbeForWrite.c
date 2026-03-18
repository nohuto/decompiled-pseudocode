/*
 * XREFs of ProbeForWrite @ 0x14059C6A0
 * Callers:
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     PfpMemoryRangesQuery @ 0x14014C6B8 (PfpMemoryRangesQuery.c)
 *     PfpMemoryListQuery @ 0x14014CEB4 (PfpMemoryListQuery.c)
 *     PsQueryCpuQuotaInformation @ 0x14016E7DC (PsQueryCpuQuotaInformation.c)
 *     MiDbgCopyMemory @ 0x1402607B8 (MiDbgCopyMemory.c)
 *     PfpPrefetchRequest @ 0x14049284C (PfpPrefetchRequest.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     NtQueryObject @ 0x1404A7270 (NtQueryObject.c)
 *     NtEnumerateKey @ 0x1404AC500 (NtEnumerateKey.c)
 *     NtSetInformationVirtualMemory @ 0x1404B30D0 (NtSetInformationVirtualMemory.c)
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 *     NtQueryDirectoryObject @ 0x1404D2500 (NtQueryDirectoryObject.c)
 *     NtQuerySecurityObject @ 0x1404D2C70 (NtQuerySecurityObject.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     AlpcpProbeMessageAttributes @ 0x1404DA04C (AlpcpProbeMessageAttributes.c)
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1404E86C4 (MiCaptureAllocateMapExtendedParameters.c)
 *     NtAdjustPrivilegesToken @ 0x1404EC040 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x1404EC904 (NtPrivilegeCheck.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1404F4C10 (NtGetCompleteWnfStateSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x1404F5304 (NtSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404F5B08 (NtQueryWnfStateData.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x14050946C (PiControlCopyUserModeCallersBuffer.c)
 *     PiCMReturnBufferResultData @ 0x14050A2B4 (PiCMReturnBufferResultData.c)
 *     PiCMReturnHandleResultData @ 0x14050C23C (PiCMReturnHandleResultData.c)
 *     WbUpdateHeapExecutedCallArgumentList @ 0x14050FAE0 (WbUpdateHeapExecutedCallArgumentList.c)
 *     PfGetCompletedTrace @ 0x14050FFC4 (PfGetCompletedTrace.c)
 *     NtManagePartition @ 0x1405121CC (NtManagePartition.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PiDqIrpQueryGetResult @ 0x140523AD4 (PiDqIrpQueryGetResult.c)
 *     PfpPrivSourceEnum @ 0x140538648 (PfpPrivSourceEnum.c)
 *     NtQuerySecurityAttributesToken @ 0x140546170 (NtQuerySecurityAttributesToken.c)
 *     NtAdjustGroupsToken @ 0x140546920 (NtAdjustGroupsToken.c)
 *     NtQueryInformationAtom @ 0x140547A60 (NtQueryInformationAtom.c)
 *     NtQueryLicenseValue @ 0x1405490A0 (NtQueryLicenseValue.c)
 *     NtQuerySymbolicLinkObject @ 0x140552AC0 (NtQuerySymbolicLinkObject.c)
 *     NtAlpcQueryInformationMessage @ 0x14055DB84 (NtAlpcQueryInformationMessage.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 *     RtlpWriteExtendedContext @ 0x140563B0C (RtlpWriteExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140563FC8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     NtQueryEaFile @ 0x140564750 (NtQueryEaFile.c)
 *     ExHandleSPCall2 @ 0x140568664 (ExHandleSPCall2.c)
 *     NtGetMUIRegistryInfo @ 0x140568A90 (NtGetMUIRegistryInfo.c)
 *     NtGetCachedSigningLevel @ 0x14056C65C (NtGetCachedSigningLevel.c)
 *     NtQueryWnfStateNameInformation @ 0x14056F7C0 (NtQueryWnfStateNameInformation.c)
 *     NtQuerySection @ 0x14057121C (NtQuerySection.c)
 *     PfpQueryGpuUtilization @ 0x140572420 (PfpQueryGpuUtilization.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140572550 (NtNotifyChangeDirectoryFileEx.c)
 *     PfSnGetCompletedTrace @ 0x140573A84 (PfSnGetCompletedTrace.c)
 *     NtQueryEvent @ 0x1405747FC (NtQueryEvent.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14057FEC8 (NtQuerySystemEnvironmentValueEx.c)
 *     PiCMReturnStatusResultData @ 0x140585C80 (PiCMReturnStatusResultData.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14058B16C (EtwpGetLoggerInfoFromContext.c)
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     BuildQueryDirectoryIrp @ 0x140596100 (BuildQueryDirectoryIrp.c)
 *     IopValidateQueryInformationParameters @ 0x140597740 (IopValidateQueryInformationParameters.c)
 *     NtRemoveIoCompletionEx @ 0x14059C4D0 (NtRemoveIoCompletionEx.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PfQuerySuperfetchInformation @ 0x1405B0640 (PfQuerySuperfetchInformation.c)
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 *     NtQueryMutant @ 0x1405C288C (NtQueryMutant.c)
 *     PiCMReturnBasicResultData @ 0x1405C6850 (PiCMReturnBasicResultData.c)
 *     EtwpRealtimeConnect @ 0x1405E4288 (EtwpRealtimeConnect.c)
 *     NtQueryOpenSubKeysEx @ 0x1405ED870 (NtQueryOpenSubKeysEx.c)
 *     PopBootStatGet @ 0x14064D048 (PopBootStatGet.c)
 *     ExpGetSystemPlatformBinary @ 0x140651BE4 (ExpGetSystemPlatformBinary.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 *     PiCMReturnDepthResultData @ 0x140738448 (PiCMReturnDepthResultData.c)
 *     NtQueryInformationPort @ 0x1407470E8 (NtQueryInformationPort.c)
 *     AlpcpCopyRequestData @ 0x140747E84 (AlpcpCopyRequestData.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     ObQueryRefTraceInformation @ 0x14075A144 (ObQueryRefTraceInformation.c)
 *     PfpQueryFileExtentsRequest @ 0x14075BDB8 (PfpQueryFileExtentsRequest.c)
 *     PopBootStatCheckIntegrity @ 0x14076BDB0 (PopBootStatCheckIntegrity.c)
 *     NtGetCurrentProcessorNumberEx @ 0x14077A424 (NtGetCurrentProcessorNumberEx.c)
 *     NtQuerySecurityPolicy @ 0x14078BF64 (NtQuerySecurityPolicy.c)
 *     SmProcessListRequest @ 0x14079BAF8 (SmProcessListRequest.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B8BD4 (EtwpSetCoverageSamplerInformation.c)
 *     ExpGetDeviceDataInformation @ 0x1407BADD0 (ExpGetDeviceDataInformation.c)
 *     NtEnumerateBootEntries @ 0x1407C2C40 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1407C3288 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407C3738 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1407C3A44 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1407C3CB0 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1407C3FAC (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407C42D0 (NtQuerySystemEnvironmentValue.c)
 *     NtTranslateFilePath @ 0x1407C51D4 (NtTranslateFilePath.c)
 *     ExpProfileCreate @ 0x1407C7550 (ExpProfileCreate.c)
 *     NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x1407C7A78 (NtConvertBetweenAuxiliaryCounterAndPerformanceCounter.c)
 *     NtQueryAuxiliaryCounterFrequency @ 0x1407C7CD4 (NtQueryAuxiliaryCounterFrequency.c)
 *     NtSystemDebugControl @ 0x1407C9A08 (NtSystemDebugControl.c)
 *     KdpPrompt @ 0x14080616C (KdpPrompt.c)
 * Callees:
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
      if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
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

/*
 * XREFs of ProbeForWrite @ 0x1404A3950
 * Callers:
 *     PfpMemoryRangesQuery @ 0x14000D6F0 (PfpMemoryRangesQuery.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     PfpMemoryListQuery @ 0x1401529F8 (PfpMemoryListQuery.c)
 *     PsQueryCpuQuotaInformation @ 0x14015D43C (PsQueryCpuQuotaInformation.c)
 *     MiDbgCopyMemory @ 0x1402276C0 (MiDbgCopyMemory.c)
 *     PfpPfnPrioRequest @ 0x14043D960 (PfpPfnPrioRequest.c)
 *     PfpPrefetchRequest @ 0x14043F800 (PfpPrefetchRequest.c)
 *     PfpQueryGpuUtilization @ 0x14044832C (PfpQueryGpuUtilization.c)
 *     PfSnGetCompletedTrace @ 0x140448E24 (PfSnGetCompletedTrace.c)
 *     NtGetCachedSigningLevel @ 0x1404502B0 (NtGetCachedSigningLevel.c)
 *     PiCMReturnDepthResultData @ 0x140451EC4 (PiCMReturnDepthResultData.c)
 *     PfGetCompletedTrace @ 0x140455130 (PfGetCompletedTrace.c)
 *     NtAdjustGroupsToken @ 0x14045BE94 (NtAdjustGroupsToken.c)
 *     AlpcpProbeMessageAttributes @ 0x140467B0C (AlpcpProbeMessageAttributes.c)
 *     NtSecureConnectPort @ 0x14046827C (NtSecureConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     NtEnumerateKey @ 0x140481BE0 (NtEnumerateKey.c)
 *     NtQuerySecurityAttributesToken @ 0x140482C50 (NtQuerySecurityAttributesToken.c)
 *     NtQueryDirectoryObject @ 0x140484130 (NtQueryDirectoryObject.c)
 *     NtQueryObject @ 0x14048EB10 (NtQueryObject.c)
 *     NtQuerySecurityObject @ 0x140490AC0 (NtQuerySecurityObject.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     IopValidateQueryInformationParameters @ 0x14049AA00 (IopValidateQueryInformationParameters.c)
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 *     NtRemoveIoCompletionEx @ 0x1404A2FA0 (NtRemoveIoCompletionEx.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationThread @ 0x1404CB7E0 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x1404D43D0 (NtSetInformationVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404EDB70 (EtwpGetLoggerInfoFromContext.c)
 *     NtGetMUIRegistryInfo @ 0x1404F25F8 (NtGetMUIRegistryInfo.c)
 *     NtManagePartition @ 0x1404FC278 (NtManagePartition.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 *     NtSubscribeWnfStateChange @ 0x1404FF390 (NtSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404FFEEC (NtQueryWnfStateData.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1405003E4 (NtGetCompleteWnfStateSubscription.c)
 *     NtAlpcQueryInformationMessage @ 0x140505F58 (NtAlpcQueryInformationMessage.c)
 *     RtlpWriteExtendedContext @ 0x140515A64 (RtlpWriteExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14051639C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x140525BA8 (PiControlCopyUserModeCallersBuffer.c)
 *     PiCMReturnBufferResultData @ 0x140525C50 (PiCMReturnBufferResultData.c)
 *     PiCMReturnBasicResultData @ 0x14052FF90 (PiCMReturnBasicResultData.c)
 *     PiCMReturnStatusResultData @ 0x14053089C (PiCMReturnStatusResultData.c)
 *     NtQueryLicenseValue @ 0x140537C90 (NtQueryLicenseValue.c)
 *     NtPrivilegeCheck @ 0x1405396C4 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x1405398A0 (NtAdjustPrivilegesToken.c)
 *     PiDqIrpQueryGetResult @ 0x14054D9E8 (PiDqIrpQueryGetResult.c)
 *     NtQuerySymbolicLinkObject @ 0x14056AFF0 (NtQuerySymbolicLinkObject.c)
 *     ExHandleSPCall2 @ 0x14057291C (ExHandleSPCall2.c)
 *     NtQueryEvent @ 0x140572BC4 (NtQueryEvent.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140573710 (EtwQueryProcessTelemetryInfo.c)
 *     PiCMReturnHandleResultData @ 0x1405742E0 (PiCMReturnHandleResultData.c)
 *     NtQueryInformationAtom @ 0x14057D5D0 (NtQueryInformationAtom.c)
 *     NtQueryMultipleValueKey @ 0x140580F4C (NtQueryMultipleValueKey.c)
 *     NtQueryWnfStateNameInformation @ 0x140582464 (NtQueryWnfStateNameInformation.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140582FC0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtQuerySection @ 0x1405872D4 (NtQuerySection.c)
 *     NtQueryMutant @ 0x140591510 (NtQueryMutant.c)
 *     EtwpRealtimeConnect @ 0x140595B1C (EtwpRealtimeConnect.c)
 *     PopBootStatGet @ 0x1405AC1B8 (PopBootStatGet.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1405E97F0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetSystemPlatformBinary @ 0x1405ED510 (ExpGetSystemPlatformBinary.c)
 *     NtQueryOpenSubKeysEx @ 0x140687E00 (NtQueryOpenSubKeysEx.c)
 *     NtQueryQuotaInformationFile @ 0x1406B9540 (NtQueryQuotaInformationFile.c)
 *     NtQueryInformationPort @ 0x1406DC478 (NtQueryInformationPort.c)
 *     AlpcpCopyRequestData @ 0x1406DD164 (AlpcpCopyRequestData.c)
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     ObQueryRefTraceInformation @ 0x1406F0D74 (ObQueryRefTraceInformation.c)
 *     PfpQueryFileExtentsRequest @ 0x1406F2EF8 (PfpQueryFileExtentsRequest.c)
 *     PopBootStatCheckIntegrity @ 0x140707F20 (PopBootStatCheckIntegrity.c)
 *     NtGetCurrentProcessorNumberEx @ 0x1407162DC (NtGetCurrentProcessorNumberEx.c)
 *     NtQuerySecurityPolicy @ 0x140727C3C (NtQuerySecurityPolicy.c)
 *     SmProcessListRequest @ 0x140738584 (SmProcessListRequest.c)
 *     ExpGetDeviceDataInformation @ 0x140754024 (ExpGetDeviceDataInformation.c)
 *     NtEnumerateBootEntries @ 0x14075BC58 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14075C268 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14075C71C (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x14075CA24 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14075CC90 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x14075CF8C (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x14075D2B0 (NtQuerySystemEnvironmentValue.c)
 *     NtTranslateFilePath @ 0x14075E188 (NtTranslateFilePath.c)
 *     ExpProfileCreate @ 0x140760250 (ExpProfileCreate.c)
 *     NtConvertBetweenAuxiliaryCounterAndPerformanceCounter @ 0x140760778 (NtConvertBetweenAuxiliaryCounterAndPerformanceCounter.c)
 *     NtQueryAuxiliaryCounterFrequency @ 0x1407609D8 (NtQueryAuxiliaryCounterFrequency.c)
 *     NtSystemDebugControl @ 0x140761F40 (NtSystemDebugControl.c)
 *     KdpPrompt @ 0x14079908C (KdpPrompt.c)
 * Callees:
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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

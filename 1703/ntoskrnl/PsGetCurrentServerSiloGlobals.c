/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x14000D920
 * Callers:
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140087260 (EtwpTraceMessageVa.c)
 *     EtwpAdjustTraceBuffers @ 0x14011D770 (EtwpAdjustTraceBuffers.c)
 *     EtwTraceEvent @ 0x140150C60 (EtwTraceEvent.c)
 *     EtwWriteKMSecurityEvent @ 0x140155E64 (EtwWriteKMSecurityEvent.c)
 *     EtwTraceRaw @ 0x140252FC0 (EtwTraceRaw.c)
 *     EtwpGetCompressionSettings @ 0x140257DD8 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140258294 (EtwpSetCompressionSettings.c)
 *     ExpRaiseHardError @ 0x140427D10 (ExpRaiseHardError.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140438FF8 (ExpWnfEnumerateScopeInstances.c)
 *     ObpRemoveNamespaceFromTable @ 0x140446A30 (ObpRemoveNamespaceFromTable.c)
 *     RtlGetSuiteMask @ 0x140448D10 (RtlGetSuiteMask.c)
 *     ObpCreateSymbolicLinkName @ 0x14044E9DC (ObpCreateSymbolicLinkName.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x14044F270 (RtlSetConsoleSessionForegroundProcessId.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404569F0 (PsQueryCurrentApiSetSchema.c)
 *     ObpDeleteSymbolicLinkName @ 0x14045D4F8 (ObpDeleteSymbolicLinkName.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140467800 (EtwQueryTraceHandleByLoggerName.c)
 *     WmiQueryTraceInformation @ 0x140467C00 (WmiQueryTraceInformation.c)
 *     EtwEnableTrace @ 0x1404685E0 (EtwEnableTrace.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14046870C (ObSetCurrentProcessDeviceMap.c)
 *     NtCreatePrivateNamespace @ 0x1404692F4 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1404696DC (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x140469798 (NtOpenPrivateNamespace.c)
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 *     ExpWnfDeleteScopeById @ 0x1404997D0 (ExpWnfDeleteScopeById.c)
 *     RtlGetNtSystemRoot @ 0x1404B12B0 (RtlGetNtSystemRoot.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404C01E8 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfGenerateStateName @ 0x1404C2A70 (ExpWnfGenerateStateName.c)
 *     ObQueryDeviceMapInformation @ 0x1404EC6F0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x1404EC98C (ObpReferenceDeviceMap.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     PspCaptureUserProcessParameters @ 0x1405464D4 (PspCaptureUserProcessParameters.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     EtwpExpandFileName @ 0x1405588EC (EtwpExpandFileName.c)
 *     RtlIsMultiSessionSku @ 0x140560330 (RtlIsMultiSessionSku.c)
 *     EtwShutdown @ 0x140578394 (EtwShutdown.c)
 *     MiInitializeSessionGlobals @ 0x14057F1FC (MiInitializeSessionGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x14057F330 (MmIsSessionLeaderProcess.c)
 *     RtlSetActiveConsoleId @ 0x140586320 (RtlSetActiveConsoleId.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     EtwpInitializeAutoLoggers @ 0x1405B059C (EtwpInitializeAutoLoggers.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1405CE7C0 (ObIsDosDeviceLocallyMapped.c)
 *     SepSetSystemPaths @ 0x1405CE854 (SepSetSystemPaths.c)
 *     NtSetDefaultHardErrorPort @ 0x1405D43F4 (NtSetDefaultHardErrorPort.c)
 *     ObpGetShadowDirectory @ 0x1406C0658 (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x1406DE220 (PsGetCurrentServerSiloName.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1406E5CF0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlGetSessionProperties @ 0x1406E9B00 (RtlGetSessionProperties.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x1406F7980 (SepRmSetSharedUserSessionWrkr.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpDeleteSessionDemuxObject @ 0x140711550 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14071161C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14071172C (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140711C20 (EtwpUpdatePeriodicCaptureState.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140722D4C (ExpWnfAllocateNextPersistentNameSequence.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140749D60 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400949B0 (PsGetEffectiveServerSilo.c)
 */

void *PsGetCurrentServerSiloGlobals()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 EffectiveServerSilo; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    EffectiveServerSilo = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)&CurrentThread[1].WaitBlockFill11[160]);
  if ( EffectiveServerSilo )
    return *(void **)(EffectiveServerSilo + 1256);
  else
    return &PspHostSiloGlobals;
}

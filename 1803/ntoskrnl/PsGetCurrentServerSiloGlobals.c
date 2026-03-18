/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x1400A5690
 * Callers:
 *     NtTraceEvent @ 0x1400611F0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140061BC0 (EtwpTraceMessageVa.c)
 *     EtwpAdjustTraceBuffers @ 0x1400D3DA0 (EtwpAdjustTraceBuffers.c)
 *     EtwWriteKMSecurityEvent @ 0x14017E53C (EtwWriteKMSecurityEvent.c)
 *     EtwSendTraceBuffer @ 0x1402AD5A0 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1402AD70C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402ADB24 (EtwTraceRaw.c)
 *     WmiGetClock @ 0x1402ADD00 (WmiGetClock.c)
 *     EtwpGetCompressionSettings @ 0x1402B3ACC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1402B3F8C (EtwpSetCompressionSettings.c)
 *     ExpWnfGenerateStateName @ 0x1404F4B24 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ObQueryDeviceMapInformation @ 0x1404FCF70 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x1404FD200 (ObpReferenceDeviceMap.c)
 *     RtlIsMultiSessionSku @ 0x140509250 (RtlIsMultiSessionSku.c)
 *     ExpWnfDeleteScopeById @ 0x140511974 (ExpWnfDeleteScopeById.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x140517AAC (ExpWnfGetNameStoreRegistryRoot.c)
 *     NtOpenPrivateNamespace @ 0x14053FF0C (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x1405400D0 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x14054031C (ObpRegisterPrivateNamespace.c)
 *     ObpDeleteSymbolicLinkName @ 0x1405514F0 (ObpDeleteSymbolicLinkName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14055FBE0 (ObSetCurrentProcessDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1405678F8 (ExpWnfEnumerateScopeInstances.c)
 *     RtlGetSuiteMask @ 0x140571920 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140578190 (RtlSetConsoleSessionForegroundProcessId.c)
 *     ObpRemoveNamespaceFromTable @ 0x14057A7C8 (ObpRemoveNamespaceFromTable.c)
 *     ObpCreateSymbolicLinkName @ 0x14057B354 (ObpCreateSymbolicLinkName.c)
 *     RtlGetNtSystemRoot @ 0x14057EB70 (RtlGetNtSystemRoot.c)
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     EtwpRealtimeConnect @ 0x1405E4288 (EtwpRealtimeConnect.c)
 *     EtwpExpandFileName @ 0x1405E82A4 (EtwpExpandFileName.c)
 *     EtwShutdown @ 0x1405EAAFC (EtwShutdown.c)
 *     PsQueryCurrentApiSetSchema @ 0x1405FB2D8 (PsQueryCurrentApiSetSchema.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     MiInitializeSessionGlobals @ 0x14060B700 (MiInitializeSessionGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x14060B830 (MmIsSessionLeaderProcess.c)
 *     WmiQueryTraceInformation @ 0x14060CC60 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14060D970 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwEnableTrace @ 0x14060DD80 (EtwEnableTrace.c)
 *     RtlSetActiveConsoleId @ 0x1406144A0 (RtlSetActiveConsoleId.c)
 *     EtwpInitializeAutoLoggers @ 0x14063DCC0 (EtwpInitializeAutoLoggers.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 *     SepSetSystemPaths @ 0x14064C744 (SepSetSystemPaths.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140650060 (ObIsDosDeviceLocallyMapped.c)
 *     NtSetDefaultHardErrorPort @ 0x140653884 (NtSetDefaultHardErrorPort.c)
 *     ObpGetShadowDirectory @ 0x140758584 (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x1407788C0 (PsGetCurrentServerSiloName.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1407819B0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlGetSessionProperties @ 0x1407851A0 (RtlGetSessionProperties.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x140793510 (SepRmSetSharedUserSessionWrkr.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1407AFEC0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1407AFF8C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407B00D8 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407B05FC (EtwpUpdatePeriodicCaptureState.c)
 *     ExpRaiseHardError @ 0x1407C5BB8 (ExpRaiseHardError.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407CA2E0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1407F89B0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008A8E0 (PsGetEffectiveServerSilo.c)
 */

void *PsGetCurrentServerSiloGlobals()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx
  __int64 EffectiveServerSilo; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  if ( v1 == -3 )
    EffectiveServerSilo = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(v1);
  if ( EffectiveServerSilo )
    return *(void **)(EffectiveServerSilo + 1256);
  else
    return &PspHostSiloGlobals;
}

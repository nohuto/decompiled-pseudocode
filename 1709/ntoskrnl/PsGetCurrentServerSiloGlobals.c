/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x1400D2E30
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140092350 (EtwpTraceMessageVa.c)
 *     EtwpAdjustTraceBuffers @ 0x1400D5060 (EtwpAdjustTraceBuffers.c)
 *     EtwWriteKMSecurityEvent @ 0x14014C514 (EtwWriteKMSecurityEvent.c)
 *     EtwTraceEvent @ 0x14015331C (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x14027A7E0 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14027A94C (EtwTraceRaw.c)
 *     WmiGetClock @ 0x14027AB30 (WmiGetClock.c)
 *     EtwpGetCompressionSettings @ 0x140281838 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140281CF4 (EtwpSetCompressionSettings.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14044DD2C (ExpWnfEnumerateScopeInstances.c)
 *     NtOpenPrivateNamespace @ 0x140489880 (NtOpenPrivateNamespace.c)
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     ObpReferenceDeviceMap @ 0x1404C64B0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1404C75E0 (ObQueryDeviceMapInformation.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404E1054 (ExpWnfGetNameStoreRegistryRoot.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     ExpWnfDeleteScopeById @ 0x1404FCB94 (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x1405035C4 (ExpWnfGenerateStateName.c)
 *     ExpRaiseHardError @ 0x14050A5C4 (ExpRaiseHardError.c)
 *     RtlIsMultiSessionSku @ 0x140513550 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x140541C20 (RtlGetSuiteMask.c)
 *     RtlGetNtSystemRoot @ 0x140542E50 (RtlGetNtSystemRoot.c)
 *     NtCreatePrivateNamespace @ 0x140548D34 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x140548F80 (ObpRegisterPrivateNamespace.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14056FCE0 (ObSetCurrentProcessDeviceMap.c)
 *     ObpRemoveNamespaceFromTable @ 0x14058135C (ObpRemoveNamespaceFromTable.c)
 *     ObpDeleteSymbolicLinkName @ 0x140587728 (ObpDeleteSymbolicLinkName.c)
 *     ObpCreateSymbolicLinkName @ 0x14058C2D8 (ObpCreateSymbolicLinkName.c)
 *     EtwpRealtimeConnect @ 0x140595B1C (EtwpRealtimeConnect.c)
 *     PsQueryCurrentApiSetSchema @ 0x1405960C0 (PsQueryCurrentApiSetSchema.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140599D30 (RtlSetConsoleSessionForegroundProcessId.c)
 *     EtwEnableTrace @ 0x1405A8C30 (EtwEnableTrace.c)
 *     EtwpInitializeAutoLoggers @ 0x1405A8E4C (EtwpInitializeAutoLoggers.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1405ABA5C (EtwQueryTraceHandleByLoggerName.c)
 *     MiInitializeSessionGlobals @ 0x1405B3E08 (MiInitializeSessionGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x1405B3F40 (MmIsSessionLeaderProcess.c)
 *     EtwpExpandFileName @ 0x1405DFEEC (EtwpExpandFileName.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1405E55C0 (ObIsDosDeviceLocallyMapped.c)
 *     SepSetSystemPaths @ 0x1405E63C4 (SepSetSystemPaths.c)
 *     WmiQueryTraceInformation @ 0x1405EE200 (WmiQueryTraceInformation.c)
 *     NtSetDefaultHardErrorPort @ 0x1405F0668 (NtSetDefaultHardErrorPort.c)
 *     RtlSetActiveConsoleId @ 0x1405F1C80 (RtlSetActiveConsoleId.c)
 *     ObpGetShadowDirectory @ 0x1406EF0A4 (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x1407146C0 (PsGetCurrentServerSiloName.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x14071E3B0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlGetSessionProperties @ 0x140721A00 (RtlGetSessionProperties.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x14072F580 (SepRmSetSharedUserSessionWrkr.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     EtwShutdown @ 0x140748DA0 (EtwShutdown.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14074F0A0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14074F16C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14074F27C (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14074F788 (EtwpUpdatePeriodicCaptureState.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407627FC (ExpWnfAllocateNextPersistentNameSequence.c)
 *     EtwpEventTracingCounterSetCallback @ 0x14078C4C0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400D4220 (PsGetEffectiveServerSilo.c)
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

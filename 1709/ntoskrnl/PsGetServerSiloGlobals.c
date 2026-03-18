/*
 * XREFs of PsGetServerSiloGlobals @ 0x140089394
 * Callers:
 *     EtwTraceSiloKernelEvent @ 0x1400AE16C (EtwTraceSiloKernelEvent.c)
 *     RtlGetActiveConsoleId @ 0x1400B16C0 (RtlGetActiveConsoleId.c)
 *     SessionIsInteractive @ 0x1400B5200 (SessionIsInteractive.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     RtlGetNtProductType @ 0x1400F9570 (RtlGetNtProductType.c)
 *     RtlGetCurrentServiceSessionId @ 0x140101FB0 (RtlGetCurrentServiceSessionId.c)
 *     SepRmDispatchDataToLsa @ 0x14014C374 (SepRmDispatchDataToLsa.c)
 *     IopCheckSessionDeviceAccess @ 0x1401F9F58 (IopCheckSessionDeviceAccess.c)
 *     PsGetServerSiloActiveConsoleId @ 0x14024D9D4 (PsGetServerSiloActiveConsoleId.c)
 *     EtwTraceContextSwap @ 0x14027AFE0 (EtwTraceContextSwap.c)
 *     ExShutdownSystem @ 0x14043A73C (ExShutdownSystem.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14044DD2C (ExpWnfEnumerateScopeInstances.c)
 *     PspSetupUserProcessAddressSpace @ 0x14045F718 (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x14045FBE8 (MmMapApiSetView.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1404C75E0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1404C7780 (ObfDereferenceDeviceMap.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     ObDereferenceDeviceMap @ 0x1404FC1D4 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x1404FCFE8 (DbgkFlushErrorPort.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x1405035C4 (ExpWnfGenerateStateName.c)
 *     PspTerminateProcessesJobCallback @ 0x14050BBC0 (PspTerminateProcessesJobCallback.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     PspCaptureUserProcessParameters @ 0x140538864 (PspCaptureUserProcessParameters.c)
 *     SepIsNgenImage @ 0x14053A4C8 (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x14053AAD0 (SepIsMinTCB.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x14055F650 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ExpCheckPortableOperatingSystem @ 0x140590B7C (ExpCheckPortableOperatingSystem.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140596CD8 (EtwpUpdateGlobalGroupMasks.c)
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 *     ObpSetDeviceMap @ 0x1405B2684 (ObpSetDeviceMap.c)
 *     MiInitializeSessionGlobals @ 0x1405B3E08 (MiInitializeSessionGlobals.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1405C1C0C (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     DbgkpGetServerSiloState @ 0x1405C4A00 (DbgkpGetServerSiloState.c)
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1405E6350 (ObInitServerSilo.c)
 *     SepRmLsaConnectRequest @ 0x1405EAF1C (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x1405EBA80 (DbgkRegisterErrorPort.c)
 *     RtlGetHostNtSystemRoot @ 0x1405F2E80 (RtlGetHostNtSystemRoot.c)
 *     DbgkInitializeServerSilo @ 0x1406A98F0 (DbgkInitializeServerSilo.c)
 *     DbgkpRemoveErrorPort @ 0x1406AC1FC (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140714C58 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140714CB0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x140715064 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1407153F0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407159B0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140715AD4 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140715BEC (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140715CA8 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x140719180 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x1407280A8 (SeInitServerSilo.c)
 *     PspInitPhase2 @ 0x1408500D4 (PspInitPhase2.c)
 *     StartFirstUserProcess @ 0x14085168C (StartFirstUserProcess.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 */

void *__fastcall PsGetServerSiloGlobals(__int64 a1)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = a1;
  if ( a1 == -1 )
    CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    return *(void **)(CurrentServerSilo + 1256);
  else
    return &PspHostSiloGlobals;
}

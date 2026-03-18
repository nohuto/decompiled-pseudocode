/*
 * XREFs of PsGetServerSiloGlobals @ 0x140085368
 * Callers:
 *     RtlGetNtProductType @ 0x14002F6A0 (RtlGetNtProductType.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400676A0 (PsGetServerSiloServiceSessionId.c)
 *     RtlGetActiveConsoleId @ 0x140071260 (RtlGetActiveConsoleId.c)
 *     SessionIsInteractive @ 0x140072D94 (SessionIsInteractive.c)
 *     RtlGetCurrentServiceSessionId @ 0x140085340 (RtlGetCurrentServiceSessionId.c)
 *     SepRmDispatchDataToLsa @ 0x140148404 (SepRmDispatchDataToLsa.c)
 *     IopCheckSessionDeviceAccess @ 0x1401F43D0 (IopCheckSessionDeviceAccess.c)
 *     ExShutdownSystem @ 0x14041A7C8 (ExShutdownSystem.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140438FF8 (ExpWnfEnumerateScopeInstances.c)
 *     ObpSetDeviceMap @ 0x140458C1C (ObpSetDeviceMap.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140461490 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     ObDereferenceDeviceMap @ 0x140498984 (ObDereferenceDeviceMap.c)
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x14049BF18 (MmMapApiSetView.c)
 *     ExpWnfGenerateStateName @ 0x1404C2A70 (ExpWnfGenerateStateName.c)
 *     ObQueryDeviceMapInformation @ 0x1404EC6F0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1404EC890 (ObfDereferenceDeviceMap.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     SepIsMinTCB @ 0x1405454E0 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x140545D34 (SepIsNgenImage.c)
 *     PspTerminateProcessesJobCallback @ 0x14054D280 (PspTerminateProcessesJobCallback.c)
 *     ExpCheckPortableOperatingSystem @ 0x1405578EC (ExpCheckPortableOperatingSystem.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x14057F1FC (MiInitializeSessionGlobals.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1405A529C (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1405C5C44 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1405CE6D4 (ObInitServerSilo.c)
 *     RtlGetHostNtSystemRoot @ 0x1405D64E4 (RtlGetHostNtSystemRoot.c)
 *     PspCompleteServerSiloShutdown @ 0x1406DE7E4 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1406DE840 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x1406DEC14 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1406DEF80 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1406DF530 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1406DF654 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1406DF778 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1406DF834 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x1406E2CD0 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x1406F063C (SeInitServerSilo.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 *     PspInitPhase2 @ 0x14081F848 (PspInitPhase2.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
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

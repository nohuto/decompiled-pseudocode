/*
 * XREFs of PsGetServerSiloGlobals @ 0x14006CD90
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1400C7BA4 (SepRmDispatchDataToLsa.c)
 *     ExShutdownSystem @ 0x140487504 (ExShutdownSystem.c)
 *     DbgkpRemoveErrorPort @ 0x14048BA68 (DbgkpRemoveErrorPort.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404E9DD0 (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x1404EA2A8 (MmMapApiSetView.c)
 *     SepIsMinTCB @ 0x1404F4270 (SepIsMinTCB.c)
 *     ExpWnfGenerateStateName @ 0x1404F4B24 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     ObQueryDeviceMapInformation @ 0x1404FCF70 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1404FD110 (ObfDereferenceDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x14050EA74 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x1405103C0 (DbgkFlushErrorPort.c)
 *     PspTerminateProcessesJobCallback @ 0x14052F000 (PspTerminateProcessesJobCallback.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     PspCaptureUserProcessParameters @ 0x140550820 (PspCaptureUserProcessParameters.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1405678F8 (ExpWnfEnumerateScopeInstances.c)
 *     SepIsNgenImage @ 0x14057689C (SepIsNgenImage.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 *     ObpSetDeviceMap @ 0x14057D9B8 (ObpSetDeviceMap.c)
 *     ExpCheckPortableOperatingSystem @ 0x14057EC4C (ExpCheckPortableOperatingSystem.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x1405E3370 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x14060B700 (MiInitializeSessionGlobals.c)
 *     ObInitServerSilo @ 0x140620A04 (ObInitServerSilo.c)
 *     DbgkpGetServerSiloState @ 0x140620E90 (DbgkpGetServerSiloState.c)
 *     EtwpProcessEnumCallback @ 0x1406292D0 (EtwpProcessEnumCallback.c)
 *     CmpSetVersionData @ 0x14062ED3C (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x14062F6F0 (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140631D90 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     RtlGetHostNtSystemRoot @ 0x140655BB4 (RtlGetHostNtSystemRoot.c)
 *     DbgkInitializeServerSilo @ 0x14070E058 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140710660 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140778E48 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140778EA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x140779254 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140779B40 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140779C68 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140779D80 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140779E3C (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14077D150 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14078C4BC (SeInitServerSilo.c)
 * Callees:
 *     <none>
 */

void *__fastcall PsGetServerSiloGlobals(__int64 a1)
{
  void *result; // rax

  result = &PspHostSiloGlobals;
  if ( a1 )
    return *(void **)(a1 + 1256);
  return result;
}

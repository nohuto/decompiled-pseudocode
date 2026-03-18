/*
 * XREFs of ExWaitForRundownProtectionRelease @ 0x14010EFC0
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x14007EC54 (CmpTryToRundownHive.c)
 *     IoStopDiskIoAttributionForContext @ 0x14011F498 (IoStopDiskIoAttributionForContext.c)
 *     NtShutdownWorkerFactory @ 0x14012B704 (NtShutdownWorkerFactory.c)
 *     PfSnDeactivateTrace @ 0x14012D0E8 (PfSnDeactivateTrace.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 *     BgkpDisableConsole @ 0x1401EEB68 (BgkpDisableConsole.c)
 *     PfFbBufferListShutdown @ 0x140227054 (PfFbBufferListShutdown.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14023B1FC (DbgpRemoveDebugPrintCallback.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140249864 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PfTAccessTracingCleanup @ 0x14040E304 (PfTAccessTracingCleanup.c)
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 *     PspIoRateEntryDeactivate @ 0x14041EEF8 (PspIoRateEntryDeactivate.c)
 *     ExpWnfDeleteSubscription @ 0x1404383E8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfFreeScopeInstance @ 0x140438760 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfDeleteNameInstance @ 0x140438C24 (ExpWnfDeleteNameInstance.c)
 *     SmKmStoreDelete @ 0x14043BDDC (SmKmStoreDelete.c)
 *     PfSnPrefetchSections @ 0x14046540C (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404656CC (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPowerBoost @ 0x140467398 (PfSnPowerBoost.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PspIoRateEntryInitialize @ 0x14054C92C (PspIoRateEntryInitialize.c)
 *     IoDiskIoAttributionAllocate @ 0x14054DE04 (IoDiskIoAttributionAllocate.c)
 *     PfSnPrefetchScenario @ 0x140567410 (PfSnPrefetchScenario.c)
 *     SmKmStoreAdd @ 0x140567F1C (SmKmStoreAdd.c)
 *     ObDestroyHandleRevocationBlock @ 0x14057DB94 (ObDestroyHandleRevocationBlock.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A8C54 (PspSetCreateProcessNotifyRoutine.c)
 *     ExRegisterHost @ 0x1405C4EFC (ExRegisterHost.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     DbgkLkmdUnregisterCallback @ 0x140682040 (DbgkLkmdUnregisterCallback.c)
 *     ObUnRegisterCallbacks @ 0x1406C1EF0 (ObUnRegisterCallbacks.c)
 *     PfpRpShutdown @ 0x1406C4984 (PfpRpShutdown.c)
 *     PoUnregisterCoalescingCallback @ 0x1406C9430 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406E3D90 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406E3E90 (PsRemoveLoadImageNotifyRoutine.c)
 *     SmKmCleanup @ 0x140701BC0 (SmKmCleanup.c)
 *     SmcCacheInitialize @ 0x140704020 (SmcCacheInitialize.c)
 *     SmcCacheRemove @ 0x1407042B4 (SmcCacheRemove.c)
 *     SmcStoreDelete @ 0x1407048D4 (SmcStoreDelete.c)
 *     ExWaitForCallBacks @ 0x140718628 (ExWaitForCallBacks.c)
 *     ExUnregisterExtension @ 0x14071F010 (ExUnregisterExtension.c)
 *     PfInitializeSuperfetch @ 0x14081DA88 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x14081DFDC (PfpRpInitialize.c)
 *     SmGlobalsInitialize @ 0x14081FBB8 (SmGlobalsInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExWaitForRundownProtectionRelease(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 v1; // rax

  v1 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
  if ( v1 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)RunRef, v1);
}

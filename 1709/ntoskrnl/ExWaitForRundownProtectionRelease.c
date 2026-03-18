/*
 * XREFs of ExWaitForRundownProtectionRelease @ 0x1400A9850
 * Callers:
 *     IoStopDiskIoAttributionForContext @ 0x140007C70 (IoStopDiskIoAttributionForContext.c)
 *     PfSnDeactivateTrace @ 0x140010884 (PfSnDeactivateTrace.c)
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     NtShutdownWorkerFactory @ 0x140129720 (NtShutdownWorkerFactory.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 *     BgkpDisableConsole @ 0x1401F4268 (BgkpDisableConsole.c)
 *     PfFbBufferListShutdown @ 0x140239D10 (PfFbBufferListShutdown.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140250AA8 (DbgpRemoveDebugPrintCallback.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140264EC0 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     PfTAccessTracingCleanup @ 0x1404312A0 (PfTAccessTracingCleanup.c)
 *     PfSnPrefetchSections @ 0x140440C2C (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140440ED4 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPowerBoost @ 0x140443BEC (PfSnPowerBoost.c)
 *     SmKmStoreDelete @ 0x140444944 (SmKmStoreDelete.c)
 *     SmKmStoreAdd @ 0x1404450EC (SmKmStoreAdd.c)
 *     IoDiskIoAttributionAllocate @ 0x140445A40 (IoDiskIoAttributionAllocate.c)
 *     PspIoRateEntryDeactivate @ 0x140445AF8 (PspIoRateEntryDeactivate.c)
 *     PfSnPrefetchScenario @ 0x140452E48 (PfSnPrefetchScenario.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     ExpWnfDeleteNameInstance @ 0x1404FEC5C (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteSubscription @ 0x1404FFB7C (ExpWnfDeleteSubscription.c)
 *     PspIoRateEntryInitialize @ 0x14050B788 (PspIoRateEntryInitialize.c)
 *     ExpWnfFreeScopeInstance @ 0x14059AAFC (ExpWnfFreeScopeInstance.c)
 *     ObDestroyHandleRevocationBlock @ 0x1405A7B40 (ObDestroyHandleRevocationBlock.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405CC504 (PspSetCreateProcessNotifyRoutine.c)
 *     ExRegisterHost @ 0x1405D82F4 (ExRegisterHost.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     DbgkLkmdUnregisterCallback @ 0x1406AD300 (DbgkLkmdUnregisterCallback.c)
 *     ObUnRegisterCallbacks @ 0x1406F0970 (ObUnRegisterCallbacks.c)
 *     PfpRpShutdown @ 0x1406F4308 (PfpRpShutdown.c)
 *     PoUnregisterCoalescingCallback @ 0x1406FA000 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14071A700 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14071A800 (PsRemoveLoadImageNotifyRoutine.c)
 *     SmKmCleanup @ 0x140739EBC (SmKmCleanup.c)
 *     SmcCacheInitialize @ 0x14073C324 (SmcCacheInitialize.c)
 *     SmcCacheRemove @ 0x14073C5B8 (SmcCacheRemove.c)
 *     SmcStoreDelete @ 0x14073CBD8 (SmcStoreDelete.c)
 *     ExWaitForCallBacks @ 0x140757D08 (ExWaitForCallBacks.c)
 *     ExUnregisterExtension @ 0x14075EE70 (ExUnregisterExtension.c)
 *     PfInitializeSuperfetch @ 0x14084EEE8 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x14084F43C (PfpRpInitialize.c)
 *     SmGlobalsInitialize @ 0x140850418 (SmGlobalsInitialize.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x140106FF0 (ExfWaitForRundownProtectionRelease.c)
 */

void __stdcall ExWaitForRundownProtectionRelease(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 v1; // rax

  v1 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
  if ( v1 >= 2 )
    ExfWaitForRundownProtectionRelease(RunRef, v1);
}

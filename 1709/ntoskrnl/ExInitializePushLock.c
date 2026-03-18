/*
 * XREFs of ExInitializePushLock @ 0x140025A30
 * Callers:
 *     IoRegisterPriorityCallback @ 0x140149860 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140155CBC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     DbgpInsertDebugPrintCallback @ 0x1402509F0 (DbgpInsertDebugPrintCallback.c)
 *     PfTAccessTracingInitialize @ 0x140428D4C (PfTAccessTracingInitialize.c)
 *     PfSnPrefetchSections @ 0x140440C2C (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140440ED4 (PfSnPrefetchSectionsCleanup.c)
 *     SmKmStoreAdd @ 0x1404450EC (SmKmStoreAdd.c)
 *     IoDiskIoAttributionAllocate @ 0x140445A40 (IoDiskIoAttributionAllocate.c)
 *     PfSnAsyncContextInitialize @ 0x140452EEC (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x140453AA8 (PfSnBeginTrace.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     PspIoRateEntryInitialize @ 0x14050B788 (PspIoRateEntryInitialize.c)
 *     SepCreateLogonSessionTrack @ 0x1405A784C (SepCreateLogonSessionTrack.c)
 *     PoRegisterCoalescingCallback @ 0x1405CC440 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x1405CC5FC (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x1405DC2AC (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x1405E6AE0 (ObRegisterCallbacks.c)
 *     HvpReviveDiscardedBin @ 0x1406A0FE8 (HvpReviveDiscardedBin.c)
 *     SmcCacheInitialize @ 0x14073C324 (SmcCacheInitialize.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     PfInitializeSuperfetch @ 0x14084EEE8 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x14084F43C (PfpRpInitialize.c)
 *     SmGlobalsInitialize @ 0x140850418 (SmGlobalsInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}

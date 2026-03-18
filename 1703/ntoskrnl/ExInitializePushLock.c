/*
 * XREFs of ExInitializePushLock @ 0x140023310
 * Callers:
 *     IoRegisterPriorityCallback @ 0x140155AA0 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140164854 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     DbgpInsertDebugPrintCallback @ 0x14023B144 (DbgpInsertDebugPrintCallback.c)
 *     PfTAccessTracingInitialize @ 0x14040EBB0 (PfTAccessTracingInitialize.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     SepCreateLogonSessionTrack @ 0x14045672C (SepCreateLogonSessionTrack.c)
 *     PfSnPrefetchSections @ 0x14046540C (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404656CC (PfSnPrefetchSectionsCleanup.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PspIoRateEntryInitialize @ 0x14054C92C (PspIoRateEntryInitialize.c)
 *     IoDiskIoAttributionAllocate @ 0x14054DE04 (IoDiskIoAttributionAllocate.c)
 *     PfSnBeginTrace @ 0x140565618 (PfSnBeginTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1405674B4 (PfSnAsyncContextInitialize.c)
 *     SmKmStoreAdd @ 0x140567F1C (SmKmStoreAdd.c)
 *     PoRegisterCoalescingCallback @ 0x1405A8B90 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x1405A8D44 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x1405C82C4 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x1405CEF30 (ObRegisterCallbacks.c)
 *     HvpReviveDiscardedBin @ 0x140676AA8 (HvpReviveDiscardedBin.c)
 *     SmcCacheInitialize @ 0x140704020 (SmcCacheInitialize.c)
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     PfInitializeSuperfetch @ 0x14081DA88 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x14081DFDC (PfpRpInitialize.c)
 *     SmGlobalsInitialize @ 0x14081FBB8 (SmGlobalsInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}

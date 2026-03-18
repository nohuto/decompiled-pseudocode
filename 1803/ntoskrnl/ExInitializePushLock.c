/*
 * XREFs of ExInitializePushLock @ 0x1400BA070
 * Callers:
 *     IoRegisterPriorityCallback @ 0x140172050 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018299C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     DbgpInsertDebugPrintCallback @ 0x140286450 (DbgpInsertDebugPrintCallback.c)
 *     PfTAccessTracingInitialize @ 0x1404781D8 (PfTAccessTracingInitialize.c)
 *     PfSnPrefetchSections @ 0x14048F0B8 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14048F364 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnBeginTrace @ 0x140494618 (PfSnBeginTrace.c)
 *     CmpHiveInitialize @ 0x140497F38 (CmpHiveInitialize.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     SmKmStoreAdd @ 0x14052B218 (SmKmStoreAdd.c)
 *     PspIoRateEntryInitialize @ 0x140530244 (PspIoRateEntryInitialize.c)
 *     SepCreateLogonSessionTrack @ 0x14056A56C (SepCreateLogonSessionTrack.c)
 *     PfSnAsyncContextInitialize @ 0x140578264 (PfSnAsyncContextInitialize.c)
 *     IoDiskIoAttributionAllocate @ 0x14057D838 (IoDiskIoAttributionAllocate.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     PoRegisterCoalescingCallback @ 0x140628420 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140628618 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x140644714 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x14064D220 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x14079F328 (SmcCacheInitialize.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 *     PfInitializeSuperfetch @ 0x1408C032C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x1408C087C (PfpRpInitialize.c)
 *     SmGlobalsInitialize @ 0x1408C17A4 (SmGlobalsInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x1408C8D9C (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}

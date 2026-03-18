/*
 * XREFs of IoDiskIoAttributionDereference @ 0x1400079D0
 * Callers:
 *     IoNotifyQuotaState @ 0x1400072C0 (IoNotifyQuotaState.c)
 *     IoGetIoRateControl @ 0x140007660 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400077E4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x140007860 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x14000A344 (MmUpdateSectionIoAttribution.c)
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     CcPerformReadAhead @ 0x140020ED4 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1400215D4 (CcCompleteAsyncRead.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     CcCopyReadEx @ 0x14007AB90 (CcCopyReadEx.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400B95F8 (IoSetDiskIoAttributionOnProcess.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140129D90 (MiCheckAndUpdateIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x140445410 (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x1404459B4 (PspRemoveIoAttribution.c)
 *     PspIoRateEntryDeactivate @ 0x140445AF8 (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall IoDiskIoAttributionDereference(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 176);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}

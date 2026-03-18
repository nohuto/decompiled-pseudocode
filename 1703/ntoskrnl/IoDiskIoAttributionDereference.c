/*
 * XREFs of IoDiskIoAttributionDereference @ 0x1400AE074
 * Callers:
 *     IoNotifyQuotaState @ 0x140004710 (IoNotifyQuotaState.c)
 *     CcPerformReadAhead @ 0x1400215AC (CcPerformReadAhead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140023948 (MiCheckAndUpdateIoAttribution.c)
 *     IoGetIoRateControl @ 0x140025760 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14002589C (IopAcquireReferencesFromIoAttributionHandle.c)
 *     CcCompleteAsyncRead @ 0x14002887C (CcCompleteAsyncRead.c)
 *     MmUpdateSectionIoAttribution @ 0x140029EBC (MmUpdateSectionIoAttribution.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400622A8 (IoSetDiskIoAttributionOnProcess.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     CcCopyReadEx @ 0x14009D6C0 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     IoRecordIoAttribution @ 0x1400ADF00 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     PspIoRateEntryActivate @ 0x14041EE10 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x14041EEF8 (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x14054DD78 (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
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
    v5 = *(_QWORD *)(a1 + 160);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}

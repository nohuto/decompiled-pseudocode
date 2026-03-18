/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14008E6C8
 * Callers:
 *     IoNotifyQuotaState @ 0x1400020D0 (IoNotifyQuotaState.c)
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x14006F93C (IoSetDiskIoAttributionOnProcess.c)
 *     IoRecordIoAttribution @ 0x14008D020 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     IoGetIoRateControl @ 0x1400A4150 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400A42D4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     MmUpdateSectionIoAttribution @ 0x1400C0444 (MmUpdateSectionIoAttribution.c)
 *     CcCompleteAsyncRead @ 0x1400C1278 (CcCompleteAsyncRead.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     CcCopyReadEx @ 0x14011D5C0 (CcCopyReadEx.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1401379B4 (MiCheckAndUpdateIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x140489D84 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x140489E6C (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x14057CDC4 (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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

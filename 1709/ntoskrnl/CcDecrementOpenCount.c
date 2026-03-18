/*
 * XREFs of CcDecrementOpenCount @ 0x14006365C
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x14000DA50 (CcNotifyOfMappedWriteComplete.c)
 *     CcPerformReadAhead @ 0x140020ED4 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1400215D4 (CcCompleteAsyncRead.c)
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWrite @ 0x1400EF1C8 (CcNotifyOfMappedWrite.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x1400F2BA0 (CcGetFlushedValidData.c)
 *     CcMdlWriteComplete2 @ 0x14012F234 (CcMdlWriteComplete2.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1401E20B0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14001E4C4 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1)
{
  __int64 Partition; // rax
  __int64 v3; // rdi
  int v4; // ecx
  char v5; // r8
  char v6; // dl
  __int64 v7; // r11

  --*(_DWORD *)(a1 + 4);
  --*(_DWORD *)(a1 + 536);
  Partition = CcGetPartition(a1);
  v3 = Partition;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 528) + 593LL) = 1;
    v4 = *(_DWORD *)(a1 + 152);
    if ( (v4 & 0x10000) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 112) )
        CcInsertIntoDirtySharedCacheMapList(a1);
      v5 = 1;
      v6 = 1;
      goto LABEL_9;
    }
    if ( !*(_DWORD *)(a1 + 112) && (v4 & 0x20) == 0 )
    {
      CcInsertIntoDirtySharedCacheMapList(a1);
      v6 = v7 != 0;
      v5 = 0;
LABEL_9:
      LOBYTE(Partition) = CcScheduleLazyWriteScan(v3, v6, v5);
    }
  }
  return Partition;
}

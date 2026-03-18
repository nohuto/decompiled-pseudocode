/*
 * XREFs of CcDecrementOpenCount @ 0x1400DF768
 * Callers:
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     CcGetFlushedValidData @ 0x14004DC70 (CcGetFlushedValidData.c)
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     CcCompleteAsyncRead @ 0x1400C1278 (CcCompleteAsyncRead.c)
 *     CcMdlWriteComplete2 @ 0x1400CB7B4 (CcMdlWriteComplete2.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1400D0618 (CcNotifyOfMappedWriteComplete.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 *     CcNotifyOfMappedWrite @ 0x140133730 (CcNotifyOfMappedWrite.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x140220CC0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400DADCC (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 */

char __fastcall CcDecrementOpenCount(__int64 a1)
{
  __int64 Partition; // rax
  __int64 v3; // rdi
  int v4; // r8d
  int v5; // ecx
  __int64 v6; // r11
  char v7; // dl
  char v8; // r8

  --*(_DWORD *)(a1 + 4);
  Partition = CcGetPartition(a1);
  v3 = Partition;
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 528) + 593LL) = 1;
    v4 = *(_DWORD *)(a1 + 152);
    v5 = *(_DWORD *)(a1 + 112);
    if ( (v4 & 0x10000) != 0 )
    {
      if ( !v5 )
        CcInsertIntoDirtySharedCacheMapList(a1);
      v8 = 1;
      v7 = 1;
    }
    else
    {
      if ( v5 || (v4 & 0x20) != 0 )
        return Partition;
      CcInsertIntoDirtySharedCacheMapList(a1);
      v7 = v6 != 0;
      v8 = 0;
    }
    LOBYTE(Partition) = CcScheduleLazyWriteScan(v3, v7, v8);
  }
  return Partition;
}

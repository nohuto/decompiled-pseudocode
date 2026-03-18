/*
 * XREFs of CcDecrementOpenCount @ 0x1400AB490
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x140015578 (CcNotifyOfMappedWriteComplete.c)
 *     CcPerformReadAhead @ 0x1400215AC (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x14002887C (CcCompleteAsyncRead.c)
 *     CcMdlWriteComplete2 @ 0x140036100 (CcMdlWriteComplete2.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 *     CcGetFlushedValidData @ 0x14011C7E0 (CcGetFlushedValidData.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     CcMdlWriteAbort @ 0x1401DE3F0 (CcMdlWriteAbort.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140119F6C (CcInsertIntoDirtySharedCacheMapList.c)
 */

__int64 __fastcall CcDecrementOpenCount(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  char v7; // r11

  v3 = (*(_DWORD *)(a1 + 4))-- == 1;
  v4 = *(_QWORD *)(a1 + 528);
  if ( v3 )
  {
    result = 0LL;
    *(_BYTE *)(v4 + 665) = 1;
    v6 = *(unsigned int *)(a1 + 152);
    if ( (v6 & 0x10000) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 112) )
        CcInsertIntoDirtySharedCacheMapList(a1);
      LOBYTE(a3) = 1;
      LOBYTE(v6) = 1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 112) || (v6 & 0x20) != 0 )
        return result;
      CcInsertIntoDirtySharedCacheMapList(a1);
      a3 = 0LL;
      LOBYTE(v6) = v7;
    }
    return CcScheduleLazyWriteScan(v4, v6, a3);
  }
  return result;
}

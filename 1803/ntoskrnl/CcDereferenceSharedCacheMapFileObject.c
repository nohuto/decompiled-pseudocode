/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x1400DB2B4
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1400C52EC (CcIsFatalWriteError.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     CcUnmapAndPurge @ 0x1400DB23C (CcUnmapAndPurge.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcGetDirtyPagesHelper @ 0x1400E1FF0 (CcGetDirtyPagesHelper.c)
 *     CcPerfLogFlushSection @ 0x14017CC58 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x14017CD38 (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14017D810 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1402203F0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x140593090 (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall CcDereferenceSharedCacheMapFileObject(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 96);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDelete((PVOID)a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}

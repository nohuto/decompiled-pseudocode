/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x14002034C
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     CcUnmapAndPurge @ 0x1400202D4 (CcUnmapAndPurge.c)
 *     CcGetDirtyPagesHelper @ 0x140067C40 (CcGetDirtyPagesHelper.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     CcPurgeAndClearCacheSection @ 0x1400F208C (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x140126240 (CcIsFatalWriteError.c)
 *     CcUnpinRepinnedBcb @ 0x1401E0CF0 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushCache @ 0x1401E27B0 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401E28A4 (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1401E2C38 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnmapVacb @ 0x14056F9B0 (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
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

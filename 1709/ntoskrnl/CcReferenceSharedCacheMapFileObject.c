/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x140020390
 * Callers:
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
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400203BC (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 result; // rax

  result = ObFastReferenceObject(a1 + 96);
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}

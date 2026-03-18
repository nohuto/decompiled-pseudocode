/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1400EAAAC
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1400C52EC (CcIsFatalWriteError.c)
 *     CcUnmapAndPurge @ 0x1400DB23C (CcUnmapAndPurge.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcGetDirtyPagesHelper @ 0x1400E1FF0 (CcGetDirtyPagesHelper.c)
 *     CcPerfLogFlushSection @ 0x14017CC58 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x14017CD38 (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14017D810 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1402203F0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x140593090 (CcUnmapVacb.c)
 * Callees:
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400EAAD8 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 result; // rax

  result = ObFastReferenceObject(a1 + 96);
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}

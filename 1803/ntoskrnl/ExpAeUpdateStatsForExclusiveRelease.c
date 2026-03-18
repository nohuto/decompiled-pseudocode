/*
 * XREFs of ExpAeUpdateStatsForExclusiveRelease @ 0x1400B5C0C
 * Callers:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14015E8D0 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpAeUpdateStatsForExclusiveRelease(_DWORD *a1)
{
  if ( (*a1 & 0xF0000u) >= 0xF0000 )
    return 0;
  *a1 += 0x10000;
  return 1;
}

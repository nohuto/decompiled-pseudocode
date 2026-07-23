/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x1800829AC
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180082920 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180087DC0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180082B40 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}

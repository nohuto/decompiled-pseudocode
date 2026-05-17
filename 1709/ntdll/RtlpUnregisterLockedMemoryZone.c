/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x1800829AC
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180082920 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180087DC0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180082B40 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall RtlpUnregisterLockedMemoryZone(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryZoneLock, a2, a3, a4);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}

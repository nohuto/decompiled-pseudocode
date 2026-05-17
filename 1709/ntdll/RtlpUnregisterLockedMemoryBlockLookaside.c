/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800829E4
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800828C0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180087D60 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180082B40 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall RtlpUnregisterLockedMemoryBlockLookaside(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 (__fastcall **v5)(); // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryBlockLookasideLock, a2, a3, a4);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v5 = RtlpMemoryBlockLookasideCriticalRoutines;
    v6 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v5++);
      --v6;
    }
    while ( v6 );
  }
  return RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}

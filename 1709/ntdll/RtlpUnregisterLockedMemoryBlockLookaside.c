/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800829E4
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800828C0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180087D60 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180082B40 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryBlockLookaside()
{
  PVOID *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v0 = (PVOID *)RtlpMemoryBlockLookasideCriticalRoutines;
    v1 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v0++);
      --v1;
    }
    while ( v1 );
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}

/*
 * XREFs of RtlpRegisterLockedMemoryZone @ 0x1800827A4
 * Callers:
 *     RtlLockMemoryZone @ 0x180082700 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlLockModuleSection @ 0x180082A40 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180082B40 (RtlUnlockModuleSection.c)
 */

__int64 RtlpRegisterLockedMemoryZone()
{
  NTSTATUS v0; // esi
  int v1; // eax
  int v3; // ebx
  PVOID *v4; // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  v1 = RtlpLockedMemoryZoneCount;
  if ( RtlpLockedMemoryZoneCount )
  {
LABEL_2:
    RtlpLockedMemoryZoneCount = v1 + 1;
  }
  else
  {
    v3 = 0;
    v4 = (PVOID *)&RtlpMemoryZoneCriticalRoutines;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
      ++v3;
      ++v4;
      if ( v3 )
      {
        v1 = RtlpLockedMemoryZoneCount;
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return (unsigned int)v0;
}

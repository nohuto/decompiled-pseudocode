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

__int64 __fastcall RtlpRegisterLockedMemoryZone(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // esi
  int v5; // eax
  int v7; // ebx
  __int64 (__fastcall **v8)(); // rdi

  v4 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryZoneLock, a2, a3, a4);
  v5 = RtlpLockedMemoryZoneCount;
  if ( RtlpLockedMemoryZoneCount )
  {
LABEL_2:
    RtlpLockedMemoryZoneCount = v5 + 1;
  }
  else
  {
    v7 = 0;
    v8 = &RtlpMemoryZoneCriticalRoutines;
    while ( 1 )
    {
      v4 = RtlLockModuleSection(*v8);
      if ( v4 < 0 )
        break;
      ++v7;
      ++v8;
      if ( v7 )
      {
        v5 = RtlpLockedMemoryZoneCount;
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return (unsigned int)v4;
}

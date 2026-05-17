/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x180082690
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlLockMemoryZone @ 0x180082700 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180082830 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180082920 (RtlUnlockMemoryZone.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  int locked; // edi
  __int64 v7; // rcx

  locked = 0;
  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 8));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 16));
    if ( locked < 0 )
    {
      v7 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      locked = RtlpRegisterLockedMemoryBlockLookaside();
      if ( locked >= 0 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      v7 = *(_QWORD *)(a1 + 16);
    }
    RtlUnlockMemoryZone(v7);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return (unsigned int)locked;
}

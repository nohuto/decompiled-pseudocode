/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x180087D60
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x180100DB4 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800829E4 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180087DC0 (RtlDestroyMemoryZone.c)
 */

NTSTATUS __cdecl RtlDestroyMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  void *v1; // rdi
  void *v3; // rsi
  int v4; // ebx
  NTSTATUS result; // eax

  v1 = (void *)*((_QWORD *)MemoryBlockLookaside + 2);
  v3 = (void *)*((_QWORD *)MemoryBlockLookaside + 1);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  if ( *((_DWORD *)MemoryBlockLookaside + 11) )
    RtlpUnregisterLockedMemoryBlockLookaside();
  v4 = RtlDestroyMemoryZone(v1);
  result = RtlDestroyMemoryZone(v3);
  if ( v4 < 0 )
    return v4;
  return result;
}

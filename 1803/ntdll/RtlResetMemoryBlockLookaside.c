/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x1800E4A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlInitializeSListHead_0 @ 0x180073A34 (RtlInitializeSListHead_0.c)
 *     RtlResetMemoryZone @ 0x1800E4A60 (RtlResetMemoryZone.c)
 */

NTSTATUS __cdecl RtlResetMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  unsigned int i; // ebx
  NTSTATUS v3; // ebx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  for ( i = 0; i < *((_DWORD *)MemoryBlockLookaside + 10); ++i )
    RtlInitializeSListHead_0((PSLIST_HEADER)MemoryBlockLookaside + 2 * i + 3);
  v3 = RtlResetMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v3;
}

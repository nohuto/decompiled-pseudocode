/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x180049220
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800491C0 @ 0x1800491C0 (sub_1800491C0.c)
 *     RtlUnlockMemoryZone @ 0x180049280 (RtlUnlockMemoryZone.c)
 */

NTSTATUS __cdecl RtlUnlockMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  int v2; // ecx
  NTSTATUS v3; // edi
  int v4; // ecx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  v2 = *((_DWORD *)MemoryBlockLookaside + 11);
  v3 = 0;
  if ( v2 )
  {
    v4 = v2 - 1;
    *((_DWORD *)MemoryBlockLookaside + 11) = v4;
    if ( !v4 )
    {
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
      sub_1800491C0();
    }
  }
  else
  {
    v3 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v3;
}

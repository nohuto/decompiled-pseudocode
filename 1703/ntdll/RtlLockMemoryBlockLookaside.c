/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x1800838A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLockMemoryZone @ 0x180083910 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180083AB0 (RtlUnlockMemoryZone.c)
 *     sub_180083B74 @ 0x180083B74 (sub_180083B74.c)
 */

NTSTATUS __cdecl RtlLockMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  int v2; // edi
  void *v4; // rcx

  v2 = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  if ( *((_DWORD *)MemoryBlockLookaside + 11) )
    goto LABEL_5;
  v2 = RtlLockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
  if ( v2 >= 0 )
  {
    v2 = RtlLockMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
    if ( v2 < 0 )
    {
      v4 = (void *)*((_QWORD *)MemoryBlockLookaside + 1);
    }
    else
    {
      v2 = sub_180083B74();
      if ( v2 >= 0 )
      {
LABEL_5:
        ++*((_DWORD *)MemoryBlockLookaside + 11);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
      v4 = (void *)*((_QWORD *)MemoryBlockLookaside + 2);
    }
    RtlUnlockMemoryZone(v4);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v2;
}

/*
 * XREFs of RtlSetSearchPathMode @ 0x1800885D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180088670 (RtlpInvalidatePathCache.c)
 */

NTSTATUS __cdecl RtlSetSearchPathMode(ULONG Flags)
{
  NTSTATUS v2; // ebx
  void *v3; // rdi

  if ( (Flags & 0xFFFE7FFE) != 0 )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    if ( (Flags & 0x10000) == 0 )
      goto LABEL_4;
    return -1073741811;
  }
  if ( (Flags & 0x18000) != 0x10000 )
    return -1073741811;
LABEL_4:
  RtlAcquireSRWLockExclusive(&stru_180160300);
  if ( (RtlpSearchPathMode & 0x8000) == 0 || (Flags & 0x8000) != 0 )
  {
    RtlpSearchPathMode = Flags;
    v2 = 0;
  }
  else
  {
    v2 = -1073741790;
  }
  RtlReleaseSRWLockExclusive(&stru_180160300);
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v3 = (void *)RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v2;
}

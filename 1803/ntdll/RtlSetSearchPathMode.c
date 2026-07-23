/*
 * XREFs of RtlSetSearchPathMode @ 0x180003C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18008367C @ 0x18008367C (sub_18008367C.c)
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
  RtlAcquireSRWLockExclusive(&stru_18015D270);
  if ( (dword_18015CFE4 & 0x8000) == 0 || (Flags & 0x8000) != 0 )
  {
    dword_18015CFE4 = Flags;
    v2 = 0;
  }
  else
  {
    v2 = -1073741790;
  }
  RtlReleaseSRWLockExclusive(&stru_18015D270);
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015D3D8);
    v3 = (void *)sub_18008367C(&unk_18015B2D8);
    RtlReleaseSRWLockExclusive(&stru_18015D3D8);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v2;
}

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

__int64 __fastcall RtlSetSearchPathMode(int a1)
{
  int v2; // ebx
  __int64 v3; // rdi

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 0x10000) == 0 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( (a1 & 0x18000) != 0x10000 )
    return 3221225485LL;
LABEL_4:
  RtlAcquireSRWLockExclusive(&unk_18015D270);
  if ( (dword_18015CFE4 & 0x8000) == 0 || (a1 & 0x8000) != 0 )
  {
    dword_18015CFE4 = a1;
    v2 = 0;
  }
  else
  {
    v2 = -1073741790;
  }
  RtlReleaseSRWLockExclusive(&unk_18015D270);
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&unk_18015D3D8);
    v3 = sub_18008367C(&unk_18015B2D8);
    RtlReleaseSRWLockExclusive(&unk_18015D3D8);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  }
  return (unsigned int)v2;
}

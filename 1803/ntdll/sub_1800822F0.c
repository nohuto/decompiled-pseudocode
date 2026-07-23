/*
 * XREFs of sub_1800822F0 @ 0x1800822F0
 * Callers:
 *     sub_18001EEE0 @ 0x18001EEE0 (sub_18001EEE0.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_1800822F0(_QWORD *a1)
{
  __int64 v2; // rbx
  struct _PEB *v3; // rax
  ULONG NumberOfProcessors; // esi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rax

  v2 = a1[4] | 0x7D0LL;
  v3 = NtCurrentPeb();
  if ( (a1[4] & 0x2FFFFFFLL) != 0x2000000 )
    v2 = a1[4];
  NumberOfProcessors = v3->NumberOfProcessors;
  RtlAcquireSRWLockExclusive(&stru_18015D258);
  v5 = *a1 + 16LL;
  if ( !*(_QWORD *)v5 )
  {
    v6 = (unsigned int)v2 & 0xFF000000;
    if ( NumberOfProcessors != 1 )
      v6 = v2;
    a1[4] = v6;
    v7 = (__int64 *)off_180156630[0];
    if ( *(_UNKNOWN ***)off_180156630[0] != &off_180156628 )
      __fastfail(3u);
    *(_QWORD *)v5 = &off_180156628;
    *(_QWORD *)(v5 + 8) = v7;
    *v7 = v5;
    off_180156630[0] = (_UNKNOWN **)v5;
  }
  RtlReleaseSRWLockExclusive(&stru_18015D258);
}

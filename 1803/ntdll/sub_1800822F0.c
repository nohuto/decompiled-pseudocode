/*
 * XREFs of sub_1800822F0 @ 0x1800822F0
 * Callers:
 *     sub_18001EEE0 @ 0x18001EEE0 (sub_18001EEE0.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1800822F0(_QWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rbx
  struct _PEB *v6; // rax
  unsigned int NumberOfProcessors; // esi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rax

  v5 = a1[4] | 0x7D0LL;
  v6 = NtCurrentPeb();
  if ( (a1[4] & 0x2FFFFFFLL) != 0x2000000 )
    v5 = a1[4];
  NumberOfProcessors = v6->NumberOfProcessors;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D258, a2, a3, a4);
  v8 = *a1 + 16LL;
  if ( !*(_QWORD *)v8 )
  {
    v9 = (unsigned int)v5 & 0xFF000000;
    if ( NumberOfProcessors != 1 )
      v9 = v5;
    a1[4] = v9;
    v10 = (__int64 *)off_180156630[0];
    if ( *(_UNKNOWN ***)off_180156630[0] != &off_180156628 )
      __fastfail(3u);
    *(_QWORD *)v8 = &off_180156628;
    *(_QWORD *)(v8 + 8) = v10;
    *v10 = v8;
    off_180156630[0] = (_UNKNOWN **)v8;
  }
  return RtlReleaseSRWLockExclusive(&qword_18015D258);
}

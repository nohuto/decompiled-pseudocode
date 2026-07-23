/*
 * XREFs of sub_1800877D8 @ 0x1800877D8
 * Callers:
 *     sub_18002FA10 @ 0x18002FA10 (sub_18002FA10.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_1800877D8(_QWORD *a1)
{
  __int64 v1; // rbx
  ULONG NumberOfProcessors; // esi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rax

  v1 = a1[4];
  if ( (v1 & 0x2FFFFFF) == 0x2000000 )
    v1 |= 0x7D0uLL;
  NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
  RtlAcquireSRWLockExclusive(&stru_18015C1F8);
  v4 = *a1 + 16LL;
  if ( !*(_QWORD *)v4 )
  {
    v5 = (unsigned int)v1 & 0xFF000000;
    if ( NumberOfProcessors != 1 )
      v5 = v1;
    a1[4] = v5;
    v6 = (__int64 *)off_180155628[0];
    if ( *(_UNKNOWN ***)off_180155628[0] != &off_180155620 )
      __fastfail(3u);
    *(_QWORD *)v4 = &off_180155620;
    *(_QWORD *)(v4 + 8) = v6;
    *v6 = v4;
    off_180155628[0] = (_UNKNOWN *)v4;
  }
  RtlReleaseSRWLockExclusive(&stru_18015C1F8);
}

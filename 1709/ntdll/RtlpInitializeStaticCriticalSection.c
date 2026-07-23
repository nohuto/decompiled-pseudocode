/*
 * XREFs of RtlpInitializeStaticCriticalSection @ 0x180086E70
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x180047CA0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpInitializeStaticCriticalSection(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned int NumberOfProcessors; // esi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rax

  v1 = a1[4];
  if ( (v1 & 0x2FFFFFF) == 0x2000000 )
    v1 |= 0x7D0uLL;
  NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
  RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
  v4 = *a1 + 16LL;
  if ( !*(_QWORD *)v4 )
  {
    v5 = (unsigned int)v1 & 0xFF000000;
    if ( NumberOfProcessors != 1 )
      v5 = v1;
    a1[4] = v5;
    v6 = (__int64 *)off_180159668[0];
    if ( *(_UNKNOWN ***)off_180159668[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v4 = &RtlCriticalSectionList;
    *(_QWORD *)(v4 + 8) = v6;
    *v6 = v4;
    off_180159668[0] = (_UNKNOWN **)v4;
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
}

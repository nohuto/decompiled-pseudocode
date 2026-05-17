/*
 * XREFs of RtlpInitializeStaticCriticalSection @ 0x180086E70
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x180047CA0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpInitializeStaticCriticalSection(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned int NumberOfProcessors; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rax

  v4 = a1[4];
  if ( (v4 & 0x2FFFFFF) == 0x2000000 )
    v4 |= 0x7D0uLL;
  NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, a2, a3, a4);
  v7 = *a1 + 16LL;
  if ( !*(_QWORD *)v7 )
  {
    v8 = (unsigned int)v4 & 0xFF000000;
    if ( NumberOfProcessors != 1 )
      v8 = v4;
    a1[4] = v8;
    v9 = (__int64 *)off_180159668[0];
    if ( *(_UNKNOWN ***)off_180159668[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v7 = &RtlCriticalSectionList;
    *(_QWORD *)(v7 + 8) = v9;
    *v9 = v7;
    off_180159668[0] = (_UNKNOWN **)v7;
  }
  return RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
}

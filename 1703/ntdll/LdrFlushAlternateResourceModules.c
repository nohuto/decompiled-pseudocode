/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x18008E170
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     sub_180108F48 @ 0x180108F48 (sub_180108F48.c)
 */

char LdrFlushAlternateResourceModules()
{
  char v0; // si
  unsigned int i; // ebx
  __int64 v2; // rdi
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  bool v7; // [rsp+50h] [rbp+8h]

  v0 = 1;
  v7 = 1;
  RtlAcquireSRWLockExclusive(&qword_18015C3B0);
  if ( dword_18015A268 )
  {
    for ( i = 0; i < dword_18015A268; ++i )
    {
      v2 = qword_18015A260 + 72LL * i;
      v3 = *(_QWORD *)(v2 + 32);
      if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && *(_DWORD *)(v2 + 56) == -1 )
      {
        v4 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v2 + 64) == -1073741799 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
        else
          ZwUnmapViewOfSection(-1LL, v4);
        *(_QWORD *)(v2 + 32) = 0LL;
        v5 = *(_QWORD *)(v2 + 40);
        if ( v5 )
        {
          ZwClose(v5);
          *(_QWORD *)(v2 + 40) = 0LL;
        }
      }
    }
    if ( (unsigned __int64)(qword_18015A258 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v7 = (unsigned int)sub_180108F48() != 0;
      qword_18015A258 = 0LL;
      word_18015BF84 = 0;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, qword_18015A260);
    qword_18015A260 = 0LL;
    dword_18015A268 = 0;
    dword_18015A26C = 0;
    v0 = v7;
  }
  RtlReleaseSRWLockExclusive(&qword_18015C3B0);
  return v0;
}

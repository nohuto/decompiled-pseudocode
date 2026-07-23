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
  char *v2; // rdi
  __int64 v3; // rdx
  void *v4; // rdx
  void *v5; // rcx
  bool v7; // [rsp+50h] [rbp+8h]

  v0 = 1;
  v7 = 1;
  RtlAcquireSRWLockExclusive(&stru_18015C3B0);
  if ( dword_18015A268 )
  {
    for ( i = 0; i < dword_18015A268; ++i )
    {
      v2 = (char *)BaseAddress + 72 * i;
      v3 = *((_QWORD *)v2 + 4);
      if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && *((_DWORD *)v2 + 14) == -1 )
      {
        v4 = (void *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( *((_DWORD *)v2 + 16) == -1073741799 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        else
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4);
        *((_QWORD *)v2 + 4) = 0LL;
        v5 = (void *)*((_QWORD *)v2 + 5);
        if ( v5 )
        {
          ZwClose(v5);
          *((_QWORD *)v2 + 5) = 0LL;
        }
      }
    }
    if ( (char *)qword_18015A258 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v7 = (unsigned int)sub_180108F48(qword_18015A258) != 0;
      qword_18015A258 = 0LL;
      word_18015BF84 = 0;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
    dword_18015A268 = 0;
    dword_18015A26C = 0;
    v0 = v7;
  }
  RtlReleaseSRWLockExclusive(&stru_18015C3B0);
  return v0;
}

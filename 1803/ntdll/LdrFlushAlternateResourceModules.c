/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x1800876B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 */

char LdrFlushAlternateResourceModules()
{
  unsigned int i; // ebx
  char *v1; // rdi
  __int64 v2; // rdx
  void *v3; // rdx
  void *v4; // rcx

  RtlAcquireSRWLockExclusive(&stru_18015D3E8);
  if ( dword_18015B2A0 )
  {
    for ( i = 0; i < dword_18015B2A0; ++i )
    {
      v1 = (char *)BaseAddress + 64 * (unsigned __int64)i;
      v2 = *((_QWORD *)v1 + 4);
      if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v3 = (void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( *((_DWORD *)v1 + 14) == -1073741799 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
        else
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
        *((_QWORD *)v1 + 4) = 0LL;
        v4 = (void *)*((_QWORD *)v1 + 5);
        if ( v4 )
        {
          ZwClose(v4);
          *((_QWORD *)v1 + 5) = 0LL;
        }
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
    dword_18015B2A0 = 0;
    dword_18015B2A4 = 0;
  }
  RtlReleaseSRWLockExclusive(&stru_18015D3E8);
  return 1;
}

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

char __fastcall LdrFlushAlternateResourceModules(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3E8, a2, a3, a4);
  if ( dword_18015B2A0 )
  {
    for ( i = 0; i < dword_18015B2A0; ++i )
    {
      v5 = qword_18015B298 + ((unsigned __int64)i << 6);
      v6 = *(_QWORD *)(v5 + 32);
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v5 + 56) == -1073741799 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
        else
          ZwUnmapViewOfSection(-1LL);
        *(_QWORD *)(v5 + 32) = 0LL;
        v8 = *(_QWORD *)(v5 + 40);
        if ( v8 )
        {
          ZwClose(v8);
          *(_QWORD *)(v5 + 40) = 0LL;
        }
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, qword_18015B298);
    qword_18015B298 = 0LL;
    dword_18015B2A0 = 0;
    dword_18015B2A4 = 0;
  }
  RtlReleaseSRWLockExclusive(&qword_18015D3E8);
  return 1;
}

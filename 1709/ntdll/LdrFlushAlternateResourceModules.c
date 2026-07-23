/*
 * XREFs of LdrFlushAlternateResourceModules @ 0x18008BB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     ResCCloseRuntimeView @ 0x18010BA90 (ResCCloseRuntimeView.c)
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
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v2 = (char *)AlternateResourceModules + 72 * i;
      v3 = *((_QWORD *)v2 + 4);
      if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && *((_DWORD *)v2 + 14) == -1 )
      {
        v4 = (void *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( *((_DWORD *)v2 + 16) == -1073741799 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        else
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4);
        *((_QWORD *)v2 + 4) = 0LL;
        v5 = (void *)*((_QWORD *)v2 + 5);
        if ( v5 )
        {
          NtClose(v5);
          *((_QWORD *)v2 + 5) = 0LL;
        }
      }
    }
    if ( (char *)ResRuntimeView - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v7 = (unsigned int)ResCCloseRuntimeView(ResRuntimeView) != 0;
      ResRuntimeView = 0LL;
      CMFQueueRear = 0;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
    v0 = v7;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v0;
}

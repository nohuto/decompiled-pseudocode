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

char __fastcall LdrFlushAlternateResourceModules(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  char v4; // si
  __int64 v5; // r8
  unsigned int i; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  void *v10; // rcx
  bool v12; // [rsp+50h] [rbp+8h]

  v4 = 1;
  v12 = 1;
  RtlAcquireSRWLockExclusive((unsigned __int64)&MuiCacheSWRLock, a2, a3, a4);
  if ( AlternateResourceModuleCount )
  {
    for ( i = 0; i < AlternateResourceModuleCount; ++i )
    {
      v7 = AlternateResourceModules + 72LL * i;
      v8 = *(_QWORD *)(v7 + 32);
      if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && *(_DWORD *)(v7 + 56) == -1 )
      {
        v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *(_DWORD *)(v7 + 64) == -1073741799 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
        else
          NtUnmapViewOfSection(-1LL, v9, v5);
        *(_QWORD *)(v7 + 32) = 0LL;
        v10 = *(void **)(v7 + 40);
        if ( v10 )
        {
          NtClose(v10);
          *(_QWORD *)(v7 + 40) = 0LL;
        }
      }
    }
    if ( (unsigned __int64)(ResRuntimeView - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v12 = (unsigned int)ResCCloseRuntimeView() != 0;
      ResRuntimeView = 0LL;
      CMFQueueRear = 0;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, AlternateResourceModules);
    AlternateResourceModules = 0LL;
    AlternateResourceModuleCount = 0;
    AltResMemBlockCount = 0;
    v4 = v12;
  }
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}

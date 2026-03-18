/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x140285B60
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x140778DF0 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // esi
  volatile signed __int64 *v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  void *v10; // rdi

  v2 = 0;
  v3 = (volatile signed __int64 *)BugCheckParameter2;
  if ( a2 )
  {
    v4 = (__int64 *)(BugCheckParameter2 + 8);
    v5 = a2;
    do
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
      v9 = *v4;
      if ( (*v4 & 1) != 0 )
      {
        if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v3, v6, v7, v8);
        KeAbPostRelease((ULONG_PTR)v3);
      }
      else
      {
        *v4 = 1LL;
        v10 = (void *)(v9 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v3, v6, v7, v8);
        KeAbPostRelease((ULONG_PTR)v3);
        if ( v10 )
        {
          ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          ++v2;
        }
      }
      v3 += 2;
      v4 += 2;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}

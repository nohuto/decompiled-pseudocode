/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x14023A820
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x1406DE790 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // esi
  volatile signed __int64 *v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rdi
  void *v7; // rdi

  v2 = 0;
  v3 = (volatile signed __int64 *)BugCheckParameter2;
  if ( a2 )
  {
    v4 = (__int64 *)(BugCheckParameter2 + 8);
    v5 = a2;
    do
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
      v6 = *v4;
      if ( (*v4 & 1) != 0 )
      {
        if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v3);
        KeAbPostRelease((ULONG_PTR)v3);
      }
      else
      {
        *v4 = 1LL;
        v7 = (void *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v3);
        KeAbPostRelease((ULONG_PTR)v3);
        if ( v7 )
        {
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
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

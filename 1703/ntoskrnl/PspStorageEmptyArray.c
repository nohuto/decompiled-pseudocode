/*
 * XREFs of PspStorageEmptyArray @ 0x1406E4C34
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x14054CB78 (PspJobDeleteStorageArrays.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArray(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // edi
  volatile signed __int64 *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // r14
  void *v6; // rbp

  v2 = 0;
  v3 = (volatile signed __int64 *)BugCheckParameter2;
  if ( a2 )
  {
    v4 = (_QWORD *)(BugCheckParameter2 + 8);
    v5 = a2;
    do
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
      v6 = (void *)(*v4 & 0xFFFFFFFFFFFFFFFEuLL);
      *v4 = 1LL;
      if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
      KeAbPostRelease((ULONG_PTR)v3);
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        ++v2;
      }
      v3 += 2;
      v4 += 2;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}

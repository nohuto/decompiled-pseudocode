/*
 * XREFs of PspStorageEmptyArray @ 0x140780844
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x14052F740 (PspJobDeleteStorageArrays.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspStorageEmptyArray(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // ebx
  volatile signed __int64 *v3; // rdi
  _QWORD *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rsi
  unsigned int v10; // ecx

  v2 = 0;
  v3 = (volatile signed __int64 *)BugCheckParameter2;
  if ( a2 )
  {
    v4 = (_QWORD *)(BugCheckParameter2 + 8);
    v5 = a2;
    do
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
      v9 = (void *)(*v4 & 0xFFFFFFFFFFFFFFFEuLL);
      *v4 = 1LL;
      if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3, v6, v7, v8);
      KeAbPostRelease((ULONG_PTR)v3);
      if ( v9 )
        ObfDereferenceObject(v9);
      v10 = v2 + 1;
      if ( !v9 )
        v10 = v2;
      v3 += 2;
      v4 += 2;
      v2 = v10;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}

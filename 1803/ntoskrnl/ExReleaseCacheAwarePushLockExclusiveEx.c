/*
 * XREFs of ExReleaseCacheAwarePushLockExclusiveEx @ 0x1402B9400
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

char __fastcall ExReleaseCacheAwarePushLockExclusiveEx(
        volatile signed __int64 **BugCheckParameter2,
        __int64 BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  _UNKNOWN **v4; // rax
  char v5; // si
  unsigned __int64 v7; // rbp
  volatile signed __int64 **v8; // rdi
  volatile signed __int64 *v9; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v7 = (unsigned __int64)(BugCheckParameter2 + 32);
  v8 = BugCheckParameter2;
  if ( BugCheckParameter2 < BugCheckParameter2 + 32 )
  {
    do
    {
      v9 = *v8;
      LOBYTE(v4) = _InterlockedExchangeAdd64(*v8, 0xFFFFFFFFFFFFFFFFuLL) & 6;
      if ( (_BYTE)v4 == 2 )
        LOBYTE(v4) = ExfTryToWakePushLock(v9, BugCheckParameter1, a3, a4);
      ++v8;
    }
    while ( (unsigned __int64)v8 < v7 );
  }
  if ( (v5 & 2) == 0 )
    LOBYTE(v4) = KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return (char)v4;
}

/*
 * XREFs of DbgkpRemoveErrorPort @ 0x14068102C
 * Callers:
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     DbgkpDeleteErrorPort @ 0x140681000 (DbgkpDeleteErrorPort.c)
 */

LONG __fastcall DbgkpRemoveErrorPort(__int64 a1, __int64 a2)
{
  int v4; // esi
  LONG result; // eax

  if ( !_interlockedbittestandset((volatile signed __int32 *)(a2 + 4), 0) )
  {
    v4 = 0;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&DbgkpErrorPortLock, 0LL);
    if ( DbgkpErrorPort == a2 )
    {
      DbgkpErrorProcess = 0LL;
      DbgkpErrorPort = 0LL;
      v4 = 1;
      _interlockedbittestandreset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&DbgkpErrorPortLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&DbgkpErrorPortLock);
    KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
    result = KeLeaveCriticalRegionThread(a1);
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        DbgkpDeleteErrorPort((HANDLE *)a2);
      return KeResetEvent(DbgkErrorPortRegisteredEvent);
    }
  }
  return result;
}

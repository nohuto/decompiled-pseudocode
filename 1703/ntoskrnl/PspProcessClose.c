/*
 * XREFs of PspProcessClose @ 0x14043D950
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PspRundownProcess @ 0x14041FCA8 (PspRundownProcess.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 */

void __fastcall PspProcessClose(__int64 a1, signed __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int32 v6; // ebp
  volatile signed __int64 *v7; // rsi

  if ( a4 > 1 || *(_DWORD *)(a2 + 1176) )
  {
    if ( *(_QWORD *)(a1 + 736) == *(_QWORD *)(a2 + 1008) && (*(_DWORD *)(a1 + 772) & 0x40000008) != 0 )
      PsTerminateProcess(a2, 3221225738LL);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0x2000000;
    --CurrentThread->KernelApcDisable;
    v7 = (volatile signed __int64 *)(a2 + 728);
    ExAcquirePushLockExclusiveEx(a2 + 728, 0LL);
    if ( !*(_DWORD *)(a2 + 1176) )
    {
      _m_prefetchw((const void *)(a2 + 772));
      v6 = _InterlockedOr((volatile signed __int32 *)(a2 + 772), 8u);
    }
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (v6 & 0x2000000) == 0 )
      PspRundownProcess(a2);
  }
}

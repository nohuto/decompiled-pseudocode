/*
 * XREFs of PspProcessClose @ 0x140519E00
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PspRundownProcess @ 0x14049369C (PspRundownProcess.c)
 *     PsTerminateProcess @ 0x14057FB00 (PsTerminateProcess.c)
 */

void __fastcall PspProcessClose(__int64 a1, signed __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int32 v6; // ebp
  volatile signed __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( a4 > 1 || *(_DWORD *)(a2 + 1176) )
  {
    if ( (*(_DWORD *)(a2 + 1740) & 0x8000) == 0
      && *(_QWORD *)(a1 + 736) == *(_QWORD *)(a2 + 1008)
      && (*(_DWORD *)(a1 + 772) & 0x40000008) != 0 )
    {
      PsTerminateProcess(a2, 3221225738LL);
    }
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
      ExfTryToWakePushLock(v7, v8, v9, v10);
    KeAbPostRelease((ULONG_PTR)v7);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (v6 & 0x2000000) == 0 )
      PspRundownProcess(a2);
  }
}

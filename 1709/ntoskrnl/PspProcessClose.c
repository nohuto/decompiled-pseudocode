/*
 * XREFs of PspProcessClose @ 0x14056E780
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x140719308 (PspRundownProcess.c)
 */

__int64 __fastcall PspProcessClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  signed __int32 v7; // ebp
  volatile signed __int64 *v8; // rsi

  if ( a4 > 1 || *(_DWORD *)(a2 + 1176) )
  {
    result = *(_QWORD *)(a2 + 1008);
    if ( *(_QWORD *)(a1 + 736) == result )
    {
      result = *(unsigned int *)(a1 + 772);
      if ( (result & 0x40000008) != 0 )
        return PsTerminateProcess(a2, 3221225738LL);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0x2000000;
    --CurrentThread->KernelApcDisable;
    v8 = (volatile signed __int64 *)(a2 + 728);
    ExAcquirePushLockExclusiveEx(a2 + 728, 0LL);
    if ( !*(_DWORD *)(a2 + 1176) )
    {
      _m_prefetchw((const void *)(a2 + 772));
      v7 = _InterlockedOr((volatile signed __int32 *)(a2 + 772), 8u);
    }
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (v7 & 0x2000000) == 0 )
      return PspRundownProcess((PVOID)a2);
  }
  return result;
}

/*
 * XREFs of PfTAccessTracingStart @ 0x140404D3C
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x140409D7C (PfpPowerActionStartScenarioTracing.c)
 *     PfGetCompletedTrace @ 0x140498110 (PfGetCompletedTrace.c)
 *     PfTStart @ 0x1405D83BC (PfTStart.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x1400448EC (MmGetDefaultPagePriority.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x1401362B4 (MmSetAccessLogging.c)
 *     MmEnablePeriodicAccessClearing @ 0x140404DEC (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingStart(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // rbp
  int v8; // esi
  bool v9; // zf
  int DefaultPagePriority; // eax
  __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v8 = ~a3;
  v9 = (v8 & *(_DWORD *)(a1 + 12)) == 0;
  *(_DWORD *)(a1 + 12) &= v8;
  if ( v9 )
  {
    *(_DWORD *)(a2 + 40) = 256;
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(1, DefaultPagePriority);
    LOBYTE(v11) = 1;
    MmEnablePeriodicAccessClearing(v11);
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}

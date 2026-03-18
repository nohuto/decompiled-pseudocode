/*
 * XREFs of PfTAccessTracingCleanup @ 0x14040E304
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x140409D7C (PfpPowerActionStartScenarioTracing.c)
 *     PfTTraceListAdd @ 0x140498398 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1406C46A8 (PfTCleanup.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x1400448EC (MmGetDefaultPagePriority.c)
 *     MmFreeAccessPfnBuffer @ 0x14005F1B8 (MmFreeAccessPfnBuffer.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x1401362B4 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 *     MmEnablePeriodicAccessClearing @ 0x140404DEC (MmEnablePeriodicAccessClearing.c)
 *     PfTAccessTracingInitialize @ 0x14040EBB0 (PfTAccessTracingInitialize.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // r14
  volatile signed __int64 *v7; // rsi
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v9; // rdi
  __int64 v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a3 == 4;
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  dword_140382BE8 = 0;
  ExWaitForRundownProtectionRelease(&RunRef);
  v9 = RtlpInterlockedFlushSList(&ListHead);
  while ( v9 )
  {
    v10 = (__int64)v9;
    v9 = v9->Next;
    MmFreeAccessPfnBuffer(v10, v6);
  }
  MmEnablePeriodicAccessClearing(0);
  PfTAccessTracingInitialize(a1, &PfKernelGlobals, 1LL);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}

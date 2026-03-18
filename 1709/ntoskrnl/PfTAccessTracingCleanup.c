/*
 * XREFs of PfTAccessTracingCleanup @ 0x1404312A0
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x140430C28 (PfpPowerActionStartScenarioTracing.c)
 *     PfTTraceListAdd @ 0x140457178 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1406F3D88 (PfTCleanup.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x140011CE0 (MmFreeAccessPfnBuffer.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     MmGetDefaultPagePriority @ 0x140126770 (MmGetDefaultPagePriority.c)
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 *     MmSetAccessLogging @ 0x1402309E4 (MmSetAccessLogging.c)
 *     PfTAccessTracingInitialize @ 0x140428D4C (PfTAccessTracingInitialize.c)
 *     MmEnablePeriodicAccessClearing @ 0x140430914 (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // r14
  volatile signed __int64 *v7; // rsi
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v9; // rdi
  _QWORD *p_Next; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a3 == 4;
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  dword_14039E8E8 = 0;
  ExWaitForRundownProtectionRelease(&RunRef);
  v9 = RtlpInterlockedFlushSList(&ListHead);
  while ( v9 )
  {
    p_Next = &v9->Next;
    v9 = v9->Next;
    MmFreeAccessPfnBuffer(p_Next, v6);
  }
  MmEnablePeriodicAccessClearing(0);
  PfTAccessTracingInitialize(a1, (__int64)&PfKernelGlobals, 1);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}

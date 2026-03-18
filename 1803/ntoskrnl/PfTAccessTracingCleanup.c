/*
 * XREFs of PfTAccessTracingCleanup @ 0x1404780E0
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x140471198 (PfpPowerActionStartScenarioTracing.c)
 *     PfTTraceListAdd @ 0x140510250 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x14075C578 (PfTCleanup.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x140005EA0 (MmGetDefaultPagePriority.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MmFreeAccessPfnBuffer @ 0x14007AB38 (MmFreeAccessPfnBuffer.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MmSetAccessLogging @ 0x14016C25C (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 *     PfTAccessTracingInitialize @ 0x1404781D8 (PfTAccessTracingInitialize.c)
 *     MmEnablePeriodicAccessClearing @ 0x1404782E0 (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // r14
  volatile signed __int64 *v7; // rsi
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *p_Next; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a3 == 4;
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  dword_1403E27A8 = 0;
  ExWaitForRundownProtectionRelease(&stru_1403E2788);
  v9 = RtlpInterlockedFlushSList(&stru_1403E27C0);
  while ( v9 )
  {
    p_Next = &v9->Next;
    v9 = v9->Next;
    MmFreeAccessPfnBuffer(p_Next, v6);
  }
  MmEnablePeriodicAccessClearing(0LL);
  PfTAccessTracingInitialize(a1, &PfKernelGlobals, 1LL);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7, v10, v11, v12);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}

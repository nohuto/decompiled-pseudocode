/*
 * XREFs of PsTerminateProcess @ 0x14054E978
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14020BDC0 (MiReAcquireCommitFailWorker.c)
 *     PspProcessClose @ 0x14043D950 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x140443330 (KiSchedulerApcTerminate.c)
 *     PspCallProcessNotifyRoutines @ 0x1404FA068 (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x14067EC20 (DbgkpCloseObject.c)
 *     PspShutdownCsrProcess @ 0x1406DF114 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x1406E26B4 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1406EAE10 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140723504 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x14054EBC8 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}

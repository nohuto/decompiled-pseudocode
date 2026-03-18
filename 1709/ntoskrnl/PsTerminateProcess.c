/*
 * XREFs of PsTerminateProcess @ 0x140596078
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140212D30 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x1404D265C (PspCallProcessNotifyRoutines.c)
 *     KiSchedulerApcTerminate @ 0x1404D6C40 (KiSchedulerApcTerminate.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x14056E780 (PspProcessClose.c)
 *     DbgkpCloseObject @ 0x1406A9D70 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1406DEB64 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x140715594 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x140718B08 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 *     RtlpTerminateCurrentProcess @ 0x140722D10 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140762FB4 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x140796030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1404D9890 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}

/*
 * XREFs of PsTerminateProcess @ 0x14057FB00
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140251120 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x1404B655C (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x140519E00 (PspProcessClose.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 *     KiSchedulerApcTerminate @ 0x14056A3A0 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x14070E4D0 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1407499E8 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14077CAD4 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1407864B0 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1407CAC14 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x140803030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1404E9088 (PspTerminateProcess.c)
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

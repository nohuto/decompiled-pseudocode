/*
 * XREFs of PsSuspendProcess @ 0x1406E4240
 * Callers:
 *     PspFreezeProcessWorker @ 0x1406E2CD0 (PspFreezeProcessWorker.c)
 *     NtSuspendProcess @ 0x1406E41C8 (NtSuspendProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 *     PsSuspendThread @ 0x1404C7C50 (PsSuspendThread.c)
 */

__int64 __fastcall PsSuspendProcess(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *v3; // r14
  _QWORD *NextProcessThread; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 95;
  if ( ExAcquireRundownProtection(a1 + 95) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)a1, 0LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      PsSuspendThread((__int64)NextProcessThread, 0LL);
      NextProcessThread = PsGetNextProcessThread((__int64)a1, v6);
    }
    ExReleaseRundownProtection(v3);
  }
  else
  {
    v5 = -1073741558;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v5;
}

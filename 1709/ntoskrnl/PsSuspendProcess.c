/*
 * XREFs of PsSuspendProcess @ 0x140582840
 * Callers:
 *     NtSuspendProcess @ 0x1405827C8 (NtSuspendProcess.c)
 *     PspFreezeProcessWorker @ 0x140719180 (PspFreezeProcessWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
 *     PsSuspendThread @ 0x1405829A0 (PsSuspendThread.c)
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
  if ( ExAcquireRundownProtection_0(a1 + 95) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)a1, 0LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      PsSuspendThread(NextProcessThread, 0LL);
      NextProcessThread = PsGetNextProcessThread((__int64)a1, v6);
    }
    ExReleaseRundownProtection_0(v3);
  }
  else
  {
    v5 = -1073741558;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}

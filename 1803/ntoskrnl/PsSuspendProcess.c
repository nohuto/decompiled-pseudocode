/*
 * XREFs of PsSuspendProcess @ 0x14077E540
 * Callers:
 *     PspFreezeProcessWorker @ 0x14077D150 (PspFreezeProcessWorker.c)
 *     NtSuspendProcess @ 0x14077E4C4 (NtSuspendProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
 *     PsSuspendThread @ 0x1405792D0 (PsSuspendThread.c)
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}

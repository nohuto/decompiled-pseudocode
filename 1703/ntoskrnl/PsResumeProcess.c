/*
 * XREFs of PsResumeProcess @ 0x140440D70
 * Callers:
 *     NtResumeProcess @ 0x1406E4154 (NtResumeProcess.c)
 * Callees:
 *     KeResumeThread @ 0x1400256A4 (KeResumeThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PsResumeProcess(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v3; // r14
  __int64 NextProcessThread; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 95;
  if ( ExAcquireRundownProtection(a1 + 95) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v5 = 0;
    while ( 1 )
    {
      v6 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      KeResumeThread(NextProcessThread);
      NextProcessThread = PsGetNextProcessThread(a1, v6);
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

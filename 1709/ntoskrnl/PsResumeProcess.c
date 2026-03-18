/*
 * XREFs of PsResumeProcess @ 0x140575920
 * Callers:
 *     NtResumeProcess @ 0x1405758A4 (NtResumeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeResumeThread @ 0x14011CDF8 (KeResumeThread.c)
 *     PsGetNextProcessThread @ 0x1404D9170 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PsResumeProcess(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v3; // r14
  _QWORD *NextProcessThread; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi

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
      KeResumeThread((__int64)NextProcessThread);
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

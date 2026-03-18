/*
 * XREFs of PfTSetTracingPriority @ 0x140419968
 * Callers:
 *     PfpLogEventRequest @ 0x1405762E0 (PfpLogEventRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x1401362B4 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036D910, 0LL);
  MmSetAccessLogging(dword_14036D90C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036D910, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036D910);
  KeAbPostRelease((ULONG_PTR)&qword_14036D910);
  KeLeaveCriticalRegion();
}

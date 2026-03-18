/*
 * XREFs of PfTSetTracingPriority @ 0x140485C0C
 * Callers:
 *     PfpLogEventRequest @ 0x1405EC688 (PfpLogEventRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MmSetAccessLogging @ 0x14016C25C (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CD190, 0LL);
  MmSetAccessLogging(dword_1403CD18C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CD190, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CD190, v3, v4, v5);
  KeAbPostRelease((ULONG_PTR)&qword_1403CD190);
  KeLeaveCriticalRegion();
}

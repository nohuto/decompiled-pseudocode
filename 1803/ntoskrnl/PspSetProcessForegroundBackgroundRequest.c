/*
 * XREFs of PspSetProcessForegroundBackgroundRequest @ 0x1404EFFA0
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PsSetProcessPriorityByClass @ 0x1404EFF70 (PsSetProcessPriorityByClass.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PspSetProcessPriorityByClass @ 0x14006A9FC (PspSetProcessPriorityByClass.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

_QWORD *__fastcall PspSetProcessForegroundBackgroundRequest(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v7; // r14d
  BOOL v8; // r12d
  volatile signed __int64 *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // ecx

  CurrentThread = KeGetCurrentThread();
  v7 = a3 != 0 ? 0x20000 : 0x10000;
  v8 = 1;
  --CurrentThread->KernelApcDisable;
  v9 = (volatile signed __int64 *)(a1 + 728);
  ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1740), v7);
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 1740);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1740), ~v7);
    v8 = (v14 & (a3 != 0 ? 0x10000 : 0x20000)) != 0;
  }
  PspSetProcessPriorityByClass(a1, v8);
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9, v10, v11, v12);
  KeAbPostRelease((ULONG_PTR)v9);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}

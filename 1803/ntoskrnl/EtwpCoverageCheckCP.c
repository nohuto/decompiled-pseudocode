/*
 * XREFs of EtwpCoverageCheckCP @ 0x1407A6BE8
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14056F324 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1400C30AC (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x1400C3100 (EtwpCoverageValidateCP.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall EtwpCoverageCheckCP(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v9; // rbp
  int v10; // edx
  unsigned int *Internal; // rax
  int v12; // r11d
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned int)EtwpCoverageValidateCP(a2, &v14) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    v9 = *(unsigned int **)(a1 + 16);
    v10 = *(_DWORD *)(a2 + 8);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    Internal = TelemetryCoverageTableLocateInternal(v9, v10);
    if ( *Internal == v12 )
    {
      v4 = 1;
      *(_DWORD *)(a2 + 12) = v9[6];
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock, v5, v6, v7);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v4;
}

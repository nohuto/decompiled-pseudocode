/*
 * XREFs of EtwpCoverageReset @ 0x1407A6D88
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14056F324 (EtwSetProcessTelemetryCoverage.c)
 *     EtwpCoverageFlushWorkItemCallback @ 0x140583350 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwpCoverageResetWorkItemCallback @ 0x1407A7240 (EtwpCoverageResetWorkItemCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     TelemetryCoverageStringHashInternal @ 0x1400C31C0 (TelemetryCoverageStringHashInternal.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpCoverageFlushPending @ 0x140583420 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1407A6CDC (EtwpCoverageFreeStringBuffers.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  struct _KTHREAD *result; // rax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140399B3C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140399B38 )
        dword_140399B38 = TelemetryCoverageStringHashInternal(off_140399B30, &v9);
      EtwTelemetryCoverageReport((__int64)&off_140399B30);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    if ( (v4 & 4) == 0 || (*(_DWORD *)(a1 + 36) & 1) != 0 )
    {
      if ( (v4 & 1) != 0
        || (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - *(_DWORD *)(a1 + 24) > 0x927C0 )
      {
        *(_DWORD *)(a1 + 36) &= ~1u;
        EtwpCoverageFlushPending((int **)a1);
        memset((void *)(*(_QWORD *)(a1 + 16) + 52LL), 0, 4LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL));
        EtwpCoverageFreeStringBuffers(a1, 1);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL) = 0;
        **(_DWORD **)a1 = ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v7 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v7 + 2) & 1) == 0 )
          MEMORY[0xFFFFF7800000037C] = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)a1 + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 36) |= 1u;
      }
    }
  }
  result = KeGetCurrentThread();
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == result )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock, a2, a3, a4);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    return (struct _KTHREAD *)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}

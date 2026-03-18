/*
 * XREFs of EtwpCoverageFlushWorkItemCallback @ 0x14059C460
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EtwpCoverageFlushPending @ 0x14059C530 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageReset @ 0x140745074 (EtwpCoverageReset.c)
 */

_QWORD *__fastcall EtwpCoverageFlushWorkItemCallback(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bl

  *(_DWORD *)(EtwpCoverageNonPagedContext + 12) = 0;
  if ( (a1[9] & 1) != 0 )
    EtwpCoverageReset(a1, 4LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(*(_QWORD *)a1 + 16LL) >= a1[7] )
    EtwpCoverageFlushPending(a1);
  EtwpCoverageLockOwner = 0LL;
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

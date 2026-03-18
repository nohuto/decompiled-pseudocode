/*
 * XREFs of PspUnlockJobsAndProcessExclusive @ 0x14054BD0C
 * Callers:
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PspUnlockJobChain @ 0x140545EBC (PspUnlockJobChain.c)
 */

__int64 __fastcall PspUnlockJobsAndProcessExclusive(int *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rcx

  v3 = *a1;
  while ( v3 )
  {
    v7 = *(_QWORD *)&a1[4 * --v3 + 2];
    if ( LOBYTE(a1[4 * v3 + 4]) )
      PspUnlockJobChain(v7, 0LL, 0);
    else
      ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728));
    KeAbPostRelease(a2 + 728);
  }
  return KiLeaveGuardedRegionUnsafe(a3);
}

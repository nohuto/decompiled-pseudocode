/*
 * XREFs of PspUnlockJobsAndProcessExclusive @ 0x14053064C
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspUnlockJobChain @ 0x1404F0F94 (PspUnlockJobChain.c)
 */

__int64 __fastcall PspUnlockJobsAndProcessExclusive(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v8; // rcx

  v4 = *a1;
  while ( v4 )
  {
    v8 = *(_QWORD *)&a1[4 * --v4 + 2];
    if ( LOBYTE(a1[4 * v4 + 4]) )
      PspUnlockJobChain(v8, 0LL, 0);
    else
      ExReleaseResourceLite((PERESOURCE)(v8 + 56));
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728), a2, a3, a4);
    KeAbPostRelease(a2 + 728);
  }
  return KiLeaveGuardedRegionUnsafe(a3);
}

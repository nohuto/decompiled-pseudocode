/*
 * XREFs of MiUnlockPartitionSystemThreads @ 0x140167E94
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1404938EC (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a1 + 216;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 216), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 216));
  KeAbPostRelease(v3);
  return KiLeaveGuardedRegionUnsafe(a2);
}

/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x140532E98
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14054FD20 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x1405797B0 (PspJobClose.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v5 = a1 + 1032;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1032), a2, a3, a4);
    result = KeAbPostRelease(v5);
  }
  if ( a3 )
    return KiLeaveGuardedRegionUnsafe(a3);
  return result;
}

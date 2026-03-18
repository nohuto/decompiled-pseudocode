/*
 * XREFs of PspUnlockJobListExclusive @ 0x14052FD2C
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x14052FF14 (NtCreateJobObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PspUnlockJobListExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al

  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobListLock, a2, a3, a4);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}

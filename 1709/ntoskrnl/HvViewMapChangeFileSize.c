/*
 * XREFs of HvViewMapChangeFileSize @ 0x14069FF70
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     HvpViewMapAcquireLockExclusive @ 0x1401E5110 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapGrowFile @ 0x1406A0664 (HvpViewMapGrowFile.c)
 */

__int64 __fastcall HvViewMapChangeFileSize(volatile signed __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // edi

  HvpViewMapAcquireLockExclusive((__int64)a1);
  if ( *(unsigned int *)a1 >= a3 )
    v6 = 0;
  else
    v6 = HvpViewMapGrowFile(a1, a2, a3);
  if ( (_InterlockedExchangeAdd64(a1 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1);
  KeAbPostRelease((ULONG_PTR)(a1 + 1));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}

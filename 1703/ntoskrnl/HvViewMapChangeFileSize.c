/*
 * XREFs of HvViewMapChangeFileSize @ 0x140675A38
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     HvpViewMapAcquireLockExclusive @ 0x1401E0FDC (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapGrowFile @ 0x14067612C (HvpViewMapGrowFile.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}

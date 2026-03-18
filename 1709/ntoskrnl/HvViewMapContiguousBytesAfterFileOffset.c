/*
 * XREFs of HvViewMapContiguousBytesAfterFileOffset @ 0x14069FFF0
 * Callers:
 *     CmpDoSystemCacheRead @ 0x140694CAC (CmpDoSystemCacheRead.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     HvpViewMapAcquireLockShared @ 0x1401E513C (HvpViewMapAcquireLockShared.c)
 */

__int64 __fastcall HvViewMapContiguousBytesAfterFileOffset(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi

  HvpViewMapAcquireLockShared(a1);
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(a2) & 0x7F)) + 32LL * ((a2 >> 18) & 0x3F) + 24)
     - (a2 & 0x3FFFF);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}

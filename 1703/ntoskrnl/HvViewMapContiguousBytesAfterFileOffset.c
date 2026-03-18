/*
 * XREFs of HvViewMapContiguousBytesAfterFileOffset @ 0x140675AB8
 * Callers:
 *     CmpDoSystemCacheRead @ 0x14066A624 (CmpDoSystemCacheRead.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     HvpViewMapAcquireLockShared @ 0x1401E1000 (HvpViewMapAcquireLockShared.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}

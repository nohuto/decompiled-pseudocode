/*
 * XREFs of HvViewMapCopyFromFileOffset @ 0x1401E0DE4
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401E1AC0 (HvpMapHiveImageFromSystemCache.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvpViewMapAcquireLockShared @ 0x1401E1000 (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapAddressForFileOffset @ 0x140676058 (HvpViewMapAddressForFileOffset.c)
 *     HvpViewMapContiguousBytesAfterFileOffset @ 0x140676094 (HvpViewMapContiguousBytesAfterFileOffset.c)
 */

__int64 __fastcall HvViewMapCopyFromFileOffset(__int64 a1, char *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // esi
  const void *v9; // r10

  HvpViewMapAcquireLockShared();
  for ( ; a4; a4 -= v8 )
  {
    HvpViewMapAddressForFileOffset(a1, a3);
    v8 = HvpViewMapContiguousBytesAfterFileOffset(a1, a3);
    if ( v8 > a4 )
      v8 = a4;
    memmove(a2, v9, v8);
    a3 += v8;
    a2 += v8;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

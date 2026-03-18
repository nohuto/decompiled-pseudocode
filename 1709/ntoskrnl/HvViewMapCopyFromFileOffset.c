/*
 * XREFs of HvViewMapCopyFromFileOffset @ 0x1401E4F18
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401E5BC4 (HvpMapHiveImageFromSystemCache.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     HvpViewMapAcquireLockShared @ 0x1401E513C (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapAddressForFileOffset @ 0x1406A0590 (HvpViewMapAddressForFileOffset.c)
 *     HvpViewMapContiguousBytesAfterFileOffset @ 0x1406A05CC (HvpViewMapContiguousBytesAfterFileOffset.c)
 */

_QWORD *__fastcall HvViewMapCopyFromFileOffset(__int64 a1, char *a2, unsigned int a3, unsigned int a4)
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
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

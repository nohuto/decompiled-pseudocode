/*
 * XREFs of KiTryToAcquireThreadLock @ 0x1400A73A8
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400A6F7C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x1400C38C0 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KeTryToInsertQueueApc @ 0x140245940 (KeTryToInsertQueueApc.c)
 *     KiMonitorCacheErrata @ 0x140249BD0 (KiMonitorCacheErrata.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KiTryToAcquireThreadLock(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rdi

  v2 = a2;
  LOBYTE(a2) = 1;
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), a2);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    return 0;
  }
  else
  {
    if ( v2 )
      *v2 = 1;
    return 1;
  }
}

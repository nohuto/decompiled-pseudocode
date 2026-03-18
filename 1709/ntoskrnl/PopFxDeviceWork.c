/*
 * XREFs of PopFxDeviceWork @ 0x14023DE70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140131A64 (PopFxDeliverDevicePowerRequired.c)
 */

void __fastcall PopFxDeviceWork(ULONG_PTR BugCheckParameter2)
{
  KSPIN_LOCK *v2; // rsi
  unsigned __int64 v3; // rbx

  v2 = (KSPIN_LOCK *)(BugCheckParameter2 + 336);
  do
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v2);
    PopFxDeliverDevicePowerRequired(BugCheckParameter2, 0LL);
    KxReleaseSpinLock(v2);
    __writecr8(v3);
  }
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 312), 0xFFFFFFFF) != 1 );
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 216), 0LL, 0x20u);
}

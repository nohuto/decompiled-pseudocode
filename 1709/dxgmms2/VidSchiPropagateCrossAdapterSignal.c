/*
 * XREFs of VidSchiPropagateCrossAdapterSignal @ 0x1C0028C90
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B450 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C000F57C (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchTimeoutSyncObject @ 0x1C0013ED4 (VidSchTimeoutSyncObject.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002B580 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002BFD0 (VidSchSignalSyncObjectsFromCpu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiPropagateCrossAdapterSignal(_QWORD *a1)
{
  _QWORD **v2; // rdi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[23] + 8LL), &LockHandle);
  v2 = (_QWORD **)(a1[23] + 16LL);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    if ( i - 15 != a1 )
      ((void (*)(void))i[9])();
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}

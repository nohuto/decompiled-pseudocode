/*
 * XREFs of VidSchiPropagateCrossAdapterSignal @ 0x1C002BB78
 * Callers:
 *     VidSchTimeoutSyncObject @ 0x1C0003E5C (VidSchTimeoutSyncObject.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BB10 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0012F40 (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002E5D0 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002F060 (VidSchSignalSyncObjectsFromCpu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiPropagateCrossAdapterSignal(_QWORD *a1)
{
  _QWORD **v2; // rdi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[25] + 8LL), &LockHandle);
  v2 = (_QWORD **)(a1[25] + 16LL);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    if ( i - 17 != a1 )
      ((void (*)(void))i[9])();
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}

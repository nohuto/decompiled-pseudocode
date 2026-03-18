/*
 * XREFs of VidSchiPropagateCrossAdapterSignal @ 0x1C0026B88
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009F60 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0012858 (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchTimeoutSyncObject @ 0x1C0012BAC (VidSchTimeoutSyncObject.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0029780 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002A590 (VidSchSignalSyncObjectsFromCpu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
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

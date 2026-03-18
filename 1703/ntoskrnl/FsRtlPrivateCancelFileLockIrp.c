/*
 * XREFs of FsRtlPrivateCancelFileLockIrp @ 0x1401E34F0
 * Callers:
 *     FsRtlPrivateLock @ 0x14004F440 (FsRtlPrivateLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     FsRtlCompleteLockIrpReal @ 0x14014A1E8 (FsRtlCompleteLockIrpReal.c)
 */

void __fastcall FsRtlPrivateCancelFileLockIrp(__int64 a1, IRP *a2)
{
  char v2; // bp
  KSPIN_LOCK *v3; // rdi
  KIRQL CancelIrql; // r14
  __int64 *v6; // rcx
  __int64 *i; // rbx
  KSPIN_LOCK *v8; // rcx
  NTSTATUS v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (KSPIN_LOCK *)(a2->IoStatus.Information + 24);
  if ( a1 )
  {
    KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
    CancelIrql = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
    v6 = &FsRtlFileLockCancelCollideList;
    v2 = 1;
  }
  else
  {
    CancelIrql = a2->CancelIrql;
LABEL_4:
    v6 = (__int64 *)(v3 + 3);
  }
  for ( i = (__int64 *)*v6; i; i = (__int64 *)*i )
  {
    if ( (IRP *)i[3] == a2 )
    {
      *v6 = *i;
      if ( !v2 && i == (__int64 *)v3[4] )
        v3[4] = (KSPIN_LOCK)v6;
      a2->IoStatus.Information = 0LL;
      v8 = &FsRtlFileLockCancelCollideLock;
      if ( !v2 )
        v8 = v3;
      KxReleaseSpinLock(v8);
      __writecr8(CancelIrql);
      FsRtlCompleteLockIrpReal((__int64 (__fastcall *)(__int64, IRP *))i[1], i[2], a2, -1073741536, &v9, 0LL);
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, i);
      return;
    }
    v6 = i;
  }
  if ( v2 )
  {
    v2 = 0;
    KxAcquireSpinLock(v3);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
    goto LABEL_4;
  }
  KxReleaseSpinLock(v3);
  __writecr8(CancelIrql);
}

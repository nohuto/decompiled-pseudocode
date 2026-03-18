/*
 * XREFs of FsRtlPrivateCancelFileLockIrp @ 0x1402250D0
 * Callers:
 *     FsRtlPrivateLock @ 0x140068C80 (FsRtlPrivateLock.c)
 * Callees:
 *     FsRtlCompleteLockIrpReal @ 0x140001FE8 (FsRtlCompleteLockIrpReal.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall FsRtlPrivateCancelFileLockIrp(__int64 a1, IRP *a2)
{
  KSPIN_LOCK *v2; // r15
  KIRQL CancelIrql; // bl
  KSPIN_LOCK *v4; // rdi
  char v5; // bp
  void **v7; // rcx
  IRP *v8; // rsi
  IRP *v9; // rax
  NTSTATUS v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = &FsRtlFileLockCancelCollideLock;
  CancelIrql = a2->CancelIrql;
  v4 = (KSPIN_LOCK *)(a2->IoStatus.Information + 24);
  v5 = 0;
  if ( !a1 )
    goto LABEL_3;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CancelIrql = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
  v7 = (void **)&FsRtlFileLockCancelCollideList;
  v5 = 1;
  while ( 1 )
  {
    v8 = (IRP *)*v7;
    if ( *v7 )
      break;
LABEL_7:
    if ( !v5 )
    {
      KxReleaseSpinLock(v4);
      __writecr8(CancelIrql);
      return;
    }
    v5 = 0;
    KxAcquireSpinLock(v4);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
LABEL_3:
    v7 = (void **)(v4 + 3);
  }
  while ( 1 )
  {
    v9 = *(IRP **)&v8->Type;
    if ( v8->AssociatedIrp.MasterIrp == a2 )
      break;
    v7 = (void **)v8;
    v8 = *(IRP **)&v8->Type;
    if ( !v9 )
      goto LABEL_7;
  }
  *v7 = v9;
  if ( !v5 && v8 == (IRP *)v4[4] )
    v4[4] = (KSPIN_LOCK)v7;
  a2->IoStatus.Information = 0LL;
  if ( !v5 )
    v2 = v4;
  KxReleaseSpinLock(v2);
  __writecr8(CancelIrql);
  FsRtlCompleteLockIrpReal(
    (__int64 (__fastcall *)(__int64, IRP *))v8->MdlAddress,
    *(_QWORD *)&v8->Flags,
    a2,
    -1073741536,
    &v10,
    0LL);
  ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v8);
}

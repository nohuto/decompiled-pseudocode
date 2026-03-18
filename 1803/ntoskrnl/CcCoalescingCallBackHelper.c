/*
 * XREFs of CcCoalescingCallBackHelper @ 0x14021F9C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcRescheduleLazyWriteScan @ 0x1400C4F70 (CcRescheduleLazyWriteScan.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcCoalescingCallBackHelper(__int64 a1, _DWORD *a2)
{
  bool v3; // cf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  switch ( *a2 )
  {
    case 1:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      v3 = *(_QWORD *)(a1 + 600) < 0x2000uLL;
      *(_BYTE *)(a1 + 900) = 1;
      *(_BYTE *)(a1 + 592) = 0;
      if ( !v3 )
        CcScheduleLazyWriteScan(a1, 1, 0);
      goto LABEL_8;
    case 2:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      *(_BYTE *)(a1 + 900) = 0;
      CcRescheduleLazyWriteScan(a1, 0LL);
      goto LABEL_8;
    case 3:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      CcScheduleLazyWriteScan(a1, 1, 0);
LABEL_8:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      break;
  }
  return 1;
}

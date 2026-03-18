/*
 * XREFs of CcCoalescingCallBackHelper @ 0x1401E01B0
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcRescheduleLazyWriteScan @ 0x1400E0BCC (CcRescheduleLazyWriteScan.c)
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

/*
 * XREFs of MiSyncCommitSignals @ 0x14014FEC8
 * Callers:
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiRemoveLockedPageCharge @ 0x140030B80 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiUnlockMdlWritePages @ 0x1400A50D0 (MiUnlockMdlWritePages.c)
 *     MiReplenishLocalCommit @ 0x14011CEE0 (MiReplenishLocalCommit.c)
 *     MiComputeCommitThresholds @ 0x14014FE60 (MiComputeCommitThresholds.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

int __fastcall MiSyncCommitSignals(__int64 a1, int a2)
{
  unsigned __int64 v4; // rax
  struct _KEVENT *v5; // rcx
  struct _KEVENT *v6; // rcx
  struct _KEVENT *v7; // rcx
  struct _KEVENT *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
    LockHandle.OldIrql = 17;
  else
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5096), &LockHandle);
  v4 = *(_QWORD *)(a1 + 6320);
  if ( v4 >= *(_QWORD *)(a1 + 5080) )
  {
    v8 = *(struct _KEVENT **)(a1 + 296);
    if ( v4 < *(_QWORD *)(a1 + 5088) )
    {
      if ( v8->Header.SignalState == 1 )
      {
        KeResetEvent(v8);
        LODWORD(v4) = KeResetEvent(*(PRKEVENT *)(a1 + 304));
      }
    }
    else
    {
      if ( !v8->Header.SignalState )
        KeSetEvent(v8, 0, 0);
      v4 = *(_QWORD *)(a1 + 5064);
      if ( *(_QWORD *)(a1 + 6440) == v4 )
        LODWORD(v4) = KeSetEvent(*(PRKEVENT *)(a1 + 304), 0, 0);
    }
    v7 = *(struct _KEVENT **)(a1 + 288);
    if ( v7->Header.SignalState == 1 )
      goto LABEL_8;
  }
  else
  {
    v5 = *(struct _KEVENT **)(a1 + 288);
    if ( !v5->Header.SignalState )
      LODWORD(v4) = KeSetEvent(v5, 0, 0);
    v6 = *(struct _KEVENT **)(a1 + 296);
    if ( v6->Header.SignalState == 1 )
    {
      KeResetEvent(v6);
      v7 = *(struct _KEVENT **)(a1 + 304);
LABEL_8:
      LODWORD(v4) = KeResetEvent(v7);
    }
  }
  if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LODWORD(v4) = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return v4;
}

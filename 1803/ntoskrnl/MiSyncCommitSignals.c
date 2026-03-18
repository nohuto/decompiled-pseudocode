/*
 * XREFs of MiSyncCommitSignals @ 0x14017DDB4
 * Callers:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiUnlockMdlWritePages @ 0x14002F4C0 (MiUnlockMdlWritePages.c)
 *     MiRemoveLockedPageCharge @ 0x140031840 (MiRemoveLockedPageCharge.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiReplenishLocalCommit @ 0x1400BC040 (MiReplenishLocalCommit.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiComputeCommitThresholds @ 0x14017DD4C (MiComputeCommitThresholds.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 6184), &LockHandle);
  v4 = *(_QWORD *)(a1 + 7400);
  if ( v4 >= *(_QWORD *)(a1 + 6168) )
  {
    v8 = *(struct _KEVENT **)(a1 + 296);
    if ( v4 < *(_QWORD *)(a1 + 6176) )
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
      v4 = *(_QWORD *)(a1 + 6152);
      if ( *(_QWORD *)(a1 + 7528) == v4 )
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

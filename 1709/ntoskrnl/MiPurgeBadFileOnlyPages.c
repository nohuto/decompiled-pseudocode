/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x140223684
 * Callers:
 *     MiDeleteExtentPfns @ 0x140222AA0 (MiDeleteExtentPfns.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiSetPfnTbFlushStamp @ 0x1400280B0 (MiSetPfnTbFlushStamp.c)
 *     MiRemoveLockedPageCharge @ 0x140030B80 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecrementModifiedWriteCount @ 0x1400EFE28 (MiDecrementModifiedWriteCount.c)
 *     MiPreventControlAreaDeletion @ 0x1400F3B84 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x14012AE30 (MiDecrementSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402238B4 (MiPurgeFileOnlyPfn.c)
 *     MiUnlinkPageFromBadList @ 0x14022AA0C (MiUnlinkPageFromBadList.c)
 */

unsigned __int64 MiPurgeBadFileOnlyPages()
{
  __int64 v0; // r14
  __int64 v1; // r15
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r8
  KIRQL v6; // al
  unsigned __int64 v7; // rbx
  __int64 *v8; // r13
  unsigned __int8 v9; // bl
  unsigned __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v12; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  v0 = 0LL;
  v1 = 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Lock = qword_14038B060;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_14038B060);
      v3 = qword_140388230;
      byte_140388271 = 0;
      if ( !v1 )
        v0 = qword_140388220;
      if ( qword_140388230 == 0xFFFFFFFFFLL )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        result = CurrentIrql;
        goto LABEL_22;
      }
      v4 = 48 * qword_140388230 - 0x58000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
        break;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
    }
    MiUnlinkPageFromBadList(48 * v3 - 0x58000000000LL, 128LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiAddLockedPageCharge(48 * v3 - 0x58000000000LL, 1LL, v5);
    v12 = 0LL;
    BugCheckParameter2 = 0LL;
    v1 = MiPreventControlAreaDeletion(48 * v3 - 0x58000000000LL, 1, (__int64 *)&BugCheckParameter2, &v12);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    if ( v1 )
    {
      if ( v12 )
        MiReleaseControlAreaWaiters(v12);
      MiPurgeFileOnlyPfn(48 * v3 - 0x58000000000LL);
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72));
      *(_DWORD *)(v1 + 56) &= ~4u;
      v7 = v6;
      v12 = MiDecrementModifiedWriteCount(v1, 1);
      v8 = v12;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
      __writecr8(v7);
      if ( v8 )
        MiReleaseControlAreaWaiters(v8);
    }
    v9 = MiLockPageInline(48 * v3 - 0x58000000000LL);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v3 - 0x58000000000LL) )
    {
      MiSetPfnTbFlushStamp(48 * v3 - 0x58000000000LL, 0LL, 1);
      MiPfnReferenceCountIsZero(48 * v3 - 0x58000000000LL, v3);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    if ( v0 )
    {
      if ( !--v0 )
        break;
    }
  }
  KeAcquireInStackQueuedSpinLock(qword_14038B060, &LockHandle);
  if ( qword_140388220 )
    byte_140388271 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
LABEL_22:
  __writecr8(result);
  return result;
}

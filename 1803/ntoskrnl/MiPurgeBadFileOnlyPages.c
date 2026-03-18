/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x14025E2E0
 * Callers:
 *     MiDeleteExtentPfns @ 0x14025D700 (MiDeleteExtentPfns.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x140031840 (MiRemoveLockedPageCharge.c)
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiPreventControlAreaDeletion @ 0x1400832BC (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x1400833A4 (MiDecrementSubsection.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementModifiedWriteCount @ 0x1401351A4 (MiDecrementModifiedWriteCount.c)
 *     MiPurgeFileOnlyPfn @ 0x14025E548 (MiPurgeFileOnlyPfn.c)
 *     MiUnlinkPageFromBadList @ 0x140265518 (MiUnlinkPageFromBadList.c)
 */

unsigned __int64 MiPurgeBadFileOnlyPages()
{
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v1; // r14
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r13
  KIRQL v5; // al
  unsigned __int64 v6; // rbx
  __int64 *v7; // r12
  unsigned __int8 v8; // bl
  __int16 v9; // cx
  unsigned __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v12; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Lock = qword_1403CEF20;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_1403CEF20);
  v1 = qword_1403CB3D0;
  byte_1403CB411 = 0;
  if ( qword_1403CB3D0 == 0xFFFFFFFFFLL )
  {
LABEL_16:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = CurrentIrql;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v2 = 48 * v1 - 0x58000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
      break;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(CurrentIrql);
LABEL_15:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.LockQueue.Lock = qword_1403CEF20;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_1403CEF20);
    v1 = qword_1403CB3D0;
    byte_1403CB411 = 0;
    if ( qword_1403CB3D0 == 0xFFFFFFFFFLL )
      goto LABEL_16;
  }
  v3 = qword_1403CB3C0;
  MiUnlinkPageFromBadList(48 * v1 - 0x58000000000LL, 128LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiAddLockedPageCharge(48 * v1 - 0x58000000000LL, 1);
  v12 = 0LL;
  BugCheckParameter2 = 0LL;
  v4 = MiPreventControlAreaDeletion(48 * v1 - 0x58000000000LL, 1, (__int64 *)&BugCheckParameter2, (__int64 *)&v12);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    if ( v12 )
      MiReleaseControlAreaWaiters(v12);
    MiPurgeFileOnlyPfn(48 * v1 - 0x58000000000LL);
    if ( BugCheckParameter2 )
      MiDecrementSubsection((__int64 *)BugCheckParameter2);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
    *(_DWORD *)(v4 + 56) &= ~4u;
    v6 = v5;
    v12 = MiDecrementModifiedWriteCount(v4, 1);
    v7 = v12;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v6);
    if ( v7 )
      MiReleaseControlAreaWaiters(v7);
  }
  v8 = MiLockPageInline(48 * v1 - 0x58000000000LL);
  if ( (unsigned int)MiRemoveLockedPageCharge(48 * v1 - 0x58000000000LL) )
  {
    MiSetPfnTbFlushStamp(48 * v1 - 0x58000000000LL, 0, 1);
    MiPfnReferenceCountIsZero(48 * v1 - 0x58000000000LL, v1);
  }
  v9 = *(_WORD *)(v2 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v8);
  if ( !v9 || v3 != 1 )
    goto LABEL_15;
  KeAcquireInStackQueuedSpinLock(qword_1403CEF20, &LockHandle);
  if ( qword_1403CB3C0 )
    byte_1403CB411 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
LABEL_17:
  __writecr8(result);
  return result;
}

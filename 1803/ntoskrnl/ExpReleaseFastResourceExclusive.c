/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x1401596CC
 * Callers:
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     ExReleaseFastResource @ 0x140158280 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceExclusive @ 0x1402B9A90 (ExReleaseFastResourceExclusive.c)
 *     ExReleaseFastResourceShared @ 0x1402B9BC0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x140158488 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x14015986C (ExpPrepareToWakeResourceExclusive.c)
 */

unsigned __int8 __fastcall ExpReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v5; // rsi
  volatile __int64 *v6; // rdx
  _QWORD *v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  char v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int8 result; // al
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  char v19; // [rsp+88h] [rbp+48h] BYREF
  char v20; // [rsp+90h] [rbp+50h] BYREF
  _QWORD *v21; // [rsp+98h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( !*(_BYTE *)(a2 + 18) )
  {
    v16 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v17 = *(_QWORD **)(a2 + 8), *v17 != a2) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    goto LABEL_15;
  }
  v5 = (_QWORD *)(a2 + 40);
  LockHandle.LockQueue.Next = 0LL;
  v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  if ( (_QWORD *)*v5 != v5 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v14 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v15 = *(_QWORD **)(a2 + 8), *v15 != a2) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
LABEL_15:
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_11;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
  ExpPrepareToWakeResourceExclusive(
    BugCheckParameter2,
    &v21,
    &v19,
    &v20,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock);
  v7 = (_QWORD *)(a2 + 56);
  v8 = *(_QWORD *)(a2 + 56);
  if ( *(_QWORD *)(v8 + 8) != a2 + 56 || (v9 = *(_QWORD **)(a2 + 64), (_QWORD *)*v9 != v7) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v10 = 1;
  if ( v19 )
    v10 = 3;
  KeWakeWaitChain(&v21, 0, v10);
  *(_BYTE *)(a2 + 18) = 0;
  v11 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v12 = *(_QWORD **)(a2 + 8), *v12 != a2) )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v5 = 0LL;
  v5[1] = 0LL;
  __writecr8(CurrentIrql);
  result = *(_BYTE *)(a2 + 16);
  if ( result )
    result = KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)result);
LABEL_11:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}

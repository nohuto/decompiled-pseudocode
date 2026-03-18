/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x1401408BC
 * Callers:
 *     ExReleaseFastResource @ 0x1401401C0 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceExclusive @ 0x140285280 (ExReleaseFastResourceExclusive.c)
 *     ExReleaseFastResourceShared @ 0x1402853B0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14013FF08 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x140140A68 (ExpPrepareToWakeResourceExclusive.c)
 */

unsigned __int8 __fastcall ExpReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned __int8 result; // al
  _QWORD *v8; // rsi
  volatile __int64 *v9; // rdx
  _QWORD *v10; // r9
  __int64 v11; // rcx
  _QWORD *v12; // rax
  char v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  char v19; // [rsp+88h] [rbp+48h] BYREF
  char v20; // [rsp+90h] [rbp+50h] BYREF
  volatile signed __int32 *v21; // [rsp+98h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( !*(_BYTE *)(a2 + 18) )
  {
    v5 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v6 = *(_QWORD **)(a2 + 8), *v6 != a2) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
LABEL_5:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_6;
  }
  v8 = (_QWORD *)(a2 + 40);
  LockHandle.LockQueue.Next = 0LL;
  v9 = (volatile __int64 *)(BugCheckParameter2 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  if ( (_QWORD *)*v8 != v8 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v9);
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v16 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v17 = *(_QWORD **)(a2 + 8), *v17 != a2) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    goto LABEL_5;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v9);
  ExpPrepareToWakeResourceExclusive(
    BugCheckParameter2,
    &v21,
    &v19,
    &v20,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock);
  v10 = (_QWORD *)(a2 + 56);
  v11 = *(_QWORD *)(a2 + 56);
  if ( *(_QWORD *)(v11 + 8) != a2 + 56 || (v12 = *(_QWORD **)(a2 + 64), (_QWORD *)*v12 != v10) )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  *v10 = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v13 = 1;
  if ( v19 )
    v13 = 3;
  KeWakeWaitChain(&v21, 0, v13);
  *(_BYTE *)(a2 + 18) = 0;
  v14 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v15 = *(_QWORD **)(a2 + 8), *v15 != a2) )
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v8 = 0LL;
  v8[1] = 0LL;
  __writecr8(CurrentIrql);
  result = *(_BYTE *)(a2 + 16);
  if ( result )
    result = KeAbPostReleaseEx(BugCheckParameter2, result);
LABEL_6:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}

/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive @ 0x14028575C
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x140140140 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x140285050 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x140285160 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14013FF08 (ExpRotateFastOwnerEntrySublistHead.c)
 *     KeAbCrossThreadRelease @ 0x140140734 (KeAbCrossThreadRelease.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x140140A68 (ExpPrepareToWakeResourceExclusive.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceExclusive(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r15
  ULONG_PTR v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  volatile __int64 *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  LONG_PTR result; // rax
  _QWORD *v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char v18; // r8
  unsigned __int8 v19; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+98h] [rbp+48h] BYREF
  int v23; // [rsp+A0h] [rbp+50h] BYREF
  volatile signed __int32 *v24; // [rsp+A8h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = *(_QWORD *)(a2 + 32);
  v21.LockQueue.Next = 0LL;
  v21.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 2048);
  KxAcquireQueuedSpinLock((__int64)&v21, (volatile __int64 *)(v5 + 2048));
  if ( !*(_BYTE *)(a2 + 18) )
  {
    v6 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v7 = *(_QWORD **)(a2 + 8), *v7 != a2) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
LABEL_10:
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)a2 = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_21;
  }
  v8 = (_QWORD *)(a2 + 40);
  LockHandle.LockQueue.Next = 0LL;
  v9 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  if ( (_QWORD *)*v8 != v8 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v9);
    ExpRotateFastOwnerEntrySublistHead(a1, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v10 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v11 = *(_QWORD **)(a2 + 8), *v11 != a2) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    goto LABEL_10;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v9);
  ExpPrepareToWakeResourceExclusive(a1, &v24, &v22, &v23);
  v13 = (_QWORD *)(a2 + 56);
  v14 = *(_QWORD *)(a2 + 56);
  if ( *(_QWORD *)(v14 + 8) != a2 + 56 || (v15 = *(_QWORD **)(a2 + 64), (_QWORD *)*v15 != v13) )
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  *v13 = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *(_BYTE *)(a2 + 18) = 0;
  v16 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v17 = *(_QWORD **)(a2 + 8), *v17 != a2) )
    __fastfail(3u);
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v8 = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
  v18 = 1;
  if ( v22 )
    v18 = 3;
  KeWakeWaitChain(&v24, 0, v18);
  __writecr8(CurrentIrql);
  v19 = *(_BYTE *)(a2 + 16);
  if ( v19 )
    KeAbCrossThreadRelease(a1, v19, v5);
  result = ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 32), 0x746C6644u);
LABEL_21:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}

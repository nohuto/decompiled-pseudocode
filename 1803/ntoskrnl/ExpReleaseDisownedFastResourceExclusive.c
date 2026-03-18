/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive @ 0x140157BB0
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x140157F60 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x1402B9860 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x1402B9970 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeAbCrossThreadRelease @ 0x1401581B8 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x140158488 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x14015986C (ExpPrepareToWakeResourceExclusive.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceExclusive(__int64 a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v5; // r14
  _QWORD *v6; // rsi
  volatile __int64 *v7; // rdx
  _QWORD *v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  __int64 **v12; // rax
  char v13; // r8
  unsigned __int8 v14; // al
  LONG_PTR result; // rax
  __int64 *v16; // rax
  __int64 **v17; // rcx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+98h] [rbp+48h] BYREF
  char v23; // [rsp+A0h] [rbp+50h] BYREF
  _QWORD *v24; // [rsp+A8h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = a2[4];
  v21.LockQueue.Next = 0LL;
  v21.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 2048);
  KxAcquireQueuedSpinLock((__int64)&v21, (volatile __int64 *)(v5 + 2048));
  if ( !*((_BYTE *)a2 + 18) )
  {
    v16 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v17 = (__int64 **)a2[1], *v17 != a2) )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = (__int64)v17;
    goto LABEL_20;
  }
  v6 = a2 + 5;
  LockHandle.LockQueue.Next = 0LL;
  v7 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  if ( (_QWORD *)*v6 != v6 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v7);
    ExpRotateFastOwnerEntrySublistHead(a1, a2, 1LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v18 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v19 = (__int64 **)a2[1], *v19 != a2) )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = (__int64)v19;
LABEL_20:
    *a2 = 0LL;
    a2[1] = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_12;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v7);
  ExpPrepareToWakeResourceExclusive(a1, &v24, &v22, &v23, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
  v8 = a2 + 7;
  v9 = a2[7];
  if ( *(__int64 **)(v9 + 8) != a2 + 7 || (v10 = (_QWORD *)a2[8], (_QWORD *)*v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *((_BYTE *)a2 + 18) = 0;
  v11 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v12 = (__int64 **)a2[1], *v12 != a2) )
    __fastfail(3u);
  *v12 = v11;
  v11[1] = (__int64)v12;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v6 = 0LL;
  a2[6] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
  v13 = 1;
  if ( v22 )
    v13 = 3;
  KeWakeWaitChain(&v24, 0, v13);
  __writecr8(CurrentIrql);
  v14 = *((_BYTE *)a2 + 16);
  if ( v14 )
    KeAbCrossThreadRelease(a1, v14, v5);
  result = ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
LABEL_12:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}

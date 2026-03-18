/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x140157FDC
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x140157F60 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x1402B9970 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeAbCrossThreadRelease @ 0x1401581B8 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x140158488 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceShared @ 0x14015857C (ExpPrepareToWakeResourceShared.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v5; // r14
  __int64 *v6; // rax
  __int64 **v7; // rcx
  LONG_PTR result; // rax
  _QWORD *v9; // rsi
  volatile __int64 *v10; // rdx
  _QWORD *v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 *v14; // rcx
  __int64 **v15; // rax
  char v16; // r8
  unsigned __int8 v17; // al
  __int64 *v18; // rcx
  __int64 **v19; // rax
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+98h] [rbp+48h] BYREF
  char v23; // [rsp+A0h] [rbp+50h] BYREF
  _QWORD *v24; // [rsp+A8h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = a2[4];
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 2048);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 2048));
  if ( !*((_BYTE *)a2 + 18) )
  {
    v6 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v7 = (__int64 **)a2[1], *v7 != a2) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (__int64)v7;
LABEL_5:
    *a2 = 0LL;
    a2[1] = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_6;
  }
  v9 = a2 + 5;
  v20.LockQueue.Next = 0LL;
  v10 = (volatile __int64 *)(a1 + 96);
  v20.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  if ( (_QWORD *)*v9 != v9 )
  {
    KxAcquireQueuedSpinLock((__int64)&v20, v10);
    ExpRotateFastOwnerEntrySublistHead(a1, a2, 1LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
    v18 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v19 = (__int64 **)a2[1], *v19 != a2) )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = (__int64)v19;
    goto LABEL_5;
  }
  KxAcquireQueuedSpinLock((__int64)&v20, v10);
  ExpPrepareToWakeResourceShared(a1, &v24, &v22, &v23, v20.LockQueue.Next, v20.LockQueue.Lock);
  v11 = a2 + 7;
  v12 = a2[7];
  if ( *(__int64 **)(v12 + 8) != a2 + 7 || (v13 = (_QWORD *)a2[8], (_QWORD *)*v13 != v11) )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
  *((_BYTE *)a2 + 18) = 0;
  v14 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v15 = (__int64 **)a2[1], *v15 != a2) )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = (__int64)v15;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v9 = 0LL;
  a2[6] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v16 = 1;
  if ( v22 )
    v16 = 3;
  KeWakeWaitChain(&v24, 0, v16);
  __writecr8(CurrentIrql);
  v17 = *((_BYTE *)a2 + 16);
  if ( v17 )
    KeAbCrossThreadRelease(a1, v17, v5);
  result = ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
LABEL_6:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}

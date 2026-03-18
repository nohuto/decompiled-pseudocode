/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x14014DCBC
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14014DC40 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x14025BA20 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KeWakeWaitChain @ 0x14002CAF8 (KeWakeWaitChain.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14014E098 (ExpRotateFastOwnerEntrySublistHead.c)
 *     KeAbCrossThreadRelease @ 0x14014E18C (KeAbCrossThreadRelease.c)
 *     ExpPrepareToWakeResourceShared @ 0x14014E254 (ExpPrepareToWakeResourceShared.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v5; // r14
  _QWORD *v6; // rsi
  volatile __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 **v9; // rax
  LONG_PTR result; // rax
  _QWORD *v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 *v14; // rcx
  __int64 **v15; // rax
  char v16; // r8
  unsigned __int8 v17; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+98h] [rbp+48h] BYREF
  char v21; // [rsp+A0h] [rbp+50h] BYREF
  _QWORD *v22; // [rsp+A8h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = a2[4];
  v19.LockQueue.Next = 0LL;
  v19.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 2040);
  KxAcquireQueuedSpinLock((__int64)&v19, (volatile __int64 *)(v5 + 2040));
  if ( !*((_BYTE *)a2 + 18) )
  {
    v8 = (__int64 *)*a2;
    v9 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v9 != a2 )
      __fastfail(3u);
    goto LABEL_5;
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
    v8 = (__int64 *)*a2;
    v9 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v9 != a2 )
      __fastfail(3u);
LABEL_5:
    *v9 = v8;
    v8[1] = (__int64)v9;
    a2[1] = 0LL;
    *a2 = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_6;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v7);
  ExpPrepareToWakeResourceShared(a1, &v22, &v20, &v21, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
  v11 = a2 + 7;
  v12 = a2[7];
  v13 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v12 + 8) != a2 + 7 || (_QWORD *)*v13 != v11 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *((_BYTE *)a2 + 18) = 0;
  v14 = (__int64 *)*a2;
  v15 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v15 != a2 )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = (__int64)v15;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v6 = 0LL;
  a2[6] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v19);
  v16 = 1;
  if ( v20 )
    v16 = 3;
  KeWakeWaitChain(&v22, 0, v16);
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

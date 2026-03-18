/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x140140250
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x140140140 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x140285160 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExpPrepareToWakeResourceShared @ 0x140113C80 (ExpPrepareToWakeResourceShared.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     ExpReplaceListEntry @ 0x1401406F0 (ExpReplaceListEntry.c)
 *     KeAbCrossThreadRelease @ 0x140140734 (KeAbCrossThreadRelease.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v5; // r14
  __int64 *v6; // rdi
  volatile __int64 *v7; // rdx
  _BYTE *v8; // r9
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // r9
  __int64 *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 **v16; // rax
  LONG_PTR result; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r9
  _QWORD *v20; // rax
  __int64 *v21; // rcx
  __int64 **v22; // rax
  char v23; // cl
  unsigned __int8 v24; // al
  __int64 *v25; // rax
  __int64 **v26; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+38h] [rbp-40h] BYREF
  char v29; // [rsp+88h] [rbp+10h] BYREF
  int v30; // [rsp+90h] [rbp+18h] BYREF
  volatile signed __int32 *v31; // [rsp+98h] [rbp+20h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = a2[4];
  v28.LockQueue.Next = 0LL;
  v28.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 2048);
  KxAcquireQueuedSpinLock((__int64)&v28, (volatile __int64 *)(v5 + 2048));
  if ( !*((_BYTE *)a2 + 18) )
  {
    v25 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v26 = (__int64 **)a2[1], *v26 != a2) )
      __fastfail(3u);
    *v26 = v25;
    v25[1] = (__int64)v26;
    goto LABEL_9;
  }
  v6 = a2 + 5;
  LockHandle.LockQueue.Next = 0LL;
  v7 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  if ( (__int64 *)*v6 != v6 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v7);
    v8 = (_BYTE *)*v6;
    if ( *(__int64 **)(*v6 + 8) != v6 || (v9 = *(_QWORD *)v8, *(_BYTE **)(*(_QWORD *)v8 + 8LL) != v8) )
      __fastfail(3u);
    *v6 = v9;
    *(_QWORD *)(v9 + 8) = v6;
    v8[18] = 1;
    v10 = *((_BYTE *)a2 + 16);
    *((_BYTE *)a2 + 18) = 0;
    v8[16] = v10;
    *((_BYTE *)a2 + 16) = 0;
    ExpReplaceListEntry(a2, v8);
    ExpReplaceListEntry(a2 + 5, v11 + 40);
    v14 = *v12;
    if ( *(__int64 **)(*v12 + 8) != v12 )
      __fastfail(3u);
    a2[1] = (__int64)v12;
    *a2 = v14;
    *(_QWORD *)(v14 + 8) = a2;
    *v12 = (__int64)a2;
    ExpReplaceListEntry(a2 + 7, v13 + 56);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v16 = (__int64 **)a2[1], *v16 != a2) )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = (__int64)v16;
LABEL_9:
    a2[1] = 0LL;
    *a2 = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_10;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v7);
  ExpPrepareToWakeResourceShared(a1, &v31, &v29, &v30);
  v18 = a2[7];
  v19 = a2 + 7;
  if ( *(__int64 **)(v18 + 8) != a2 + 7 || (v20 = (_QWORD *)a2[8], (_QWORD *)*v20 != v19) )
    __fastfail(3u);
  *v20 = v18;
  *(_QWORD *)(v18 + 8) = v20;
  *v19 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *((_BYTE *)a2 + 18) = 0;
  v21 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v22 = (__int64 **)a2[1], *v22 != a2) )
    __fastfail(3u);
  *v22 = v21;
  v21[1] = (__int64)v22;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v6 = 0LL;
  a2[6] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
  v23 = 1;
  if ( v29 )
    v23 = 3;
  KeWakeWaitChain(&v31, 0, v23);
  __writecr8(CurrentIrql);
  v24 = *((_BYTE *)a2 + 16);
  if ( v24 )
    KeAbCrossThreadRelease(a1, v24, v5);
  result = ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
LABEL_10:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}

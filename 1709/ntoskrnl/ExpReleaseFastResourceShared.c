/*
 * XREFs of ExpReleaseFastResourceShared @ 0x1401404C0
 * Callers:
 *     ExReleaseFastResource @ 0x1401401C0 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceShared @ 0x1402853B0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     ExpPrepareToWakeResourceShared @ 0x140113C80 (ExpPrepareToWakeResourceShared.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     ExpReplaceListEntry @ 0x1401406F0 (ExpReplaceListEntry.c)
 */

__int64 __fastcall ExpReleaseFastResourceShared(ULONG_PTR BugCheckParameter2, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v5; // rdi
  volatile __int64 *v6; // rdx
  _BYTE *v7; // r9
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 result; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r9
  _QWORD *v19; // rax
  char v20; // r8
  __int64 *v21; // rcx
  __int64 **v22; // rax
  __int64 *v23; // rax
  __int64 **v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v26; // [rsp+78h] [rbp+10h] BYREF
  int v27; // [rsp+80h] [rbp+18h] BYREF
  volatile signed __int32 *v28; // [rsp+88h] [rbp+20h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( !*((_BYTE *)a2 + 18) )
  {
    v23 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v24 = (__int64 **)a2[1], *v24 != a2) )
      __fastfail(3u);
    *v24 = v23;
    v23[1] = (__int64)v24;
    *a2 = 0LL;
    a2[1] = 0LL;
    goto LABEL_9;
  }
  v5 = a2 + 5;
  v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  if ( (_QWORD *)*v5 != v5 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
    v7 = (_BYTE *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v8 = *(_QWORD *)v7, *(_BYTE **)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *v5 = v8;
    *(_QWORD *)(v8 + 8) = v5;
    v7[18] = 1;
    v9 = *((_BYTE *)a2 + 16);
    *((_BYTE *)a2 + 18) = 0;
    v7[16] = v9;
    *((_BYTE *)a2 + 16) = 0;
    ExpReplaceListEntry(a2, v7);
    ExpReplaceListEntry(v5, v10 + 40);
    v13 = *v11;
    if ( *(__int64 **)(*v11 + 8) != v11 )
      __fastfail(3u);
    a2[1] = (__int64)v11;
    *a2 = v13;
    *(_QWORD *)(v13 + 8) = a2;
    *v11 = (__int64)a2;
    ExpReplaceListEntry(a2 + 7, v12 + 56);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v14 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v15 = (__int64 **)a2[1], *v15 != a2) )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = (__int64)v15;
    *a2 = 0LL;
    a2[1] = 0LL;
LABEL_9:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    goto LABEL_10;
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
  ExpPrepareToWakeResourceShared(BugCheckParameter2, &v28, &v26, &v27);
  v17 = a2[7];
  v18 = a2 + 7;
  if ( *(__int64 **)(v17 + 8) != a2 + 7 || (v19 = (_QWORD *)a2[8], (_QWORD *)*v19 != v18) )
    __fastfail(3u);
  *v19 = v17;
  *(_QWORD *)(v17 + 8) = v19;
  *v18 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v20 = 1;
  if ( v26 )
    v20 = 3;
  KeWakeWaitChain(&v28, 0, v20);
  *((_BYTE *)a2 + 18) = 0;
  v21 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v22 = (__int64 **)a2[1], *v22 != a2) )
    __fastfail(3u);
  *v22 = v21;
  v21[1] = (__int64)v22;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v5 = 0LL;
  v5[1] = 0LL;
  __writecr8(CurrentIrql);
  result = *((unsigned __int8 *)a2 + 16);
  if ( (_BYTE)result )
    result = KeAbPostReleaseEx(BugCheckParameter2, (unsigned __int8)result);
LABEL_10:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}

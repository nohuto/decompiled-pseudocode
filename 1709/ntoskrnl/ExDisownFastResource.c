/*
 * XREFs of ExDisownFastResource @ 0x14013F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14013F944 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14013F99C (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14013FF08 (ExpRotateFastOwnerEntrySublistHead.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int64 *CurrentThread; // rbp
  unsigned int v3; // edi
  char v4; // r13
  unsigned int v7; // r12d
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v9; // rcx
  ULONG_PTR v10; // r9
  unsigned __int8 v11; // r15
  __int64 v12; // r8
  unsigned __int64 *v13; // r14
  _QWORD *v14; // r15
  volatile __int64 *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  ULONG_PTR *v22; // rax
  __int64 v23; // rcx
  LONG_PTR result; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // r14
  ULONG_PTR *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int8 v43; // [rsp+90h] [rbp+8h]

  CurrentThread = (unsigned __int64 *)KeGetCurrentThread();
  v3 = 0;
  v4 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v9 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (v9->MiscFlags & 0x400) == 0 && !v9->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v10 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v10 != v9 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v10, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  v11 = KeGetCurrentIrql();
  v43 = v11;
  __writecr8(2uLL);
  if ( *(char *)(BugCheckParameter2 + 26) < 0 && (!*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40) )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  v42.LockQueue.Lock = CurrentThread + 256;
  v42.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v42, (volatile __int64 *)CurrentThread + 256);
  v13 = (unsigned __int64 *)CurrentThread[257];
  if ( v13 == CurrentThread + 257 )
    goto LABEL_28;
  while ( v13[3] != BugCheckParameter2 )
  {
    v13 = (unsigned __int64 *)*v13;
    if ( v13 == CurrentThread + 257 )
      goto LABEL_28;
  }
  if ( !v13 )
  {
LABEL_28:
    if ( *(_BYTE *)(a2 + 18) )
    {
      v25 = (_QWORD *)(a2 + 40);
      if ( (_QWORD *)*v25 == v25 )
      {
        v7 = *(unsigned __int8 *)(a2 + 16);
        v4 = 1;
        *(_BYTE *)(a2 + 18) = 0;
        v26 = *(_QWORD *)a2;
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v27 = *(_QWORD **)(a2 + 8), *v27 != a2) )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        *v25 = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      else
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
        ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 0LL);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v39 = *(_QWORD *)a2;
        v4 = 1;
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v40 = *(_QWORD **)(a2 + 8), *v40 != a2) )
          __fastfail(3u);
        *v40 = v39;
        *(_QWORD *)(v39 + 8) = v40;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
      }
      LOBYTE(v12) = 1;
    }
    else
    {
      v35 = *(_QWORD *)a2;
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v36 = *(_QWORD **)(a2 + 8), *v36 != a2) )
        __fastfail(3u);
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
      ++*(_DWORD *)(BugCheckParameter2 + 64);
      v37 = *(_QWORD **)(BugCheckParameter2 + 56);
      v38 = (_QWORD *)(a2 + 56);
      if ( *v37 != BugCheckParameter2 + 48 )
        __fastfail(3u);
      *v38 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v37;
      *v37 = v38;
      *(_QWORD *)(BugCheckParameter2 + 56) = v38;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v4 = 1;
      v12 = 1LL;
    }
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v27, v12, a2);
  }
  else if ( *(_BYTE *)(a2 + 18) )
  {
    v14 = (_QWORD *)(a2 + 40);
    LockHandle.LockQueue.Next = 0LL;
    v15 = (volatile __int64 *)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
    if ( (_QWORD *)*v14 == v14 )
    {
      KxAcquireQueuedSpinLock((__int64)&LockHandle, v15);
      --*(_DWORD *)(BugCheckParameter2 + 64);
      v16 = (_QWORD *)(a2 + 56);
      v17 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v17 + 8) != a2 + 56 || (v18 = *(_QWORD **)(a2 + 64), (_QWORD *)*v18 != v16) )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *v16 = 0LL;
      *(_QWORD *)(a2 + 64) = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      *(_BYTE *)(a2 + 18) = 0;
      v19 = *(_QWORD *)a2;
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v20 = *(_QWORD **)(a2 + 8), *v20 != a2) )
        __fastfail(3u);
      *v20 = v19;
      v21 = v13 + 5;
      *(_QWORD *)(v19 + 8) = v20;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      *v14 = 0LL;
      *(_QWORD *)(a2 + 48) = 0LL;
      v3 = *(unsigned __int8 *)(a2 + 16);
      *(_BYTE *)(a2 + 16) = 0;
      v22 = (ULONG_PTR *)v21[1];
      if ( (_QWORD *)*v22 != v21 )
        __fastfail(3u);
    }
    else
    {
      KxAcquireQueuedSpinLock((__int64)&LockHandle, v15);
      LOBYTE(v32) = 1;
      ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, v32);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v33 = *(_QWORD *)a2;
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v34 = *(_QWORD **)(a2 + 8), *v34 != a2) )
        __fastfail(3u);
      *v34 = v33;
      v21 = v13 + 5;
      *(_QWORD *)(v33 + 8) = v34;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v22 = (ULONG_PTR *)v21[1];
      if ( (_QWORD *)*v22 != v21 )
        __fastfail(3u);
    }
    v11 = v43;
    *(_QWORD *)a2 = v21;
    *(_QWORD *)(a2 + 8) = v22;
    *v22 = a2;
    v21[1] = a2;
  }
  else
  {
    v28 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v29 = *(_QWORD **)(a2 + 8), *v29 != a2) )
      __fastfail(3u);
    *v29 = v28;
    v30 = v13 + 5;
    *(_QWORD *)(v28 + 8) = v29;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    v31 = (ULONG_PTR *)v30[1];
    if ( (_QWORD *)*v31 != v30 )
      __fastfail(3u);
    *(_QWORD *)a2 = v30;
    *(_QWORD *)(a2 + 8) = v31;
    *v31 = a2;
    v30[1] = a2;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v42);
  if ( v7 )
    KeAbMarkCrossThreadReleasable(v23, v7);
  result = v11;
  __writecr8(v11);
  if ( v4 )
    result = ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  if ( v3 )
    return KeAbPostReleaseEx(BugCheckParameter2, v3);
  return result;
}

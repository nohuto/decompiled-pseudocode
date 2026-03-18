/*
 * XREFs of ExDisownFastResource @ 0x14014D6F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14014D99C (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14014D9F4 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14014E098 (ExpRotateFastOwnerEntrySublistHead.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int64 *CurrentThread; // r15
  unsigned int v5; // r12d
  char v6; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v8; // rcx
  ULONG_PTR v9; // r9
  unsigned __int8 v10; // r14
  unsigned __int64 *i; // rsi
  __int64 v12; // r8
  _QWORD *v13; // r14
  volatile __int64 *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  ULONG_PTR *v21; // rax
  __int64 v22; // rcx
  LONG_PTR result; // rax
  _QWORD *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  ULONG_PTR *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp+40h]
  unsigned __int8 v44; // [rsp+A8h] [rbp+48h]

  CurrentThread = (unsigned __int64 *)KeGetCurrentThread();
  v43 = 0;
  v5 = 0;
  v6 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v8 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (v8->MiscFlags & 0x400) == 0 && !v8->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v9 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v9 != v8 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v9, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 17) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  v10 = KeGetCurrentIrql();
  v44 = v10;
  __writecr8(2uLL);
  if ( *(char *)(BugCheckParameter2 + 26) < 0 && (!*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40) )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  v42.LockQueue.Lock = CurrentThread + 255;
  v42.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v42, (volatile __int64 *)CurrentThread + 255);
  for ( i = (unsigned __int64 *)CurrentThread[256]; ; i = (unsigned __int64 *)*i )
  {
    if ( i == CurrentThread + 256 )
    {
      v12 = 0LL;
      goto LABEL_30;
    }
    if ( i[3] == BugCheckParameter2 )
      break;
  }
  v12 = 0LL;
  if ( i )
  {
    if ( *(_BYTE *)(a2 + 18) )
    {
      v13 = (_QWORD *)(a2 + 40);
      LockHandle.LockQueue.Next = 0LL;
      v14 = (volatile __int64 *)(BugCheckParameter2 + 96);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
      if ( (_QWORD *)*v13 == v13 )
      {
        KxAcquireQueuedSpinLock((__int64)&LockHandle, v14);
        --*(_DWORD *)(BugCheckParameter2 + 64);
        v15 = (_QWORD *)(a2 + 56);
        v16 = *(_QWORD *)(a2 + 56);
        v17 = *(_QWORD **)(a2 + 64);
        if ( *(_QWORD *)(v16 + 8) != a2 + 56 || (_QWORD *)*v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *v15 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        *(_BYTE *)(a2 + 18) = 0;
        v18 = *(_QWORD *)a2;
        v19 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v19 != a2 )
          __fastfail(3u);
        *v19 = v18;
        v20 = i + 5;
        *(_QWORD *)(v18 + 8) = v19;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        *v13 = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
        v5 = *(unsigned __int8 *)(a2 + 16);
        *(_BYTE *)(a2 + 16) = 0;
        v21 = (ULONG_PTR *)v20[1];
        if ( (_QWORD *)*v21 != v20 )
          __fastfail(3u);
      }
      else
      {
        KxAcquireQueuedSpinLock((__int64)&LockHandle, v14);
        LOBYTE(v32) = 1;
        ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, v32);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v33 = *(_QWORD *)a2;
        v34 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v34 != a2 )
          __fastfail(3u);
        *v34 = v33;
        v20 = i + 5;
        *(_QWORD *)(v33 + 8) = v34;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        v21 = (ULONG_PTR *)v20[1];
        if ( (_QWORD *)*v21 != v20 )
          __fastfail(3u);
      }
      v10 = v44;
      *(_QWORD *)a2 = v20;
      *(_QWORD *)(a2 + 8) = v21;
      *v21 = a2;
      v20[1] = a2;
    }
    else
    {
      v28 = *(_QWORD *)a2;
      v29 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v29 != a2 )
        __fastfail(3u);
      *v29 = v28;
      v30 = i + 5;
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
    goto LABEL_22;
  }
LABEL_30:
  if ( *(_BYTE *)(a2 + 18) )
  {
    v24 = (_QWORD *)(a2 + 40);
    if ( (_QWORD *)*v24 == v24 )
    {
      v25 = *(unsigned __int8 *)(a2 + 16);
      v6 = 1;
      *(_BYTE *)(a2 + 18) = 0;
      v26 = *(_QWORD *)a2;
      v43 = v25;
      v27 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v27 != a2 )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      *v24 = 0LL;
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
      v6 = 1;
      v40 = *(_QWORD **)(a2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v40 != a2 )
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
    v36 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v36 != a2 )
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
    v6 = 1;
    LOBYTE(v12) = 1;
  }
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v26, v12, a2);
LABEL_22:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v42);
  if ( v43 )
    KeAbMarkCrossThreadReleasable(v22, v43);
  result = v10;
  __writecr8(v10);
  if ( v6 )
    result = ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  if ( v5 )
    return KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)v5);
  return result;
}

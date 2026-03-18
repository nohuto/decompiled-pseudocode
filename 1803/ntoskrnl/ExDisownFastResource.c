/*
 * XREFs of ExDisownFastResource @ 0x140158940
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x140158488 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpFindFastOwnerEntryForThread @ 0x1401593C4 (ExpFindFastOwnerEntryForThread.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14015941C (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140159474 (ExpAddFastOwnerEntryToThreadList.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExDisownFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int64 *CurrentThread; // r15
  unsigned int v5; // r13d
  char v6; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v8; // rcx
  ULONG_PTR v9; // r9
  unsigned __int8 v10; // si
  __int64 v11; // r8
  __int64 FastOwnerEntryForThread; // rax
  char v13; // cl
  __int64 v14; // r8
  __int64 v15; // r14
  _QWORD *v16; // rsi
  volatile __int64 *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  ULONG_PTR *v24; // rcx
  __int64 v25; // rcx
  LONG_PTR result; // rax
  _QWORD *v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  ULONG_PTR *v33; // rcx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rcx
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+40h]
  unsigned __int8 v45; // [rsp+A8h] [rbp+48h]

  CurrentThread = (unsigned __int64 *)KeGetCurrentThread();
  v44 = 0;
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
  v45 = v10;
  __writecr8(2uLL);
  if ( *(char *)(BugCheckParameter2 + 26) < 0 && (!*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40) )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  *(_BYTE *)(a2 + 17) |= 1u;
  v43.LockQueue.Lock = CurrentThread + 256;
  v43.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v43, (volatile __int64 *)CurrentThread + 256);
  LOBYTE(v11) = 1;
  FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, v11, 0LL);
  v13 = *(_BYTE *)(a2 + 18);
  v14 = 0LL;
  v15 = FastOwnerEntryForThread;
  if ( FastOwnerEntryForThread )
  {
    if ( v13 )
    {
      v16 = (_QWORD *)(a2 + 40);
      LockHandle.LockQueue.Next = 0LL;
      v17 = (volatile __int64 *)(BugCheckParameter2 + 96);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
      if ( (_QWORD *)*v16 == v16 )
      {
        KxAcquireQueuedSpinLock((__int64)&LockHandle, v17);
        --*(_DWORD *)(BugCheckParameter2 + 64);
        v18 = (_QWORD *)(a2 + 56);
        v19 = *(_QWORD *)(a2 + 56);
        if ( *(_QWORD *)(v19 + 8) != a2 + 56 || (v20 = *(_QWORD **)(a2 + 64), (_QWORD *)*v20 != v18) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        *v18 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        *(_BYTE *)(a2 + 18) = 0;
        v21 = *(_QWORD *)a2;
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v22 = *(_QWORD **)(a2 + 8), *v22 != a2) )
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        v23 = v15 + 40;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        *v16 = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
        v5 = *(unsigned __int8 *)(a2 + 16);
        *(_BYTE *)(a2 + 16) = 0;
        v24 = *(ULONG_PTR **)(v15 + 48);
        if ( *v24 != v15 + 40 )
          __fastfail(3u);
      }
      else
      {
        KxAcquireQueuedSpinLock((__int64)&LockHandle, v17);
        ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v34 = *(_QWORD *)a2;
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v35 = *(_QWORD **)(a2 + 8), *v35 != a2) )
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
        v23 = v15 + 40;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        v24 = *(ULONG_PTR **)(v15 + 48);
        if ( *v24 != v15 + 40 )
          __fastfail(3u);
      }
      v10 = v45;
      *(_QWORD *)a2 = v23;
      *(_QWORD *)(a2 + 8) = v24;
      *v24 = a2;
      *(_QWORD *)(v23 + 8) = a2;
    }
    else
    {
      v31 = *(_QWORD *)a2;
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v32 = *(_QWORD **)(a2 + 8), *v32 != a2) )
        __fastfail(3u);
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v33 = *(ULONG_PTR **)(v15 + 48);
      if ( *v33 != v15 + 40 )
        __fastfail(3u);
      *(_QWORD *)a2 = v15 + 40;
      *(_QWORD *)(a2 + 8) = v33;
      *v33 = a2;
      *(_QWORD *)(v15 + 48) = a2;
    }
  }
  else
  {
    if ( v13 )
    {
      v27 = (_QWORD *)(a2 + 40);
      if ( (_QWORD *)*v27 == v27 )
      {
        v28 = *(unsigned __int8 *)(a2 + 16);
        v6 = 1;
        *(_BYTE *)(a2 + 18) = 0;
        v44 = v28;
        v29 = *(_QWORD *)a2;
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v30 = *(_QWORD **)(a2 + 8), *v30 != a2) )
          __fastfail(3u);
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
        *v27 = 0LL;
        *(_QWORD *)(a2 + 48) = 0LL;
      }
      else
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
        ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 0);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v40 = *(_QWORD *)a2;
        v6 = 1;
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v41 = *(_QWORD **)(a2 + 8), *v41 != a2) )
          __fastfail(3u);
        *v41 = v40;
        *(_QWORD *)(v40 + 8) = v41;
        *(_QWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 8) = 0LL;
      }
      LOBYTE(v14) = 1;
    }
    else
    {
      v36 = *(_QWORD *)a2;
      if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v37 = *(_QWORD **)(a2 + 8), *v37 != a2) )
        __fastfail(3u);
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
      ++*(_DWORD *)(BugCheckParameter2 + 64);
      v38 = *(_QWORD **)(BugCheckParameter2 + 56);
      v39 = (_QWORD *)(a2 + 56);
      if ( *v38 != BugCheckParameter2 + 48 )
        __fastfail(3u);
      *v39 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v38;
      *v38 = v39;
      *(_QWORD *)(BugCheckParameter2 + 56) = v39;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v6 = 1;
      LOBYTE(v14) = 1;
    }
    ExpAddFastOwnerEntryToThreadList(CurrentThread, v30, v14, a2);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v43);
  if ( v44 )
    KeAbMarkCrossThreadReleasable(v25, v44);
  result = v10;
  __writecr8(v10);
  if ( v6 )
    result = ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  if ( v5 )
    return KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)v5);
  return result;
}

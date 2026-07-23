/*
 * XREFs of MiRemovePteTracker @ 0x140225B70
 * Callers:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MmFreeMappingAddress @ 0x1405727F0 (MmFreeMappingAddress.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiRemovePteTracker(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, ULONG_PTR a3)
{
  _SLIST_ENTRY *v5; // rsi
  ULONG_PTR v6; // r14
  unsigned int v7; // ebx
  _SLIST_ENTRY *v8; // rdx
  _SLIST_ENTRY *Next; // r8
  _SLIST_ENTRY *v10; // rcx
  _SLIST_ENTRY *v11; // rcx
  _SLIST_ENTRY **v12; // rax
  PSLIST_ENTRY result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = ((unsigned __int8)(95 * (a2 >> 12)) ^ (unsigned __int8)((40543 * (unsigned __int64)(unsigned int)(a2 >> 12)) >> 32)) & 0xF;
  KeAcquireInStackQueuedSpinLock(&qword_14036CD10, &LockHandle);
  v8 = (_SLIST_ENTRY *)((char *)&unk_14036D570 + 16 * v7);
  Next = v8->Next;
  if ( v8->Next == v8 )
    goto LABEL_16;
  do
  {
    v10 = Next[2].Next;
    if ( v6 == ((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( v5 )
        KeBugCheckEx(0xDAu, 1uLL, (ULONG_PTR)Next, BugCheckParameter3, (ULONG_PTR)v5);
      if ( *((_QWORD *)&Next[1].Next + 1) != a3 )
        KeBugCheckEx(0xDAu, 2uLL, (ULONG_PTR)Next, *((_QWORD *)&Next[1].Next + 1), a3);
      if ( BugCheckParameter3 && (*(_WORD *)(BugCheckParameter3 + 10) & 0x200) == 0 )
      {
        if ( *((_QWORD *)&Next[3].Next + 1) != *(_QWORD *)(BugCheckParameter3 + 48) )
          KeBugCheckEx(
            0xDAu,
            4uLL,
            (ULONG_PTR)Next,
            *((_QWORD *)&Next[3].Next + 1),
            *(_QWORD *)(BugCheckParameter3 + 48));
        if ( !byte_14036CEB0 )
        {
          if ( v10 != *(_SLIST_ENTRY **)(BugCheckParameter3 + 24) )
            KeBugCheckEx(0xDAu, 3uLL, (ULONG_PTR)Next, (ULONG_PTR)Next[2].Next, *(_QWORD *)(BugCheckParameter3 + 24));
          if ( *((_QWORD *)&Next[2].Next + 1) != *(_QWORD *)(BugCheckParameter3 + 32) )
            KeBugCheckEx(
              0xDAu,
              5uLL,
              (ULONG_PTR)Next,
              *((_QWORD *)&Next[2].Next + 1),
              *(_QWORD *)(BugCheckParameter3 + 32));
        }
      }
      v11 = Next->Next;
      v12 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
      if ( *(&Next->Next->Next + 1) != Next || *v12 != Next )
        __fastfail(3u);
      *v12 = v11;
      v5 = Next;
      *((_QWORD *)&v11->Next + 1) = v12;
    }
    Next = Next->Next;
  }
  while ( Next != v8 );
  if ( !v5 )
  {
LABEL_16:
    if ( !byte_14036CD9D )
      KeBugCheckEx(0xDAu, 6uLL, BugCheckParameter3, v6, a3);
  }
  qword_14036D670 -= a3;
  --qword_14036D678;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (PSLIST_ENTRY)LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v5 )
    return RtlpInterlockedPushEntrySList(&stru_14036CD00, v5);
  return result;
}

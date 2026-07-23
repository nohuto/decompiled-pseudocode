/*
 * XREFs of MiRemovePteTracker @ 0x14026D0BC
 * Callers:
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     MmFreeMappingAddress @ 0x1405E1FA0 (MmFreeMappingAddress.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiRemovePteTracker(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, ULONG_PTR a3)
{
  _SLIST_ENTRY *v5; // rdi
  ULONG_PTR v6; // r14
  unsigned int v7; // ebx
  _SLIST_ENTRY *v8; // rdx
  _SLIST_ENTRY *Next; // r8
  ULONG_PTR v10; // r9
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // r9
  _SLIST_ENTRY *v13; // rax
  _SLIST_ENTRY **v14; // rcx
  PSLIST_ENTRY result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = ((unsigned __int8)(95 * (a2 >> 12)) ^ (unsigned __int8)((40543 * (unsigned __int64)(unsigned int)(a2 >> 12)) >> 32)) & 0xF;
  KeAcquireInStackQueuedSpinLock(&qword_1403CC1D0, &LockHandle);
  v8 = (_SLIST_ENTRY *)((char *)&unk_1403CCDF0 + 16 * v7);
  Next = v8->Next;
  if ( v8->Next == v8 )
    goto LABEL_16;
  do
  {
    v10 = (ULONG_PTR)Next[2].Next;
    if ( v6 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( v5 )
        KeBugCheckEx(0xDAu, 1uLL, (ULONG_PTR)Next, BugCheckParameter3, (ULONG_PTR)v5);
      if ( *((_QWORD *)&Next[1].Next + 1) != a3 )
        KeBugCheckEx(0xDAu, 2uLL, (ULONG_PTR)Next, *((_QWORD *)&Next[1].Next + 1), a3);
      if ( BugCheckParameter3 && (*(_WORD *)(BugCheckParameter3 + 10) & 0x200) == 0 )
      {
        v11 = *((_QWORD *)&Next[3].Next + 1);
        if ( v11 != *(_QWORD *)(BugCheckParameter3 + 48) )
          KeBugCheckEx(0xDAu, 4uLL, (ULONG_PTR)Next, v11, *(_QWORD *)(BugCheckParameter3 + 48));
        if ( !byte_1403CC3F0 )
        {
          if ( v10 != *(_QWORD *)(BugCheckParameter3 + 24) )
            KeBugCheckEx(0xDAu, 3uLL, (ULONG_PTR)Next, v10, *(_QWORD *)(BugCheckParameter3 + 24));
          v12 = *((_QWORD *)&Next[2].Next + 1);
          if ( v12 != *(_QWORD *)(BugCheckParameter3 + 32) )
            KeBugCheckEx(0xDAu, 5uLL, (ULONG_PTR)Next, v12, *(_QWORD *)(BugCheckParameter3 + 32));
        }
      }
      v13 = Next->Next;
      if ( *(&Next->Next->Next + 1) != Next || (v14 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1), *v14 != Next) )
        __fastfail(3u);
      *v14 = v13;
      v5 = Next;
      *((_QWORD *)&v13->Next + 1) = v14;
    }
    Next = Next->Next;
  }
  while ( Next != v8 );
  if ( !v5 )
  {
LABEL_16:
    if ( !byte_1403CC2BD )
      KeBugCheckEx(0xDAu, 6uLL, BugCheckParameter3, v6, a3);
  }
  qword_1403CCEF0 -= a3;
  --qword_1403CCEF8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (PSLIST_ENTRY)LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v5 )
    return RtlpInterlockedPushEntrySList(&stru_1403CC1C0, v5);
  return result;
}

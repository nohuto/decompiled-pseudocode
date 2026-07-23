/*
 * XREFs of MiAllocatePfnRepurposeLogDispatch @ 0x14016D9F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void MiAllocatePfnRepurposeLogDispatch()
{
  _SLIST_ENTRY *v0; // rsi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v2; // rdi
  PSLIST_ENTRY v3; // rbx
  _SLIST_ENTRY *Next; // rax
  unsigned int Alignment_low; // edi
  int v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x70526D4Du);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Next = 0LL;
    PoolWithTag[2].Next = (_SLIST_ENTRY *)((char *)PoolWithTag + 72);
    *((_QWORD *)&PoolWithTag[2].Next + 1) = (char *)PoolWithTag + 4088;
    *((_DWORD *)&PoolWithTag->Next + 2) = 2;
    PoolWithTag[1].Next = v0;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_1403CBF40;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_1403CBF40);
  v3 = ListEntry;
  if ( !dword_1403CBF28 )
  {
LABEL_13:
    ListEntry = 0LL;
    goto LABEL_6;
  }
  if ( v2 )
  {
    ListEntry = v2;
    v2 = 0LL;
    goto LABEL_6;
  }
  if ( ListEntry )
  {
    if ( ((__int64)ListEntry[2].Next & 0xFFFLL) != 0 )
    {
      v3 = 0LL;
      goto LABEL_6;
    }
    goto LABEL_13;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
  {
    Next = v3[2].Next;
    if ( Next == (_SLIST_ENTRY *)(&v3[4].Next + 1) )
      goto LABEL_27;
    if ( ((unsigned __int16)Next & 0xFFF) != 0 )
    {
      if ( v0 < v3[1].Next )
      {
        v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
        Next = v3[2].Next;
      }
      *((_QWORD *)&v3[1].Next + 1) = v0;
      *((_QWORD *)&v3[2].Next + 1) = (char *)Next - 8;
    }
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 72);
    if ( !ExAcquireRundownProtection(&stru_1403E2788) )
      goto LABEL_27;
    Alignment_low = LOWORD(stru_1403E27C0.Alignment);
    if ( LOWORD(stru_1403E27C0.Alignment) < (unsigned int)dword_1403E27A8 )
    {
      RtlpInterlockedPushEntrySList(&stru_1403E27C0, v3);
      if ( !Event.Header.SignalState && Alignment_low >= 8 )
        KeSetEvent(&Event, 0, 0);
      v6 = 1;
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_1403CD490, 0x64u);
      v6 = 0;
    }
    ExReleaseRundownProtection(&stru_1403E2788);
    if ( !v6 )
LABEL_27:
      ExFreePoolWithTag(v3, 0);
  }
}

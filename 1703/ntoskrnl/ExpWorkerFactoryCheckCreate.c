/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x1400E3D20
 * Callers:
 *     NtReleaseWorkerFactoryWorker @ 0x1400E3860 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14015D930 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ExpCheckThreadHistory @ 0x14002841C (ExpCheckThreadHistory.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCreateThread @ 0x14012A928 (ExpWorkerFactoryCreateThread.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14012B1B8 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1404590A8 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

unsigned __int64 __fastcall ExpWorkerFactoryCheckCreate(__int64 Object, PKLOCK_QUEUE_HANDLE LockHandle, char a3)
{
  PKLOCK_QUEUE_HANDLE v4; // rbx
  unsigned int v6; // ebp
  volatile __int64 *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 Next; // rax
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  char v18; // si
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // eax
  _QWORD v22[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v23; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = LockHandle;
  v6 = 2;
  if ( !LockHandle )
  {
    v7 = *(volatile __int64 **)(Object + 16);
    v4 = (PKLOCK_QUEUE_HANDLE)v22;
    v22[1] = v7;
    v22[0] = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v23 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v22, v7);
    }
    else
    {
      v9 = (_QWORD *)_InterlockedExchange64(v7, (__int64)v22);
      if ( v9 )
        KxWaitForLockOwnerShip((__int64)v22, v9);
    }
  }
  if ( a3 )
  {
    v19 = *(_DWORD *)(Object + 152);
    if ( (((unsigned __int8)v19 | (unsigned __int8)((v19 | (v19 >> 6)) >> 2)) & 0x30) == 0 && (v19 & 0x100) == 0 )
      goto LABEL_26;
  }
  if ( *(_DWORD *)(Object + 144)
    || *(_DWORD *)(Object + 128) >= *(_DWORD *)(Object + 124)
    || (v10 = *(_QWORD *)(Object + 16), *(_DWORD *)(v10 + 28))
    || (v13 = *(_QWORD *)(v10 + 8), !*(_DWORD *)(v13 + 4)) && !*(_DWORD *)(v10 + 24) )
  {
    *(_DWORD *)(Object + 152) &= 0xFFFFCE0F;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
      goto LABEL_12;
    }
    _m_prefetchw(v4);
    Next = (__int64)v4->LockQueue.Next;
    if ( !v4->LockQueue.Next )
    {
      if ( v4 == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)v4->LockQueue.Lock,
                                        0LL,
                                        (signed __int64)v4) )
      {
LABEL_12:
        result = v4->OldIrql;
        __writecr8(result);
        return result;
      }
      Next = KxWaitForLockChainValid(v4);
    }
    v4->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_12;
  }
  if ( (!a3 || (*(_DWORD *)(Object + 152) & 0xC0) != 0x80)
    && *(_DWORD *)(v13 + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v20 = *(_DWORD *)(Object + 152);
    if ( (v20 & 0xC0) != 0 )
    {
      if ( (*(_DWORD *)(Object + 152) & 0xC0) != 0x40 || !a3 )
        goto LABEL_26;
      *(_DWORD *)(Object + 152) = v20 & 0xFFFFFF3F | 0x80;
    }
    else
    {
      v6 = 3;
      *(_DWORD *)(Object + 152) = v20 & 0xFFFFFF3F | 0x40;
    }
    goto LABEL_33;
  }
  if ( (!a3 || (*(_DWORD *)(Object + 152) & 0x30) != 0x20) && ExpCheckThreadHistory(Object) )
  {
    v16 = *(_DWORD *)(Object + 152);
    if ( (v16 & 0x30) != 0 )
    {
      if ( (*(_DWORD *)(Object + 152) & 0x30) != 0x10 || !a3 )
        goto LABEL_26;
      *(_DWORD *)(Object + 152) = v16 & 0xFFFFFFCF | 0x20;
    }
    else
    {
      v6 = 3;
      *(_DWORD *)(Object + 152) = v16 & 0xFFFFFFCF | 0x10;
    }
    goto LABEL_33;
  }
  if ( !a3 || (*(_DWORD *)(Object + 152) & 0x3000) != 0x2000 )
  {
    v14 = *(_DWORD *)(Object + 140);
    if ( v14 )
    {
      if ( *(_DWORD *)(Object + 128) > v14 )
      {
        v21 = *(_DWORD *)(Object + 152);
        if ( (v21 & 0x3000) == 0 )
        {
          v6 = 3;
          *(_DWORD *)(Object + 152) = v21 & 0xFFFFCFFF | 0x1000;
          goto LABEL_33;
        }
        if ( (*(_DWORD *)(Object + 152) & 0x3000) == 0x1000 && a3 )
        {
          *(_DWORD *)(Object + 152) = v21 & 0xFFFFCFFF | 0x2000;
          goto LABEL_33;
        }
LABEL_26:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
        goto LABEL_12;
      }
    }
  }
  if ( (*(_DWORD *)(Object + 152) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode((PVOID)Object);
  ++*(_DWORD *)(Object + 144);
  *(_DWORD *)(Object + 152) &= 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
  __writecr8(v4->OldIrql);
  result = ExpWorkerFactoryCreateThread(Object);
  v15 = result;
  if ( (result & 0x80000000) != 0LL )
  {
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(Object + 16), v4);
    --*(_DWORD *)(Object + 144);
    if ( v15 == -1073741558 || v15 == -1073741814 || v15 == -1073741582 || v15 == -1073741823 )
      goto LABEL_26;
    *(_DWORD *)(Object + 152) |= 0x100u;
    v6 = 1;
LABEL_33:
    v17 = *(_DWORD *)(Object + 152);
    v18 = 0;
    if ( (v17 & 8) == 0 )
    {
      v18 = 1;
      *(_DWORD *)(Object + 152) = v17 | 8;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
    __writecr8(v4->OldIrql);
    if ( v18 )
    {
      ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)Object);
    }
    return ExpSetWorkerFactoryDeferredCreateTimer(v6);
  }
  return result;
}

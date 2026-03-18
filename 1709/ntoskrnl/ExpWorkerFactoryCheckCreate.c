/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x140076870
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140076620 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x1400B1CE0 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x140145860 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCreateThread @ 0x1400B2954 (ExpWorkerFactoryCreateThread.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1400E28E4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     ExpCheckThreadHistory @ 0x14011E06C (ExpCheckThreadHistory.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x14059516C (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

unsigned __int64 __fastcall ExpWorkerFactoryCheckCreate(PVOID Object, PKLOCK_QUEUE_HANDLE LockHandle, char a3)
{
  PKLOCK_QUEUE_HANDLE v4; // rbx
  unsigned int v6; // ebp
  volatile __int64 *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  __int64 v9; // rax
  __int64 Next; // rax
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // esi
  unsigned int v15; // ecx
  int v16; // eax
  char v17; // si
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  _QWORD v21[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v22; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = LockHandle;
  v6 = 2;
  if ( !LockHandle )
  {
    v7 = (volatile __int64 *)*((_QWORD *)Object + 2);
    v4 = (PKLOCK_QUEUE_HANDLE)v21;
    v21[1] = v7;
    v21[0] = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v22 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v21, v7);
    }
    else if ( _InterlockedExchange64(v7, (__int64)v21) )
    {
      KxWaitForLockOwnerShip(v21);
    }
  }
  if ( a3 )
  {
    v18 = *((_DWORD *)Object + 38);
    if ( (((unsigned __int8)v18 | (unsigned __int8)((v18 | (v18 >> 6)) >> 2)) & 0x30) == 0 && (v18 & 0x100) == 0 )
      goto LABEL_25;
  }
  if ( *((_DWORD *)Object + 36)
    || *((_DWORD *)Object + 32) >= *((_DWORD *)Object + 31)
    || (v9 = *((_QWORD *)Object + 2), *(_DWORD *)(v9 + 28))
    || (v12 = *(_QWORD *)(v9 + 8), !*(_DWORD *)(v12 + 4)) && !*(_DWORD *)(v9 + 24) )
  {
    *((_DWORD *)Object + 38) &= 0xFFFFCE0F;
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
  if ( (!a3 || (*((_DWORD *)Object + 38) & 0xC0) != 0x80) && *(_DWORD *)(v12 + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v19 = *((_DWORD *)Object + 38);
    if ( (unsigned __int8)v19 >> 6 )
    {
      if ( ((*((_DWORD *)Object + 38) >> 6) & 3) != 1 || !a3 )
        goto LABEL_25;
      *((_DWORD *)Object + 38) = v19 & 0xFFFFFF3F | 0x80;
    }
    else
    {
      v6 = 3;
      *((_DWORD *)Object + 38) = v19 & 0xFFFFFF3F | 0x40;
    }
    goto LABEL_34;
  }
  if ( (!a3 || (*((_DWORD *)Object + 38) & 0x30) != 0x20) && (unsigned __int8)ExpCheckThreadHistory(Object) )
  {
    v15 = *((_DWORD *)Object + 38);
    if ( ((v15 >> 4) & 3) != 0 )
    {
      if ( ((*((_DWORD *)Object + 38) >> 4) & 3) != 1 || !a3 )
        goto LABEL_25;
      *((_DWORD *)Object + 38) = v15 & 0xFFFFFFCF | 0x20;
    }
    else
    {
      v6 = 3;
      *((_DWORD *)Object + 38) = v15 & 0xFFFFFFCF | 0x10;
    }
    goto LABEL_34;
  }
  if ( !a3 || (*((_DWORD *)Object + 38) & 0x3000) != 0x2000 )
  {
    v13 = *((_DWORD *)Object + 35);
    if ( v13 )
    {
      if ( *((_DWORD *)Object + 32) > v13 )
      {
        v20 = *((_DWORD *)Object + 38);
        if ( ((v20 >> 12) & 3) == 0 )
        {
          v6 = 3;
          *((_DWORD *)Object + 38) = v20 & 0xFFFFCFFF | 0x1000;
          goto LABEL_34;
        }
        if ( ((*((_DWORD *)Object + 38) >> 12) & 3) == 1 && a3 )
        {
          *((_DWORD *)Object + 38) = v20 & 0xFFFFCFFF | 0x2000;
          goto LABEL_34;
        }
LABEL_25:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
        goto LABEL_12;
      }
    }
  }
  if ( (*((_DWORD *)Object + 38) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  ++*((_DWORD *)Object + 36);
  *((_DWORD *)Object + 38) &= 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
  __writecr8(v4->OldIrql);
  result = ExpWorkerFactoryCreateThread(Object);
  v14 = result;
  if ( (result & 0x80000000) != 0LL )
  {
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), v4);
    --*((_DWORD *)Object + 36);
    if ( v14 == -1073741558 || v14 == -1073741814 || v14 == -1073741582 || v14 == -1073741823 )
      goto LABEL_25;
    *((_DWORD *)Object + 38) |= 0x100u;
    v6 = 1;
LABEL_34:
    v16 = *((_DWORD *)Object + 38);
    v17 = 0;
    if ( (v16 & 8) == 0 )
    {
      v17 = 1;
      *((_DWORD *)Object + 38) = v16 | 8;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
    __writecr8(v4->OldIrql);
    if ( v17 )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)Object);
    }
    return ExpSetWorkerFactoryDeferredCreateTimer(v6);
  }
  return result;
}

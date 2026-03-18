/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x14008FC20
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14008F470 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x1400309BC (KiAbThreadInsertList.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpFindCurrentThread @ 0x1400909C0 (ExpFindCurrentThread.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140255D0C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402561E0 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v5; // si
  volatile __int64 *v6; // rdi
  char v7; // al
  __int64 v8; // rdx
  unsigned __int8 v9; // di
  int v10; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned int v13; // edi
  unsigned int v14; // edi
  _KSPIN_LOCK_QUEUE *volatile v15; // rax
  __int64 v16; // rax
  _KSPIN_LOCK_QUEUE *volatile v17; // rax
  struct _KTHREAD *v18; // r9
  int v19; // edx
  int v20; // r8d
  __int16 v21; // r8
  int v22; // r12d
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-39h] BYREF
  __int64 v32; // [rsp+48h] [rbp-21h] BYREF
  volatile signed __int64 *v33; // [rsp+50h] [rbp-19h]
  _QWORD v34[12]; // [rsp+60h] [rbp-9h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 v36; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 v37; // [rsp+E0h] [rbp+77h] BYREF
  __int64 CurrentIrql; // [rsp+E8h] [rbp+7Fh]

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x64B8u);
  v6 = (volatile __int64 *)(a1 + 96);
  v36 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96, &v36);
  }
  else
  {
    v7 = 0;
    v8 = _InterlockedExchange64(v6, (__int64)&LockHandle);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql(&LockHandle, v8, &v36);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v36);
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_WORD *)(a1 + 24) = 1;
    *(_WORD *)(a1 + 26) |= 0x80u;
    v9 = 1;
    v10 = *(_DWORD *)(a1 + 56) & 7;
    *(_DWORD *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 56) = v10 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_10;
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    }
LABEL_10:
    _enable();
    __incgsdword(0x64BCu);
    __incgsdword(0x64A4u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v9;
  }
  if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v13 = *(_DWORD *)(a1 + 56) & 7 ^ ((*(_DWORD *)(a1 + 56) & 0xFFFFFFF8) + 8);
    *(_DWORD *)(a1 + 56) = v13;
    v14 = v13 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_18;
    }
    _m_prefetchw(&LockHandle);
    v15 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_18:
        _enable();
        __incgsdword(0x64C0u);
        __incgsdword(0x64A4u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65585LL, a1, v14, *(unsigned int *)(a1 + 68));
        return 1;
      }
      v15 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v15->Lock, 1uLL);
    goto LABEL_18;
  }
  if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _enable();
    __incgsdword(0x64C8u);
    return 0;
  }
  ++*(_DWORD *)(a1 + 76);
  memset(v34, 0, 0x28uLL);
  LOWORD(v34[2]) = 1;
  v34[4] = &v34[3];
  v34[3] = &v34[3];
  v16 = *(_QWORD *)(a1 + 40);
  BYTE2(v34[2]) = 6;
  HIDWORD(v34[2]) = 0;
  if ( v16 )
  {
    v28 = *(_QWORD **)(v16 + 8);
    if ( *v28 != v16 )
      __fastfail(3u);
    v34[1] = *(_QWORD *)(v16 + 8);
    v34[0] = v16;
    *v28 = v34;
    *(_QWORD *)(v16 + 8) = v34;
  }
  else
  {
    v34[1] = v34;
    v34[0] = v34;
    *(_QWORD *)(a1 + 40) = v34;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    v17 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_27;
      v17 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v17->Lock, 1uLL);
  }
LABEL_27:
  _enable();
  __incgsdword(0x64C4u);
  if ( v5 )
    PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
  v18 = KeGetCurrentThread();
  v19 = 0;
  v20 = (*((_DWORD *)&v18[1].SwapListEntry + 2) >> 9) & 7;
  if ( (v18->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v20 = 0;
  }
  else if ( ((*((_DWORD *)&v18[1].SwapListEntry + 2) >> 9) & 7u) >= 2 )
  {
    goto LABEL_31;
  }
  if ( v18 != KeGetCurrentThread() || !v18[1].Timer.DueTime.LowPart )
  {
LABEL_31:
    if ( v20 <= 1 )
      goto LABEL_34;
  }
  if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
    v19 = 4;
LABEL_34:
  if ( (*(_BYTE *)(a1 + 26) & 2) == 0 )
    v19 |= 2u;
  if ( v18->Priority > (int)*(unsigned __int8 *)(a1 + 27) )
    v19 |= 0xFF00u;
  if ( v19 )
    ExpApplyPriorityBoost(a1);
  ExpWaitForResource(a1, v34, 66084LL, ExpApplyRewaitBoost);
  v21 = *(_WORD *)(a1 + 26);
  *(_QWORD *)(a1 + 48) = CurrentThread;
  if ( (v21 & 8) != 0 )
    goto LABEL_66;
  v22 = 0;
  if ( (v21 & 4) != 0
    && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
     || ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7u) < 2) )
  {
    v22 = 4;
  }
  if ( (v21 & 2) != 0 )
    v22 |= 2u;
  if ( !v22 )
    goto LABEL_66;
  v37 = 2;
  v33 = v6;
  v32 = 0LL;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v23 = KiFastAcquireQueuedSpinLockInstrumented(&v32, v6, &v37);
  }
  else
  {
    v23 = 0;
    v24 = _InterlockedExchange64(v6, (__int64)&v32);
    if ( v24 )
    {
      KxWaitForLockOwnerShipWithIrql(&v32, v24, &v37);
      v23 = 1;
    }
  }
  if ( v23 )
  {
    _disable();
    __writecr8(v37);
  }
  v25 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&v32, 0, 1, 0);
  v26 = v25;
  if ( (v22 & 4) != 0 )
  {
    if ( (*(_DWORD *)(v25 + 8) & 1) != 0 )
    {
      v22 &= ~4u;
    }
    else
    {
      PsBoostThreadIo((__int64)CurrentThread, 0LL);
      *(_DWORD *)(v26 + 8) |= 1u;
    }
  }
  if ( (v22 & 2) != 0 )
  {
    if ( (*(_DWORD *)(v26 + 8) & 4) != 0 )
    {
      v22 &= ~2u;
    }
    else
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.DueTime.HighPart) == 1
        && CurrentThread->AbWaitEntryCount )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(
                             (__int64)CurrentThread,
                             &CurrentPrcb->AbPropagateBoostsList.Next,
                             &CurrentThread->PropagateBoostsEntry.Next) )
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        __writecr8((unsigned __int8)CurrentIrql);
      }
      *(_DWORD *)(v26 + 8) |= 4u;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
  }
  else
  {
    _m_prefetchw(&v32);
    v27 = v32;
    if ( !v32 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v33, 0LL, (signed __int64)&v32) == &v32 )
        goto LABEL_61;
      v27 = KxWaitForLockChainValid(&v32);
    }
    v32 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v27 + 8), 1uLL);
  }
LABEL_61:
  _enable();
  if ( v22 )
  {
    if ( (v22 & 4) != 0 )
      IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
    if ( (v22 & 2) != 0 )
    {
      if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      {
        ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
        if ( ExtensionTable )
        {
          (*(void (__fastcall **)(struct _KTHREAD *))(ExtensionTable + 16))(CurrentThread);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
        }
      }
    }
  }
LABEL_66:
  __incgsdword(0x64BCu);
  __incgsdword(0x64A4u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
  return 1;
}

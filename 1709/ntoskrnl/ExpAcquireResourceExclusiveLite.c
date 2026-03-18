/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x140080900
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14007DB80 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForResource @ 0x14006B490 (ExpWaitForResource.c)
 *     ExpFindCurrentThread @ 0x140080790 (ExpFindCurrentThread.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     KiAbThreadInsertList @ 0x140124280 (KiAbThreadInsertList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14027E5C8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14027EA9C (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  bool v5; // r14
  volatile __int64 *v6; // rdi
  char v7; // al
  __int64 v8; // rdx
  unsigned __int8 v9; // di
  int v10; // eax
  __int64 Next; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _KTHREAD *v15; // r10
  int v16; // r8d
  unsigned int v17; // edx
  int v18; // r9d
  int v19; // edx
  __int16 v20; // dx
  int v21; // r9d
  int v22; // r12d
  char v23; // al
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // edi
  unsigned int v29; // edi
  __int64 v30; // rax
  _QWORD *v31; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-39h] BYREF
  __int64 v35; // [rsp+48h] [rbp-21h] BYREF
  volatile signed __int64 *v36; // [rsp+50h] [rbp-19h]
  _QWORD v37[12]; // [rsp+60h] [rbp-9h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 v39; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 v40; // [rsp+E0h] [rbp+77h] BYREF
  __int64 CurrentIrql; // [rsp+E8h] [rbp+7Fh]

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x6378u);
  v6 = (volatile __int64 *)(a1 + 96);
  v39 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96, &v39);
  }
  else
  {
    v7 = 0;
    v8 = _InterlockedExchange64(v6, (__int64)&LockHandle);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql(&LockHandle, v8, &v39);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v39);
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
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_10;
        Next = KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_10:
    _enable();
    __incgsdword(0x637Cu);
    __incgsdword(0x6364u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v9;
  }
  if ( *(char *)(a1 + 26) >= 0 || *(struct _KTHREAD **)(a1 + 48) != CurrentThread )
  {
    if ( !a2 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x6388u);
      return 0;
    }
    ++*(_DWORD *)(a1 + 76);
    memset(v37, 0, 0x28uLL);
    LOWORD(v37[2]) = 1;
    v37[4] = &v37[3];
    v37[3] = &v37[3];
    v13 = *(_QWORD *)(a1 + 40);
    BYTE2(v37[2]) = 6;
    HIDWORD(v37[2]) = 0;
    if ( v13 )
    {
      v31 = *(_QWORD **)(v13 + 8);
      if ( *v31 != v13 )
        __fastfail(3u);
      v37[1] = *(_QWORD *)(v13 + 8);
      v37[0] = v13;
      *v31 = v37;
      *(_QWORD *)(v13 + 8) = v37;
    }
    else
    {
      v37[1] = v37;
      v37[0] = v37;
      *(_QWORD *)(a1 + 40) = v37;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v14 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_21;
        v14 = KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
    }
LABEL_21:
    _enable();
    __incgsdword(0x6384u);
    if ( v5 )
      PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
    v15 = KeGetCurrentThread();
    v16 = 0;
    v17 = (*((_DWORD *)&v15[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v15->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v17 = 0;
    }
    else if ( v17 >= 2 )
    {
      goto LABEL_25;
    }
    if ( v15 == KeGetCurrentThread() && v15[1].Timer.DueTime.LowPart )
    {
LABEL_26:
      if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
        v16 = 4;
LABEL_28:
      v18 = v16 | 2;
      if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
        v18 = v16;
      v19 = v18 | 0xFF00;
      if ( v15->Priority <= (int)*(unsigned __int8 *)(a1 + 27) )
        v19 = v18;
      if ( v19 )
        ExpApplyPriorityBoost(a1);
      ExpWaitForResource(
        (struct _LIST_ENTRY *)a1,
        (__int64)v37,
        0x10224u,
        (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
      v20 = *(_WORD *)(a1 + 26);
      *(_QWORD *)(a1 + 48) = CurrentThread;
      if ( (v20 & 8) != 0 )
        goto LABEL_60;
      v21 = 0;
      if ( (v20 & 4) != 0
        && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
         || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400) )
      {
        v21 = 4;
      }
      v22 = v21 | 2;
      if ( (v20 & 2) == 0 )
        v22 = v21;
      if ( !v22 )
        goto LABEL_60;
      v40 = 2;
      v36 = v6;
      v35 = 0LL;
      _disable();
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        v23 = KiFastAcquireQueuedSpinLockInstrumented(&v35, v6, &v40);
      }
      else
      {
        v23 = 0;
        v24 = _InterlockedExchange64(v6, (__int64)&v35);
        if ( v24 )
        {
          KxWaitForLockOwnerShipWithIrql(&v35, v24, &v40);
          v23 = 1;
        }
      }
      if ( v23 )
      {
        _disable();
        __writecr8(v40);
      }
      v25 = ExpFindCurrentThread(a1, (__int64)CurrentThread, (__int64)&v35, 0, 1, 0);
      v26 = v25;
      if ( (v22 & 4) != 0 )
      {
        if ( (v25[1] & 1) != 0 )
        {
          v22 &= ~4u;
        }
        else
        {
          PsBoostThreadIo(CurrentThread, 0LL);
          *((_DWORD *)v26 + 2) |= 1u;
        }
      }
      if ( (v22 & 2) != 0 )
      {
        if ( (v26[1] & 4) != 0 )
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
                                 CurrentThread,
                                 &CurrentPrcb->AbPropagateBoostsList,
                                 &CurrentThread->PropagateBoostsEntry) )
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            __writecr8((unsigned __int8)CurrentIrql);
          }
          *((_DWORD *)v26 + 2) |= 4u;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v35, retaddr);
      }
      else
      {
        _m_prefetchw(&v35);
        v27 = v35;
        if ( !v35 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(v36, 0LL, (signed __int64)&v35) == &v35 )
            goto LABEL_55;
          v27 = KxWaitForLockChainValid(&v35);
        }
        v35 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v27 + 8), 1uLL);
      }
LABEL_55:
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
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
            }
          }
        }
      }
LABEL_60:
      __incgsdword(0x637Cu);
      __incgsdword(0x6364u);
      if ( v5 )
        PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
      return 1;
    }
LABEL_25:
    if ( v17 <= 1 )
      goto LABEL_28;
    goto LABEL_26;
  }
  v28 = *(_DWORD *)(a1 + 56) + 8;
  *(_DWORD *)(a1 + 56) = v28;
  v29 = v28 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_66;
  }
  _m_prefetchw(&LockHandle);
  v30 = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_86;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    v30 = KxWaitForLockChainValid(&LockHandle);
LABEL_86:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v30 + 8), 1uLL);
  }
LABEL_66:
  _enable();
  __incgsdword(0x6380u);
  __incgsdword(0x6364u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65585LL, a1, v29, *(unsigned int *)(a1 + 68));
  return 1;
}

/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x14008F610
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x140089630 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x14008A320 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14008D660 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x14008E320 (SepMandatoryIntegrityCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140090B30 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x140027C24 (ExpExpandResourceOwnerTable.c)
 *     ExpIsResourceOwned @ 0x14008FC00 (ExpIsResourceOwned.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpFindCurrentThread @ 0x1400909C0 (ExpFindCurrentThread.c)
 *     ExpDoesResourceHaveExclusiveWaiter @ 0x140090AF0 (ExpDoesResourceHaveExclusiveWaiter.c)
 *     ExpGetThreadResourceHint @ 0x140090B10 (ExpGetThreadResourceHint.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     ExpWaitForResource @ 0x1400E7CC0 (ExpWaitForResource.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140255D0C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402561E0 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v5; // r14
  unsigned __int64 *v6; // rcx
  unsigned int SpareByte0; // esi
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  unsigned __int8 v12; // di
  int v13; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int16 v16; // ax
  unsigned int ThreadResourceHint; // eax
  unsigned __int8 HaveExclusiveWaiter; // al
  int v19; // edx
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  _KSPIN_LOCK_QUEUE *volatile v23; // rax
  unsigned int v24; // edi
  unsigned int v25; // edi
  _KSPIN_LOCK_QUEUE *volatile v26; // rax
  unsigned int v27; // edi
  unsigned int v28; // edi
  _KSPIN_LOCK_QUEUE *volatile v29; // rax
  int v30; // eax
  __int64 v31; // rax
  _KSPIN_LOCK_QUEUE *volatile v32; // rax
  struct _KTHREAD *v33; // r8
  int v34; // r10d
  unsigned int v35; // edx
  int v36; // r9d
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v42[5]; // [rsp+48h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 v44; // [rsp+A0h] [rbp+30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x64CCu);
  v6 = (unsigned __int64 *)(a1 + 96);
  SpareByte0 = 0;
  v44 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v6;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v8 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v6, &v44);
  }
  else
  {
    v8 = 0;
    v9 = _InterlockedExchange64((volatile __int64 *)v6, (__int64)&LockHandle);
    if ( v9 )
    {
      KxWaitForLockOwnerShipWithIrql(&LockHandle, v9, &v44);
      v8 = 1;
    }
  }
  if ( v8 )
  {
    _disable();
    __writecr8(v44);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)ExpIsResourceOwned(a1) )
      {
        v11 = *(_DWORD *)(a1 + 64);
        if ( v11 && (*(char *)(a1 + 26) < 0 || *(_DWORD *)(a1 + 76)) )
        {
          v12 = 0;
        }
        else
        {
          *(_WORD *)(a1 + 24) = 1;
          *(_DWORD *)(a1 + 64) = v11 + 1;
          v12 = 1;
        }
        v13 = *(_DWORD *)(a1 + 56) & 7;
        *(_QWORD *)(a1 + 48) = CurrentThread;
        *(_DWORD *)(a1 + 56) = v13 | 8;
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
              goto LABEL_12;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_12:
        _enable();
        __incgsdword(0x64D4u);
        __incgsdword(0x64A4u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
        return v12;
      }
      v16 = *(_WORD *)(a1 + 26) & 0x80;
      if ( v16 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
      {
        v24 = *(_DWORD *)(a1 + 56) & 7 | ((*(_DWORD *)(a1 + 56) & 0xFFFFFFF8) + 8);
        *(_DWORD *)(a1 + 56) = v24;
        v25 = v24 >> 3;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_32;
        }
        _m_prefetchw(&LockHandle);
        v26 = LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_32:
            _enable();
            __incgsdword(0x64D0u);
            __incgsdword(0x64A4u);
            if ( v5 )
              PerfLogExecutiveResourceAcquire(65585LL, a1, v25, *(unsigned int *)(a1 + 68));
            return 1;
          }
          v26 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&v26->Lock, 1uLL);
        goto LABEL_32;
      }
      if ( v16 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      HaveExclusiveWaiter = ExpDoesResourceHaveExclusiveWaiter(a1, ThreadResourceHint);
      v20 = ExpFindCurrentThread(a1, (_DWORD)CurrentThread, (unsigned int)&LockHandle, 1, HaveExclusiveWaiter, v19);
      if ( v20 )
        goto LABEL_18;
    }
    v38 = *(_QWORD *)(a1 + 16);
    if ( v38 )
      break;
LABEL_75:
    ExpExpandResourceOwnerTable(v10, &LockHandle);
  }
  v39 = v38 + 16LL * *(unsigned int *)(v38 + 8);
  v20 = v38 + 16;
  while ( *(_QWORD *)v20 )
  {
    v20 += 16LL;
    if ( v20 == v39 )
      goto LABEL_75;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(unsigned int)(v20 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_18:
  if ( *(struct _KTHREAD **)v20 == CurrentThread )
  {
    v27 = *(_DWORD *)(v20 + 8) & 7 | ((*(_DWORD *)(v20 + 8) & 0xFFFFFFF8) + 8);
    *(_DWORD *)(v20 + 8) = v27;
    v28 = v27 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_37;
    }
    _m_prefetchw(&LockHandle);
    v29 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_37:
        _enable();
        __incgsdword(0x64D8u);
        __incgsdword(0x64A4u);
        if ( !v5 )
          return 1;
        PerfLogExecutiveResourceAcquire(65617LL, a1, v28, *(unsigned int *)(a1 + 68));
        return 1;
      }
      v29 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v29->Lock, 1uLL);
    goto LABEL_37;
  }
  v21 = *(_DWORD *)(a1 + 64);
  if ( v21 && (*(char *)(a1 + 26) < 0 || *(_DWORD *)(a1 + 76)) )
  {
    if ( !a2 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x64E0u);
      return 0;
    }
    v30 = *(_DWORD *)(v20 + 8);
    *(_QWORD *)v20 = CurrentThread;
    *(_DWORD *)(v20 + 8) = v30 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    memset(v42, 0, sizeof(v42));
    LOWORD(v42[2]) = 1;
    v42[4] = &v42[3];
    v42[3] = &v42[3];
    v31 = *(_QWORD *)(a1 + 32);
    BYTE2(v42[2]) = 6;
    HIDWORD(v42[2]) = 0;
    if ( v31 )
    {
      v40 = *(_QWORD **)(v31 + 8);
      if ( *v40 != v31 )
        __fastfail(3u);
      v42[1] = *(_QWORD *)(v31 + 8);
      v42[0] = v31;
      *v40 = v42;
      *(_QWORD *)(v31 + 8) = v42;
    }
    else
    {
      v42[1] = v42;
      v42[0] = v42;
    }
    *(_QWORD *)(a1 + 32) = v42;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_47;
    }
    _m_prefetchw(&LockHandle);
    v32 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_47:
        _enable();
        __incgsdword(0x64DCu);
        if ( v5 )
          PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
        v33 = KeGetCurrentThread();
        v34 = 0;
        v35 = (*((_DWORD *)&v33[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v33->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
          v35 = 0;
        if ( (v35 < 2 && v33 == KeGetCurrentThread() && v33[1].Timer.DueTime.LowPart || v35 > 1)
          && (*(_BYTE *)(a1 + 26) & 4) == 0 )
        {
          v34 = 4;
        }
        v36 = v34 | 2;
        if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
          v36 = v34;
        v37 = v36 | 0xFF00;
        if ( v33->Priority <= (int)*(unsigned __int8 *)(a1 + 27) )
          v37 = v36;
        if ( v37 )
          ExpApplyPriorityBoost(a1);
        ExpWaitForResource(a1, v42, 66116LL, ExpApplyRewaitBoost);
        if ( ((unsigned __int8)CurrentThread & 3) == 0 )
          SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
        ExpBoostIoAfterAcquire(a1, CurrentThread, SpareByte0);
        goto LABEL_26;
      }
      v32 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v32->Lock, 1uLL);
    goto LABEL_47;
  }
  *(_WORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 64) = v21 + 1;
  v22 = *(_DWORD *)(v20 + 8) & 7;
  *(_QWORD *)v20 = CurrentThread;
  *(_DWORD *)(v20 + 8) = v22 | 8;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    v23 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_25;
      v23 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v23->Lock, 1uLL);
  }
LABEL_25:
  _enable();
LABEL_26:
  __incgsdword(0x64D4u);
  __incgsdword(0x64A4u);
  if ( !v5 )
    return 1;
  PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
  return 1;
}

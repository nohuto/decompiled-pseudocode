/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x1400801D0
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1400180F0 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x140018280 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14007D3F0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14007D4E0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x14007EFF0 (SepMandatoryIntegrityCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x140060E60 (PsGetBaseIoPriorityThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForResource @ 0x14006B490 (ExpWaitForResource.c)
 *     ExpFindCurrentThread @ 0x140080790 (ExpFindCurrentThread.c)
 *     ExpGetThreadResourceHint @ 0x1400808E0 (ExpGetThreadResourceHint.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     ExpExpandResourceOwnerTable @ 0x14011D5F0 (ExpExpandResourceOwnerTable.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14027E5C8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14027EA9C (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r15
  bool v5; // r14
  unsigned __int64 *v6; // rcx
  unsigned int SpareByte0; // edi
  char v8; // al
  __int64 v9; // rdx
  unsigned __int8 v10; // si
  int v11; // eax
  __int64 Next; // rax
  __int16 v14; // ax
  int ThreadResourceHint; // eax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // esi
  unsigned int v21; // esi
  __int64 v22; // rax
  unsigned int v23; // esi
  unsigned int v24; // esi
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  int BaseIoPriorityThread; // eax
  int v30; // edx
  struct _KTHREAD *v31; // r8
  int v32; // r9d
  int v33; // edx
  __int64 v34; // r8
  _QWORD *v35; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v37[5]; // [rsp+48h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 v39; // [rsp+A0h] [rbp+30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x638Cu);
  v6 = (unsigned __int64 *)(a1 + 96);
  SpareByte0 = 0;
  v39 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v6;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v8 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v6, &v39);
  }
  else
  {
    v8 = 0;
    v9 = _InterlockedExchange64((volatile __int64 *)v6, (__int64)&LockHandle);
    if ( v9 )
    {
      KxWaitForLockOwnerShipWithIrql(&LockHandle, v9, &v39);
      v8 = 1;
    }
  }
  if ( v8 )
  {
    _disable();
    __writecr8(v39);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a1 + 64) )
      {
        v10 = 1;
        v11 = *(_DWORD *)(a1 + 56) & 7;
        *(_WORD *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 64) = 1;
        *(_DWORD *)(a1 + 56) = v11 | 8;
        *(_QWORD *)(a1 + 48) = CurrentThread;
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
        __incgsdword(0x6394u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
        return v10;
      }
      v14 = *(_WORD *)(a1 + 26) & 0x80;
      if ( v14 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
      {
        v20 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v20;
        v21 = v20 >> 3;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_32;
        }
        _m_prefetchw(&LockHandle);
        v22 = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_32:
            _enable();
            __incgsdword(0x6390u);
            __incgsdword(0x6364u);
            if ( v5 )
              PerfLogExecutiveResourceAcquire(65585LL, a1, v21, *(unsigned int *)(a1 + 68));
            return 1;
          }
          v22 = KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v22 + 8), 1uLL);
        goto LABEL_32;
      }
      if ( v14 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      v16 = ExpFindCurrentThread(
              a1,
              (_DWORD)CurrentThread,
              (unsigned int)&LockHandle,
              1,
              *(_DWORD *)(a1 + 76) != 0,
              ThreadResourceHint);
      if ( v16 )
        goto LABEL_16;
    }
    v34 = *(_QWORD *)(a1 + 16);
    if ( v34 )
      break;
LABEL_67:
    ExpExpandResourceOwnerTable(a1, &LockHandle);
  }
  v16 = v34 + 16;
  while ( *(_QWORD *)v16 )
  {
    v16 += 16LL;
    if ( v16 == v34 + 16LL * *(unsigned int *)(v34 + 8) )
      goto LABEL_67;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (v16 - v34) >> 4;
LABEL_16:
  if ( *(struct _KTHREAD **)v16 == CurrentThread )
  {
    v23 = *(_DWORD *)(v16 + 8) + 8;
    *(_DWORD *)(v16 + 8) = v23;
    v24 = v23 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_37;
    }
    _m_prefetchw(&LockHandle);
    v25 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_37:
        _enable();
        __incgsdword(0x6398u);
        __incgsdword(0x6364u);
        if ( !v5 )
          return 1;
        PerfLogExecutiveResourceAcquire(65617LL, a1, v24, *(unsigned int *)(a1 + 68));
        return 1;
      }
      v25 = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v25 + 8), 1uLL);
    goto LABEL_37;
  }
  v17 = *(_DWORD *)(a1 + 64);
  if ( v17 && (*(char *)(a1 + 26) < 0 || *(_DWORD *)(a1 + 76)) )
  {
    if ( !a2 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x63A0u);
      return 0;
    }
    v26 = *(_DWORD *)(v16 + 8);
    *(_QWORD *)v16 = CurrentThread;
    *(_DWORD *)(v16 + 8) = v26 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    memset(v37, 0, sizeof(v37));
    LOWORD(v37[2]) = 1;
    v37[4] = &v37[3];
    v37[3] = &v37[3];
    v27 = *(_QWORD *)(a1 + 32);
    BYTE2(v37[2]) = 6;
    HIDWORD(v37[2]) = 0;
    if ( v27 )
    {
      v35 = *(_QWORD **)(v27 + 8);
      if ( *v35 != v27 )
        __fastfail(3u);
      v37[1] = *(_QWORD *)(v27 + 8);
      v37[0] = v27;
      *v35 = v37;
      *(_QWORD *)(v27 + 8) = v37;
    }
    else
    {
      v37[1] = v37;
      v37[0] = v37;
    }
    *(_QWORD *)(a1 + 32) = v37;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_45;
    }
    _m_prefetchw(&LockHandle);
    v28 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_45:
        _enable();
        __incgsdword(0x639Cu);
        if ( v5 )
          PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
        BaseIoPriorityThread = PsGetBaseIoPriorityThread((__int64)KeGetCurrentThread());
        if ( (BaseIoPriorityThread < 2 && v31 == KeGetCurrentThread() && v31[1].Timer.DueTime.LowPart != v30
           || BaseIoPriorityThread > 1)
          && (*(_BYTE *)(a1 + 26) & 4) == 0 )
        {
          v30 = 4;
        }
        v32 = v30 | 2;
        if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
          v32 = v30;
        v33 = v32 | 0xFF00;
        if ( v31->Priority <= (int)*(unsigned __int8 *)(a1 + 27) )
          v33 = v32;
        if ( v33 )
          ExpApplyPriorityBoost(a1);
        ExpWaitForResource(
          (struct _LIST_ENTRY *)a1,
          (__int64)v37,
          0x10244u,
          (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
        if ( ((unsigned __int8)CurrentThread & 3) == 0 )
          SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
        ExpBoostIoAfterAcquire(a1, CurrentThread, SpareByte0);
        goto LABEL_24;
      }
      v28 = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v28 + 8), 1uLL);
    goto LABEL_45;
  }
  *(_WORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 64) = v17 + 1;
  v18 = *(_DWORD *)(v16 + 8) & 7;
  *(_QWORD *)v16 = CurrentThread;
  *(_DWORD *)(v16 + 8) = v18 | 8;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    v19 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_23;
      v19 = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
  }
LABEL_23:
  _enable();
LABEL_24:
  __incgsdword(0x6394u);
  __incgsdword(0x6364u);
  if ( !v5 )
    return 1;
  PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
  return 1;
}

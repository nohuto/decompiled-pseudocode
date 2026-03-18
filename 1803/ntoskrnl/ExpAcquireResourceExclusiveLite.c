/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x140100730
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1400FFD70 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     ExpWaitForResource @ 0x1400F3F20 (ExpWaitForResource.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1402B1794 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402B1C68 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r12
  bool v5; // r14
  volatile __int64 *v6; // r10
  int v7; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v10; // al
  _QWORD *v11; // rdx
  unsigned __int8 v12; // si
  int v13; // eax
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned int v18; // esi
  unsigned int v19; // esi
  __int64 Next; // rax
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  struct _KTHREAD *v27; // r8
  unsigned int v28; // edx
  __int16 v29; // cx
  int v30; // r9d
  int v31; // edx
  _QWORD *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v40[5]; // [rsp+38h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]
  unsigned __int8 v42; // [rsp+90h] [rbp+30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x6378u);
  v6 = (volatile __int64 *)(a1 + 96);
  v7 = 0;
  v42 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v33 = SchedulerAssist[5];
      SchedulerAssist[5] = v33 + 1;
      if ( v33 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v10 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v6, &v42);
  }
  else
  {
    v10 = 0;
    v11 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&LockHandle);
    if ( v11 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v11, &v42);
      v10 = 1;
    }
  }
  if ( v10 )
  {
    _disable();
    __writecr8(v42);
  }
  if ( *(_DWORD *)(a1 + 64) )
  {
    if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
    {
      v18 = *(_DWORD *)(a1 + 56) + 8;
      *(_DWORD *)(a1 + 56) = v18;
      v19 = v18 >> 3;
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
            goto LABEL_20;
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_20:
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v35 = v22[5] - 1;
          v22[5] = v35;
          if ( !v35 && !*((_BYTE *)v22 + 25) && !*((_BYTE *)v22 + 27) )
            KiPerformUnboostKick(v21);
        }
      }
      _enable();
      __incgsdword(0x6380u);
      __incgsdword(0x6364u);
      if ( !v5 )
        return 1;
      v37 = v19;
      v38 = 65585LL;
LABEL_58:
      PerfLogExecutiveResourceAcquire(v38, a1, v37, *(unsigned int *)(a1 + 68));
      return 1;
    }
    if ( !a2 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _enable();
      __incgsdword(0x6388u);
      return 0;
    }
    ++*(_DWORD *)(a1 + 76);
    memset(v40, 0, sizeof(v40));
    LOWORD(v40[2]) = 1;
    v40[4] = &v40[3];
    v40[3] = &v40[3];
    v23 = *(_QWORD *)(a1 + 40);
    BYTE2(v40[2]) = 6;
    HIDWORD(v40[2]) = 0;
    if ( v23 )
    {
      v32 = *(_QWORD **)(v23 + 8);
      if ( *v32 != v23 )
        __fastfail(3u);
      v40[1] = *(_QWORD *)(v23 + 8);
      v40[0] = v23;
      *v32 = v40;
      *(_QWORD *)(v23 + 8) = v40;
    }
    else
    {
      v40[1] = v40;
      v40[0] = v40;
      *(_QWORD *)(a1 + 40) = v40;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_29;
    }
    _m_prefetchw(&LockHandle);
    v24 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_29:
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v36 = v26[5] - 1;
            v26[5] = v36;
            if ( !v36 && !*((_BYTE *)v26 + 25) && !*((_BYTE *)v26 + 27) )
              KiPerformUnboostKick(v25);
          }
        }
        _enable();
        __incgsdword(0x6384u);
        if ( v5 )
          PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
        v27 = KeGetCurrentThread();
        v28 = (*((_DWORD *)&v27[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v27->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v28 = 0;
        }
        else if ( v28 >= 2 )
        {
LABEL_34:
          if ( v28 <= 1 )
          {
LABEL_37:
            v29 = *(_WORD *)(a1 + 26);
            v30 = v7 | 2;
            if ( (v29 & 2) != 0 )
              v30 = v7;
            v31 = v30 | 0xFF00;
            if ( v27->Priority <= (int)HIBYTE(v29) )
              v31 = v30;
            if ( v31 )
              ExpApplyPriorityBoost(a1, v31, (__int64)v27);
            ExpWaitForResource(
              (struct _LIST_ENTRY *)a1,
              (__int64)v40,
              0x10224u,
              (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
            *(_QWORD *)(a1 + 48) = CurrentThread;
            ExpBoostIoAfterAcquire(a1, (__int64)CurrentThread, 0);
            __incgsdword(0x637Cu);
            __incgsdword(0x6364u);
            if ( !v5 )
              return 1;
            v37 = 1LL;
            v38 = 65569LL;
            goto LABEL_58;
          }
LABEL_35:
          if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
            v7 = 4;
          goto LABEL_37;
        }
        if ( v27 == KeGetCurrentThread() && v27[1].Timer.DueTime.LowPart )
          goto LABEL_35;
        goto LABEL_34;
      }
      v24 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v24 + 8), 1uLL);
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 48) = CurrentThread;
  *(_WORD *)(a1 + 24) = 1;
  *(_WORD *)(a1 + 26) |= 0x80u;
  v12 = 1;
  v13 = *(_DWORD *)(a1 + 56) & 7;
  *(_DWORD *)(a1 + 64) = 1;
  *(_DWORD *)(a1 + 56) = v13 | 8;
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
        goto LABEL_11;
      v14 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
  }
LABEL_11:
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v34 = v16[5] - 1;
      v16[5] = v34;
      if ( !v34 && !*((_BYTE *)v16 + 25) && !*((_BYTE *)v16 + 27) )
        KiPerformUnboostKick(v15);
    }
  }
  _enable();
  __incgsdword(0x637Cu);
  __incgsdword(0x6364u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
  return v12;
}

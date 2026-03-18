/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x140100220
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14005F800 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x14005F990 (SeSecurityAttributePresent.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1400A5810 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400FDD20 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1401018A0 (SepMandatoryIntegrityCheck.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     ExpFindCurrentThread @ 0x140088730 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpExpandResourceOwnerTable @ 0x1400889D8 (ExpExpandResourceOwnerTable.c)
 *     ExpGetThreadResourceHint @ 0x1400B1180 (ExpGetThreadResourceHint.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpApplyPrewaitBoost @ 0x1400EEEB0 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x1400F3F20 (ExpWaitForResource.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1402B1794 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1402B1C68 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2)
{
  __int64 CurrentThread; // r15
  bool v5; // r14
  volatile __int64 *v6; // r10
  int v7; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v10; // al
  _QWORD *v11; // rdx
  unsigned __int8 v12; // si
  int v13; // eax
  __int64 Next; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  __int16 v18; // ax
  unsigned int ThreadResourceHint; // eax
  _QWORD *v20; // rdx
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  unsigned int v26; // esi
  unsigned int v27; // esi
  __int64 v28; // rax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  unsigned int v31; // edi
  unsigned int v32; // edi
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v43[5]; // [rsp+48h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 v45; // [rsp+A0h] [rbp+30h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x638Cu);
  v6 = (volatile __int64 *)(a1 + 96);
  v7 = 0;
  v45 = 2;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v38 = SchedulerAssist[5];
      SchedulerAssist[5] = v38 + 1;
      if ( v38 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v10 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v6, &v45);
  }
  else
  {
    v10 = 0;
    v11 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&LockHandle);
    if ( v11 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v11, &v45);
      v10 = 1;
    }
  }
  if ( v10 )
  {
    _disable();
    __writecr8(v45);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a1 + 64) )
      {
        *(_WORD *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 64) = 1;
        v12 = 1;
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
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_11;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        }
LABEL_11:
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        if ( v16 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v41 = v16[5] - 1;
            v16[5] = v41;
            if ( !v41 && !*((_BYTE *)v16 + 25) && !*((_BYTE *)v16 + 27) )
              KiPerformUnboostKick(v15);
          }
        }
        _enable();
        __incgsdword(0x6394u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
        return v12;
      }
      v18 = *(_WORD *)(a1 + 26) & 0x80;
      if ( v18 && *(_QWORD *)(a1 + 48) == CurrentThread )
      {
        v31 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v31;
        v32 = v31 >> 3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        _enable();
        __incgsdword(0x6390u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65585LL, a1, v32, *(unsigned int *)(a1 + 68));
        return 1;
      }
      if ( v18 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      v20 = ExpFindCurrentThread(
              a1,
              CurrentThread,
              (__int64)&LockHandle,
              1,
              *(_DWORD *)(a1 + 76) != 0,
              ThreadResourceHint);
      if ( v20 )
        goto LABEL_18;
    }
    v35 = *(_QWORD *)(a1 + 16);
    if ( v35 )
      break;
LABEL_53:
    ExpExpandResourceOwnerTable(a1, &LockHandle);
  }
  v36 = (_QWORD *)(v35 + 16LL * *(unsigned int *)(v35 + 8));
  v20 = (_QWORD *)(v35 + 16);
  while ( *v20 )
  {
    v20 += 2;
    if ( v20 == v36 )
      goto LABEL_53;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(unsigned int)((_DWORD)v20 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_18:
  if ( *v20 == CurrentThread )
  {
    v26 = *((_DWORD *)v20 + 2) + 8;
    *((_DWORD *)v20 + 2) = v26;
    v27 = v26 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v28 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_32;
        v28 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v28 + 8), 1uLL);
    }
LABEL_32:
    v29 = KeGetCurrentPrcb();
    v30 = v29->SchedulerAssist;
    if ( v30 )
    {
      if ( v29->NestingLevel <= 1u )
      {
        v39 = v30[5] - 1;
        v30[5] = v39;
        if ( !v39 && !*((_BYTE *)v30 + 25) && !*((_BYTE *)v30 + 27) )
          KiPerformUnboostKick(v29);
      }
    }
    _enable();
    __incgsdword(0x6398u);
    __incgsdword(0x6364u);
    if ( !v5 )
      return 1;
    PerfLogExecutiveResourceAcquire(65617LL, a1, v27, *(unsigned int *)(a1 + 68));
    return 1;
  }
  v21 = *(_DWORD *)(a1 + 64);
  if ( !v21 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = v21 + 1;
    v22 = v20[1] & 7;
    *v20 = CurrentThread;
    *((_DWORD *)v20 + 2) = v22 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_25;
    }
    _m_prefetchw(&LockHandle);
    v23 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_25:
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v40 = v25[5] - 1;
            v25[5] = v40;
            if ( !v40 && !*((_BYTE *)v25 + 25) && !*((_BYTE *)v25 + 27) )
              KiPerformUnboostKick(v24);
          }
        }
        _enable();
        goto LABEL_27;
      }
      v23 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v23 + 8), 1uLL);
    goto LABEL_25;
  }
  if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _enable();
    __incgsdword(0x63A0u);
    return 0;
  }
  v33 = *((_DWORD *)v20 + 2);
  *v20 = CurrentThread;
  *((_DWORD *)v20 + 2) = v33 & 7 | 8;
  ++*(_DWORD *)(a1 + 72);
  memset(v43, 0, sizeof(v43));
  LOWORD(v43[2]) = 1;
  v43[4] = &v43[3];
  v43[3] = &v43[3];
  v34 = *(_QWORD *)(a1 + 32);
  BYTE2(v43[2]) = 6;
  HIDWORD(v43[2]) = 0;
  if ( v34 )
  {
    v37 = *(_QWORD **)(v34 + 8);
    if ( *v37 != v34 )
      __fastfail(3u);
    v43[1] = *(_QWORD *)(v34 + 8);
    v43[0] = v34;
    *v37 = v43;
    *(_QWORD *)(v34 + 8) = v43;
  }
  else
  {
    v43[1] = v43;
    v43[0] = v43;
  }
  *(_QWORD *)(a1 + 32) = v43;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  __incgsdword(0x639Cu);
  if ( v5 )
    PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
  ExpApplyPrewaitBoost(a1);
  ExpWaitForResource(
    (struct _LIST_ENTRY *)a1,
    (__int64)v43,
    0x10244u,
    (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
  if ( (CurrentThread & 3) == 0 )
    v7 = *(unsigned __int8 *)(CurrentThread + 649);
  ExpBoostIoAfterAcquire(a1, CurrentThread, v7);
LABEL_27:
  __incgsdword(0x6394u);
  __incgsdword(0x6364u);
  if ( !v5 )
    return 1;
  PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
  return 1;
}

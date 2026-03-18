/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x140082E80
 * Callers:
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 * Callees:
 *     MiRemoveDecayClusterTimer @ 0x1400168C8 (MiRemoveDecayClusterTimer.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiRelinkStandbyPage @ 0x1400CBAFC (MiRelinkStandbyPage.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  char v3; // r15
  __int64 v4; // r15
  __int64 v5; // r12
  volatile __int64 *v6; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned int v13; // edi
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v17; // [rsp+80h] [rbp+8h]

  v17 = a1;
  v1 = a1;
  LOBYTE(a1) = 1;
  result = KiQueryUnbiasedInterruptTime(a1);
  if ( (unsigned __int64)(result - *(_QWORD *)(v1 + 4552)) < 0x989680 )
    return result;
  v3 = *(_DWORD *)(v1 + 4544) + 1;
  *(_QWORD *)(v1 + 4552) = result;
  v4 = v3 & 3;
  v5 = v1 + 8 * v4;
  result = *(_QWORD *)(v5 + 4512) >> 33;
  if ( result == 0x7FFFFFFF )
    goto LABEL_21;
  v6 = (volatile __int64 *)(v1 + 2408);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 2408);
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
    }
    else if ( _InterlockedExchange64(v6, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    v8 = *(_QWORD *)(v5 + 4512) >> 33;
    if ( v8 == 0x7FFFFFFF )
      break;
    v9 = 48 * (v8 + qword_14036CBE0) - 0x58000000000LL;
    v10 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v9 + 16);
    if ( v10 == v11 )
    {
      MiUnlinkPageFromList(v9);
      *(_BYTE *)(v9 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v9);
      goto LABEL_11;
    }
    v12 = 48 * v10 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
LABEL_11:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
    }
    else
    {
      v13 = *(_BYTE *)(v12 + 35) & 7;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_19;
      }
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_19;
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
LABEL_19:
      MiRelinkStandbyPage(v12, v13);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  v1 = v17;
LABEL_21:
  *(_DWORD *)(v1 + 4544) = v4;
  return result;
}

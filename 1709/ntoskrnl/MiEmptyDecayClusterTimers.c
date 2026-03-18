/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x1400F0D10
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiRelinkStandbyPage @ 0x1400F0F68 (MiRelinkStandbyPage.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiRemoveDecayClusterTimer @ 0x1401153E8 (MiRemoveDecayClusterTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
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
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned int v14; // edi
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v1 = a1;
  result = KiQueryUnbiasedInterruptTime();
  if ( (unsigned __int64)(result - *(_QWORD *)(v1 + 4680)) < 0x989680 )
    return result;
  v3 = *(_DWORD *)(v1 + 4672) + 1;
  *(_QWORD *)(v1 + 4680) = result;
  v4 = v3 & 3;
  v5 = v1 + 8 * v4;
  result = *(_QWORD *)(v5 + 4640) >> 33;
  if ( result == 0x7FFFFFFF )
    goto LABEL_21;
  v6 = (volatile __int64 *)(v1 + 2536);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 2536);
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
    }
    else
    {
      v8 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&LockHandle);
      if ( v8 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v8);
    }
    v9 = *(_QWORD *)(v5 + 4640) >> 33;
    if ( v9 == 0x7FFFFFFF )
      break;
    v10 = 48 * (v9 + qword_140388DE0) - 0x58000000000LL;
    v11 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v10 + 16);
    if ( v11 == v12 )
    {
      MiUnlinkPageFromList(v10, 1LL);
      *(_BYTE *)(v10 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v10);
      goto LABEL_11;
    }
    v13 = 48 * v11 - 0x58000000000LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
LABEL_11:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
    }
    else
    {
      v14 = *(_BYTE *)(v13 + 35) & 7;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_19;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_19;
        Next = KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
LABEL_19:
      MiRelinkStandbyPage(v13, v14);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  v1 = a1;
LABEL_21:
  *(_DWORD *)(v1 + 4672) = v4;
  return result;
}

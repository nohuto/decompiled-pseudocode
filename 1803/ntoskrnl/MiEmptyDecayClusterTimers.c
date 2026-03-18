/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x140080EE0
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     MiRelinkStandbyPage @ 0x1400810F8 (MiRelinkStandbyPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x1400B7878 (MiRemoveDecayClusterTimer.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  char v4; // r15
  __int64 v5; // r15
  __int64 v6; // r12
  volatile __int64 *v7; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rax
  ULONG_PTR v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG_PTR v13; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  v1 = a1;
  result = KiQueryUnbiasedInterruptTime();
  v3 = result - *(_QWORD *)(v1 + 4768);
  if ( v3 < 0x989680 )
    return result;
  v4 = *(_DWORD *)(v1 + 4760) + 1;
  *(_QWORD *)(v1 + 4768) = result;
  v5 = v4 & 3;
  v6 = v1 + 8 * v5;
  result = *(_QWORD *)(v6 + 4728) >> 33;
  if ( result == 0x7FFFFFFF )
    goto LABEL_15;
  v7 = (volatile __int64 *)(v1 + 2600);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 2600);
    LOBYTE(v3) = 1;
    LockHandle.LockQueue.Next = 0LL;
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), v3);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7);
    }
    else if ( _InterlockedExchange64(v7, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    v9 = *(_QWORD *)(v6 + 4728) >> 33;
    if ( v9 == 0x7FFFFFFF )
      break;
    v10 = 48 * (v9 + qword_1403CC0A0) - 0x58000000000LL;
    v11 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v10 + 16);
    if ( v11 == v12 )
    {
      MiUnlinkPageFromList(v10);
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
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      MiRelinkStandbyPage(v13);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  v1 = a1;
LABEL_15:
  *(_DWORD *)(v1 + 4760) = v5;
  return result;
}

/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14014DA48
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14014D99C (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140049DE0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14004B7C8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiAbIoBoostOwners @ 0x14011E81C (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14011E910 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14011F034 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14011F10C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14011F160 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

char __fastcall KiAbForceProcessLockEntry(char *Node)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  char *LockedHeadEntry; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  char result; // al
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentThread; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // si
  char v18; // al
  char v19; // dl
  int v20; // r10d
  char CpuPriorityKey; // r14
  _QWORD *v22; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v24; // [rsp+A0h] [rbp+50h] BYREF
  int v25; // [rsp+A8h] [rbp+58h]

  v22 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v25 = 0;
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(Node, 1LL, &LockHandle);
  v7 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( (Node[25] & 1) == 0 )
    {
LABEL_3:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_4;
    }
    if ( Node != LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)Node, (_RTL_RB_TREE *)LockedHeadEntry);
    v16 = *(_QWORD *)(v7 + 56);
    if ( v16 )
      v17 = *(_BYTE *)(v16 + 48);
    else
      v17 = 15;
    if ( (*(_BYTE *)(v7 + 25) & 1) == 0 )
    {
      v18 = KiAbOwnerComputeCpuPriorityKey(v7);
      v19 = v17;
      if ( v18 < v17 )
        v19 = v18;
      v17 = v19;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)Node, v7);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)Node);
    if ( v17 < CpuPriorityKey )
    {
      if ( !v20 )
      {
LABEL_34:
        KiAbCpuBoostOwners(v7, CpuPriorityKey, (int)&v22, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_3;
      }
    }
    else if ( !v20 )
    {
      goto LABEL_3;
    }
    KiAbIoBoostOwners(v7, v20, (int)&v22, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_34;
  }
LABEL_4:
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v22, v5, v6);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v9, v10);
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v13, v14);
      LOBYTE(v15) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v15) )
        goto LABEL_7;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_7:
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_7;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}

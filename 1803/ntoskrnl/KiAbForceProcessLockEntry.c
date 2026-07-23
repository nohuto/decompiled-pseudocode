/*
 * XREFs of KiAbForceProcessLockEntry @ 0x1401594C8
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14015941C (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiAbIoBoostOwners @ 0x140063C78 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140063E30 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140064B24 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140064BFC (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140064C50 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140064D30 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 */

char __fastcall KiAbForceProcessLockEntry(PRTL_BALANCED_NODE Node)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _RTL_RB_TREE *LockedHeadEntry; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  char result; // al
  __int64 CurrentThread; // rdi
  bool v9; // zf
  struct _KPRCB *v10; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rax
  char v15; // bp
  char v16; // al
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // r8
  char CpuPriorityKey; // si
  int v21; // r10d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  int v23; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  LockedHeadEntry = (_RTL_RB_TREE *)KiAbEntryGetLockedHeadEntry(Node, 1LL, &LockHandle);
  v6 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( (BYTE1(Node[1].Children[0]) & 1) == 0 )
    {
LABEL_3:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_4;
    }
    if ( Node != (PRTL_BALANCED_NODE)LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition(Node, LockedHeadEntry);
    v14 = *(_QWORD *)(v6 + 56);
    if ( v14 )
      v15 = *(_BYTE *)(v14 + 48);
    else
      v15 = 15;
    if ( (*(_BYTE *)(v6 + 25) & 1) == 0 )
    {
      v16 = KiAbOwnerComputeCpuPriorityKey(v6);
      v17 = v15;
      if ( v16 < v15 )
        v17 = v16;
      v15 = v17;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)Node, v6);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)Node, v18, v19);
    if ( v15 < CpuPriorityKey )
    {
      if ( !v21 )
      {
LABEL_36:
        KiAbCpuBoostOwners(v6, CpuPriorityKey, (int)&v24, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_3;
      }
    }
    else if ( !v21 )
    {
      goto LABEL_3;
    }
    KiAbIoBoostOwners(v6, v21, (int)&v24, 0, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_36;
  }
LABEL_4:
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v24, v5);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v10 = KeGetCurrentPrcb();
      v23 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v10, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v10, 0);
        do
          KeYieldProcessorEx(&v23);
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
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v12);
      LOBYTE(v13) = CurrentIrql;
      v9 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v13) == 0;
    }
    else
    {
      v9 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v9 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

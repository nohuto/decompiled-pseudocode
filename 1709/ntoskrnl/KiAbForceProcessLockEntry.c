/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14013F9F0
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x14013F944 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400A8B70 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1400A8BC0 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1400A95A0 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400AA8CC (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbIoBoostOwners @ 0x14011B6B8 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14011BBCC (KiAbCpuBoostOwners.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

char __fastcall KiAbForceProcessLockEntry(char *Node)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  char *LockedHeadEntry; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  char result; // al
  __int64 CurrentThread; // rdi
  bool v9; // zf
  _KTHREAD *NextThread; // rsi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rax
  char v14; // bp
  char v15; // al
  char v16; // dl
  char CpuPriorityKey; // si
  int v18; // r10d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v21; // [rsp+90h] [rbp+18h] BYREF

  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(Node, 1LL, &LockHandle);
  v6 = (__int64)LockedHeadEntry;
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
    v13 = *(_QWORD *)(v6 + 56);
    if ( v13 )
      v14 = *(_BYTE *)(v13 + 48);
    else
      v14 = 15;
    if ( (*(_BYTE *)(v6 + 25) & 1) == 0 )
    {
      v15 = KiAbOwnerComputeCpuPriorityKey(v6);
      v16 = v14;
      if ( v15 < v14 )
        v16 = v15;
      v14 = v16;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)Node, v6);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)Node);
    if ( v14 < CpuPriorityKey )
    {
      if ( !v18 )
      {
LABEL_35:
        KiAbCpuBoostOwners(v6, CpuPriorityKey, (__int64)&v21, 0LL, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        goto LABEL_3;
      }
    }
    else if ( !v18 )
    {
      goto LABEL_3;
    }
    KiAbIoBoostOwners(v6, v18, (__int64)&v21, 0LL, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
    goto LABEL_35;
  }
LABEL_4:
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v21, v5);
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
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v20);
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
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v11);
      LOBYTE(v12) = CurrentIrql;
      v9 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v12) == 0;
    }
    else
    {
      v9 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v9 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

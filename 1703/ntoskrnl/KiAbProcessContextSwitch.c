/*
 * XREFs of KiAbProcessContextSwitch @ 0x1400EC3E0
 * Callers:
 *     KiExitThreadWait @ 0x140017FB0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14001A140 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeSetLegacyAffinityThread @ 0x14001A720 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x140041050 (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x1400E9870 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KiBeginThreadWait @ 0x1400FC780 (KiBeginThreadWait.c)
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KiAbApplyWakeupBoost @ 0x140112AD4 (KiAbApplyWakeupBoost.c)
 *     NtYieldExecution @ 0x140112EE0 (NtYieldExecution.c)
 *     KiFastReadyThread @ 0x140113FBC (KiFastReadyThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140114594 (KiAbThreadUnboostCpuPriority.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14014DA48 (KiAbForceProcessLockEntry.c)
 *     KeRemovePriorityBoost @ 0x140153BF0 (KeRemovePriorityBoost.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x1401885E0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140202748 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1402028C0 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140202AA0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140049DE0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14004B7C8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     KiAbIoBoostOwners @ 0x14011E81C (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14011E910 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x14011EB5C (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x14011EE4C (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14011F034 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14011F070 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14011F10C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14011F160 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x14011F320 (KiAbDetermineMaxWaiterPriority.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  int v6; // eax
  int v7; // edx
  __int64 v8; // r8
  unsigned int v9; // esi
  bool v10; // zf
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r13d
  char *LockedHeadEntry; // rax
  char *v17; // r14
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rax
  char v24; // r15
  int v25; // r10d
  char CpuPriorityKey; // r12
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rsi
  volatile signed __int16 *v30; // rdi
  _DWORD *v31; // rdi
  __int64 ExtensionTable; // rax
  signed __int32 v34[8]; // [rsp+0h] [rbp-69h] BYREF
  __int64 v35; // [rsp+40h] [rbp-29h]
  _QWORD *v36; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-19h] BYREF
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // [rsp+58h] [rbp-11h]
  struct _KPRCB *v39; // [rsp+60h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v42; // [rsp+D0h] [rbp+67h] BYREF
  int v43; // [rsp+D8h] [rbp+6Fh]
  int v44; // [rsp+E0h] [rbp+77h] BYREF
  int v45; // [rsp+E8h] [rbp+7Fh]

  v43 = a2;
  v4 = a2;
  if ( (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) == 0x3F )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *(char *)(a1 + 792);
  v7 = *(char *)(a1 + 1422);
  v39 = CurrentPrcb;
  v37 = 0LL;
  p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  v36 = 0LL;
  if ( (v6 | v7) == 0x3F )
    goto LABEL_22;
  v8 = a1 + 800;
  v9 = (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) ^ 0x3F;
  v35 = a1 + 800;
  v10 = !_BitScanForward((unsigned int *)&a1, v9);
  v45 = v11;
  if ( v10 )
    goto LABEL_21;
  v12 = (__int64)p_AbSelfIoBoostsList;
  do
  {
    v9 &= v9 - 1;
    v13 = v8 + 96 * a1;
    v14 = *(_QWORD *)(v13 + 32);
    if ( v14 && (v14 & 2) == 0 && (v14 & 1) == 0 )
    {
      if ( *(__int64 *)(v13 + 32) >= 0 )
        goto LABEL_9;
      if ( (*(_BYTE *)(v13 + 27) & 1) == 0 )
      {
        v21 = v8 + 96 * a1;
        if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
        {
          if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v21) == *(_BYTE *)(v13 + 48) )
            goto LABEL_17;
LABEL_9:
          v44 = 0;
          v15 = 0;
          LockedHeadEntry = KiAbEntryGetLockedHeadEntry((char *)v13, 1LL, &LockHandle);
          v17 = LockedHeadEntry;
          if ( !LockedHeadEntry )
          {
LABEL_17:
            v8 = v35;
            goto LABEL_18;
          }
          if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
          {
            if ( (char *)v13 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
            KiAbDetermineMaxWaiterPriority(v17, &v42);
            if ( !v42 )
            {
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
                goto LABEL_17;
              }
              _m_prefetchw(&LockHandle);
              Next = LockHandle.LockQueue.Next;
              if ( !LockHandle.LockQueue.Next )
              {
                if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                     0LL,
                                                     (signed __int64)&LockHandle) == &LockHandle )
                  goto LABEL_17;
                Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
              }
              LockHandle.LockQueue.Next = 0LL;
              _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
              goto LABEL_17;
            }
            if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                 v13,
                                 (unsigned int)&v42,
                                 (unsigned int)&v37,
                                 (unsigned int)&v36,
                                 v12,
                                 (__int64)&v44)
              && (char *)v13 != v17 )
            {
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
            }
            v15 = v44;
LABEL_41:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v15 )
            {
              v31 = (_DWORD *)(v13 - (unsigned __int16)(16 * *(unsigned __int8 *)(v13 + 24)));
              if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v31, 1953261124LL) )
              {
                if ( (v15 & 1) != 0 )
                  IoBoostThreadIoPriority(v31, 2LL, 0x80000000LL);
                if ( (v15 & 2) != 0 )
                {
                  if ( v31[450] )
                  {
                    ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                    if ( ExtensionTable )
                    {
                      (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v31);
                      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                    }
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag(v31, 0x746C6644u);
              }
            }
            goto LABEL_17;
          }
          if ( (char *)v13 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v13, (_RTL_RB_TREE *)LockedHeadEntry);
          v23 = *((_QWORD *)v17 + 7);
          if ( v23 )
            v24 = *(_BYTE *)(v23 + 48);
          else
            v24 = 15;
          v10 = (v17[25] & 1) == 0;
          LOBYTE(v42) = v24;
          if ( v10 )
          {
            v27 = KiAbOwnerComputeCpuPriorityKey(v17);
            if ( v27 < v24 )
            {
              v24 = v27;
              LOBYTE(v42) = v27;
            }
          }
          KiAbTryIncrementIoWaiterCounts(v13, v17);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v13);
          if ( v24 < CpuPriorityKey )
          {
            if ( v25 )
              goto LABEL_39;
          }
          else
          {
            if ( !v25 )
            {
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              goto LABEL_17;
            }
LABEL_39:
            KiAbIoBoostOwners((_DWORD)v17, v25, (unsigned int)&v37, (unsigned int)&v36, v12);
          }
          KiAbCpuBoostOwners((_DWORD)v17, (unsigned __int8)CpuPriorityKey, (unsigned int)&v37, (unsigned int)&v36, v12);
          goto LABEL_41;
        }
        v22 = *(_BYTE *)(v13 - (unsigned __int16)(16 * *(unsigned __int8 *)(v13 + 24)) + 195);
        if ( v22 > 15 )
          v22 = 15;
        if ( v22 != *(_BYTE *)(v13 + 48) )
          goto LABEL_9;
      }
    }
LABEL_18:
    v10 = !_BitScanForward((unsigned int *)&a1, v9);
    v45 = a1;
  }
  while ( !v10 );
  v19 = v36;
  v4 = v43;
  if ( v36 )
  {
    v29 = (__int64)p_AbSelfIoBoostsList;
    do
    {
      v30 = (volatile signed __int16 *)(v19 - 172);
      v36 = (_QWORD *)*v19;
      *v19 = 1LL;
      _InterlockedOr(v34, 0);
      if ( *((_BYTE *)v19 - 583) )
        KiAbProcessThreadLocks((_DWORD)v19 - 1376, 0, 1, 0, (__int64)&v37, (__int64)&v36, v29);
      _InterlockedDecrement16(v30 + 710);
      v19 = v36;
    }
    while ( v36 );
  }
  CurrentPrcb = v39;
LABEL_21:
  v20 = v37;
  while ( v20 )
  {
    v28 = (__int64)(v20 - 27);
    v20 = (_QWORD *)*v20;
    KiDeferredReadyThread((__int64)CurrentPrcb, v28, v8, a4);
  }
LABEL_22:
  if ( v4 && CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
}

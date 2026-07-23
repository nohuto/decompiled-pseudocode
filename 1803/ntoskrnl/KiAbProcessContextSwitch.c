/*
 * XREFs of KiAbProcessContextSwitch @ 0x1400F83C0
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KiFastReadyThread @ 0x140040784 (KiFastReadyThread.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiAbApplyWakeupBoost @ 0x1400646D8 (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x140089090 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400A6A88 (KeCpuSetReportParkedProcessors.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400BA07C (KiAbThreadUnboostCpuPriority.c)
 *     KeSetAffinityThread_0 @ 0x1400CCA40 (KeSetAffinityThread_0.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1400EB350 (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x1400F3610 (KeClearSystemPriority.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 *     KeSetLegacyAffinityThread @ 0x140135F80 (KeSetLegacyAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401813DC (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x140183BE0 (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x1401B1CB0 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x14023FEC4 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140246964 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiAbDetermineMaxWaiterPriority @ 0x1400638BC (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x140063C78 (KiAbIoBoostOwners.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140063D78 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbCpuBoostOwners @ 0x140063E30 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x140064924 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140064B24 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140064BFC (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140064C50 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140064D30 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  int v2; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  int v4; // edx
  __int64 v5; // r8
  unsigned int v6; // esi
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // r15d
  _RTL_RB_TREE *LockedHeadEntry; // rax
  __int64 v13; // r14
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // r9
  char v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r10d
  char CpuPriorityKey; // r13
  char v24; // al
  char v25; // r9
  _QWORD *v26; // rdx
  char v27; // al
  __int64 v28; // rsi
  volatile signed __int16 *v29; // rdi
  __int64 v30; // rdi
  unsigned __int64 ExtensionTable; // rax
  signed __int32 v32[8]; // [rsp+0h] [rbp-69h] BYREF
  __int64 v33; // [rsp+40h] [rbp-29h]
  _QWORD *v34; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-19h] BYREF
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // [rsp+58h] [rbp-11h]
  struct _KPRCB *v37; // [rsp+60h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  int v39; // [rsp+D0h] [rbp+67h] BYREF
  int v40; // [rsp+D8h] [rbp+6Fh]
  int v41; // [rsp+E0h] [rbp+77h] BYREF
  int v42; // [rsp+E8h] [rbp+7Fh]

  v40 = a2;
  v2 = a2;
  if ( (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) == 0x3F )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(char *)(a1 + 792) | *(char *)(a1 + 1422);
  v35 = 0LL;
  v34 = 0LL;
  p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  v37 = CurrentPrcb;
  if ( v4 == 63 )
    goto LABEL_20;
  v5 = a1 + 800;
  v6 = (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) ^ 0x3F;
  v33 = a1 + 800;
  v7 = !_BitScanForward((unsigned int *)&a1, v6);
  if ( v7 )
    goto LABEL_19;
  v8 = (__int64)p_AbSelfIoBoostsList;
  do
  {
    v6 &= v6 - 1;
    v9 = v5 + 96 * a1;
    v10 = *(_QWORD *)(v9 + 32);
    if ( v10 && (v10 & 2) == 0 && (v10 & 1) == 0 )
    {
      if ( *(__int64 *)(v9 + 32) >= 0 )
        goto LABEL_9;
      if ( (*(_BYTE *)(v9 + 27) & 1) == 0 )
      {
        v16 = v5 + 96 * a1;
        if ( (*(_BYTE *)(v9 + 25) & 1) == 0 )
        {
          if ( KiAbOwnerComputeCpuPriorityKey(v16) == *(_BYTE *)(v9 + 48) )
            goto LABEL_15;
LABEL_9:
          v11 = 0;
          v41 = 0;
          LockedHeadEntry = (_RTL_RB_TREE *)KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v9, 1LL, &LockHandle);
          v13 = (__int64)LockedHeadEntry;
          if ( !LockedHeadEntry )
          {
LABEL_15:
            v5 = v33;
            goto LABEL_16;
          }
          if ( (*(_BYTE *)(v9 + 25) & 1) == 0 )
          {
            if ( (_RTL_RB_TREE *)v9 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v9, LockedHeadEntry);
            KiAbDetermineMaxWaiterPriority(v13, (__int64)&v39);
            if ( !v39 )
            {
LABEL_14:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              goto LABEL_15;
            }
            if ( (unsigned int)KiAbSetMinimumThreadPriority(v9, (char *)&v39, (__int64)&v35, (__int64)&v34, v8, &v41)
              && v9 != v13 )
            {
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v9, (_RTL_RB_TREE *)v13);
            }
            v11 = v41;
LABEL_35:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v11 )
            {
              v30 = v9 - (unsigned __int16)(16 * *(unsigned __int8 *)(v9 + 24));
              if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v30, 1953261124LL) )
              {
                if ( (v11 & 1) != 0 )
                  IoBoostThreadIoPriority((KSPIN_LOCK *)v30, 2, 0x80000000);
                if ( (v11 & 2) != 0 )
                {
                  if ( *(_DWORD *)(v30 + 1808) )
                  {
                    ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
                    if ( ExtensionTable )
                    {
                      (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(v30);
                      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                    }
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag((PVOID)v30, 0x746C6644u);
              }
            }
            goto LABEL_15;
          }
          if ( (_RTL_RB_TREE *)v9 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v9, LockedHeadEntry);
          v17 = *(_QWORD *)(v13 + 56);
          if ( v17 )
          {
            v18 = *(_BYTE *)(v17 + 48);
            LOBYTE(v39) = v18;
          }
          else
          {
            LOBYTE(v39) = 15;
            v18 = 15;
          }
          v19 = v18;
          if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
          {
            v24 = KiAbOwnerComputeCpuPriorityKey(v13);
            v19 = v25;
            if ( v24 < v25 )
            {
              LOBYTE(v39) = v24;
              v19 = v24;
            }
          }
          KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)v9, v13);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)v9, v20, v21);
          if ( v19 < CpuPriorityKey )
          {
            if ( v22 )
              goto LABEL_33;
          }
          else
          {
            if ( !v22 )
              goto LABEL_14;
LABEL_33:
            KiAbIoBoostOwners(v13, v22, (int)&v35, (int)&v34, v8);
          }
          KiAbCpuBoostOwners(v13, CpuPriorityKey, (int)&v35, (int)&v34, v8);
          goto LABEL_35;
        }
        v27 = *(_BYTE *)(v9 - (unsigned __int16)(16 * *(unsigned __int8 *)(v9 + 24)) + 195);
        if ( v27 > 15 )
          v27 = 15;
        if ( v27 != *(_BYTE *)(v9 + 48) )
          goto LABEL_9;
      }
    }
LABEL_16:
    v7 = !_BitScanForward((unsigned int *)&a1, v6);
    v42 = a1;
  }
  while ( !v7 );
  v14 = v34;
  v2 = v40;
  if ( v34 )
  {
    v28 = (__int64)p_AbSelfIoBoostsList;
    do
    {
      v29 = (volatile signed __int16 *)(v14 - 172);
      v34 = (_QWORD *)*v14;
      *v14 = 1LL;
      _InterlockedOr(v32, 0);
      if ( *((_BYTE *)v14 - 583) )
        KiAbProcessThreadLocks((__int64)(v14 - 172), 0, 1, 0, (__int64)&v35, (__int64)&v34, v28);
      _InterlockedDecrement16(v29 + 710);
      v14 = v34;
    }
    while ( v34 );
  }
  CurrentPrcb = v37;
LABEL_19:
  v15 = v35;
  while ( v15 )
  {
    v26 = v15 - 27;
    v15 = (_QWORD *)*v15;
    KiDeferredReadyThread(CurrentPrcb, v26, v5);
  }
LABEL_20:
  if ( v2 && CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
}

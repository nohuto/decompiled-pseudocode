/*
 * XREFs of KiAbProcessContextSwitch @ 0x14006F610
 * Callers:
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     NtYieldExecution @ 0x14008D810 (NtYieldExecution.c)
 *     KiReadyOutSwappedThreads @ 0x140090BC0 (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400A7184 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 *     KiFastReadyThread @ 0x1400A8DC4 (KiFastReadyThread.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     KiSchedulerApc @ 0x1400A9D00 (KiSchedulerApc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1400AC100 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400D208C (KeSetSchedulingGroupRankBias.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1400D38F0 (KeSetBasePriorityThread.c)
 *     KiBeginThreadWait @ 0x1400E4300 (KiBeginThreadWait.c)
 *     KeBoostPriorityThread @ 0x1400FE440 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x14011B140 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011F5C8 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread @ 0x140129ED4 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 *     KeSetCpuSetsProcess @ 0x140153D04 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x140188090 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x140202884 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140208E70 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140208FF0 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400A6E08 (KiAbSetMinimumThreadPriority.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400A8B70 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1400A8BC0 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400A9504 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1400A95A0 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x1400AA790 (KiAbDetermineMaxWaiterPriority.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     KiAbIoBoostOwners @ 0x14011B6B8 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14011BBCC (KiAbCpuBoostOwners.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  struct _KPRCB *CurrentPrcb; // rsi
  char v5; // al
  unsigned int v6; // r14d
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // r12d
  char *LockedHeadEntry; // rax
  char *v14; // r15
  char v15; // cl
  __int64 v16; // rax
  char v17; // r13
  char CpuPriorityKey; // al
  int v19; // r10d
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  char v22; // cl
  char v23; // al
  _QWORD *v24; // rdx
  BOOLEAN v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  _DWORD *v28; // rsi
  __int64 ExtensionTable; // rax
  __int64 v31; // r14
  volatile signed __int16 *v32; // rbx
  signed __int32 v33[8]; // [rsp+0h] [rbp-69h] BYREF
  _QWORD *v34; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v35; // [rsp+48h] [rbp-21h] BYREF
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // [rsp+50h] [rbp-19h]
  struct _KPRCB *v37; // [rsp+58h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-9h] BYREF
  char v39; // [rsp+D0h] [rbp+67h]
  int v40; // [rsp+D8h] [rbp+6Fh]
  int v41; // [rsp+E0h] [rbp+77h] BYREF
  int v42; // [rsp+E8h] [rbp+7Fh] BYREF

  v40 = a2;
  v2 = a1;
  v3 = a2;
  if ( (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) == 0x3F )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1422);
  v35 = 0LL;
  p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  v34 = 0LL;
  v37 = CurrentPrcb;
  if ( v5 == 63 )
    goto LABEL_25;
  v6 = (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) ^ 0x3F;
  v7 = !_BitScanForward((unsigned int *)&a1, v6);
  if ( v7 )
    goto LABEL_24;
  v8 = (__int64)p_AbSelfIoBoostsList;
  do
  {
    v6 &= v6 - 1;
    v9 = 96 * a1;
    v10 = v9 + v2 + 800;
    v11 = *(_QWORD *)(v10 + 32);
    if ( !v11 || (v11 & 2) != 0 || (v11 & 1) != 0 )
      goto LABEL_21;
    if ( *(__int64 *)(v10 + 32) >= 0 )
      goto LABEL_9;
    if ( (*(_BYTE *)(v10 + 27) & 1) != 0 )
      goto LABEL_21;
    if ( (*(_BYTE *)(v10 + 25) & 1) == 0 )
    {
      if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v9 + v2 + 800) == *(_BYTE *)(v10 + 48) )
        goto LABEL_21;
LABEL_9:
      v12 = 0;
      v42 = 0;
      LockedHeadEntry = KiAbEntryGetLockedHeadEntry((char *)v10, 1LL, &LockHandle);
      v14 = LockedHeadEntry;
      if ( !LockedHeadEntry )
        goto LABEL_21;
      if ( (*(_BYTE *)(v10 + 25) & 1) == 0 )
      {
        if ( (char *)v10 != LockedHeadEntry )
          KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v10);
        KiAbDetermineMaxWaiterPriority(v14, &v41);
        if ( !v41 )
        {
LABEL_20:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          goto LABEL_21;
        }
        if ( (unsigned int)KiAbSetMinimumThreadPriority(
                             v10,
                             (unsigned int)&v41,
                             (unsigned int)&v35,
                             (unsigned int)&v34,
                             v8,
                             (__int64)&v42)
          && (char *)v10 != v14 )
        {
          KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v10);
        }
        v12 = v42;
        goto LABEL_38;
      }
      if ( (char *)v10 != LockedHeadEntry )
      {
        v15 = *(_BYTE *)(v10 - (unsigned __int16)(16 * *(unsigned __int8 *)(v10 + 24)) + 195);
        if ( v15 > 15 )
          v15 = 15;
        if ( *(_BYTE *)(v10 + 48) != v15 )
        {
          *(_BYTE *)(v10 + 48) = v15;
          RtlRbRemoveNode((PRTL_RB_TREE)LockedHeadEntry + 4, (PRTL_BALANCED_NODE)v10);
          v25 = 0;
          v26 = *((_QWORD *)v14 + 8);
          if ( !v26 )
          {
LABEL_57:
            RtlRbInsertNodeEx((PRTL_RB_TREE)v14 + 4, (PRTL_BALANCED_NODE)v26, v25, (PRTL_BALANCED_NODE)v10);
            goto LABEL_15;
          }
          while ( 1 )
          {
            if ( *(_BYTE *)(v26 + 48) < *(_BYTE *)(v10 + 48) )
            {
              v27 = *(_QWORD *)v26;
              if ( (v14[72] & 1) != 0 )
              {
                if ( !v27 )
                {
LABEL_65:
                  RtlRbInsertNodeEx((PRTL_RB_TREE)v14 + 4, (PRTL_BALANCED_NODE)v26, 0, (PRTL_BALANCED_NODE)v10);
                  break;
                }
                v27 ^= v26;
              }
              if ( !v27 )
                goto LABEL_65;
            }
            else
            {
              v27 = *(_QWORD *)(v26 + 8);
              if ( (v14[72] & 1) != 0 )
              {
                if ( !v27 )
                {
LABEL_62:
                  v25 = 1;
                  goto LABEL_57;
                }
                v27 ^= v26;
              }
              if ( !v27 )
                goto LABEL_62;
            }
            v26 = v27;
          }
        }
      }
LABEL_15:
      v16 = *((_QWORD *)v14 + 7);
      if ( v16 )
        v17 = *(_BYTE *)(v16 + 48);
      else
        v17 = 15;
      v7 = (v14[25] & 1) == 0;
      LOBYTE(v41) = v17;
      if ( v7 )
      {
        v23 = KiAbOwnerComputeCpuPriorityKey(v14);
        if ( v23 < v17 )
        {
          v17 = v23;
          LOBYTE(v41) = v23;
        }
      }
      KiAbTryIncrementIoWaiterCounts(v10, v14);
      CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v10);
      v39 = CpuPriorityKey;
      if ( v17 < CpuPriorityKey )
      {
        if ( !v19 )
        {
LABEL_37:
          KiAbCpuBoostOwners((_DWORD)v14, (unsigned __int8)CpuPriorityKey, (unsigned int)&v35, (unsigned int)&v34, v8);
LABEL_38:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v12 )
          {
            v28 = (_DWORD *)(v10 - (unsigned __int16)(16 * *(unsigned __int8 *)(v10 + 24)));
            if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v28, 1953261124LL) )
            {
              if ( (v12 & 1) != 0 )
                IoBoostThreadIoPriority(v28, 2LL, 0x80000000LL);
              if ( (v12 & 2) != 0 )
              {
                if ( v28[452] )
                {
                  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                  if ( ExtensionTable )
                  {
                    (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v28);
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                  }
                }
              }
              ObDereferenceObjectDeferDeleteWithTag(v28, 0x746C6644u);
            }
          }
          goto LABEL_21;
        }
      }
      else if ( !v19 )
      {
        goto LABEL_20;
      }
      KiAbIoBoostOwners((_DWORD)v14, v19, (unsigned int)&v35, (unsigned int)&v34, v8);
      CpuPriorityKey = v39;
      goto LABEL_37;
    }
    v22 = *(_BYTE *)(v10 - (unsigned __int16)(16 * *(unsigned __int8 *)(v10 + 24)) + 195);
    if ( v22 > 15 )
      v22 = 15;
    if ( v22 != *(_BYTE *)(v10 + 48) )
      goto LABEL_9;
LABEL_21:
    v7 = !_BitScanForward((unsigned int *)&a1, v6);
  }
  while ( !v7 );
  v20 = v34;
  v3 = v40;
  if ( v34 )
  {
    v31 = (__int64)p_AbSelfIoBoostsList;
    do
    {
      v32 = (volatile signed __int16 *)(v20 - 172);
      v34 = (_QWORD *)*v20;
      *v20 = 1LL;
      _InterlockedOr(v33, 0);
      if ( *((_BYTE *)v20 - 583) )
        KiAbProcessThreadLocks((_DWORD)v20 - 1376, 0, 1, 0, (__int64)&v35, (__int64)&v34, v31);
      _InterlockedDecrement16(v32 + 710);
      v20 = v34;
    }
    while ( v34 );
  }
  CurrentPrcb = v37;
LABEL_24:
  v21 = v35;
  while ( v21 )
  {
    v24 = v21 - 27;
    v21 = (_QWORD *)*v21;
    KiDeferredReadyThread(CurrentPrcb, v24);
  }
LABEL_25:
  if ( v3 && CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
  {
    LOBYTE(a2) = 2;
    KiRequestSoftwareInterrupt(CurrentPrcb, a2);
  }
}

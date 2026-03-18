/*
 * XREFs of KeSetActualBasePriorityThread @ 0x1400A7A70
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140006590 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiStoreUpdateMemoryConditions @ 0x14000851C (MiStoreUpdateMemoryConditions.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140008714 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400087EC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14000C8E0 (SmKmStoreHelperWorker.c)
 *     IoApplyPriorityInfoThread @ 0x140021530 (IoApplyPriorityInfoThread.c)
 *     MiMappedPageWriter @ 0x140148710 (MiMappedPageWriter.c)
 *     MiZeroLargePageThread @ 0x140155660 (MiZeroLargePageThread.c)
 *     PopCreatePowerThread @ 0x140156070 (PopCreatePowerThread.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 *     MiSetZeroPageThreadPriority @ 0x14015C5E0 (MiSetZeroPageThreadPriority.c)
 *     PopFxEmergencyWorker @ 0x14015C6F0 (PopFxEmergencyWorker.c)
 *     MiFlushAllHintedStorePages @ 0x1402258B8 (MiFlushAllHintedStorePages.c)
 *     MiWakeModifiedPageWriter @ 0x140227290 (MiWakeModifiedPageWriter.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     PfpServiceMainThreadBoost @ 0x140239740 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadUnboost @ 0x140239840 (PfpServiceMainThreadUnboost.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265030 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265730 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14026992C (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140269B90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     ExpWorkQueueManagerThread @ 0x1405D0160 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1405E6884 (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140122D70 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14027B720 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(
        __int64 a1,
        int a2,
        _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList,
        __int64 a4)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rsi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  struct _KPRCB *v10; // rcx
  char v11; // al
  unsigned __int64 updated; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // r8
  _BYTE *v15; // rcx
  __int64 v16; // rsi
  struct _SINGLE_LIST_ENTRY *v18; // rdx
  _KTHREAD *NextThread; // r15
  __int64 v20; // r8
  int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+10h] BYREF
  int v23; // [rsp+80h] [rbp+18h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v22 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v24 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v21);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = *(char *)(a1 + 563);
  *(_BYTE *)(a1 + 645) = 0;
  v9 = v8;
  v10 = KeGetCurrentPrcb();
  if ( (char)v22 < (char)v8 )
  {
    if ( *(_BYTE *)(a1 + 1423) )
    {
      v18 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1384);
      if ( *(_QWORD *)(a1 + 1384) == 1LL )
      {
        p_AbSelfIoBoostsList = &v10->AbSelfIoBoostsList;
        if ( v10 != (struct _KPRCB *)-25712LL )
        {
          v18->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = v18;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
          KiAbQueueAutoBoostDpc(v10);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v22;
  v11 = *(_BYTE *)(a1 + 564);
  if ( v11 )
  {
    if ( (v11 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v22 != *(char *)(a1 + 195) )
  {
    if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      updated = *(_QWORD *)(a1 + 72);
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
      _enable();
    }
    v13 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
    v14 = v22;
    *(_QWORD *)(a1 + 32) = v13;
    KiSetPriorityThread(a1, &v24, v14);
  }
  v15 = *(_BYTE **)(a1 + 232);
  if ( v15 && (*v15 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v15, a1);
  else
    *(_QWORD *)(a1 + 64) = 0LL;
  KiReadyDeferredReadyList(CurrentPrcb, &v24, p_AbSelfIoBoostsList, a4);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_20;
  }
  v16 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(v16, 0LL);
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v16, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v20 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v20 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v16 + 643) = 32;
    *(_BYTE *)(v16 + 390) = CurrentIrql;
    KiQueueReadyThread((__int64)CurrentPrcb, v16, v20);
    if ( !(unsigned __int8)KiSwapContext(v16, NextThread, CurrentIrql) )
      goto LABEL_19;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)(v16 + 116) & 0x40) != 0 )
  {
LABEL_37:
    __writecr8(1uLL);
    *(_DWORD *)(v16 + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
  }
LABEL_19:
  __writecr8(CurrentIrql);
LABEL_20:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v9, v22, (__int64)&v22);
  return v9;
}

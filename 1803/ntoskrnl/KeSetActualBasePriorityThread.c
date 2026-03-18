/*
 * XREFs of KeSetActualBasePriorityThread @ 0x1400402B0
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x140043B70 (IoApplyPriorityInfoThread.c)
 *     MiFlushAllHintedStorePages @ 0x14007FCDC (MiFlushAllHintedStorePages.c)
 *     MiStoreUpdateMemoryConditions @ 0x140081410 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x140081C4C (MiWakeModifiedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14008E990 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140090210 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140090488 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140090F90 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     SmKmStoreHelperWorker @ 0x1400969F0 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140099390 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400CFBD0 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     PfpServiceMainThreadUnboost @ 0x14014E7D0 (PfpServiceMainThreadUnboost.c)
 *     PfpServiceMainThreadBoost @ 0x1401559D8 (PfpServiceMainThreadBoost.c)
 *     PopCreatePowerThread @ 0x14016C8CC (PopCreatePowerThread.c)
 *     MiMappedPageWriter @ 0x140176F10 (MiMappedPageWriter.c)
 *     MiZeroLargePageThread @ 0x14017B500 (MiZeroLargePageThread.c)
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401828E0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiSetZeroPageThreadPriority @ 0x140186734 (MiSetZeroPageThreadPriority.c)
 *     PopFxEmergencyWorker @ 0x140186890 (PopFxEmergencyWorker.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x140636B70 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x14064CB78 (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400AF234 (KiPriQueueThreadPriorityChanged.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1402AF09C (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rsi
  unsigned int v6; // eax
  unsigned int v7; // ebp
  struct _KDPC *v8; // rcx
  char v9; // al
  __int64 updated; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  _KTHREAD *v15; // rsi
  PVOID *v17; // rdx
  PVOID *p_SystemArgument2; // r8
  __int64 v19; // rdx
  struct _KPRCB *v20; // r15
  _KTHREAD *NextThread; // r15
  int v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v23 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v25 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v22);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(char *)(a1 + 563);
  *(_BYTE *)(a1 + 645) = 0;
  v7 = v6;
  v8 = (struct _KDPC *)KeGetCurrentPrcb();
  if ( (char)v23 < (char)v6 )
  {
    if ( *(_BYTE *)(a1 + 1423) )
    {
      v17 = (PVOID *)(a1 + 1384);
      if ( *(_QWORD *)(a1 + 1384) == 1LL )
      {
        p_SystemArgument2 = &v8[401].SystemArgument2;
        if ( v8 != (struct _KDPC *)-25712LL )
        {
          *v17 = *p_SystemArgument2;
          *p_SystemArgument2 = v17;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
          KiAbQueueAutoBoostDpc(v8);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v23;
  v9 = *(_BYTE *)(a1 + 564);
  if ( v9 )
  {
    if ( (v9 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v23 != *(char *)(a1 + 195) )
  {
    if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      updated = *(_QWORD *)(a1 + 72);
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
      _enable();
    }
    v11 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
    v12 = v23;
    *(_QWORD *)(a1 + 32) = v11;
    KiSetPriorityThread(a1, &v25, v12);
  }
  v13 = *(_BYTE **)(a1 + 232);
  if ( v13 && (*v13 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v13, a1);
  else
    KiReleaseThreadLockSafe(a1);
  KiReadyDeferredReadyList(CurrentPrcb, &v25);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      LOBYTE(v14) = 2;
      KiRequestSoftwareInterrupt(CurrentPrcb, v14);
    }
    goto LABEL_20;
  }
  v15 = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(v15, 0LL);
    v20 = KeGetCurrentPrcb();
    v24 = 0;
    while ( 1 )
    {
      LOBYTE(v19) = 1;
      KiSetVpThreadSpinLockCount(v20, v19);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v20, 0LL);
      do
        KeYieldProcessorEx(&v24);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v15, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    v15->WaitReason = 32;
    v15->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v15);
    if ( !(unsigned __int8)KiSwapContext(v15, NextThread, CurrentIrql) )
      goto LABEL_19;
    goto LABEL_37;
  }
  if ( (v15->MiscFlags & 0x40) != 0 )
  {
LABEL_37:
    __writecr8(1uLL);
    v15->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
  }
LABEL_19:
  __writecr8(CurrentIrql);
LABEL_20:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v7, v23, (__int64)&v23);
  return v7;
}

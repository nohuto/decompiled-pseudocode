/*
 * XREFs of KeSetActualBasePriorityThread @ 0x1400ECEC0
 * Callers:
 *     MiFlushAllHintedStorePages @ 0x140004DF0 (MiFlushAllHintedStorePages.c)
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14003A2A8 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiWakeModifiedPageWriter @ 0x14003BB18 (MiWakeModifiedPageWriter.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400539A0 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140053C54 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140054744 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400574C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IoApplyPriorityInfoThread @ 0x140066920 (IoApplyPriorityInfoThread.c)
 *     MiZeroLargePage @ 0x1400B5CC0 (MiZeroLargePage.c)
 *     MiZeroSinglePage @ 0x1400C6290 (MiZeroSinglePage.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011FB50 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140120F30 (SmKmStoreHelperWorker.c)
 *     PfpServiceMainThreadUnboost @ 0x1401383E0 (PfpServiceMainThreadUnboost.c)
 *     PfpServiceMainThreadBoost @ 0x14013D78C (PfpServiceMainThreadBoost.c)
 *     PopCreatePowerThread @ 0x14014960C (PopCreatePowerThread.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiZeroLargePageThread @ 0x14015C180 (MiZeroLargePageThread.c)
 *     MiMappedPageWriter @ 0x14015DC00 (MiMappedPageWriter.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 *     PopFxEmergencyWorker @ 0x140167D30 (PopFxEmergencyWorker.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140168E30 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405C0ED0 (ExpWorkerThreadBalanceManager.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1405CEC80 (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x14001AD38 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14002CE38 (KiPriQueueThreadPriorityChanged.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140253A4C (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(
        __int64 a1,
        int a2,
        _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList,
        __int64 a4)
{
  __int64 v5; // r15
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  bool v8; // di
  unsigned int v9; // eax
  unsigned int v10; // r12d
  struct _KPRCB *v11; // rcx
  char v12; // al
  __int64 updated; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  char v16; // dl
  int v17; // eax
  unsigned int v18; // edi
  int v19; // esi
  char v20; // cl
  char v21; // r14
  signed int v22; // r13d
  struct _KPRCB *v23; // rdx
  volatile signed __int64 *v24; // rsi
  bool v25; // al
  __int64 v26; // rdx
  volatile signed __int32 *v27; // rcx
  _QWORD *v28; // rdi
  __int64 CurrentThread; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  char v33; // cl
  __int64 v34; // rax
  bool v35; // zf
  _KTHREAD *NextThread; // r15
  __int64 v37; // rcx
  struct _KPRCB *v38; // rax
  bool v39; // r12
  __int64 v40; // r14
  __int64 v41; // rdx
  struct _SINGLE_LIST_ENTRY *v42; // rdx
  __int64 v43; // r14
  __int64 v44; // rax
  volatile signed __int32 *v45; // rdi
  _QWORD *v46; // rax
  _QWORD *v47; // rdi
  char v48; // cl
  struct _SINGLE_LIST_ENTRY *v49; // rcx
  volatile signed __int64 *v50; // [rsp+38h] [rbp-29h]
  int v51; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v52; // [rsp+44h] [rbp-1Dh]
  int v53; // [rsp+48h] [rbp-19h] BYREF
  int v54; // [rsp+4Ch] [rbp-15h] BYREF
  int v55; // [rsp+50h] [rbp-11h] BYREF
  struct _KPRCB *v56; // [rsp+58h] [rbp-9h]
  __int64 v57; // [rsp+60h] [rbp-1h]
  _QWORD *v58; // [rsp+68h] [rbp+7h] BYREF
  int v59; // [rsp+70h] [rbp+Fh]
  unsigned int v60; // [rsp+C8h] [rbp+67h]
  int v61; // [rsp+D0h] [rbp+6Fh] BYREF
  int v62; // [rsp+D8h] [rbp+77h] BYREF
  int v63; // [rsp+E0h] [rbp+7Fh] BYREF

  v61 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v5 = 0LL;
  v58 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v56 = CurrentPrcb;
  v8 = (_KTHREAD *)a1 == CurrentPrcb->CurrentThread;
  v62 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v62);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(char *)(a1 + 563);
  *(_BYTE *)(a1 + 645) = 0;
  v10 = v9;
  v11 = KeGetCurrentPrcb();
  v60 = v9;
  if ( (char)v61 < (char)v9 )
  {
    if ( *(_BYTE *)(a1 + 1423) )
    {
      v42 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1384);
      if ( *(_QWORD *)(a1 + 1384) == 1LL )
      {
        p_AbSelfIoBoostsList = &v11->AbSelfIoBoostsList;
        if ( v11 != (struct _KPRCB *)-26032LL )
        {
          v42->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = v42;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
          KiAbQueueAutoBoostDpc(v11);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v61;
  v12 = *(_BYTE *)(a1 + 564);
  if ( v12 )
  {
    if ( (v12 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v61 == *(char *)(a1 + 195) )
    goto LABEL_31;
  if ( !v8 || CurrentPrcb->NestingLevel )
  {
    updated = *(_QWORD *)(a1 + 72);
  }
  else
  {
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
    _enable();
  }
  v14 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
  v15 = *(_DWORD *)(a1 + 1408);
  v16 = v61;
  *(_QWORD *)(a1 + 32) = v14;
  if ( v15 )
  {
    _BitScanReverse((unsigned int *)&p_AbSelfIoBoostsList, v15);
    if ( v16 < (int)p_AbSelfIoBoostsList )
      v16 = (char)p_AbSelfIoBoostsList;
    v59 = (int)p_AbSelfIoBoostsList;
  }
  v17 = *(char *)(a1 + 195);
  v18 = v16;
  v52 = v16;
  if ( v17 == v16 )
    goto LABEL_31;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = *(unsigned __int8 *)(a1 + 388);
        v50 = 0LL;
        if ( v19 != 5 )
          break;
        v20 = *(_BYTE *)(a1 + 112) & 7;
        if ( (unsigned __int8)(v20 - 3) <= 3u || v20 == 1 )
          goto LABEL_16;
        LOBYTE(v19) = 2;
LABEL_60:
        v34 = *(unsigned int *)(a1 + 536);
        if ( (int)v34 >= 0 )
        {
          v5 = KiProcessorBlock[v34];
          v54 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(&v54);
            while ( *(_QWORD *)(v5 + 48) );
          }
          v35 = a1 == *(_QWORD *)(v5 + 8);
LABEL_64:
          if ( v35 )
            goto LABEL_16;
          goto LABEL_106;
        }
LABEL_116:
        v5 = 0LL;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
        goto LABEL_60;
      if ( *(_BYTE *)(a1 + 388) != 3 )
        goto LABEL_16;
      v43 = *(unsigned int *)(a1 + 536);
      if ( (int)v43 < 0 )
        goto LABEL_116;
      v5 = KiProcessorBlock[v43];
      v63 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v63);
        while ( *(_QWORD *)(v5 + 48) );
      }
      if ( a1 == *(_QWORD *)(v5 + 16) )
        goto LABEL_16;
      if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v43 )
        __fastfail(0x1Eu);
LABEL_106:
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
      v5 = 0LL;
    }
    v40 = *(unsigned int *)(a1 + 536);
    if ( (int)v40 >= 0 )
    {
      v5 = KiProcessorBlock[v40];
      v53 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v53);
        while ( *(_QWORD *)(v5 + 48) );
      }
      if ( *(_BYTE *)(a1 + 388) != 1 )
        goto LABEL_106;
      v35 = *(_DWORD *)(a1 + 536) == (_DWORD)v40;
      goto LABEL_64;
    }
    v44 = (unsigned int)v40;
    LODWORD(v44) = v40 & 0x7FFFFFFF;
    v5 = 0LL;
    v51 = 0;
    v45 = *(volatile signed __int32 **)(KiProcessorBlock[v44] + 25160);
    v50 = (volatile signed __int64 *)v45;
    while ( _interlockedbittestandset64(v45, 0LL) )
    {
      do
        KeYieldProcessorEx(&v51);
      while ( *(_QWORD *)v45 );
    }
    v18 = v52;
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v40 )
      break;
    _InterlockedAnd64(v50, 0LL);
  }
LABEL_16:
  v21 = 0;
  v22 = *(char *)(a1 + 195);
  if ( (unsigned __int8)v19 > 3u )
  {
LABEL_17:
    v23 = KeGetCurrentPrcb();
    if ( (char)v18 > *(char *)(a1 + 195) )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v49 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
        if ( *(_QWORD *)(a1 + 1376) == 1LL )
        {
          p_AbSelfIoBoostsList = &v23->AbPropagateBoostsList;
          if ( v23 != (struct _KPRCB *)-26040LL )
          {
            v49->Next = p_AbSelfIoBoostsList->Next;
            p_AbSelfIoBoostsList->Next = v49;
            _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
            KiAbQueueAutoBoostDpc(v23);
          }
        }
      }
    }
    *(_BYTE *)(a1 + 195) = v18;
    goto LABEL_20;
  }
  switch ( (unsigned __int8)v19 )
  {
    case 1u:
      v24 = v50;
      KiRemoveThreadFromAnyReadyQueue(v5, (__int64)v50, a1, v22);
      KiUpdateThreadPriority(0LL, a1, v18, 0LL);
      KiPrepareReadyThreadForRescheduling(a1, v18, (__int64 *)&v58);
      break;
    case 2u:
      v39 = *(_QWORD *)(v5 + 16) == 0LL;
      KiUpdateThreadPriority(v5, a1, v18, v39);
      if ( (int)v18 >= v22 || !v39 )
        goto LABEL_20;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
        v31 = KiSelectReadyThreadEx((struct _KPRCB *)v5, (_KTHREAD *)a1, 0LL);
        v32 = v31;
        if ( v31 )
        {
          if ( (*((_BYTE *)v31 + 2) & 4) != 0 )
          {
            if ( (unsigned __int8)KiIsThreadRankNonZero(v31, v5) )
              v33 = 1;
            else
              v33 = *((_BYTE *)v32 + 195);
          }
          else
          {
            v33 = *((_BYTE *)v31 + 195);
          }
          **(_BYTE **)(v5 + 56) = v33;
          *(_QWORD *)(v5 + 16) = v32;
          if ( *((_BYTE *)v32 + 388) == 1 )
            *((_DWORD *)v32 + 33) = *((_DWORD *)v32 + 33) - *((_DWORD *)v32 + 109) + MEMORY[0xFFFFF78000000320];
          *((_BYTE *)v32 + 388) = 3;
          v21 = 1;
        }
        goto LABEL_20;
      }
      v24 = v50;
      if ( *(_DWORD *)(v5 + 22808) >> (v18 + 1) )
        *(_BYTE *)(a1 + 112) |= 0x10u;
      break;
    case 3u:
      KiUpdateThreadPriority(v5, a1, v18, 1LL);
      if ( (int)v18 < v22 )
      {
        v46 = KiSelectReadyThreadEx((struct _KPRCB *)v5, (_KTHREAD *)a1, 0LL);
        v47 = v46;
        if ( v46 )
        {
          if ( (*((_BYTE *)v46 + 2) & 4) != 0 )
          {
            if ( (unsigned __int8)KiIsThreadRankNonZero(v46, v5) )
              v48 = 1;
            else
              v48 = *((_BYTE *)v47 + 195);
          }
          else
          {
            v48 = *((_BYTE *)v46 + 195);
          }
          **(_BYTE **)(v5 + 56) = v48;
          *(_QWORD *)(v5 + 16) = v47;
          if ( *((_BYTE *)v47 + 388) == 1 )
            *((_DWORD *)v47 + 33) = *((_DWORD *)v47 + 33) - *((_DWORD *)v47 + 109) + MEMORY[0xFFFFF78000000320];
          *((_BYTE *)v47 + 388) = 3;
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
          *(_BYTE *)(a1 + 388) = 7;
          *(_QWORD *)(a1 + 216) = 0LL;
          v58 = (_QWORD *)(a1 + 216);
        }
      }
LABEL_20:
      v24 = v50;
      break;
    default:
      goto LABEL_17;
  }
  v25 = 0;
  v26 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 25152);
  if ( v26 )
    v25 = (v26 & *(_QWORD *)(a1 + 576)) == v26;
  if ( v25 != ((*(_DWORD *)(a1 + 120) & 0x1000) != 0) )
    _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x1000u);
  if ( v5 )
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
  if ( v24 )
    _InterlockedAnd64(v24, 0LL);
  if ( v21 )
  {
    v37 = *(unsigned int *)(v5 + 36);
    if ( KeGetPcr()->Prcb.Number != (_DWORD)v37 )
    {
      v38 = KeGetCurrentPrcb();
      LOBYTE(v26) = 2;
      ++v38->SynchCounters.IpiSendSoftwareInterruptCount;
      HalSendSoftwareInterrupt(v37, v26, p_AbSelfIoBoostsList, a4);
    }
  }
  CurrentPrcb = v56;
  LOBYTE(CurrentIrql) = v57;
  v10 = v60;
LABEL_31:
  v27 = *(volatile signed __int32 **)(a1 + 232);
  if ( v27 && (*(_BYTE *)v27 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v27, a1);
  else
    *(_QWORD *)(a1 + 64) = 0LL;
  v28 = v58;
  while ( v28 )
  {
    v41 = (__int64)(v28 - 27);
    v28 = (_QWORD *)*v28;
    KiDeferredReadyThread((__int64)CurrentPrcb, v41, (__int64)p_AbSelfIoBoostsList, a4);
  }
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, (__int64)p_AbSelfIoBoostsList, a4);
      v55 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v55);
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
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      if ( (unsigned __int8)KiSwapContext(CurrentThread, NextThread, (unsigned __int8)CurrentIrql) )
        goto LABEL_74;
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        goto LABEL_38;
LABEL_74:
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
LABEL_38:
    __writecr8((unsigned __int8)CurrentIrql);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v10, v61, (__int64)&v61);
  return v10;
}

/*
 * XREFs of KiSetPriorityThread @ 0x140042AF0
 * Callers:
 *     KiSetPriorityBoost @ 0x14001ACCC (KiSetPriorityBoost.c)
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     KeRemovePriQueue @ 0x1400FC3E0 (KeRemovePriQueue.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400FD8B0 (KiTryUnwaitThreadWithPriority.c)
 *     KiClearPriorityFloor @ 0x140114704 (KiClearPriorityFloor.c)
 *     KiSetPriorityFloor @ 0x14011F26C (KiSetPriorityFloor.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x14001AD38 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiComputePriorityFloor @ 0x140042E58 (KiComputePriorityFloor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400433E4 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 */

char __fastcall KiSetPriorityThread(__int64 a1, __int64 *a2, unsigned __int8 a3)
{
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  char v7; // bp
  signed int v8; // r15d
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _SINGLE_LIST_ENTRY *v15; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  char v20; // cl
  bool v21; // r14
  __int64 v22; // rcx
  struct _KPRCB *v23; // rax
  __int64 ready; // rax
  __int64 v25; // rsi
  char v26; // cl
  char v27; // al
  char IsThreadRankNonZero; // al
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int64 *v30; // [rsp+68h] [rbp+20h] BYREF

  v5 = (char)KiComputePriorityFloor(a1, a3);
  if ( *(char *)(a1 + 195) == v5 )
    return 0;
  v6 = KiAcquireThreadStateLock(a1, &v29, &v30);
  v7 = 0;
  v8 = *(char *)(a1 + 195);
  if ( v6 > 3u )
  {
LABEL_3:
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (char)v5 > *(char *)(a1 + 195) )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v15 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
        if ( *(_QWORD *)(a1 + 1376) == 1LL )
        {
          p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-26040LL )
          {
            v15->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v15;
            _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          }
        }
      }
    }
    *(_BYTE *)(a1 + 195) = v5;
LABEL_5:
    v10 = v29;
    goto LABEL_6;
  }
  if ( v6 == 1 )
  {
    v10 = v29;
    KiRemoveThreadFromAnyReadyQueue(v29, (__int64)v30, a1, v8);
    KiUpdateThreadPriority(0LL, a1, v5, 0LL);
    KiPrepareReadyThreadForRescheduling(a1, v5, a2);
    goto LABEL_6;
  }
  if ( v6 != 2 )
  {
    if ( v6 == 3 )
    {
      v10 = v29;
      KiUpdateThreadPriority(v29, a1, v5, 1LL);
      if ( (int)v5 >= v8 )
        goto LABEL_6;
      ready = KiSelectReadyThreadEx(v10, a1, 0LL);
      v25 = ready;
      if ( !ready )
        goto LABEL_6;
      if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v10);
        v26 = 1;
        if ( !IsThreadRankNonZero )
          v26 = *(_BYTE *)(v25 + 195);
      }
      else
      {
        v26 = *(_BYTE *)(ready + 195);
      }
      **(_BYTE **)(v10 + 56) = v26;
      *(_QWORD *)(v10 + 16) = v25;
      if ( *(_BYTE *)(v25 + 388) == 1 )
        *(_DWORD *)(v25 + 132) = *(_DWORD *)(v25 + 132) - *(_DWORD *)(v25 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v25 + 388) = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
      *(_BYTE *)(a1 + 388) = 7;
      *(_QWORD *)(a1 + 216) = *a2;
      *a2 = a1 + 216;
      goto LABEL_5;
    }
    goto LABEL_3;
  }
  v10 = v29;
  v17 = (__int64 *)(v29 + 16);
  v21 = *(_QWORD *)(v29 + 16) == 0LL;
  KiUpdateThreadPriority(v29, a1, v5, v21);
  if ( (int)v5 < v8 && v21 )
  {
    v10 = v29;
    if ( *(_BYTE *)(a1 + 388) != 2 )
    {
      if ( *(_DWORD *)(v29 + 22808) >> (v5 + 1) )
        *(_BYTE *)(a1 + 112) |= 0x10u;
      goto LABEL_6;
    }
    v18 = KiSelectReadyThreadEx(v29, a1, 0LL);
    v19 = v18;
    if ( v18 )
    {
      if ( (*(_BYTE *)(v18 + 2) & 4) != 0 )
      {
        v27 = KiIsThreadRankNonZero(v18, v10);
        v20 = 1;
        if ( !v27 )
          v20 = *(_BYTE *)(v19 + 195);
      }
      else
      {
        v20 = *(_BYTE *)(v18 + 195);
      }
      **(_BYTE **)(v10 + 56) = v20;
      *v17 = v19;
      if ( *(_BYTE *)(v19 + 388) == 1 )
        *(_DWORD *)(v19 + 132) = *(_DWORD *)(v19 + 132) - *(_DWORD *)(v19 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v19 + 388) = 3;
      v7 = 1;
      goto LABEL_5;
    }
  }
LABEL_6:
  KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v10 )
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
  if ( v30 )
    _InterlockedAnd64(v30, 0LL);
  if ( v7 )
  {
    LODWORD(v11) = KeGetPcr()->Prcb.Number;
    v22 = *(unsigned int *)(v29 + 36);
    if ( (_DWORD)v11 != (_DWORD)v22 )
    {
      v23 = KeGetCurrentPrcb();
      LOBYTE(v11) = 2;
      ++v23->SynchCounters.IpiSendSoftwareInterruptCount;
      HalSendSoftwareInterrupt(v22, v11, v12, v13);
    }
  }
  return 1;
}

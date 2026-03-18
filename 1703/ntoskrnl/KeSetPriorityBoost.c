/*
 * XREFs of KeSetPriorityBoost @ 0x140042F40
 * Callers:
 *     FsRtlpDoBoost @ 0x140019E4C (FsRtlpDoBoost.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     FsRtlpWaitForIoAtEof @ 0x14011D258 (FsRtlpWaitForIoAtEof.c)
 *     CmpBoostActiveHiveWriter @ 0x14043B768 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x14001AD38 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
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
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, int a2, struct _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // edi
  char v7; // si
  __int64 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r13
  char v10; // al
  unsigned __int64 v11; // r14
  char v12; // dl
  unsigned int v13; // eax
  int v14; // esi
  char v15; // al
  signed int v16; // r12d
  __int64 v17; // r15
  struct _KPRCB *v18; // rcx
  __int64 v19; // rdi
  char v20; // cl
  bool v21; // al
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  _QWORD *i; // rbx
  _KTHREAD *CurrentThread; // rbx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  _QWORD *v28; // rdx
  _KTHREAD *NextThread; // rdi
  bool v30; // r13
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rsi
  char v34; // cl
  char v35; // al
  __int64 ready; // rax
  __int64 v37; // rsi
  char v38; // cl
  char IsThreadRankNonZero; // al
  __int64 v40; // rcx
  struct _KPRCB *v41; // rax
  __int64 v42; // [rsp+28h] [rbp-48h] BYREF
  __int64 v43; // [rsp+30h] [rbp-40h]
  struct _KPRCB *v44; // [rsp+38h] [rbp-38h]
  _QWORD *v45; // [rsp+40h] [rbp-30h] BYREF
  volatile signed __int64 *v46; // [rsp+48h] [rbp-28h] BYREF
  int v47; // [rsp+A0h] [rbp+30h] BYREF
  int v48; // [rsp+A8h] [rbp+38h] BYREF

  result = (__int64)&KiInitialProcess;
  v5 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return result;
  v7 = 0;
  v45 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v43 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = *(_BYTE *)(a1 + 195);
  v44 = CurrentPrcb;
  if ( v10 <= 0 )
    goto LABEL_37;
  result = (unsigned int)v10;
  if ( (int)result >= a2 )
    goto LABEL_37;
  v11 = *(_QWORD *)(a1 + 72);
  v47 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v47);
      result = *(_QWORD *)(a1 + 64);
    }
    while ( result );
  }
  v12 = *(_BYTE *)(a1 + 195);
  if ( v12 > 0 )
  {
    result = (unsigned int)v12;
    if ( (int)result < v5 )
    {
      v13 = *(_DWORD *)(a1 + 1408);
      *(_BYTE *)(a1 + 564) += 16 * (v5 - v12);
      if ( v13 )
      {
        _BitScanReverse((unsigned int *)&v31, v13);
        if ( (char)v5 < v31 )
          LOBYTE(v5) = v31;
      }
      result = (unsigned int)*(char *)(a1 + 195);
      v14 = (char)v5;
      if ( (_DWORD)result == (char)v5 )
      {
LABEL_29:
        v23 = *(_QWORD *)(a1 + 32);
        if ( v11 > v23 )
        {
          v24 = KiLockQuantumTarget;
        }
        else
        {
          v24 = KiLockQuantumTarget;
          if ( v23 - v11 >= (unsigned int)KiLockQuantumTarget )
          {
LABEL_31:
            v7 = 1;
            goto LABEL_32;
          }
        }
        result = v11 + v24;
        *(_QWORD *)(a1 + 32) = result;
        goto LABEL_31;
      }
      v15 = KiAcquireThreadStateLock(a1, &v42, &v46);
      v16 = *(char *)(a1 + 195);
      switch ( v15 )
      {
        case 2:
          v17 = v42;
          v30 = *(_QWORD *)(v42 + 16) == 0LL;
          v18 = KeGetCurrentPrcb();
          if ( (char)v5 > *(char *)(a1 + 195) )
          {
            if ( *(_BYTE *)(a1 + 793) )
            {
              a3 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
              if ( *(_QWORD *)(a1 + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = &v18->AbPropagateBoostsList;
                if ( v18 != (struct _KPRCB *)-26040LL )
                {
                  a3->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = a3;
                  _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
                  KiAbQueueAutoBoostDpc(v18);
                }
              }
            }
          }
          v19 = v42;
          *(_BYTE *)(a1 + 195) = v14;
          if ( v30 )
          {
            if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
            {
              if ( (unsigned __int8)KiIsThreadRankNonZero(a1, v19) )
                v20 = 1;
              else
                v20 = *(_BYTE *)(a1 + 195);
            }
            else
            {
              v20 = v14;
            }
            **(_BYTE **)(v19 + 56) = v20;
          }
          if ( v14 < v16 && v30 )
          {
            v19 = v42;
            if ( *(_BYTE *)(a1 + 388) != 2 )
            {
              LOBYTE(CurrentIrql) = v43;
              LOBYTE(a3) = 0;
              if ( *(_DWORD *)(v42 + 22808) >> (v14 + 1) )
                *(_BYTE *)(a1 + 112) |= 0x10u;
              goto LABEL_19;
            }
            ready = KiSelectReadyThreadEx(v42, a1, 0LL);
            v37 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v19);
                v38 = 1;
                if ( !IsThreadRankNonZero )
                  v38 = *(_BYTE *)(v37 + 195);
              }
              else
              {
                v38 = *(_BYTE *)(ready + 195);
              }
              **(_BYTE **)(v19 + 56) = v38;
              *(_QWORD *)(v17 + 16) = v37;
              if ( *(_BYTE *)(v37 + 388) == 1 )
                *(_DWORD *)(v37 + 132) = *(_DWORD *)(v37 + 132) - *(_DWORD *)(v37 + 436) + MEMORY[0xFFFFF78000000320];
              v19 = v42;
              LOBYTE(a3) = 1;
              LOBYTE(CurrentIrql) = v43;
              *(_BYTE *)(v37 + 388) = 3;
              goto LABEL_19;
            }
          }
          LOBYTE(CurrentIrql) = v43;
          break;
        case 1:
          v19 = v42;
          KiRemoveThreadFromAnyReadyQueue(v42, (__int64)v46, a1, v16);
          KiUpdateThreadPriority(0LL, a1, (unsigned int)v14, 0LL);
          KiPrepareReadyThreadForRescheduling(a1, v14, (__int64 *)&v45);
          break;
        case 3:
          v19 = v42;
          LOBYTE(a4) = 1;
          KiUpdateThreadPriority(v42, a1, (unsigned int)v14, a4);
          if ( v14 < v16 )
          {
            v32 = KiSelectReadyThreadEx(v19, a1, 0LL);
            v33 = v32;
            if ( v32 )
            {
              if ( (*(_BYTE *)(v32 + 2) & 4) != 0 )
              {
                v35 = KiIsThreadRankNonZero(v32, v19);
                v34 = 1;
                if ( !v35 )
                  v34 = *(_BYTE *)(v33 + 195);
              }
              else
              {
                v34 = *(_BYTE *)(v32 + 195);
              }
              **(_BYTE **)(v19 + 56) = v34;
              *(_QWORD *)(v19 + 16) = v33;
              if ( *(_BYTE *)(v33 + 388) == 1 )
                *(_DWORD *)(v33 + 132) = *(_DWORD *)(v33 + 132) - *(_DWORD *)(v33 + 436) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v33 + 388) = 3;
              _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
              v19 = v42;
              *(_BYTE *)(a1 + 388) = 7;
              LOBYTE(a3) = 0;
              *(_QWORD *)(a1 + 216) = 0LL;
              v45 = (_QWORD *)(a1 + 216);
              goto LABEL_19;
            }
          }
          break;
        default:
          KiUpdateThreadPriority(0LL, a1, (unsigned int)(char)v5, 0LL);
          v19 = v42;
          break;
      }
      LOBYTE(a3) = 0;
LABEL_19:
      v21 = 0;
      v22 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 25152);
      if ( v22 )
        v21 = (v22 & *(_QWORD *)(a1 + 576)) == v22;
      if ( v21 != ((*(_DWORD *)(a1 + 120) & 0x1000) != 0) )
      {
        _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x1000u);
        v19 = v42;
      }
      if ( v19 )
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 48), 0LL);
      result = (__int64)v46;
      if ( v46 )
        _InterlockedAnd64(v46, 0LL);
      if ( (_BYTE)a3 )
      {
        LODWORD(v22) = KeGetPcr()->Prcb.Number;
        result = v42;
        v40 = *(unsigned int *)(v42 + 36);
        if ( (_DWORD)v22 != (_DWORD)v40 )
        {
          v41 = KeGetCurrentPrcb();
          LOBYTE(v22) = 2;
          ++v41->SynchCounters.IpiSendSoftwareInterruptCount;
          result = HalSendSoftwareInterrupt(v40, v22, a3, a4);
        }
      }
      CurrentPrcb = v44;
      goto LABEL_29;
    }
  }
LABEL_32:
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( !v7 )
  {
LABEL_37:
    result = (unsigned __int8)CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
    return result;
  }
  for ( i = v45; i; result = KiDeferredReadyThread(CurrentPrcb, v28, a3, a4) )
  {
    v28 = i - 27;
    i = (_QWORD *)*i;
  }
  if ( (unsigned __int8)CurrentIrql < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v48 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v48);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, (unsigned __int8)CurrentIrql) )
        goto LABEL_37;
    }
    else if ( (CurrentThread->MiscFlags & 0x40) == 0 )
    {
      goto LABEL_37;
    }
    __writecr8(1uLL);
    CurrentThread->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_37;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}

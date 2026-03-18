/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x14001D2E4
 * Callers:
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x14001D530 (KiCheckForEffectivePriorityChange.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140114D8C (KiResortScbQueue.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14011F5AC (KiMoveScbThreadsToNewReadylist.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rbx
  char v11; // cl
  int v12; // eax
  volatile unsigned __int8 result; // al
  __int64 v14; // rdx
  _KTHREAD *CurrentThread; // rbx
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // r9
  _KTHREAD *NextThread; // rsi
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF
  __int64 v25; // [rsp+78h] [rbp+20h]

  v24 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v25 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0LL;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v9 = KiProcessorBlock[v8];
      v10 = 424LL * (unsigned int)v8 + a1 + 128;
      if ( v9 )
      {
        v23 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v23);
          while ( *(_QWORD *)(v9 + 48) );
        }
      }
      if ( a2 )
        break;
      v16 = *(unsigned __int8 *)(v10 + 112);
      *(_BYTE *)(v10 + 112) = v16 & 0xF7;
      *(_DWORD *)(v10 + 116) -= (v16 >> 3) & 1;
      if ( *(_DWORD *)(v10 + 116) )
      {
        if ( (v16 & 1) != 0 )
        {
          a3 = 0LL;
          goto LABEL_25;
        }
LABEL_7:
        if ( v9 )
        {
          KiCheckForEffectivePriorityChange(v9, v10, a3, a4);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
        }
        goto LABEL_9;
      }
      if ( v9 )
      {
        if ( (v16 & 1) != 0 )
        {
          v18 = 424LL * (unsigned int)v8 + a1 + 128;
          do
          {
            v19 = *(_QWORD *)(v18 + 408);
            if ( !v19 )
              break;
            v18 = *(_QWORD *)(v18 + 408);
          }
          while ( !*(_DWORD *)(v19 + 116) );
          if ( *(_DWORD *)(v18 + 116) )
          {
            v20 = 0LL;
          }
          else
          {
            v20 = &v24;
            v18 = 0LL;
          }
          KiMoveScbThreadsToNewReadylist(v10, v18, 0LL, v20);
          if ( !*(_QWORD *)(v10 + 392) )
          {
            LOBYTE(a3) = 1;
            KiRemoveSchedulingGroupQueue(v9, v10, a3, a4);
          }
        }
        *(_BYTE *)(v10 + 112) &= ~4u;
        goto LABEL_7;
      }
LABEL_9:
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v25;
        goto LABEL_11;
      }
    }
    v11 = *(_BYTE *)(v10 + 112) | 0xC;
    v12 = ((unsigned __int8)(*(_BYTE *)(v10 + 112) | 8) >> 3) & 1;
    *(_BYTE *)(v10 + 112) = v11;
    *(_DWORD *)(v10 + 116) += v12;
    if ( (v11 & 1) != 0 )
    {
      LOBYTE(a3) = 1;
LABEL_25:
      KiResortScbQueue(v9, v10, a3, a4);
    }
    goto LABEL_7;
  }
LABEL_11:
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * a2)) & 4;
  result = KiReadyDeferredReadyList(CurrentPrcb, &v24);
  if ( (unsigned __int8)CurrentIrql < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v22);
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
      LOBYTE(v17) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) )
        goto LABEL_14;
    }
    else if ( (CurrentThread->MiscFlags & 0x40) == 0 )
    {
LABEL_14:
      result = CurrentIrql;
      __writecr8((unsigned __int8)CurrentIrql);
      return result;
    }
    __writecr8(1uLL);
    CurrentThread->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_14;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !result )
    {
      LOBYTE(v14) = 2;
      return KiRequestSoftwareInterrupt(CurrentPrcb, v14);
    }
  }
  return result;
}

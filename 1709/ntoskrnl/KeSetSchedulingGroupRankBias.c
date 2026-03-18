/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x1400D208C
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     KiMoveScbThreadsToNewReadylist @ 0x14000CFA8 (KiMoveScbThreadsToNewReadylist.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400D231C (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400D2A58 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400D2CD0 (KiResortScbQueue.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

char __fastcall KeSetSchedulingGroupRankBias(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rbx
  char result; // al
  __int64 CurrentThread; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // r9
  __int64 v17; // r8
  _KTHREAD *NextThread; // rsi
  __int64 v19; // r8
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp+18h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h]

  v22 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v23 = CurrentIrql;
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
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v21);
          while ( *(_QWORD *)(v9 + 48) );
        }
      }
      if ( a2 )
        break;
      v13 = *(unsigned __int8 *)(v10 + 112);
      *(_BYTE *)(v10 + 112) = v13 & 0xF7;
      *(_DWORD *)(v10 + 116) -= (v13 >> 3) & 1;
      if ( *(_DWORD *)(v10 + 116) )
      {
        if ( (v13 & 1) != 0 )
        {
          a3 = 0LL;
          goto LABEL_27;
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
        if ( (v13 & 1) != 0 )
        {
          v14 = 424LL * (unsigned int)v8 + a1 + 128;
          do
          {
            v15 = *(_QWORD *)(v14 + 408);
            if ( !v15 )
              break;
            v14 = *(_QWORD *)(v14 + 408);
          }
          while ( !*(_DWORD *)(v15 + 116) );
          if ( *(_DWORD *)(v14 + 116) )
          {
            v16 = 0LL;
          }
          else
          {
            v16 = &v22;
            v14 = 0LL;
          }
          KiMoveScbThreadsToNewReadylist(v10, v14, 0LL, v16);
          if ( !*(_QWORD *)(v10 + 392) )
          {
            LOBYTE(a3) = 1;
            KiRemoveSchedulingGroupQueue(v9, v10, a3);
          }
        }
        *(_BYTE *)(v10 + 112) &= ~4u;
        goto LABEL_7;
      }
LABEL_9:
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v23;
        goto LABEL_11;
      }
    }
    ++*(_DWORD *)(v10 + 116);
    *(_BYTE *)(v10 + 112) |= 0xCu;
    if ( (*(_BYTE *)(v10 + 112) & 1) != 0 )
    {
      LOBYTE(a3) = 1;
LABEL_27:
      KiResortScbQueue(v9, v10, a3, a4);
    }
    goto LABEL_7;
  }
LABEL_11:
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * a2)) & 4;
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v22, a3);
  if ( (unsigned __int8)CurrentIrql < 2u )
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
      {
        v19 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v19 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v19);
      LOBYTE(v17) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) )
        goto LABEL_14;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_14:
      result = CurrentIrql;
      __writecr8((unsigned __int8)CurrentIrql);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_14;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}

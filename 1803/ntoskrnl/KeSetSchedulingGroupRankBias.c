/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x1400A8024
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400A8330 (KiCheckForEffectivePriorityChange.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400A8ACC (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400A9260 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400A9530 (KiResortScbQueue.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiUpdateThreadState @ 0x14024902C (KiUpdateThreadState.c)
 */

unsigned __int8 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r13
  __int64 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct _KPRCB *v9; // rbp
  unsigned __int8 v10; // cl
  __int64 v11; // r8
  char v12; // cl
  unsigned int v13; // eax
  char v14; // cl
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  volatile unsigned __int8 result; // al
  __int64 CurrentThread; // rdi
  __int64 v23; // rdx
  struct _KPRCB *v24; // rbx
  _KTHREAD *NextThread; // rbx
  __int64 v26; // r8
  int v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+78h] [rbp+10h] BYREF
  __int64 v29; // [rsp+80h] [rbp+18h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v2 = a2;
  v29 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v30 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v7 = KiProcessorBlock[v6];
      v8 = 424LL * v6 + a1 + 128;
      if ( v7 )
      {
        v9 = KeGetCurrentPrcb();
        v28 = 0;
        while ( 1 )
        {
          LOBYTE(a2) = 1;
          KiSetVpThreadSpinLockCount(v9, a2);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v9, 0LL);
          do
            KeYieldProcessorEx(&v28);
          while ( *(_QWORD *)(v7 + 48) );
        }
      }
      v10 = *(_BYTE *)(v8 + 112);
      v11 = *(unsigned int *)(v8 + 116);
      if ( v2 )
        break;
      v13 = v10;
      v14 = v10 & 0xF7;
      *(_BYTE *)(v8 + 112) = v14;
      v15 = v11 - ((v13 >> 3) & 1);
      *(_DWORD *)(v8 + 116) = v15;
      if ( v15 )
      {
        if ( (v14 & 1) == 0 )
          goto LABEL_29;
        v11 = 0LL;
        goto LABEL_14;
      }
      if ( v7 )
      {
        if ( (v14 & 1) != 0 )
        {
          v16 = 424LL * v6 + a1 + 128;
          do
          {
            v17 = *(_QWORD *)(v16 + 408);
            if ( !v17 )
              break;
            v16 = *(_QWORD *)(v16 + 408);
          }
          while ( !*(_DWORD *)(v17 + 116) );
          if ( *(_DWORD *)(v16 + 116) )
          {
            v18 = 0LL;
          }
          else
          {
            v18 = &v29;
            v16 = 0LL;
          }
          KiMoveScbThreadsToNewReadylist(v8, v16, 0LL, v18);
          v20 = *(_QWORD *)(v8 + 392);
          if ( (*(_BYTE *)(v8 + 400) & 1) != 0 )
          {
            if ( v20 )
            {
              v20 ^= v8 + 392;
              goto LABEL_26;
            }
LABEL_27:
            LOBYTE(v19) = 1;
            KiRemoveSchedulingGroupQueue(v7, v8, v19);
          }
          else
          {
LABEL_26:
            if ( !v20 )
              goto LABEL_27;
          }
        }
        *(_BYTE *)(v8 + 112) &= ~4u;
LABEL_29:
        if ( v7 )
        {
          KiCheckForEffectivePriorityChange(v7, v8);
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
          KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
        }
      }
      if ( ++v6 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v30;
        goto LABEL_33;
      }
    }
    v12 = v10 | 0xC;
    *(_DWORD *)(v8 + 116) = v11 + 1;
    *(_BYTE *)(v8 + 112) = v12;
    if ( (v12 & 1) == 0 )
      goto LABEL_29;
    LOBYTE(v11) = 1;
LABEL_14:
    KiResortScbQueue(v7, v8, v11);
    goto LABEL_29;
  }
LABEL_33:
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * v2)) & 4;
  result = KiReadyDeferredReadyList(CurrentPrcb, &v29);
  if ( (unsigned __int8)CurrentIrql < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v24 = KeGetCurrentPrcb();
      v27 = 0;
      while ( 1 )
      {
        LOBYTE(v23) = 1;
        KiSetVpThreadSpinLockCount(v24, v23);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v24, 0LL);
        do
          KeYieldProcessorEx(&v27);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      KiUpdateThreadState(CurrentPrcb, NextThread, 2LL);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v26) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v26) )
        goto LABEL_44;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_44:
      result = CurrentIrql;
      __writecr8((unsigned __int8)CurrentIrql);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_44;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}

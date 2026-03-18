/*
 * XREFs of KiSchedulerApc @ 0x140111120
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x1400298F8 (KiIsProcessTerminationRequested.c)
 *     KiRemoveQueueApc @ 0x140031810 (KiRemoveQueueApc.c)
 *     KiSetProcessorIdle @ 0x140034028 (KiSetProcessorIdle.c)
 *     KiSignalThreadForApc @ 0x14003FFA4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140040128 (KiInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14010EEB4 (KiCheckForMaxOverQuotaScb.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     memset @ 0x140192D80 (memset.c)
 *     DbgkForwardException @ 0x140423F54 (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x1406AD948 (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x1406AD9A0 (KiSuspendUmsThread.c)
 */

void __fastcall KiSchedulerApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r15
  bool v6; // r13
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int8 v13; // si
  struct _KPRCB *v14; // r14
  __int64 v15; // r8
  char Priority; // cl
  KPROCESSOR_MODE v17; // di
  __int64 v18; // rax
  char v19; // si
  char IsThreadRankNonZero; // al
  unsigned __int8 v21; // r12
  unsigned __int8 v22; // di
  __int64 v23; // rdx
  int v24; // [rsp+38h] [rbp-99h] BYREF
  int v25; // [rsp+3Ch] [rbp-95h] BYREF
  int v26; // [rsp+40h] [rbp-91h] BYREF
  int v27; // [rsp+44h] [rbp-8Dh] BYREF
  int v28; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v29[3]; // [rsp+4Ch] [rbp-85h] BYREF
  _DWORD v30[40]; // [rsp+58h] [rbp-79h] BYREF

  v5 = 1;
  v6 = (*(_DWORD *)(a1 + 120) & 0x4000) != 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
    KiAbProcessContextSwitch(a1, 0, a3, a4);
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread
      || (NextThread = (_KTHREAD *)KiSelectReadyThreadEx(CurrentPrcb, (_KTHREAD *)a1, 0LL)) != 0LL
      || (v10 = *(_QWORD *)(a1 + 104)) != 0
      && (v11 = CurrentPrcb->ScbOffset + v10) != 0
      && KiCheckForMaxOverQuotaScb(v11)
      && (NextThread = CurrentPrcb->IdleThread, KiSetProcessorIdle((__int64)CurrentPrcb, 1, 1), NextThread) )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
      _enable();
      if ( (NextThread->Header.Size & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, CurrentPrcb);
        Priority = 1;
        if ( !IsThreadRankNonZero )
          Priority = NextThread->Priority;
      }
      else
      {
        Priority = NextThread->Priority;
      }
      *CurrentPrcb->PriorityState = Priority;
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread(CurrentPrcb, a1);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    }
    __writecr8(CurrentIrql);
  }
  if ( !*(_DWORD *)(a1 + 740) && !v6 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
      KiSuspendUmsThread(a1, &v27);
    else
      v5 = 0;
    v17 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 144);
      if ( v18 )
      {
        --*(_WORD *)(a1 + 486);
        v17 = *(_BYTE *)(v18 + 368) & 1;
        KiLeaveGuardedRegionUnsafe(a1);
      }
    }
    v19 = *(_BYTE *)(a1 + 194);
    if ( v19 )
    {
      v21 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v25);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v19 = *(_BYTE *)(a1 + 194);
      *(_BYTE *)(a1 + 194) = 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v21);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v17, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v19 )
    {
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v26 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) = 1;
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v22);
    }
    if ( v5 )
      KiResumeUmsThread(a1, &v27);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v6 )
  {
    if ( KiIsProcessTerminationRequested(a1, &v28) )
    {
      memset(v30, 0, 0x98uLL);
      v30[0] = v28;
      LOBYTE(v23) = 1;
      v30[1] = 1;
      DbgkForwardException(v30, v23);
      DbgkForwardException(v30, 0LL);
    }
    v12 = a1 + 648;
    v13 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v14 = KeGetCurrentPrcb();
    v29[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(v29);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      *(_BYTE *)(a1 + 729) = 1;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      if ( *(_BYTE *)(a1 + 730) )
        KiRemoveQueueApc(v12);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(v12);
      LOBYTE(v15) = v13;
      KiSignalThreadForApc((__int64)v14, a1 + 648, v15);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher((__int64)v14, 0, 1LL, 0LL, v13);
  }
}

/*
 * XREFs of KiSchedulerApc @ 0x140041440
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiSignalThreadForApc @ 0x140041EC4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140043A70 (KiInsertQueueApc.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400A7660 (KiCheckForMaxOverQuotaScb.c)
 *     KiSetProcessorIdle @ 0x1400A9678 (KiSetProcessorIdle.c)
 *     KiIsProcessTerminationRequested @ 0x1400C04E8 (KiIsProcessTerminationRequested.c)
 *     KiRemoveQueueApc @ 0x1400C6BDC (KiRemoveQueueApc.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x1400EE3A0 (KiSelectReadyThreadEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     DbgkForwardException @ 0x1405C0D3C (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x140742E70 (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x140742EC8 (KiSuspendUmsThread.c)
 */

int __fastcall KiSchedulerApc(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  int v4; // r13d
  char v5; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 NextThread; // rbx
  __int64 v10; // rcx
  char v11; // cl
  bool IsThreadRankNonZero; // al
  _DWORD *SchedulerAssist; // rdx
  int v14; // eax
  KPROCESSOR_MODE v15; // bl
  __int64 v16; // rax
  __int16 v17; // bx
  char v18; // si
  unsigned __int8 v19; // r12
  struct _KPRCB *v20; // rsi
  __int64 v21; // rdx
  unsigned __int8 v22; // si
  struct _KPRCB *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // r14
  struct _KPRCB *v29; // r15
  __int64 v30; // r8
  int v32; // [rsp+38h] [rbp-99h] BYREF
  int v33; // [rsp+3Ch] [rbp-95h] BYREF
  int v34; // [rsp+40h] [rbp-91h] BYREF
  int v35; // [rsp+44h] [rbp-8Dh] BYREF
  int v36; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v37[3]; // [rsp+4Ch] [rbp-85h] BYREF
  _DWORD v38[40]; // [rsp+58h] [rbp-79h] BYREF
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  v4 = *(_DWORD *)(a1 + 120) & 0x8000;
  v5 = 1;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    KiAbProcessContextSwitch(a1, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v32 = 0;
    while ( 1 )
    {
      LOBYTE(v7) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v7);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v32);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread
      || (NextThread = KiSelectReadyThreadEx(CurrentPrcb, a1, 0LL)) != 0
      || (*(_DWORD *)(a1 + 120) & 0x200) == 0
      && (v10 = *(_QWORD *)(a1 + 104)) != 0
      && CurrentPrcb->ScbOffset + v10
      && (unsigned __int8)KiCheckForMaxOverQuotaScb()
      && (NextThread = (__int64)CurrentPrcb->IdleThread, KiSetProcessorIdle(CurrentPrcb, 1LL, 1LL), NextThread) )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, a1, 0LL);
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, CurrentPrcb);
        v11 = 1;
        if ( !IsThreadRankNonZero )
          v11 = *(_BYTE *)(NextThread + 195);
      }
      else
      {
        v11 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v11;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        v14 = KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
          v14 = v11;
        *SchedulerAssist = v14;
      }
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread(CurrentPrcb, a1);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    }
    LODWORD(v2) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( !*(_DWORD *)(a1 + 740) && !v4 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
      KiSuspendUmsThread(a1, &v35);
    else
      v5 = 0;
    v15 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v16 = *(_QWORD *)(a1 + 144);
      if ( v16 )
      {
        --*(_WORD *)(a1 + 486);
        v17 = *(_WORD *)(v16 + 368);
        KiLeaveGuardedRegionUnsafe(a1);
        v15 = v17 & 1;
      }
    }
    v18 = *(_BYTE *)(a1 + 194);
    if ( v18 )
    {
      v19 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v20 = KeGetCurrentPrcb();
      v33 = 0;
      while ( 1 )
      {
        LOBYTE(a2) = 1;
        KiSetVpThreadSpinLockCount(v20, a2);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v20, 0LL);
        do
          KeYieldProcessorEx(&v33);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v18 = *(_BYTE *)(a1 + 194);
      *(_BYTE *)(a1 + 194) = 0;
      KiReleaseThreadLockSafe(a1);
      __writecr8(v19);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    LODWORD(v2) = KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v15, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v18 )
    {
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v23 = KeGetCurrentPrcb();
      v34 = 0;
      while ( 1 )
      {
        LOBYTE(v21) = 1;
        KiSetVpThreadSpinLockCount(v23, v21);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v23, 0LL);
        do
          KeYieldProcessorEx(&v34);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) = 1;
      LODWORD(v2) = KiReleaseThreadLockSafe(a1);
      __writecr8(v22);
    }
    if ( v5 )
      LODWORD(v2) = KiResumeUmsThread(a1, &v35);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v4 )
  {
    if ( (unsigned __int8)KiIsProcessTerminationRequested(a1, &v36) )
    {
      memset(v38, 0, 0x98uLL);
      LOBYTE(v25) = 1;
      v38[0] = v36;
      LOBYTE(v26) = 1;
      v38[1] = 1;
      DbgkForwardException(v38, v26, v25);
      LOBYTE(v27) = 1;
      DbgkForwardException(v38, 0LL, v27);
    }
    v28 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v29 = KeGetCurrentPrcb();
    v37[0] = 0;
    while ( 1 )
    {
      LOBYTE(v24) = 1;
      KiSetVpThreadSpinLockCount(v29, v24);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v29, 0LL);
      do
        KeYieldProcessorEx(v37);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      *(_BYTE *)(a1 + 729) = 1;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      if ( *(_BYTE *)(a1 + 730) )
        KiRemoveQueueApc(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(a1 + 648);
      LOBYTE(v30) = v28;
      KiSignalThreadForApc(v29, a1 + 648, v30);
    }
    KiReleaseThreadLockSafe(a1);
    LODWORD(v2) = KiExitDispatcher((_DWORD)v29, 0, 1, 0, v28);
  }
  return (int)v2;
}

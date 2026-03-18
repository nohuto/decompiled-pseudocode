/*
 * XREFs of KiSchedulerApc @ 0x1400A9D00
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KiSelectReadyThreadEx @ 0x14008B420 (KiSelectReadyThreadEx.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiSignalThreadForApc @ 0x1400AB2FC (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400AB46C (KiInsertQueueApc.c)
 *     KiIsProcessTerminationRequested @ 0x1400AB784 (KiIsProcessTerminationRequested.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140125400 (KiCheckForMaxOverQuotaScb.c)
 *     KiRemoveQueueApc @ 0x140126ECC (KiRemoveQueueApc.c)
 *     KiSetProcessorIdle @ 0x140128644 (KiSetProcessorIdle.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     memset @ 0x140192F40 (memset.c)
 *     DbgkForwardException @ 0x1404504F4 (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x1406D8D8C (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x1406D8DE4 (KiSuspendUmsThread.c)
 */

void __fastcall KiSchedulerApc(__int64 a1)
{
  int v2; // r13d
  char v3; // r15
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 *NextThread; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // cl
  char IsThreadRankNonZero; // al
  _DWORD *SchedulerAssist; // rdx
  KPROCESSOR_MODE v13; // bl
  __int64 v14; // rax
  __int16 v15; // bx
  char v16; // si
  unsigned __int8 v17; // r12
  unsigned __int8 v18; // bl
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 v22; // si
  struct _KPRCB *v23; // r14
  __int64 v24; // r8
  int v25; // [rsp+38h] [rbp-99h] BYREF
  int v26; // [rsp+3Ch] [rbp-95h] BYREF
  int v27; // [rsp+40h] [rbp-91h] BYREF
  int v28; // [rsp+44h] [rbp-8Dh] BYREF
  int v29; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v30[3]; // [rsp+4Ch] [rbp-85h] BYREF
  _DWORD v31[40]; // [rsp+58h] [rbp-79h] BYREF

  v2 = *(_DWORD *)(a1 + 120) & 0x8000;
  v3 = 1;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    KiAbProcessContextSwitch(a1, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (unsigned __int64 *)CurrentPrcb->NextThread;
    if ( NextThread
      || (NextThread = KiSelectReadyThreadEx(CurrentPrcb, (_KTHREAD *)a1, 0LL)) != 0LL
      || (*(_DWORD *)(a1 + 120) & 0x200) == 0
      && (v7 = *(_QWORD *)(a1 + 104)) != 0
      && (v8 = CurrentPrcb->ScbOffset + v7) != 0
      && (unsigned __int8)KiCheckForMaxOverQuotaScb(v8)
      && (NextThread = (unsigned __int64 *)CurrentPrcb->IdleThread, KiSetProcessorIdle(CurrentPrcb, 1LL, 1LL),
                                                                    NextThread) )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
      _enable();
      if ( (*((_BYTE *)NextThread + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, CurrentPrcb);
        v10 = 1;
        if ( !IsThreadRankNonZero )
          v10 = *((_BYTE *)NextThread + 195);
      }
      else
      {
        v10 = *((_BYTE *)NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v10;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        *SchedulerAssist = v10;
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *((_BYTE *)NextThread + 388) == 1 )
        *((_DWORD *)NextThread + 33) = *((_DWORD *)NextThread + 33)
                                     - *((_DWORD *)NextThread + 109)
                                     + MEMORY[0xFFFFF78000000320];
      *((_BYTE *)NextThread + 388) = 2;
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread((__int64)CurrentPrcb, a1, v9);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    }
    __writecr8(CurrentIrql);
  }
  if ( !*(_DWORD *)(a1 + 740) && !v2 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
      KiSuspendUmsThread(a1, &v28);
    else
      v3 = 0;
    v13 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 144);
      if ( v14 )
      {
        --*(_WORD *)(a1 + 486);
        v15 = *(_WORD *)(v14 + 368);
        KiLeaveGuardedRegionUnsafe(a1);
        v13 = v15 & 1;
      }
    }
    v16 = *(_BYTE *)(a1 + 194);
    if ( v16 )
    {
      v17 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v26 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v16 = *(_BYTE *)(a1 + 194);
      *(_BYTE *)(a1 + 194) = 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v17);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v13, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v16 )
    {
      v18 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v27 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v27);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) = 1;
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(v18);
    }
    if ( v3 )
      KiResumeUmsThread(a1, &v28);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v2 )
  {
    if ( (unsigned __int8)KiIsProcessTerminationRequested(a1, &v29) )
    {
      memset(v31, 0, 0x98uLL);
      LOBYTE(v19) = 1;
      v31[0] = v29;
      LOBYTE(v20) = 1;
      v31[1] = 1;
      DbgkForwardException(v31, v20, v19);
      LOBYTE(v21) = 1;
      DbgkForwardException(v31, 0LL, v21);
    }
    v22 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v23 = KeGetCurrentPrcb();
    v30[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(v30);
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
      LOBYTE(v24) = v22;
      KiSignalThreadForApc(v23, a1 + 648, v24);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher((__int64)v23, 0LL, 1u, 0, v22);
  }
}

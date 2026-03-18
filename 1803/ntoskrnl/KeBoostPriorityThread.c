/*
 * XREFs of KeBoostPriorityThread @ 0x14007EE24
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x14052C3D8 (ExpCreateWorkerThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
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

char __fastcall KeBoostPriorityThread(__int64 a1, __int64 a2)
{
  void *v2; // rax
  int v3; // ebp
  unsigned int v5; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // r15
  int v9; // r12d
  int v10; // eax
  unsigned __int64 updated; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // rdx
  struct _KPRCB *v16; // rbp
  _KTHREAD *NextThread; // rbp
  __int64 v18; // r8
  int v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v2 = &KiInitialProcess;
  v3 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v22 = 0LL;
    v5 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v20);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v9 = *(char *)(a1 + 195);
    if ( v9 < 16 && !*(_BYTE *)(a1 + 564) )
    {
      v10 = v3 + *(char *)(a1 + 563);
      if ( v10 > v9 )
      {
        v5 = v3 + *(char *)(a1 + 563);
        if ( v10 >= 16 )
          v5 = 15;
        if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
        {
          updated = *(_QWORD *)(a1 + 72);
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
          _enable();
        }
        v12 = updated + (unsigned int)*(unsigned __int8 *)(a1 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
        *(_QWORD *)(a1 + 32) = v12;
        KiSetPriorityThread(a1, &v22, v5);
      }
    }
    KiReleaseThreadLockSafe(a1);
    LOBYTE(v2) = KiReadyDeferredReadyList(CurrentPrcb, &v22);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread )
      {
        LOBYTE(v2) = CurrentPrcb->DpcRoutineActive;
        if ( !(_BYTE)v2 )
          LOBYTE(v2) = KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      }
    }
    else
    {
      v13 = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v16 = KeGetCurrentPrcb();
        v21 = 0;
        while ( 1 )
        {
          LOBYTE(v15) = 1;
          KiSetVpThreadSpinLockCount(v16, v15);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v16, 0LL);
          do
            KeYieldProcessorEx(&v21);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v13, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
          NextThread->ReadyTime = NextThread->ReadyTime
                                - NextThread->WaitBlock[2].SpareLong
                                + MEMORY[0xFFFFF78000000320];
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v13 + 643) = 32;
        *(_BYTE *)(v13 + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, v13);
        LOBYTE(v18) = CurrentIrql;
        v14 = (unsigned __int8)KiSwapContext(v13, NextThread, v18) == 0;
      }
      else
      {
        v14 = (*(_DWORD *)(v13 + 116) & 0x40) == 0;
      }
      if ( !v14 )
      {
        __writecr8(1uLL);
        *(_DWORD *)(v13 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
      LOBYTE(v2) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v5 )
      LOBYTE(v2) = EtwTracePriority(a1, 1328, v9, v5, 0LL);
  }
  return (char)v2;
}

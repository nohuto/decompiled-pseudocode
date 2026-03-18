/*
 * XREFs of KeBoostPriorityThread @ 0x14012DD50
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x1405677E4 (ExpCreateWorkerThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140253A4C (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  void *v4; // rax
  int v7; // r15d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  bool v10; // bp
  int v11; // r12d
  int v12; // eax
  __int64 updated; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 CurrentThread; // rsi
  __int64 v18; // r8
  _KTHREAD *NextThread; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v25; // [rsp+88h] [rbp+20h] BYREF

  v4 = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v4;
  v25 = 0LL;
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = 0;
  v10 = (_KTHREAD *)a1 == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v23);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v11 = *(char *)(a1 + 195);
  if ( v11 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    v12 = a2 + *(char *)(a1 + 563);
    if ( v12 > v11 )
    {
      v7 = a2 + *(char *)(a1 + 563);
      if ( v12 >= 16 )
        v7 = 15;
      if ( !v10 || CurrentPrcb->NestingLevel )
      {
        updated = *(_QWORD *)(a1 + 72);
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
        _enable();
      }
      v14 = updated + (unsigned int)*(unsigned __int8 *)(a1 + 651) * KiCyclesPerClockQuantum;
      if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
      *(_QWORD *)(a1 + 32) = v14;
      KiSetPriorityThread(a1, (__int64 *)&v25, v7);
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  LOBYTE(v4) = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v25, a3, a4);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v4) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v4 )
        LOBYTE(v4) = KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    goto LABEL_18;
  }
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v15, v16);
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v24);
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
      v20 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v20 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(CurrentThread + 643) = 32;
    *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, CurrentThread, v20, v21);
    LOBYTE(v18) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v18) )
      goto LABEL_17;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
  {
LABEL_29:
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
  }
LABEL_17:
  LOBYTE(v4) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_18:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v7 )
    LOBYTE(v4) = EtwTracePriority(a1, 1328, v11, v7, 0LL);
  return (char)v4;
}

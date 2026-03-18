/*
 * XREFs of KeBoostPriorityThread @ 0x1400FE440
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x140554C74 (ExpCreateWorkerThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14027B720 (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, int a2, __int64 a3)
{
  void *v3; // rax
  int v6; // r15d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rbp
  int v10; // r13d
  int v11; // eax
  unsigned __int64 updated; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  _KTHREAD *NextThread; // r14
  __int64 v16; // r8
  __int64 v17; // r8
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v3;
  v21 = 0LL;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(char *)(a1 + 195);
  if ( v10 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    v11 = a2 + *(char *)(a1 + 563);
    if ( v11 > v10 )
    {
      v6 = a2 + *(char *)(a1 + 563);
      if ( v11 >= 16 )
        v6 = 15;
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
      v13 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
      if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
      *(_QWORD *)(a1 + 32) = v13;
      KiSetPriorityThread(a1, &v21, v6);
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  LOBYTE(v3) = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v21, a3);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v3) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v3 )
        LOBYTE(v3) = KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    goto LABEL_18;
  }
  v14 = (__int64)CurrentPrcb->CurrentThread;
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
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v14, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v16 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v16 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v14 + 643) = 32;
    *(_BYTE *)(v14 + 390) = CurrentIrql;
    KiQueueReadyThread((__int64)CurrentPrcb, v14, v16);
    LOBYTE(v17) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(v14, NextThread, v17) )
      goto LABEL_17;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(v14 + 116) & 0x40) != 0 )
  {
LABEL_32:
    __writecr8(1uLL);
    *(_DWORD *)(v14 + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
  }
LABEL_17:
  LOBYTE(v3) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_18:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v6 )
    LOBYTE(v3) = EtwTracePriority(a1, 1328, v10, v6, 0LL);
  return (char)v3;
}

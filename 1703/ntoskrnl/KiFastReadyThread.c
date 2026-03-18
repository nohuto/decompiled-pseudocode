/*
 * XREFs of KiFastReadyThread @ 0x140113FBC
 * Callers:
 *     KeReadyThread @ 0x14011216C (KeReadyThread.c)
 *     KeSwapProcessOrStack @ 0x14015C090 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x140253B0C (EtwTraceReadyThread.c)
 */

char __fastcall KiFastReadyThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  char result; // al
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentThread; // rdi
  _KTHREAD *NextThread; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 567);
    LOBYTE(a2) = *(_BYTE *)(a1 + 566);
    EtwTraceReadyThread(a1, a2, a3, 0LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 7;
  *(_QWORD *)(a1 + 64) = 0LL;
  result = KiDeferredReadyThread((__int64)CurrentPrcb, a1, a3, a4);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v8, v9);
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v12, v13);
      LOBYTE(v14) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v14) )
        goto LABEL_8;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_8:
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_8;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}

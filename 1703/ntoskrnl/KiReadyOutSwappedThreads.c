/*
 * XREFs of KiReadyOutSwappedThreads @ 0x140041050
 * Callers:
 *     KiOutSwapProcesses @ 0x140040840 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140040F94 (KiInSwapProcesses.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiReadyThread @ 0x1400E2E20 (KiReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x140253B0C (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiReadyOutSwappedThreads(_QWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // r14
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 result; // rax
  _KTHREAD *CurrentThread; // rbx
  _KTHREAD *NextThread; // rdi
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a1;
  do
  {
    v6 = (volatile signed __int32 *)(v5 - 27);
    v11 = 0;
    v5 = (_QWORD *)*v5;
    while ( _interlockedbittestandset64(v6 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( *((_QWORD *)v6 + 8) );
    }
    *((_BYTE *)v6 + 388) = 7;
    *((_QWORD *)v6 + 8) = 0LL;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v6, *((unsigned __int8 *)v6 + 566), *((unsigned __int8 *)v6 + 567), 0LL);
    result = KiReadyThread(CurrentPrcb, v6);
  }
  while ( v5 != a1 );
  if ( a2 < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v10);
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
      CurrentThread->WaitIrql = a2;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, a2) )
        goto LABEL_10;
    }
    else if ( (CurrentThread->MiscFlags & 0x40) == 0 )
    {
LABEL_10:
      result = a2;
      __writecr8(a2);
      return result;
    }
    __writecr8(1uLL);
    CurrentThread->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_10;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}

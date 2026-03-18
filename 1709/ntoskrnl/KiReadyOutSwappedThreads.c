/*
 * XREFs of KiReadyOutSwappedThreads @ 0x140090BC0
 * Callers:
 *     KiOutSwapProcesses @ 0x140111E50 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14011465C (KiInSwapProcesses.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyThread @ 0x1400932D0 (KiReadyThread.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x14027B7EC (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiReadyOutSwappedThreads(_QWORD *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // r14
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 CurrentThread; // rbx
  _KTHREAD *NextThread; // rdi
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a1;
  do
  {
    v6 = (volatile signed __int32 *)(v5 - 27);
    v13 = 0;
    v5 = (_QWORD *)*v5;
    while ( _interlockedbittestandset64(v6 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v13);
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
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v12);
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
        v11 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v11 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = a2;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v11);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, a2) )
        goto LABEL_10;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_10:
      result = a2;
      __writecr8(a2);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_10;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)result )
    {
      LOBYTE(v8) = 2;
      return KiRequestSoftwareInterrupt(CurrentPrcb, v8);
    }
  }
  return result;
}

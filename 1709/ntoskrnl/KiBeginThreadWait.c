/*
 * XREFs of KiBeginThreadWait @ 0x1400E4300
 * Callers:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiWaitForAllObjects @ 0x1400E3B9C (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KeWaitForAlertByThreadId @ 0x1400E41B0 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, char a2, char a3, char a4)
{
  unsigned __int8 v4; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rsi
  _KTHREAD *NextThread; // rbp
  __int64 v13; // r8
  unsigned int v14; // edi
  int v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_BYTE *)(a1 + 390);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = a2;
    if ( a4 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    *(_QWORD *)(a1 + 64) = 0LL;
    __writecr8(1uLL);
    KiDeliverApc(0, 0, 0LL);
    KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 390) = 0;
  }
  if ( !a4 )
  {
    if ( !*(_BYTE *)(a1 + 194) || !a2 )
      goto LABEL_9;
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a2 + a1 + 114) )
  {
    *(_BYTE *)(a2 + a1 + 114) = 0;
    v14 = 257;
  }
  else
  {
    if ( a2 && *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) = 1;
LABEL_16:
      v14 = 192;
      goto LABEL_17;
    }
    if ( !*(_BYTE *)(a1 + 114) )
    {
LABEL_9:
      *(_BYTE *)(a1 + 388) = 5;
      *(_BYTE *)(a1 + 643) = a3;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
      return 0LL;
    }
    *(_BYTE *)(a1 + 114) = 0;
    v14 = 257;
  }
LABEL_17:
  *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v4 >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    return v14;
  }
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
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
    {
      v13 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v13 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(CurrentThread + 643) = 32;
    *(_BYTE *)(CurrentThread + 390) = v4;
    KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v13);
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v4) )
      goto LABEL_20;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
  {
LABEL_37:
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
  }
LABEL_20:
  __writecr8(v4);
  return v14;
}

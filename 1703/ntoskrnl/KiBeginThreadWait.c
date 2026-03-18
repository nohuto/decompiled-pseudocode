/*
 * XREFs of KiBeginThreadWait @ 0x1400FC780
 * Callers:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140017B70 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400448F8 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KeRemovePriQueue @ 0x1400FC3E0 (KeRemovePriQueue.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r14
  char v5; // di
  char v6; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rsi
  _KTHREAD *NextThread; // rbp
  unsigned int v13; // edi
  int v14; // [rsp+68h] [rbp+10h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_BYTE *)(a1 + 390);
  v5 = a4;
  v6 = a3;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = a2;
    if ( v5 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    *(_QWORD *)(a1 + 64) = 0LL;
    __writecr8(1uLL);
    KiDeliverApc(0, 0LL, 0LL);
    KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a1 + 390) = 0;
  }
  if ( !v5 )
  {
    if ( *(_BYTE *)(a1 + 194) && a2 )
      goto LABEL_16;
    goto LABEL_9;
  }
  if ( !*(_BYTE *)(a2 + a1 + 114) )
  {
    if ( a2 && *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) = 1;
LABEL_16:
      v13 = 192;
      goto LABEL_17;
    }
    if ( *(_BYTE *)(a1 + 114) )
    {
      *(_BYTE *)(a1 + 114) = 0;
      v13 = 257;
      goto LABEL_17;
    }
LABEL_9:
    *(_BYTE *)(a1 + 388) = 5;
    *(_BYTE *)(a1 + 643) = v6;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
    return 0LL;
  }
  *(_BYTE *)(a2 + a1 + 114) = 0;
  v13 = 257;
LABEL_17:
  *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v4 >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    return v13;
  }
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, a3, a4);
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v15);
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
    *(_BYTE *)(CurrentThread + 390) = v4;
    KiQueueReadyThread(CurrentPrcb, CurrentThread);
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v4) )
      goto LABEL_20;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
  {
LABEL_36:
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
  }
LABEL_20:
  __writecr8(v4);
  return v13;
}

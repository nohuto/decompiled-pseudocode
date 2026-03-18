/*
 * XREFs of KeSetAffinityThread_0 @ 0x14001A5A4
 * Callers:
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405C0ED0 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     KiSetAffinityThread @ 0x14001A918 (KiSetAffinityThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     KiExtendProcessAffinity @ 0x1402067B8 (KiExtendProcessAffinity.c)
 */

char __fastcall KeSetAffinityThread_0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // r8
  char result; // al
  __int64 v10; // rdx
  _KTHREAD *CurrentThread; // rdi
  __int64 v12; // r8
  _KTHREAD *NextThread; // rsi
  int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 544);
  v15 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v8 = *(_QWORD *)(v4 + 8 * v2 + 88);
  if ( !v8 || (v8 & *(_QWORD *)a2) != *(_QWORD *)a2 )
    KiExtendProcessAffinity(v4, (unsigned __int16)v2);
  if ( !*(_QWORD *)a2 )
    *(_QWORD *)a2 = *(_QWORD *)(v4 + 8LL * (unsigned int)v2 + 88);
  KiSetAffinityThread(a1, &v15, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  result = KiReadyDeferredReadyList(CurrentPrcb, &v15);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v14);
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
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v12) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v12) )
        goto LABEL_8;
    }
    else if ( (CurrentThread->MiscFlags & 0x40) == 0 )
    {
LABEL_8:
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    __writecr8(1uLL);
    CurrentThread->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_8;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !result )
    {
      LOBYTE(v10) = 2;
      return KiRequestSoftwareInterrupt(CurrentPrcb, v10);
    }
  }
  return result;
}

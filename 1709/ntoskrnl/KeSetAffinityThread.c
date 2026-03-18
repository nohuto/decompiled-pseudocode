/*
 * XREFs of KeSetAffinityThread @ 0x140129ED4
 * Callers:
 *     ExpWorkerThread @ 0x1400617A0 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x1405D0160 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     KiExtendProcessAffinity @ 0x14020D0D0 (KiExtendProcessAffinity.c)
 */

char __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // r8
  __int64 v9; // r8
  char result; // al
  __int64 CurrentThread; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 544);
  v16 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v8 = *(_QWORD *)(v4 + 8 * v2 + 88);
  if ( !v8 || (v8 & *(_QWORD *)a2) != *(_QWORD *)a2 )
    KiExtendProcessAffinity(v4, (unsigned __int16)v2);
  if ( !*(_QWORD *)a2 )
    *(_QWORD *)a2 = *(_QWORD *)(v4 + 8LL * (unsigned int)v2 + 88);
  KiSetAffinityThread(a1, (__int64)&v16, (__int64 *)a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v16, v9);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
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
      {
        v13 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v13 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v13);
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
    KiDeliverApc(0, 0, 0LL);
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

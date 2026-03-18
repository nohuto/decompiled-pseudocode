/*
 * XREFs of KeSetCpuSetsProcess @ 0x140153D04
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
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
 *     KiValidateCpuSetMasks @ 0x14011FBFC (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x140153ED0 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x140154024 (KiWriteCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x14015406C (KiGetProcessCpuSetMaskPointer.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // r8
  __int64 CurrentThread; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+24h] [rbp-24h] BYREF
  _QWORD *v18[4]; // [rsp+28h] [rbp-20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v16);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v16, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v18);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)CurrentPrcb, v18, v11);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      return 0LL;
    }
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v17);
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
        v14 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v14 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v14);
      LOBYTE(v15) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v15) )
        goto LABEL_5;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_5:
      __writecr8(CurrentIrql);
      return 0LL;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_5;
  }
  return result;
}

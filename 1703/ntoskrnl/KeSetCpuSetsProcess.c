/*
 * XREFs of KeSetCpuSetsProcess @ 0x1402028C0
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     KiValidateCpuSetMasks @ 0x14001B1D0 (KiValidateCpuSetMasks.c)
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
 *     KiGetProcessCpuSetMaskPointer @ 0x140202E74 (KiGetProcessCpuSetMaskPointer.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x140202EC0 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x14020305C (KiWriteCpuSetMasks.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentThread; // rdi
  __int64 NextThread; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r8d
  unsigned int v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+24h] [rbp-24h] BYREF
  _QWORD *v22[4]; // [rsp+28h] [rbp-20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v20);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v20, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v22);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)CurrentPrcb, v22, v11, v12);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      return 0LL;
    }
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v13, v14);
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v21);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v17 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v17 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v17, v18);
      LOBYTE(v19) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v19) )
        goto LABEL_14;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_14:
      __writecr8(CurrentIrql);
      return 0LL;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_14;
  }
  return result;
}

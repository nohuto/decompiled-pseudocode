/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x140208FF0
 * Callers:
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x1400AB140 (KiGetThreadCpuSetMaskPointer.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiValidateCpuSetMasks @ 0x14011FBFC (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSets @ 0x140153F78 (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x140154024 (KiWriteCpuSetMasks.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned __int64 *ThreadCpuSetMaskPointer; // r12
  unsigned __int8 CurrentIrql; // r14
  unsigned int v10; // r15d
  __int64 updated; // rax
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  __int64 NextThread; // rsi
  __int64 v20; // r8
  unsigned int v21; // r8d
  unsigned int v22; // [rsp+20h] [rbp-38h] BYREF
  int v23; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v24[6]; // [rsp+28h] [rbp-30h] BYREF
  int v25; // [rsp+78h] [rbp+20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v24[0] = 0LL;
    v7 = *(_QWORD *)(a1 + 544);
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &v22);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v10 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v22, (__int64)a3, a2);
    updated = KiUpdateThreadCpuSets(a1, (unsigned __int64 *)v24);
    v12 = *(unsigned int *)(a1 + 588);
    v13 = updated;
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( (xmmword_140401150 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v10, v12);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    if ( v13 )
    {
      v16 = *(unsigned int *)(v13 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v16 )
      {
        LOBYTE(v14) = 2;
        KiSendSoftwareInterrupt(v16, v14);
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)CurrentPrcb, v24, v15);
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
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v23);
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
        v20 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v20 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v20);
      LOBYTE(v21) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v21) )
        goto LABEL_23;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_23:
      __writecr8(CurrentIrql);
      return 0LL;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_23;
  }
  return result;
}

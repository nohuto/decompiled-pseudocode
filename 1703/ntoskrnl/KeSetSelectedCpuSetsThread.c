/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x140202AA0
 * Callers:
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 * Callees:
 *     KiValidateCpuSetMasks @ 0x14001B1D0 (KiValidateCpuSetMasks.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x1401107DC (KiGetThreadCpuSetMaskPointer.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     KiUpdateThreadCpuSets @ 0x140202FAC (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x14020305C (KiWriteCpuSetMasks.c)
 *     EtwTraceIdealProcessor @ 0x140253648 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 ThreadCpuSetMaskPointer; // r12
  unsigned __int8 CurrentIrql; // bp
  unsigned int v10; // r15d
  __int64 updated; // rax
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KPRCB *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 CurrentThread; // rdi
  __int64 NextThread; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r8d
  bool v27; // zf
  unsigned int v28; // [rsp+20h] [rbp-38h] BYREF
  int v29; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v30[6]; // [rsp+28h] [rbp-30h] BYREF
  int v31; // [rsp+78h] [rbp+20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v30[0] = 0LL;
    v7 = *(_QWORD *)(a1 + 544);
    ThreadCpuSetMaskPointer = KiGetThreadCpuSetMaskPointer(a1, &v28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v10 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v28, a3, a2);
    updated = KiUpdateThreadCpuSets(a1, v30);
    v12 = *(unsigned int *)(a1 + 588);
    v13 = updated;
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( (xmmword_1403E4010 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v10, v12);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    if ( v13 )
    {
      v17 = *(unsigned int *)(v13 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v17 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v14) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v17, v14, v15, v16);
      }
    }
    v19 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v19, v30, v15, v16);
    if ( CurrentIrql >= 2u )
    {
      if ( v19->NextThread && !v19->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v19, 2);
    }
    else
    {
      CurrentThread = (__int64)v19->CurrentThread;
      if ( v19->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v19->CurrentThread, 0, v20, v21);
        v29 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v19->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v29);
          while ( v19->PrcbLock );
        }
        NextThread = (__int64)v19->NextThread;
        v19->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v19, CurrentThread, 0LL);
        _enable();
        v19->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
        {
          v24 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
          *(_DWORD *)(NextThread + 132) = v24 + MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(NextThread + 388) = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(v19, CurrentThread, v24, v25);
        LOBYTE(v26) = CurrentIrql;
        v27 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v26) == 0;
      }
      else
      {
        v27 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v27 )
      {
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}

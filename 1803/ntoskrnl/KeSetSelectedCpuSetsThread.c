/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x140246B10
 * Callers:
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiSendSoftwareInterrupt @ 0x14007CC8C (KiSendSoftwareInterrupt.c)
 *     KiValidateCpuSetMasks @ 0x1400A998C (KiValidateCpuSetMasks.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x140132C78 (KiGetThreadCpuSetMaskPointer.c)
 *     KiUpdateThreadCpuSets @ 0x140181670 (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x140181704 (KiWriteCpuSetMasks.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // r12
  unsigned __int64 *ThreadCpuSetMaskPointer; // r13
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v11; // r15d
  __int64 updated; // rdi
  unsigned int v13; // r11d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  struct _KPRCB *v17; // rbx
  __int64 CurrentThread; // rdi
  struct _KPRCB *v19; // rsi
  __int64 NextThread; // rsi
  __int64 v21; // r8
  unsigned int v22; // r8d
  unsigned int v23; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v25[6]; // [rsp+28h] [rbp-30h] BYREF
  int v26; // [rsp+78h] [rbp+20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v25[0] = 0LL;
    v7 = *(_QWORD *)(a1 + 544);
    ThreadCpuSetMaskPointer = (unsigned __int64 *)KiGetThreadCpuSetMaskPointer(a1, &v23);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    v26 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v26);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v11 = *(_DWORD *)(a1 + 588);
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v23, (__int64)a3, a2);
    updated = KiUpdateThreadCpuSets(a1, (__int64 *)v25);
    KiReleaseThreadLockSafe(a1);
    if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1350LL, v11, v13);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    if ( updated )
    {
      v16 = *(unsigned int *)(updated + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v16 )
      {
        LOBYTE(v14) = 2;
        KiSendSoftwareInterrupt(v16, v14);
      }
    }
    v17 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v17, v25, v15);
    if ( CurrentIrql >= 2u )
    {
      if ( v17->NextThread && !v17->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v17, 2);
      return 0LL;
    }
    CurrentThread = (__int64)v17->CurrentThread;
    if ( v17->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v17->CurrentThread, 0);
      v19 = KeGetCurrentPrcb();
      v24 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v19, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v17->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v19, 0);
        do
          KeYieldProcessorEx(&v24);
        while ( v17->PrcbLock );
      }
      NextThread = (__int64)v17->NextThread;
      v17->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v17, CurrentThread, 0LL);
      _enable();
      v17->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v21 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v21 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(v17, CurrentThread, v21);
      LOBYTE(v22) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v22) )
        goto LABEL_25;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_25:
      __writecr8(CurrentIrql);
      return 0LL;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_25;
  }
  return result;
}

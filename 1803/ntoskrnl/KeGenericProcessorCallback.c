/*
 * XREFs of KeGenericProcessorCallback @ 0x140004F40
 * Callers:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     KeFlushQueuedDpcs @ 0x140004DD0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x140004E90 (ExpUpdateTimerConfiguration.c)
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 *     KeDisableTimer2 @ 0x140087498 (KeDisableTimer2.c)
 *     KeSetIntervalProfile @ 0x1405C4388 (KeSetIntervalProfile.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     KiEnumerateNextProcessorNumber @ 0x1400346A4 (KiEnumerateNextProcessorNumber.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiRemoveBoostThread @ 0x1400EE080 (KiRemoveBoostThread.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

char __fastcall KeGenericProcessorCallback(
        _QWORD *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        char a4)
{
  _QWORD *v5; // rdi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v8; // r12d
  void (__fastcall *v9)(struct _KPRCB *, __int64); // r15
  __int64 v10; // rsi
  struct _GROUP_AFFINITY *v11; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *v13; // rsi
  __int64 v14; // rdx
  _KTHREAD *NextThread; // rax
  _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rdx
  struct _KPRCB *v18; // rsi
  _KTHREAD *v19; // rsi
  __int64 v20; // r8
  unsigned __int16 v22; // [rsp+20h] [rbp-E0h] BYREF
  char v23; // [rsp+22h] [rbp-DEh]
  int v24; // [rsp+24h] [rbp-DCh]
  int v25; // [rsp+28h] [rbp-D8h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall *v27)(struct _KPRCB *, __int64); // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  PKTHREAD Thread; // [rsp+50h] [rbp-B0h]
  _QWORD v30[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v31; // [rsp+68h] [rbp-98h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v33[22]; // [rsp+80h] [rbp-80h] BYREF

  v28 = a3;
  v27 = a2;
  v5 = a1;
  if ( !a1 )
  {
    LODWORD(v33[0]) = 1310721;
    v5 = v33;
    memset((char *)v33 + 4, 0, 0xA4uLL);
    v33[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  Thread = KeGetCurrentThread();
  *(_DWORD *)Affinity.Reserved = 0;
  v24 = a4 & 2;
  CurrentPrcb = 0LL;
  v8 = 0;
  Affinity.Reserved[2] = 0;
  if ( (a4 & 2) != 0 )
    v8 = KeSetPriorityThread(Thread, 30);
  else
    KeSetPriorityBoost(Thread, 15LL);
  v9 = v27;
  v10 = v28;
  v30[1] = v5[1];
  v31 = 0;
  v30[0] = v5;
  while ( 1 )
  {
    v11 = p_PreviousAffinity;
    if ( (unsigned int)KiEnumerateNextProcessorNumber(&v22, v30) )
      break;
    Affinity.Group = v22;
    Affinity.Mask = 1LL << v23;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    v9(CurrentPrcb, v10);
    p_PreviousAffinity = 0LL;
    if ( !v11 )
      p_PreviousAffinity = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v13 = Thread;
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v24 )
    KeSetPriorityThread(v13, v8);
  else
    KiRemoveBoostThread(CurrentPrcb, v13);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  NextThread = CurrentPrcb->NextThread;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v18 = KeGetCurrentPrcb();
      v25 = 0;
      while ( 1 )
      {
        LOBYTE(v17) = 1;
        KiSetVpThreadSpinLockCount(v18, v17);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v18, 0LL);
        do
          KeYieldProcessorEx(&v25);
        while ( CurrentPrcb->PrcbLock );
      }
      v19 = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = v19;
      if ( v19->WaitBlockFill6[68] == 1 )
        v19->ReadyTime = v19->ReadyTime - v19->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v19->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v20) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, v19, v20) )
        goto LABEL_15;
    }
    else if ( (CurrentThread->MiscFlags & 0x40) == 0 )
    {
LABEL_15:
      LOBYTE(NextThread) = CurrentIrql;
      __writecr8(CurrentIrql);
      return (char)NextThread;
    }
    __writecr8(1uLL);
    CurrentThread->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  if ( NextThread )
  {
    LOBYTE(NextThread) = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)NextThread )
    {
      LOBYTE(v14) = 2;
      LOBYTE(NextThread) = KiRequestSoftwareInterrupt(CurrentPrcb, v14);
    }
  }
  return (char)NextThread;
}

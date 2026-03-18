/*
 * XREFs of KeGenericProcessorCallback @ 0x1401117A4
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     KeGenericCallDpc @ 0x1400229D0 (KeGenericCallDpc.c)
 *     KeFlushQueuedDpcs @ 0x14006D5B0 (KeFlushQueuedDpcs.c)
 *     KeDisableTimer2 @ 0x14012ADA8 (KeDisableTimer2.c)
 *     ExpUpdateTimerConfiguration @ 0x14012CDF4 (ExpUpdateTimerConfiguration.c)
 *     KeSetIntervalProfile @ 0x14056DF7C (KeSetIntervalProfile.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiRemoveBoostThread @ 0x1400414C0 (KiRemoveBoostThread.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiEnumerateNextProcessorNumber @ 0x140045A70 (KiEnumerateNextProcessorNumber.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall KeGenericProcessorCallback(
        unsigned __int16 *a1,
        void (__fastcall *a2)(struct _KPRCB *, struct _SINGLE_LIST_ENTRY *),
        struct _SINGLE_LIST_ENTRY *a3,
        __int64 a4)
{
  char v4; // r15
  unsigned __int16 *v6; // rsi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v9; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int16 *v11; // rax
  struct _SINGLE_LIST_ENTRY *v12; // rsi
  unsigned __int8 CurrentIrql; // r14
  int v14; // r15d
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v19; // r8
  unsigned __int16 v20; // [rsp+20h] [rbp-E0h] BYREF
  char v21; // [rsp+22h] [rbp-DEh]
  int v22; // [rsp+24h] [rbp-DCh]
  int v23; // [rsp+28h] [rbp-D8h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  struct _SINGLE_LIST_ENTRY *v25; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v26[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v27; // [rsp+58h] [rbp-A8h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v29[22]; // [rsp+70h] [rbp-90h] BYREF

  v25 = a3;
  v4 = a4;
  v6 = a1;
  if ( !a1 )
  {
    LODWORD(v29[0]) = 1310721;
    v6 = (unsigned __int16 *)v29;
    memset((char *)v29 + 4, 0, 0xA4uLL);
    v29[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  CurrentPrcb = 0LL;
  *(_DWORD *)Affinity.Reserved = 0;
  v9 = 0;
  Affinity.Reserved[2] = 0;
  CurrentThread = KeGetCurrentThread();
  v22 = v4 & 2;
  if ( (v4 & 2) != 0 )
    v9 = KeSetPriorityThread(CurrentThread, 30);
  else
    KeSetPriorityBoost((__int64)CurrentThread, 15, a3, a4);
  v11 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
  v26[0] = v6;
  v12 = v25;
  v27 = 0;
  v26[1] = v11;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber((__int64)&v20, v26) )
  {
    Affinity.Group = v20;
    Affinity.Mask = 1LL << v21;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    p_PreviousAffinity = 0LL;
    a2(CurrentPrcb, v12);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v14 = v22;
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v14 )
    KeSetPriorityThread(CurrentThread, v9);
  else
    KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentThread);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  if ( CurrentIrql < 2u )
  {
    v17 = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v15, v16);
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v17, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v17 + 643) = 32;
      *(_BYTE *)(v17 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v17);
      LOBYTE(v19) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(v17, NextThread, v19) )
        goto LABEL_13;
    }
    else if ( (*(_DWORD *)(v17 + 116) & 0x40) == 0 )
    {
LABEL_13:
      __writecr8(CurrentIrql);
      return;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v17 + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_13;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
}

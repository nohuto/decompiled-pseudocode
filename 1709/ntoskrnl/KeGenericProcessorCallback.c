/*
 * XREFs of KeGenericProcessorCallback @ 0x1400A8F40
 * Callers:
 *     ExpUpdateTimerConfiguration @ 0x140015418 (ExpUpdateTimerConfiguration.c)
 *     KeFlushQueuedDpcs @ 0x1400DE0B0 (KeFlushQueuedDpcs.c)
 *     KeDisableTimer2 @ 0x1400E36A0 (KeDisableTimer2.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 *     KeSetIntervalProfile @ 0x1406D8798 (KeSetIntervalProfile.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiRemoveBoostThread @ 0x14008B160 (KiRemoveBoostThread.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiEnumerateNextProcessorNumber @ 0x14008FD70 (KiEnumerateNextProcessorNumber.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall KeGenericProcessorCallback(
        unsigned __int16 **a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        char a4)
{
  unsigned __int16 **v5; // rsi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v8; // r12d
  void (__fastcall *v9)(struct _KPRCB *, __int64); // r15
  __int64 v10; // rdi
  struct _GROUP_AFFINITY *v11; // rsi
  unsigned __int8 CurrentIrql; // r14
  int v13; // r15d
  struct _KTHREAD *v14; // rdi
  __int64 CurrentThread; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned __int16 v19; // [rsp+20h] [rbp-E0h] BYREF
  char v20; // [rsp+22h] [rbp-DEh]
  int v21; // [rsp+24h] [rbp-DCh]
  int v22; // [rsp+28h] [rbp-D8h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall *v24)(struct _KPRCB *, __int64); // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  PKTHREAD Thread; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v28; // [rsp+68h] [rbp-98h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[22]; // [rsp+80h] [rbp-80h] BYREF

  v25 = a3;
  v24 = a2;
  v5 = a1;
  if ( !a1 )
  {
    LODWORD(v30[0]) = 1310721;
    v5 = (unsigned __int16 **)v30;
    memset((char *)v30 + 4, 0, 0xA4uLL);
    v30[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  Thread = KeGetCurrentThread();
  *(_DWORD *)Affinity.Reserved = 0;
  v21 = a4 & 2;
  CurrentPrcb = 0LL;
  v8 = 0;
  Affinity.Reserved[2] = 0;
  if ( (a4 & 2) != 0 )
    v8 = KeSetPriorityThread(Thread, 30);
  else
    KeSetPriorityBoost((__int64)Thread, 15, a3);
  v9 = v24;
  v10 = v25;
  v27[1] = v5[1];
  v28 = 0;
  v27[0] = (unsigned __int16 *)v5;
  while ( 1 )
  {
    v11 = p_PreviousAffinity;
    if ( (unsigned int)KiEnumerateNextProcessorNumber((__int64)&v19, v27) )
      break;
    Affinity.Group = v19;
    Affinity.Mask = 1LL << v20;
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    v9(CurrentPrcb, v10);
    p_PreviousAffinity = 0LL;
    if ( !v11 )
      p_PreviousAffinity = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v13 = v21;
  v14 = Thread;
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v13 )
    KeSetPriorityThread(v14, v8);
  else
    KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)v14);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v22);
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
        v17 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v17 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v17);
      LOBYTE(v18) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v18) )
        goto LABEL_15;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_15:
      __writecr8(CurrentIrql);
      return;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_15;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
}

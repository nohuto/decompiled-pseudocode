/*
 * XREFs of KeClearSystemPriority @ 0x1400F3610
 * Callers:
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KeClearSystemPriority(__int64 BugCheckParameter1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  ULONG_PTR v5; // rcx
  char v6; // al
  char v7; // al
  unsigned int v8; // edx
  char v9; // dl
  signed __int8 v10; // cl
  __int64 result; // rax
  __int64 v12; // r8
  struct _KPRCB *v13; // rbx
  _QWORD *i; // rdi
  __int64 CurrentThread; // rdi
  struct _KPRCB *v16; // rbp
  _KTHREAD *NextThread; // rbp
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *v21; // rdx
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp+18h] BYREF

  v24 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = (unsigned __int8)v24;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v20 = SchedulerAssist[5];
      SchedulerAssist[5] = v20 + 1;
      if ( v20 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v22);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    LOBYTE(v19) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v19);
  }
  v5 = *(char *)(BugCheckParameter1 + 795);
  v6 = *(_BYTE *)(v5 + BugCheckParameter1 + 1392);
  if ( !v6 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v5, 2uLL, 0LL);
  v7 = v6 - 1;
  *(_BYTE *)(v5 + BugCheckParameter1 + 1392) = v7;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(BugCheckParameter1 + 1408) ^ (1 << v5);
    *(_DWORD *)(BugCheckParameter1 + 1408) = v8;
    if ( v8 < 1 << v5 )
    {
      v9 = *(_BYTE *)(BugCheckParameter1 + 195);
      if ( v9 < 16 )
      {
        v10 = *(_BYTE *)(BugCheckParameter1 + 563)
            + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
            + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
        if ( v10 < v9 )
          KiSetPriorityThread(BugCheckParameter1, (__int64 *)&v24, v10);
      }
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 795) = 0;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  result = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  v13 = KeGetCurrentPrcb();
  for ( i = v24; i; result = KiDeferredReadyThread(v13, v21, v12) )
  {
    v21 = i - 27;
    i = (_QWORD *)*i;
  }
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (__int64)v13->CurrentThread;
    if ( v13->NextThread )
    {
      KiAbProcessContextSwitch(v13->CurrentThread, 0LL);
      v16 = KeGetCurrentPrcb();
      v23 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount(v16, 1LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v13->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v16, 0LL);
        do
          KeYieldProcessorEx(&v23);
        while ( v13->PrcbLock );
      }
      NextThread = v13->NextThread;
      v13->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v13, CurrentThread, 0LL);
      _enable();
      v13->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v18 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v18 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(v13, CurrentThread, v18);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, CurrentIrql) )
        goto LABEL_13;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_13:
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_13;
  }
  if ( v13->NextThread )
  {
    result = v13->DpcRoutineActive;
    if ( !(_BYTE)result )
      return KiRequestSoftwareInterrupt(v13, 2);
  }
  return result;
}

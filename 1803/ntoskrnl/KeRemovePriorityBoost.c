/*
 * XREFs of KeRemovePriorityBoost @ 0x14023FEC4
 * Callers:
 *     CmpReleaseWriteQueue @ 0x14049A59C (CmpReleaseWriteQueue.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiRemoveBoostThread @ 0x1400EE080 (KiRemoveBoostThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 */

void __fastcall KeRemovePriorityBoost(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  struct _KPRCB *v4; // rbp
  __int64 NextThread; // rbp
  __int64 v6; // r8
  unsigned int v7; // r8d
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 564) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiRemoveBoostThread((__int64)CurrentPrcb, a1);
    if ( CurrentIrql < 2u )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v4 = KeGetCurrentPrcb();
        v8 = 0;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v4, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v4, 0);
          do
            KeYieldProcessorEx(&v8);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = (__int64)CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
          *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                        - *(_DWORD *)(NextThread + 436)
                                        + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(NextThread + 388) = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread, v6);
        LOBYTE(v7) = CurrentIrql;
        if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v7) )
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
      KiDeliverApc(0, 0LL, 0LL);
      goto LABEL_15;
    }
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
}

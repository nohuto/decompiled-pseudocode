/*
 * XREFs of KeSetLegacyAffinityThread @ 0x140135F80
 * Callers:
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 CurrentThread; // rdi
  struct _KPRCB *v12; // rbp
  _KTHREAD *NextThread; // rbp
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v17; // [rsp+28h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( a2 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    LOWORD(v19) = *(_WORD *)(a1 + 560);
    v8 = qword_14044C5D8[(unsigned __int16)v19] & a2;
    if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * (unsigned __int16)v19 + 88)) == v8 )
    {
      v3 = *(_QWORD *)(a1 + 552);
      v18 = v8;
      KiSetAffinityThread(a1, (__int64)&v17, &v18);
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v17, v9);
    if ( CurrentIrql < 2u )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v12 = KeGetCurrentPrcb();
        v16 = 0;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v12, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v12, 0);
          do
            KeYieldProcessorEx(&v16);
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
        KiQueueReadyThread(CurrentPrcb, CurrentThread, v14);
        LOBYTE(v15) = CurrentIrql;
        if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v15) )
          goto LABEL_8;
      }
      else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
      {
LABEL_8:
        __writecr8(CurrentIrql);
        return v3;
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
      goto LABEL_8;
    }
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return v3;
}

/*
 * XREFs of KeSetLegacyAffinityThread @ 0x14001A720
 * Callers:
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 * Callees:
 *     KiSetAffinityThread @ 0x14001A918 (KiSetAffinityThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  _KTHREAD *CurrentThread; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v13; // r8
  int v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( a2 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    LOWORD(v17) = *(_WORD *)(a1 + 560);
    v8 = qword_1403E42B8[(unsigned __int16)v17] & a2;
    if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * (unsigned __int16)v17 + 88)) == v8 )
    {
      v3 = *(_QWORD *)(a1 + 552);
      v16 = v8;
      KiSetAffinityThread(a1, &v15, &v16);
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    KiReadyDeferredReadyList(CurrentPrcb, &v15);
    if ( CurrentIrql < 2u )
    {
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v14);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
          NextThread->ReadyTime = NextThread->ReadyTime
                                - NextThread->WaitBlock[2].SpareLong
                                + MEMORY[0xFFFFF78000000320];
        NextThread->WaitBlockFill6[68] = 2;
        CurrentThread->WaitReason = 32;
        CurrentThread->WaitIrql = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread);
        LOBYTE(v13) = CurrentIrql;
        if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v13) )
          goto LABEL_8;
      }
      else if ( (CurrentThread->MiscFlags & 0x40) == 0 )
      {
LABEL_8:
        __writecr8(CurrentIrql);
        return v3;
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_8;
    }
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      LOBYTE(v9) = 2;
      KiRequestSoftwareInterrupt(CurrentPrcb, v9);
    }
  }
  return v3;
}

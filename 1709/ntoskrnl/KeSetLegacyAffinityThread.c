/*
 * XREFs of KeSetLegacyAffinityThread @ 0x1400AC100
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
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 CurrentThread; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( a2 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    LOWORD(v18) = *(_WORD *)(a1 + 560);
    v8 = qword_140401408[(unsigned __int16)v18] & a2;
    if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * (unsigned __int16)v18 + 88)) == v8 )
    {
      v3 = *(_QWORD *)(a1 + 552);
      v17 = v8;
      KiSetAffinityThread(a1, (__int64)&v16, &v17);
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v16, v9);
    if ( CurrentIrql < 2u )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
        v15 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v15);
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
          v13 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v13 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v13);
        LOBYTE(v14) = CurrentIrql;
        if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v14) )
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
      KiDeliverApc(0, 0, 0LL);
      goto LABEL_8;
    }
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return v3;
}

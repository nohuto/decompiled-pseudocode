/*
 * XREFs of KeSetPriorityBoost @ 0x1400EE490
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     FsRtlpWaitForIoAtEof @ 0x14007C42C (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x1400C8BBC (FsRtlpDoBoost.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     CmpBoostActiveHiveWriter @ 0x140566B44 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edi
  char v5; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r13
  char v8; // al
  unsigned __int64 v9; // rsi
  struct _KPRCB *v10; // r15
  char v11; // dl
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *i; // rbx
  __int64 CurrentThread; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  struct _KPRCB *v18; // rdi
  _KTHREAD *NextThread; // rdi
  __int64 v20; // r8
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v23; // [rsp+78h] [rbp+20h] BYREF

  result = (__int64)&KiInitialProcess;
  v3 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v5 = 0;
    v23 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = *(_BYTE *)(a1 + 195);
    if ( v8 <= 0 || v8 >= (int)a2 )
      goto LABEL_15;
    v9 = *(_QWORD *)(a1 + 72);
    v10 = KeGetCurrentPrcb();
    v21 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(v10, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v10, 0LL);
      do
        KeYieldProcessorEx(&v21);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v11 = *(_BYTE *)(a1 + 195);
    if ( v11 > 0 && v11 < v3 )
    {
      v5 = 1;
      *(_BYTE *)(a1 + 564) += 16 * (v3 - v11);
      KiSetPriorityThread(a1, (__int64 *)&v23, v3);
      v12 = *(_QWORD *)(a1 + 32);
      if ( v9 > v12 || v12 - v9 < (unsigned int)KiLockQuantumTarget )
        *(_QWORD *)(a1 + 32) = v9 + (unsigned int)KiLockQuantumTarget;
    }
    result = KiReleaseThreadLockSafe(a1);
    if ( !v5 )
      goto LABEL_15;
    for ( i = v23; i; result = KiDeferredReadyThread(CurrentPrcb, v16, v13) )
    {
      v16 = i - 27;
      i = (_QWORD *)*i;
    }
    if ( CurrentIrql < 2u )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v18 = KeGetCurrentPrcb();
        v22 = 0;
        while ( 1 )
        {
          LOBYTE(v17) = 1;
          KiSetVpThreadSpinLockCount(v18, v17);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          KiSetVpThreadSpinLockCount(v18, 0LL);
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
          v20 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v20 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread, v20);
        if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, CurrentIrql) )
          goto LABEL_15;
      }
      else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
      {
LABEL_15:
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_15;
    }
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  return result;
}

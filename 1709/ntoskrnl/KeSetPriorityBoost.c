/*
 * XREFs of KeSetPriorityBoost @ 0x14008BBA0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     FsRtlpWaitForIoAtEof @ 0x140100900 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x140127320 (FsRtlpDoBoost.c)
 *     CmpBoostActiveHiveWriter @ 0x1404E66A0 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

unsigned __int64 __fastcall KeSetPriorityBoost(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 result; // rax
  char v6; // bp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  char v9; // al
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *i; // rbx
  _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rdx
  _KTHREAD *NextThread; // rdi
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v19; // [rsp+78h] [rbp+20h] BYREF

  result = (unsigned __int64)&KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v6 = 0;
    v19 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = *(_BYTE *)(a1 + 195);
    if ( v9 <= 0 )
      goto LABEL_15;
    result = (unsigned int)v9;
    if ( (int)result >= a2 )
      goto LABEL_15;
    v10 = *(_QWORD *)(a1 + 72);
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v17);
        result = *(_QWORD *)(a1 + 64);
      }
      while ( result );
    }
    v11 = *(unsigned __int8 *)(a1 + 195);
    if ( (char)v11 > 0 )
    {
      result = (unsigned int)(char)v11;
      if ( (int)result < a2 )
      {
        v6 = 1;
        *(_BYTE *)(a1 + 564) += 16 * (a2 - v11);
        KiSetPriorityThread(a1, &v19, (unsigned int)(char)a2);
        v12 = *(_QWORD *)(a1 + 32);
        if ( v10 > v12 || (result = (unsigned int)KiLockQuantumTarget, v12 - v10 < (unsigned int)KiLockQuantumTarget) )
        {
          result = v10 + (unsigned int)KiLockQuantumTarget;
          *(_QWORD *)(a1 + 32) = result;
        }
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( !v6 )
      goto LABEL_15;
    for ( i = v19; i; result = KiDeferredReadyThread((__int64)CurrentPrcb, v15, a3) )
    {
      v15 = (__int64)(i - 27);
      i = (_QWORD *)*i;
    }
    if ( CurrentIrql < 2u )
    {
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
        v18 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v18);
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
        if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, CurrentIrql) )
          goto LABEL_15;
      }
      else if ( (CurrentThread->MiscFlags & 0x40) == 0 )
      {
LABEL_15:
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
      goto LABEL_15;
    }
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)result )
      {
        LOBYTE(v11) = 2;
        return KiRequestSoftwareInterrupt(CurrentPrcb, v11);
      }
    }
  }
  return result;
}

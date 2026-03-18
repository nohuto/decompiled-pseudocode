/*
 * XREFs of KeStackAttachProcess @ 0x140007A90
 * Callers:
 *     PspCatchCriticalBreak @ 0x14077D014 (PspCatchCriticalBreak.c)
 * Callees:
 *     KiAttachProcess @ 0x140007F44 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  struct _KTHREAD *CurrentThread; // rdi
  PRKAPC_STATE v3; // rsi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  int v7; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = ApcState;
  v4 = (int)PROCESS;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&PROCESS->0 & 0x40000000) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)PROCESS,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    ApcState->Process = (_KPROCESS *)1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = 0;
    while ( 1 )
    {
      LOBYTE(ApcState) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, ApcState);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v7);
      while ( CurrentThread->ThreadLock );
    }
    if ( CurrentThread->ApcStateIndex )
    {
      KiAttachProcess((_DWORD)CurrentThread, v4, CurrentIrql, 0, (__int64)v3);
    }
    else
    {
      KiAttachProcess((_DWORD)CurrentThread, v4, CurrentIrql, 0, (__int64)&CurrentThread->600);
      v3->Process = 0LL;
    }
  }
}

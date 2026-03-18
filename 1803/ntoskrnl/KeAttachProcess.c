/*
 * XREFs of KeAttachProcess @ 0x1400C7820
 * Callers:
 *     KiCompleteKernelInit @ 0x14047AF10 (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 * Callees:
 *     KiAttachProcess @ 0x140007F44 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPROCESS *v3; // r8
  unsigned __int8 ApcStateIndex; // cl
  __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  int v8; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->ApcState.Process;
  if ( v3 != Process )
  {
    ApcStateIndex = CurrentThread->ApcStateIndex;
    v5 = 65537LL;
    if ( ApcStateIndex
      || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
      || (*(_DWORD *)&Process->0 & 0x40000000) != 0 )
    {
      KeBugCheckEx(5u, (ULONG_PTR)Process, (ULONG_PTR)v3, ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = 0;
    while ( 1 )
    {
      LOBYTE(v5) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v5);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v8);
      while ( CurrentThread->ThreadLock );
    }
    KiAttachProcess((__int64)CurrentThread, (__int64)Process, CurrentIrql, 0LL, (__int64)&CurrentThread->600);
  }
}

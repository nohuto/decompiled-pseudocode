/*
 * XREFs of KeAttachProcess @ 0x1401216C0
 * Callers:
 *     KiCompleteKernelInit @ 0x14042615C (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x1400BFEE0 (KiAttachProcess.c)
 *     KeIsExecutingDpc @ 0x140141520 (KeIsExecutingDpc.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPROCESS *v3; // rsi
  unsigned __int8 ApcStateIndex; // bp
  unsigned __int8 CurrentIrql; // si
  unsigned int IsExecutingDpc; // eax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->ApcState.Process;
  if ( v3 != Process )
  {
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex || (unsigned int)KeIsExecutingDpc() || (*(_DWORD *)&Process->0 & 0x20000000) != 0 )
    {
      IsExecutingDpc = KeIsExecutingDpc();
      KeBugCheckEx(5u, (ULONG_PTR)Process, (ULONG_PTR)v3, ApcStateIndex, IsExecutingDpc);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( CurrentThread->ThreadLock );
    }
    KiAttachProcess((__int64)CurrentThread, (__int64)Process, CurrentIrql, 0LL, (__int64)&CurrentThread->600);
  }
}

/*
 * XREFs of KeAttachProcess @ 0x140033D40
 * Callers:
 *     KiCompleteKernelInit @ 0x14041193C (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x1400B1C00 (KiAttachProcess.c)
 *     KeIsExecutingDpc @ 0x1400B2A00 (KeIsExecutingDpc.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPROCESS *v3; // rsi
  unsigned __int8 ApcStateIndex; // bp
  int v5; // r8d
  unsigned __int8 CurrentIrql; // si
  unsigned int IsExecutingDpc; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->ApcState.Process;
  if ( v3 != Process )
  {
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex || (unsigned int)KeIsExecutingDpc() || (*(_DWORD *)&Process->0 & 0x10000000) != 0 )
    {
      IsExecutingDpc = KeIsExecutingDpc();
      KeBugCheckEx(5u, (ULONG_PTR)Process, (ULONG_PTR)v3, ApcStateIndex, IsExecutingDpc);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( CurrentThread->ThreadLock );
    }
    LOBYTE(v5) = CurrentIrql;
    KiAttachProcess((_DWORD)CurrentThread, (_DWORD)Process, v5, 0, (__int64)&CurrentThread->600);
  }
}

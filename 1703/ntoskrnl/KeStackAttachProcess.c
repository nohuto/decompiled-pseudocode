/*
 * XREFs of KeStackAttachProcess @ 0x1400B25D0
 * Callers:
 *     MmCreateShadowMapping @ 0x14041D7C8 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14041D938 (MmDeleteShadowMapping.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x1400B1C00 (KiAttachProcess.c)
 *     KeIsExecutingDpc @ 0x1400B2A00 (KeIsExecutingDpc.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int IsExecutingDpc; // eax
  int v7; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)KeIsExecutingDpc() || (*(_DWORD *)&PROCESS->0 & 0x10000000) != 0 )
  {
    IsExecutingDpc = KeIsExecutingDpc();
    KeBugCheckEx(
      5u,
      (ULONG_PTR)PROCESS,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      IsExecutingDpc);
  }
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    ApcState->Process = (_KPROCESS *)1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( CurrentThread->ThreadLock );
    }
    if ( CurrentThread->ApcStateIndex )
    {
      KiAttachProcess((__int64)CurrentThread, (__int64)PROCESS, CurrentIrql, 0LL, (__int64)ApcState);
    }
    else
    {
      KiAttachProcess((__int64)CurrentThread, (__int64)PROCESS, CurrentIrql, 0LL, (__int64)&CurrentThread->600);
      ApcState->Process = 0LL;
    }
  }
}

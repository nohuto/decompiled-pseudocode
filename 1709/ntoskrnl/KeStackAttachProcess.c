/*
 * XREFs of KeStackAttachProcess @ 0x1400BD8C0
 * Callers:
 *     MmCreateShadowMapping @ 0x14043D3A4 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14043D51C (MmDeleteShadowMapping.c)
 *     PspCatchCriticalBreak @ 0x140719040 (PspCatchCriticalBreak.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x1400BFEE0 (KiAttachProcess.c)
 *     KeIsExecutingDpc @ 0x140141520 (KeIsExecutingDpc.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int IsExecutingDpc; // eax
  int v7; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)KeIsExecutingDpc() || (*(_DWORD *)&PROCESS->0 & 0x20000000) != 0 )
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
      KiAttachProcess((_DWORD)CurrentThread, (_DWORD)PROCESS, CurrentIrql, 0, (__int64)ApcState);
    }
    else
    {
      KiAttachProcess((_DWORD)CurrentThread, (_DWORD)PROCESS, CurrentIrql, 0, (__int64)&CurrentThread->600);
      ApcState->Process = 0LL;
    }
  }
}

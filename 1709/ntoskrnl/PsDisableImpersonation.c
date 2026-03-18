/*
 * XREFs of PsDisableImpersonation @ 0x1404C6170
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 *     CmpStartCLFSLog @ 0x1405E4A9C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405E4D1C (CmpAddRemoveContainerToCLFSLog.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 */

BOOLEAN __stdcall PsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  char v2; // bp
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v6; // rax
  char v7; // al
  __int64 v8; // rcx
  bool v9; // zf
  BOOLEAN result; // al
  void *v11; // rcx

  v2 = 0;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
    {
      v2 = 1;
      ImpersonationState->Level = *((_DWORD *)&Thread[1].0 + 1) & 3;
      ImpersonationState->EffectiveOnly = (*(_BYTE *)(&Thread[1].MiscFlags + 1) & 4) != 0;
      ImpersonationState->CopyOnOpen = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 2)) & 1;
      v6 = Thread[1].WaitBlock[1].Thread;
      if ( v6 )
      {
        ImpersonationState->Token = v6;
        v11 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        Thread[1].WaitBlock[1].Thread = 0LL;
        ObfDereferenceObject(v11);
      }
      else
      {
        ImpersonationState->Token = (PACCESS_TOKEN)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    v9 = CurrentThread->KernelApcDisable++ == -1;
    if ( v9
      && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v8);
    }
    if ( v2 )
      return 1;
  }
  ImpersonationState->Level = SecurityAnonymous;
  result = 0;
  *(_WORD *)&ImpersonationState->CopyOnOpen = 0;
  ImpersonationState->Token = 0LL;
  return result;
}

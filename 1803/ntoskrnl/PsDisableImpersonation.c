/*
 * XREFs of PsDisableImpersonation @ 0x1404C0E30
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1404C0990 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1405F49A0 (CmpStartCLFSLog.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

BOOLEAN __stdcall PsDisableImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  char v2; // r14
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rax
  char v10; // al
  BOOLEAN result; // al
  void *v12; // rcx

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
      v9 = Thread[1].WaitBlock[1].Thread;
      if ( v9 )
      {
        ImpersonationState->Token = v9;
        v12 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        Thread[1].WaitBlock[1].Thread = 0LL;
        ObfDereferenceObject(v12);
      }
      else
      {
        ImpersonationState->Token = (PACCESS_TOKEN)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList, v6, v7, v8);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v2 )
      return 1;
  }
  ImpersonationState->Level = SecurityAnonymous;
  result = 0;
  *(_WORD *)&ImpersonationState->CopyOnOpen = 0;
  ImpersonationState->Token = 0LL;
  return result;
}

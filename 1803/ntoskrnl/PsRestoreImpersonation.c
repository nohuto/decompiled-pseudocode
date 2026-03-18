/*
 * XREFs of PsRestoreImpersonation @ 0x1404C0F60
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1404C0990 (NtOpenThreadTokenEx.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405F3254 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x1405F49A0 (CmpStartCLFSLog.c)
 * Callees:
 *     SeQueryTokenTrustLink @ 0x14005A330 (SeQueryTokenTrustLink.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PspWriteTebImpersonationInfo @ 0x14059AE50 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // r15
  void *v3; // rbp
  __int64 Token; // rdi
  struct _KTHREAD *v6; // r13
  struct _KTHREAD *v7; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // bl
  char v15; // al

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  Token = (__int64)ImpersonationState->Token;
  v6 = 0LL;
  v7 = 0LL;
  if ( ImpersonationState->Token )
  {
    if ( SeQueryTokenTrustLink(Token) )
    {
      Token = SeQueryTokenTrustLink(v9);
      ObfReferenceObject((PVOID)Token);
      v7 = (struct _KTHREAD *)ImpersonationState->Token;
    }
    v10 = Token & 0xFFFFFFFFFFFFFFF8uLL | (ImpersonationState->EffectiveOnly != 0 ? 4 : 0) | (unsigned __int64)(ImpersonationState->Level & 3);
  }
  else
  {
    v10 = 0LL;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = Thread[1].WaitBlock[1].Thread;
    v3 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( ImpersonationState->Token )
  {
    *($A9C66A0F7B092172F948892A004DB1E3 *)((char *)&Thread[1].116 + 4) = ($A9C66A0F7B092172F948892A004DB1E3)v10;
    Thread[1].WaitBlock[1].Thread = v7;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
  }
  else if ( _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u) )
  {
    v14 = 1;
    goto LABEL_12;
  }
  v14 = 0;
LABEL_12:
  v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList, v11, v12, v13);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( v14 )
      PspWriteTebImpersonationInfo(Thread, CurrentThread);
  }
}

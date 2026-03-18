/*
 * XREFs of PsRestoreImpersonation @ 0x1404C62C0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 *     CmpStartCLFSLog @ 0x1405E4A9C (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1405E4D1C (CmpAddRemoveContainerToCLFSLog.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     SeQueryTokenTrustLink @ 0x1400893C8 (SeQueryTokenTrustLink.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     PspWriteTebImpersonationInfo @ 0x1404CEA30 (PspWriteTebImpersonationInfo.c)
 */

void __stdcall PsRestoreImpersonation(PETHREAD Thread, PSE_IMPERSONATION_STATE ImpersonationState)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // r15
  signed __int8 v4; // r13
  __int64 Token; // rdi
  struct _KTHREAD *v7; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rcx
  bool v13; // zf
  struct _KTHREAD *Object; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0;
  Token = (__int64)ImpersonationState->Token;
  v7 = 0LL;
  Object = 0LL;
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
    v3 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
    Object = Thread[1].WaitBlock[1].Thread;
  }
  if ( ImpersonationState->Token )
  {
    *($55B18245EBEA7C4FC31D19100062276C *)((char *)&Thread[1].116 + 4) = ($55B18245EBEA7C4FC31D19100062276C)v10;
    Thread[1].WaitBlock[1].Thread = v7;
    if ( ImpersonationState->CopyOnOpen )
      _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
    else
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
    _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
  }
  else
  {
    v4 = _interlockedbittestandreset((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 3u);
  }
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
  KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
  v13 = CurrentThread->KernelApcDisable++ == -1;
  if ( v13
    && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v12);
  }
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( v4 )
      PspWriteTebImpersonationInfo(Thread, CurrentThread);
  }
}

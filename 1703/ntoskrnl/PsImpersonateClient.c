/*
 * XREFs of PsImpersonateClient @ 0x14047E530
 * Callers:
 *     AlpcpImpersonateMessage @ 0x14047D170 (AlpcpImpersonateMessage.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     CmpCmdHiveOpen @ 0x1404D65D8 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     EtwpCreateLogFile @ 0x14055808C (EtwpCreateLogFile.c)
 *     SeImpersonateClientEx @ 0x140558C70 (SeImpersonateClientEx.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     PsAssignImpersonationToken @ 0x140571B40 (PsAssignImpersonationToken.c)
 *     PsRevertThreadToSelf @ 0x1406E0B10 (PsRevertThreadToSelf.c)
 *     PsRevertToSelf @ 0x1406E0B40 (PsRevertToSelf.c)
 * Callees:
 *     SeSetTokenTrustLink @ 0x1400337E0 (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x14003A010 (SeQueryTokenTrustSid.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     SeCopyClientToken @ 0x14043D254 (SeCopyClientToken.c)
 *     PspWriteTebImpersonationInfo @ 0x14047E920 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x14047EAA0 (SeTokenCanImpersonate.c)
 */

NTSTATUS __stdcall PsImpersonateClient(
        PETHREAD Thread,
        PACCESS_TOKEN Token,
        BOOLEAN CopyOnOpen,
        BOOLEAN EffectiveOnly,
        SECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  _KPROCESS *Process; // rbx
  char v6; // bp
  unsigned __int64 v9; // rsi
  void *v11; // rsi
  struct _KTHREAD *v12; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rcx
  __int16 v15; // ax
  struct _KTHREAD *v16; // rdx
  signed __int64 *v17; // r13
  void *v18; // r12
  __int64 v19; // r8
  char v20; // r12
  struct _KTHREAD *v21; // rbp
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int16 v24; // ax
  int v26; // ebx
  NTSTATUS v27; // ebx
  signed __int64 *p_Lock; // rbx
  _DWORD *v29; // [rsp+38h] [rbp-50h] BYREF
  char v30; // [rsp+98h] [rbp+10h]
  struct _KTHREAD *v31; // [rsp+98h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v29 = 0LL;
  v9 = (unsigned __int64)Token;
  if ( !Token )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v12 = Thread[1].WaitBlock[1].Thread;
      v11 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    v15 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v15;
    if ( !v15
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v14);
    }
    v16 = CurrentThread;
LABEL_22:
    PspWriteTebImpersonationInfo(Thread, v16);
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v12 )
      ObfDereferenceObject(v12);
    return 0;
  }
  v17 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  v18 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v18 )
  {
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v18 = (void *)ObFastReferenceObjectLocked(v17);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v31);
    if ( !v18 )
    {
      v20 = ImpersonationLevel;
      goto LABEL_13;
    }
  }
  v30 = ImpersonationLevel;
  if ( (int)SeTokenCanImpersonate(v18, (PACCESS_TOKEN)v9) >= 0 )
  {
LABEL_12:
    ObFastDereferenceObject(v17, (unsigned __int64)v18);
    v20 = v30;
    if ( v6 )
    {
LABEL_14:
      v21 = KeGetCurrentThread();
      v22 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v20 & 3 | (4LL * (EffectiveOnly & 1));
      --v21->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v12 = Thread[1].WaitBlock[1].Thread;
        v11 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        Thread[1].WaitBlock[1].Thread = 0LL;
      }
      else
      {
        v11 = 0LL;
        v12 = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
      }
      Thread[1].WaitBlock[1].Thread = 0LL;
      *(_QWORD *)&Thread[1].SystemCallNumber = v22;
      if ( CopyOnOpen )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      v24 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v24;
      if ( !v24
        && ($69CD3F157F9F39B6F7113F2231989901 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v23);
      }
      v16 = v21;
      goto LABEL_22;
    }
LABEL_13:
    ObfReferenceObject((PVOID)v9);
    goto LABEL_14;
  }
  v26 = 1;
  v30 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
  {
    v26 = *(_DWORD *)(v9 + 196);
    v30 = v26;
  }
  v27 = SeCopyClientToken(v9, v26, v19, 0, 0LL, &v29);
  if ( v27 >= 0 )
  {
    v9 = (unsigned __int64)v29;
    v6 = 1;
    goto LABEL_12;
  }
  ObFastDereferenceObject(v17, (unsigned __int64)v18);
  return v27;
}

/*
 * XREFs of PsImpersonateClient @ 0x1404CE640
 * Callers:
 *     AlpcpImpersonateMessage @ 0x14049DC60 (AlpcpImpersonateMessage.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     CmpCmdHiveOpen @ 0x1404DD728 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     EtwpCreateLogFile @ 0x140577D70 (EtwpCreateLogFile.c)
 *     SeImpersonateClientEx @ 0x140578EB0 (SeImpersonateClientEx.c)
 *     PsAssignImpersonationToken @ 0x1405C44F0 (PsAssignImpersonationToken.c)
 *     PsRevertThreadToSelf @ 0x140716E10 (PsRevertThreadToSelf.c)
 *     PsRevertToSelf @ 0x140716E40 (PsRevertToSelf.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     SeSetTokenTrustLink @ 0x1401262AC (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x14012BDC8 (SeQueryTokenTrustSid.c)
 *     SeCopyClientToken @ 0x140487120 (SeCopyClientToken.c)
 *     PspWriteTebImpersonationInfo @ 0x1404CEA30 (PspWriteTebImpersonationInfo.c)
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
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
  struct _KTHREAD *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  char v14; // al
  __int64 v15; // rcx
  bool v16; // zf
  struct _KTHREAD *v17; // rdx
  signed __int64 *v18; // r13
  void *v19; // r14
  __int64 v20; // r8
  char v21; // bp
  struct _KTHREAD *v22; // r14
  unsigned __int64 v23; // rbx
  char v24; // al
  __int64 v25; // rcx
  int v27; // ebx
  NTSTATUS v28; // ebx
  signed __int64 *p_Lock; // rbx
  struct _KTHREAD *v30; // [rsp+30h] [rbp-58h]
  _DWORD *v31; // [rsp+38h] [rbp-50h] BYREF
  char v32; // [rsp+98h] [rbp+10h]
  struct _KTHREAD *v33; // [rsp+98h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v31 = 0LL;
  v30 = 0LL;
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
      v11 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      Thread[1].WaitBlock[1].Thread = 0LL;
      _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFF7);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    v16 = CurrentThread->KernelApcDisable++ == -1;
    if ( v16
      && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v15);
    }
    v17 = CurrentThread;
LABEL_21:
    PspWriteTebImpersonationInfo(Thread, v17);
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v12 )
      ObfDereferenceObject(v12);
    return 0;
  }
  v18 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  v19 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v19 )
  {
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v19 = (void *)ObFastReferenceObjectLocked(v18);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v33);
    if ( !v19 )
    {
      v21 = ImpersonationLevel;
      goto LABEL_12;
    }
  }
  v32 = ImpersonationLevel;
  if ( (int)SeTokenCanImpersonate(v19, (PACCESS_TOKEN)v9) >= 0 )
  {
LABEL_11:
    ObFastDereferenceObject(v18, (unsigned __int64)v19);
    v16 = v6 == 0;
    v21 = v32;
    if ( !v16 )
    {
LABEL_13:
      v22 = KeGetCurrentThread();
      v23 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v21 & 3 | (4LL * (EffectiveOnly & 1));
      --v22->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v12 = Thread[1].WaitBlock[1].Thread;
        v11 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        Thread[1].WaitBlock[1].Thread = 0LL;
      }
      else
      {
        v11 = 0LL;
        v12 = 0LL;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 8u);
      }
      Thread[1].WaitBlock[1].Thread = v30;
      *($55B18245EBEA7C4FC31D19100062276C *)((char *)&Thread[1].116 + 4) = ($55B18245EBEA7C4FC31D19100062276C)v23;
      if ( CopyOnOpen )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
      v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      v16 = v22->KernelApcDisable++ == -1;
      if ( v16
        && ($B476B70DB57F76B110DA5B9238C3E934 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
        && !v22->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v25);
      }
      v17 = v22;
      goto LABEL_21;
    }
LABEL_12:
    ObfReferenceObject((PVOID)v9);
    goto LABEL_13;
  }
  v27 = 1;
  v32 = 1;
  if ( *(_DWORD *)(v9 + 192) == 2 && *(int *)(v9 + 196) < 1 )
  {
    v27 = *(_DWORD *)(v9 + 196);
    v32 = v27;
  }
  v28 = SeCopyClientToken(v9, v27, v20, 0, 0LL, &v31);
  if ( v28 >= 0 )
  {
    v9 = (unsigned __int64)v31;
    v6 = 1;
    goto LABEL_11;
  }
  ObFastDereferenceObject(v18, (unsigned __int64)v19);
  return v28;
}

/*
 * XREFs of PsImpersonateClient @ 0x14059AA70
 * Callers:
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     AlpcpImpersonateMessage @ 0x1404CEEA0 (AlpcpImpersonateMessage.c)
 *     CmpCmdHiveOpen @ 0x1404F7D70 (CmpCmdHiveOpen.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     SeImpersonateClientEx @ 0x140587890 (SeImpersonateClientEx.c)
 *     EtwpCreateLogFile @ 0x1405884D0 (EtwpCreateLogFile.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     PsAssignImpersonationToken @ 0x1405DD070 (PsAssignImpersonationToken.c)
 *     PsRevertThreadToSelf @ 0x14077AF90 (PsRevertThreadToSelf.c)
 *     PsRevertToSelf @ 0x14077AFC0 (PsRevertToSelf.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     SeSetTokenTrustLink @ 0x1400C377C (SeSetTokenTrustLink.c)
 *     SeQueryTokenTrustSid @ 0x1400CB7A4 (SeQueryTokenTrustSid.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     SeCopyClientToken @ 0x14055EC24 (SeCopyClientToken.c)
 *     SeTokenCanImpersonate @ 0x140599E60 (SeTokenCanImpersonate.c)
 *     PspWriteTebImpersonationInfo @ 0x14059AE50 (PspWriteTebImpersonationInfo.c)
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
  __int64 v9; // rsi
  void *v11; // rsi
  struct _KTHREAD *v12; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  bool v18; // zf
  struct _KTHREAD *v19; // rdx
  signed __int64 *v20; // r13
  _DWORD *v21; // r14
  SECURITY_IMPERSONATION_LEVEL v22; // ebx
  __int64 v23; // r8
  char v24; // bp
  struct _KTHREAD *v25; // r14
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // al
  void *TokenTrustSid; // rax
  __int64 v33; // r8
  NTSTATUS v34; // ebx
  unsigned int v35; // ebx
  signed __int64 *p_Lock; // rbx
  struct _KTHREAD *v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38[10]; // [rsp+38h] [rbp-50h] BYREF
  char v39; // [rsp+90h] [rbp+8h] BYREF
  struct _KTHREAD *v40; // [rsp+98h] [rbp+10h]

  Process = Thread->Process;
  v6 = 0;
  v38[0] = 0LL;
  v39 = 0;
  v37 = 0LL;
  v9 = (__int64)Token;
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
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList, v14, v15, v16);
    KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
    v18 = CurrentThread->KernelApcDisable++ == -1;
    if ( v18
      && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v19 = CurrentThread;
LABEL_21:
    PspWriteTebImpersonationInfo(Thread, v19);
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v12 )
      ObfDereferenceObject(v12);
    return 0;
  }
  v20 = (signed __int64 *)&Process[1].Affinity.Bitmap[5];
  v21 = (_DWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v21 )
  {
    v40 = KeGetCurrentThread();
    --v40->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v21 = (_DWORD *)ObFastReferenceObjectLocked(v20);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v40);
    if ( !v21 )
    {
      v24 = ImpersonationLevel;
      goto LABEL_13;
    }
  }
  v22 = ImpersonationLevel;
  LODWORD(v40) = ImpersonationLevel;
  if ( SeTokenCanImpersonate(v21, (_DWORD *)v9, ImpersonationLevel, &v39) < 0 )
  {
    v18 = *(_DWORD *)(v9 + 192) == 2;
    v35 = 1;
    LODWORD(v40) = 1;
    if ( v18 && *(int *)(v9 + 196) < 1 )
    {
      v35 = *(_DWORD *)(v9 + 196);
      LODWORD(v40) = v35;
    }
    v34 = SeCopyClientToken(v9, v35, v23, 0, 0LL, v38);
    if ( v34 >= 0 )
    {
      v9 = v38[0];
      v6 = 1;
      goto LABEL_12;
    }
  }
  else
  {
    if ( !v39 )
      goto LABEL_12;
    TokenTrustSid = (void *)SeQueryTokenTrustSid((__int64)v21);
    v34 = SeCopyClientToken(v9, v22, v33, 1, TokenTrustSid, &v37);
    if ( v34 >= 0 )
    {
      if ( CopyOnOpen )
      {
        SeSetTokenTrustLink((__int64)v37, (void *)v9);
      }
      else
      {
        v9 = (__int64)v37;
        v37 = 0LL;
        v6 = 1;
      }
LABEL_12:
      ObFastDereferenceObject(v20, (unsigned __int64)v21);
      v18 = v6 == 0;
      v24 = (char)v40;
      if ( !v18 )
      {
LABEL_14:
        v25 = KeGetCurrentThread();
        v26 = v9 & 0xFFFFFFFFFFFFFFF8uLL | v24 & 3 | (4LL * (EffectiveOnly & 1));
        --v25->KernelApcDisable;
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
        Thread[1].WaitBlock[1].Thread = v37;
        *($A9C66A0F7B092172F948892A004DB1E3 *)((char *)&Thread[1].116 + 4) = ($A9C66A0F7B092172F948892A004DB1E3)v26;
        if ( CopyOnOpen )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x100u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFEFF);
        v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v30 & 2) != 0 && (v30 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&Thread[1].WaitBlockList, v27, v28, v29);
        KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
        v18 = v25->KernelApcDisable++ == -1;
        if ( v18
          && ($005F0E83B22994B61E86C72E0CE43C71 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
          && !v25->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v19 = v25;
        goto LABEL_21;
      }
LABEL_13:
      ObfReferenceObject((PVOID)v9);
      goto LABEL_14;
    }
  }
  ObFastDereferenceObject(v20, (unsigned __int64)v21);
  return v34;
}

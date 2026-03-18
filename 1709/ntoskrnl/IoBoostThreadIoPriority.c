/*
 * XREFs of IoBoostThreadIoPriority @ 0x1400AC938
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140080900 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     FsRtlpWaitForIoAtEof @ 0x140100900 (FsRtlpWaitForIoAtEof.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401167E4 (CcBoostLowPriorityWorkerThread.c)
 *     FsRtlpDoBoost @ 0x140127320 (FsRtlpDoBoost.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 *     IoBoostThreadIo @ 0x1401F9280 (IoBoostThreadIo.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404D99C0 (PspBoostJobIoPriorityCallback.c)
 *     CmpBoostActiveHiveWriter @ 0x1404E66A0 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall IoBoostThreadIoPriority(KSPIN_LOCK *a1, int a2, int a3)
{
  char v5; // r14
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // r15
  char v8; // r12
  __int64 v9; // rdi
  __int64 v10; // r15
  struct _EX_RUNDOWN_REF *v11; // rax
  unsigned int v12; // esi
  KIRQL v13; // al
  KSPIN_LOCK v14; // rdi
  unsigned __int16 v15; // r15
  char v16; // cl
  unsigned __int64 v17; // r14
  void *v18; // r14
  volatile __int64 **v19; // rcx
  __int64 i; // rdx
  unsigned __int16 v21; // r14
  __int64 v22; // r15
  __int64 v23; // r12
  unsigned __int16 j; // di
  _QWORD *v25; // r14
  unsigned __int64 v26; // rdi
  __int64 v27; // rsi
  struct _EX_RUNDOWN_REF *v28; // r8
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  KIRQL v31; // al
  __int64 v32; // rdi
  __int64 v33; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  KIRQL v37; // [rsp+28h] [rbp-E0h]
  KIRQL v38; // [rsp+28h] [rbp-E0h]
  void *v40; // [rsp+30h] [rbp-D8h]
  __int64 v41; // [rsp+30h] [rbp-D8h]
  _QWORD v43[10]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v44; // [rsp+98h] [rbp-70h]
  PEX_RUNDOWN_REF RunRef[16]; // [rsp+A8h] [rbp-60h]

  v5 = 0;
  if ( a3 < 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = a1 + 232;
    v7 = KeAcquireSpinLockRaiseToDpc(a1 + 232);
    if ( (KSPIN_LOCK *)a1[206] == a1 + 206 )
    {
      if ( (a3 & 0x40000000) == 0 )
      {
        KxReleaseSpinLock(v6);
        __writecr8(v7);
        return;
      }
      v5 = 1;
    }
    KxReleaseSpinLock(v6);
    __writecr8(v7);
  }
  v8 = 0;
  v9 = 0LL;
  v10 = 8LL;
  do
  {
    v11 = ExReferenceCallBackBlock((signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v9 * 8));
    RunRef[v9] = v11;
    if ( v11 )
      RunRef[v9 + 8] = (PEX_RUNDOWN_REF)v11[2].Count;
    ++v9;
    --v10;
  }
  while ( v10 );
  v12 = 0;
  if ( v5 == 1 )
  {
LABEL_29:
    v41 = 0LL;
    v21 = 0;
    v22 = 0LL;
    while ( 1 )
    {
      v23 = *(__int64 *)((char *)RunRef + v22);
      if ( !v23 )
        goto LABEL_31;
      v31 = KeAcquireQueuedSpinLock(0xAuLL);
      v38 = v31;
      v32 = *(_QWORD *)((*(PEX_RUNDOWN_REF *)((char *)&RunRef[8] + v22))[4].Count + 8);
      if ( !v32 )
        goto LABEL_54;
      while ( (*(_DWORD *)(v32 + 48) & 0x1000000) == 0 )
      {
LABEL_52:
        v32 = *(_QWORD *)(v32 + 16);
        if ( !v32 )
          goto LABEL_53;
      }
      if ( v12 < 2 )
        break;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
      if ( PoolWithTag )
      {
        PoolWithTag[4] = v44;
        v44 = PoolWithTag;
        *PoolWithTag = v23;
        *((_WORD *)PoolWithTag + 20) = v21;
        PoolWithTag[1] = v32;
        PoolWithTag[2] = a1;
        *((_DWORD *)PoolWithTag + 6) = a2;
        goto LABEL_51;
      }
LABEL_53:
      v22 = v41;
      v31 = v38;
LABEL_54:
      KeReleaseQueuedSpinLock(0xAuLL, v31);
LABEL_31:
      v22 += 8LL;
      ++v21;
      v41 = v22;
      if ( v21 >= 8u )
      {
        if ( v12 )
          ++IoBlanketBoostCount;
        goto LABEL_34;
      }
    }
    v33 = 6LL * v12;
    v43[v33] = v23;
    LOWORD(v43[v33 + 5]) = v21;
    v43[v33 + 1] = v32;
    v43[v33 + 2] = a1;
    LODWORD(v43[v33 + 3]) = a2;
    v43[v33 + 4] = 0LL;
LABEL_51:
    ObfReferenceObjectWithTag((PVOID)v32, 0x746C6644u);
    ObfReferenceObjectWithTag(a1, 0x746C6644u);
    ++v12;
    goto LABEL_52;
  }
  v40 = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 232);
  v14 = a1[206];
  v37 = v13;
  while ( (KSPIN_LOCK *)v14 != a1 + 206 )
  {
    v16 = *(_BYTE *)(v14 + 34);
    if ( *(char *)(v14 + 35) > v16 )
      goto LABEL_14;
    v17 = *(_QWORD *)(v14 + 152);
    if ( v17 >= v14 + 8 * (9LL * v16 + 22) )
      goto LABEL_14;
    v18 = *(void **)(v17 + 40);
    if ( !v18 )
      goto LABEL_14;
    v15 = 0;
    while ( !RunRef[v15] )
    {
LABEL_13:
      if ( ++v15 >= 8u )
        goto LABEL_14;
    }
    v19 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    KxAcquireQueuedSpinLock((__int64)v19, v19[1]);
    for ( i = *(_QWORD *)(RunRef[v15 + 8][4].Count + 8); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (void *)i == v18 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
      {
        v8 = 1;
        break;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
    if ( v8 != 1 || v40 == v18 )
    {
      v8 = 0;
      goto LABEL_13;
    }
    v40 = v18;
    if ( v12 >= 2 )
    {
      v36 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
      if ( v36 )
      {
        v36[4] = v44;
        v44 = v36;
        *((_WORD *)v36 + 20) = v15;
        *v36 = RunRef[v15];
        *((_DWORD *)v36 + 6) = a2;
        v36[1] = v18;
        v36[2] = a1;
        goto LABEL_62;
      }
    }
    else
    {
      v35 = 6LL * v12;
      v43[v35] = RunRef[v15];
      LODWORD(v43[v35 + 3]) = a2;
      LOWORD(v43[v35 + 5]) = v15;
      v43[v35 + 1] = v18;
      v43[v35 + 2] = a1;
      v43[v35 + 4] = 0LL;
LABEL_62:
      ObfReferenceObjectWithTag(v18, 0x746C6644u);
      ObfReferenceObjectWithTag(a1, 0x746C6644u);
      ++v12;
      if ( (*(_DWORD *)(v14 - 16) & 2) != 0 )
        ++IoBoostedPagingIrpCount;
      else
        ++IoBoostedThreadedIrpCount;
    }
LABEL_14:
    v14 = *(_QWORD *)v14;
    v8 = 0;
  }
  KxReleaseSpinLock(a1 + 232);
  __writecr8(v37);
  if ( !v12 )
    goto LABEL_29;
LABEL_34:
  for ( j = 0; j < v12; ++j )
  {
    if ( j >= 2u )
    {
      v25 = v44;
      v44 = (_QWORD *)v44[4];
    }
    else
    {
      v25 = &v43[6 * j];
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*v25 + 8LL))(*v25, v25 + 1, 0LL);
    if ( j >= 2u )
      ExFreePoolWithTag(v25, 0);
  }
  v26 = 0LL;
  v27 = 8LL;
  do
  {
    v28 = RunRef[v26 / 8];
    if ( v28 )
    {
      _m_prefetchw((char *)&IopUpdatePriorityCallbackRoutine + v26);
      v29 = *(_QWORD *)((char *)&IopUpdatePriorityCallbackRoutine + v26);
      if ( ((unsigned __int64)v28 ^ v29) >= 0xF )
      {
LABEL_69:
        ExReleaseRundownProtection_0(v28);
      }
      else
      {
        while ( 1 )
        {
          v30 = v29;
          v29 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v26),
                  v29 + 1,
                  v29);
          if ( v30 == v29 )
            break;
          if ( ((unsigned __int64)v28 ^ v29) >= 0xF )
            goto LABEL_69;
        }
      }
    }
    v26 += 8LL;
    --v27;
  }
  while ( v27 );
}

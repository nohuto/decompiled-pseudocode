/*
 * XREFs of IoBoostThreadIoPriority @ 0x140089520
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     FsRtlpWaitForIoAtEof @ 0x14007C42C (FsRtlpWaitForIoAtEof.c)
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14009B00C (CcBoostLowPriorityWorkerThread.c)
 *     FsRtlpDoBoost @ 0x1400C8BBC (FsRtlpDoBoost.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     IoBoostThreadIo @ 0x140155FB0 (IoBoostThreadIo.c)
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x14052EEE0 (PspBoostJobIoPriorityCallback.c)
 *     CmpBoostActiveHiveWriter @ 0x140566B44 (CmpBoostActiveHiveWriter.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall IoBoostThreadIoPriority(KSPIN_LOCK *a1, int a2, int a3)
{
  char v5; // r14
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r15
  struct _EX_RUNDOWN_REF *v10; // rax
  unsigned int v11; // esi
  KIRQL v12; // al
  KSPIN_LOCK v13; // rdi
  unsigned __int16 v14; // r15
  char v15; // cl
  unsigned __int64 v16; // r14
  void *v17; // r14
  char *v18; // rcx
  __int64 i; // rdx
  unsigned __int16 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r12
  unsigned __int16 j; // di
  _QWORD *v24; // r14
  unsigned __int64 v25; // rdi
  __int64 v26; // rsi
  struct _EX_RUNDOWN_REF *v27; // r8
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  KIRQL v30; // al
  __int64 v31; // rdi
  __int64 v32; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  PEX_RUNDOWN_REF v36; // rcx
  KIRQL v37; // [rsp+28h] [rbp-E0h]
  KIRQL v38; // [rsp+28h] [rbp-E0h]
  char v39; // [rsp+29h] [rbp-DFh]
  void *v41; // [rsp+30h] [rbp-D8h]
  __int64 v42; // [rsp+30h] [rbp-D8h]
  _QWORD v44[10]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v45; // [rsp+98h] [rbp-70h]
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
  v8 = 0LL;
  v9 = 8LL;
  do
  {
    v10 = ExReferenceCallBackBlock((signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v8 * 8));
    RunRef[v8] = v10;
    if ( v10 )
      RunRef[v8 + 8] = (PEX_RUNDOWN_REF)v10[2].Count;
    ++v8;
    --v9;
  }
  while ( v9 );
  v11 = 0;
  if ( v5 == 1 )
  {
LABEL_29:
    v42 = 0LL;
    v20 = 0;
    v21 = 0LL;
    while ( 1 )
    {
      v22 = *(__int64 *)((char *)RunRef + v21);
      if ( !v22 )
        goto LABEL_31;
      v30 = KeAcquireQueuedSpinLock(0xAuLL);
      v38 = v30;
      v31 = *(_QWORD *)((*(PEX_RUNDOWN_REF *)((char *)&RunRef[8] + v21))[4].Count + 8);
      if ( !v31 )
        goto LABEL_55;
      while ( (*(_DWORD *)(v31 + 48) & 0x1000000) == 0 )
      {
LABEL_53:
        v31 = *(_QWORD *)(v31 + 16);
        if ( !v31 )
          goto LABEL_54;
      }
      if ( v11 < 2 )
        break;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
      if ( PoolWithTag )
      {
        PoolWithTag[4] = v45;
        v45 = PoolWithTag;
        *PoolWithTag = v22;
        *((_WORD *)PoolWithTag + 20) = v20;
        PoolWithTag[1] = v31;
        PoolWithTag[2] = a1;
        *((_DWORD *)PoolWithTag + 6) = a2;
        goto LABEL_52;
      }
LABEL_54:
      v21 = v42;
      v30 = v38;
LABEL_55:
      KeReleaseQueuedSpinLock(0xAuLL, v30);
LABEL_31:
      v21 += 8LL;
      ++v20;
      v42 = v21;
      if ( v20 >= 8u )
      {
        if ( v11 )
          ++IoBlanketBoostCount;
        goto LABEL_34;
      }
    }
    v32 = 6LL * v11;
    v44[v32] = v22;
    LOWORD(v44[v32 + 5]) = v20;
    v44[v32 + 1] = v31;
    v44[v32 + 2] = a1;
    LODWORD(v44[v32 + 3]) = a2;
    v44[v32 + 4] = 0LL;
LABEL_52:
    ObfReferenceObjectWithTag((PVOID)v31, 0x746C6644u);
    ObfReferenceObjectWithTag(a1, 0x746C6644u);
    ++v11;
    goto LABEL_53;
  }
  v41 = 0LL;
  v12 = KeAcquireSpinLockRaiseToDpc(a1 + 232);
  v13 = a1[206];
  v37 = v12;
  while ( (KSPIN_LOCK *)v13 != a1 + 206 )
  {
    v15 = *(_BYTE *)(v13 + 34);
    if ( *(char *)(v13 + 35) <= v15 )
    {
      v16 = *(_QWORD *)(v13 + 152);
      if ( v16 < v13 + 8 * (9LL * v15 + 22) )
      {
        v17 = *(void **)(v16 + 40);
        if ( v17 )
        {
          v14 = 0;
          while ( 1 )
          {
            if ( RunRef[v14] )
            {
              v18 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
              v39 = 0;
              KxAcquireQueuedSpinLock(v18, *((_QWORD *)v18 + 1));
              for ( i = *(_QWORD *)(RunRef[v14 + 8][4].Count + 8); i; i = *(_QWORD *)(i + 16) )
              {
                if ( (void *)i == v17 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
                {
                  v39 = 1;
                  break;
                }
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                             + 160));
              if ( v39 == 1 && v41 != v17 )
                break;
            }
            if ( ++v14 >= 8u )
              goto LABEL_14;
          }
          v41 = v17;
          if ( v11 >= 2 )
          {
            v35 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
            if ( !v35 )
              goto LABEL_14;
            v35[4] = v45;
            v36 = RunRef[v14];
            v45 = v35;
            *v35 = v36;
            *((_DWORD *)v35 + 6) = a2;
            *((_WORD *)v35 + 20) = v14;
            v35[1] = v17;
            v35[2] = a1;
          }
          else
          {
            v34 = 6LL * v11;
            v44[v34] = RunRef[v14];
            LODWORD(v44[v34 + 3]) = a2;
            LOWORD(v44[v34 + 5]) = v14;
            v44[v34 + 1] = v17;
            v44[v34 + 2] = a1;
            v44[v34 + 4] = 0LL;
          }
          ++v11;
          ObfReferenceObjectWithTag(v17, 0x746C6644u);
          ObfReferenceObjectWithTag(a1, 0x746C6644u);
          if ( (*(_DWORD *)(v13 - 16) & 2) != 0 )
            ++IoBoostedPagingIrpCount;
          else
            ++IoBoostedThreadedIrpCount;
        }
      }
    }
LABEL_14:
    v13 = *(_QWORD *)v13;
  }
  KxReleaseSpinLock(a1 + 232);
  __writecr8(v37);
  if ( !v11 )
    goto LABEL_29;
LABEL_34:
  for ( j = 0; j < v11; ++j )
  {
    if ( j >= 2u )
    {
      v24 = v45;
      v45 = (_QWORD *)v45[4];
    }
    else
    {
      v24 = &v44[6 * j];
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*v24 + 8LL))(*v24, v24 + 1, 0LL);
    if ( j >= 2u )
      ExFreePoolWithTag(v24, 0);
  }
  v25 = 0LL;
  v26 = 8LL;
  do
  {
    v27 = RunRef[v25 / 8];
    if ( v27 )
    {
      _m_prefetchw((char *)&IopUpdatePriorityCallbackRoutine + v25);
      v28 = *(_QWORD *)((char *)&IopUpdatePriorityCallbackRoutine + v25);
      if ( ((unsigned __int64)v27 ^ v28) >= 0xF )
      {
LABEL_69:
        ExReleaseRundownProtection(v27);
      }
      else
      {
        while ( 1 )
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v25),
                  v28 + 1,
                  v28);
          if ( v29 == v28 )
            break;
          if ( ((unsigned __int64)v27 ^ v28) >= 0xF )
            goto LABEL_69;
        }
      }
    }
    v25 += 8LL;
    --v26;
  }
  while ( v26 );
}

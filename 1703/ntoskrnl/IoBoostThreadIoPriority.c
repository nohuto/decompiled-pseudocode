/*
 * XREFs of IoBoostThreadIoPriority @ 0x14011E29C
 * Callers:
 *     FsRtlpDoBoost @ 0x140019E4C (FsRtlpDoBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140029248 (CcBoostLowPriorityWorkerThread.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14008FC20 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     FsRtlpWaitForIoAtEof @ 0x14011D258 (FsRtlpWaitForIoAtEof.c)
 *     KiAbProcessThreadLocks @ 0x14011EB5C (KiAbProcessThreadLocks.c)
 *     IoBoostThreadIo @ 0x140131F40 (IoBoostThreadIo.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 *     CmpBoostActiveHiveWriter @ 0x14043B768 (CmpBoostActiveHiveWriter.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PspBoostJobIoPriorityCallback @ 0x14054D1E0 (PspBoostJobIoPriorityCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  volatile __int64 **v18; // rcx
  __int64 i; // rdx
  __int64 v20; // rdx
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
  _QWORD *v35; // rax
  KIRQL v36; // [rsp+28h] [rbp-E0h]
  KIRQL v37; // [rsp+28h] [rbp-E0h]
  char v38; // [rsp+29h] [rbp-DFh]
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
    v6 = a1 + 231;
    v7 = KeAcquireSpinLockRaiseToDpc(a1 + 231);
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
LABEL_33:
    v21 = 0;
    v41 = 0LL;
    v22 = 0LL;
    while ( 1 )
    {
      v23 = *(__int64 *)((char *)RunRef + v22);
      if ( !v23 )
        goto LABEL_35;
      v31 = KeAcquireQueuedSpinLock(0xAuLL);
      v37 = v31;
      v32 = *(_QWORD *)((*(PEX_RUNDOWN_REF *)((char *)&RunRef[8] + v22))[4].Count + 8);
      if ( !v32 )
        goto LABEL_58;
      while ( (*(_DWORD *)(v32 + 48) & 0x1000000) == 0 )
      {
LABEL_56:
        v32 = *(_QWORD *)(v32 + 16);
        if ( !v32 )
          goto LABEL_57;
      }
      if ( v11 < 2 )
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
        goto LABEL_55;
      }
LABEL_57:
      v22 = v41;
      v31 = v37;
LABEL_58:
      KeReleaseQueuedSpinLock(0xAuLL, v31);
LABEL_35:
      v22 += 8LL;
      ++v21;
      v41 = v22;
      if ( v21 >= 8u )
      {
        if ( v11 )
          ++IoBlanketBoostCount;
        goto LABEL_38;
      }
    }
    v33 = 6LL * v11;
    v43[v33 + 4] = 0LL;
    v43[v33] = v23;
    LOWORD(v43[v33 + 5]) = v21;
    v43[v33 + 1] = v32;
    v43[v33 + 2] = a1;
    LODWORD(v43[v33 + 3]) = a2;
LABEL_55:
    ObfReferenceObjectWithTag((PVOID)v32, 0x746C6644u);
    ObfReferenceObjectWithTag(a1, 0x746C6644u);
    ++v11;
    goto LABEL_56;
  }
  v40 = 0LL;
  v12 = KeAcquireSpinLockRaiseToDpc(a1 + 231);
  v13 = a1[206];
  v36 = v12;
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
              v18 = (volatile __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
              v38 = 0;
              KxAcquireQueuedSpinLock((__int64)v18, v18[1]);
              for ( i = *(_QWORD *)(RunRef[v14 + 8][4].Count + 8); i; i = *(_QWORD *)(i + 16) )
              {
                if ( (void *)i == v17 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
                {
                  v38 = 1;
                  break;
                }
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                             + 160));
              if ( v38 == 1 && v40 != v17 )
                break;
            }
            if ( ++v14 >= 8u )
              goto LABEL_14;
          }
          v40 = v17;
          if ( v11 >= 2 )
          {
            v35 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
            if ( !v35 )
              goto LABEL_14;
            v35[4] = v44;
            v44 = v35;
            *((_WORD *)v35 + 20) = v14;
            v35[1] = v17;
            v35[2] = a1;
            *v35 = RunRef[v14];
            *((_DWORD *)v35 + 6) = a2;
          }
          else
          {
            v20 = 6LL * v11;
            v43[v20] = RunRef[v14];
            LODWORD(v43[v20 + 3]) = a2;
            LOWORD(v43[v20 + 5]) = v14;
            v43[v20 + 1] = v17;
            v43[v20 + 2] = a1;
            v43[v20 + 4] = 0LL;
          }
          ObfReferenceObjectWithTag(v17, 0x746C6644u);
          ObfReferenceObjectWithTag(a1, 0x746C6644u);
          ++v11;
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
  KxReleaseSpinLock(a1 + 231);
  __writecr8(v36);
  if ( !v11 )
    goto LABEL_33;
LABEL_38:
  for ( j = 0; j < v11; ++j )
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
LABEL_68:
        ExReleaseRundownProtection(v28);
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
            goto LABEL_68;
        }
      }
    }
    v26 += 8LL;
    --v27;
  }
  while ( v27 );
}

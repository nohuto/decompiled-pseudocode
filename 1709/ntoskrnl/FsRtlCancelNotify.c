/*
 * XREFs of FsRtlCancelNotify @ 0x1401086F0
 * Callers:
 *     FsRtlNotifySetCancelRoutine @ 0x140107FB8 (FsRtlNotifySetCancelRoutine.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140036640 (PsReturnProcessPagedPoolQuota.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x140108080 (PsChargeProcessPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 */

_QWORD *__fastcall FsRtlCancelNotify(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  struct _KTHREAD *v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 **v8; // rcx
  PVOID v9; // rax
  __int64 v10; // rcx
  PVOID v11; // rdx
  PVOID PoolWithTag; // r15
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rdx
  PVOID v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  struct _SECURITY_SUBJECT_CONTEXT *SubjectContext; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+60h] [rbp-48h]
  _DWORD *P; // [rsp+C0h] [rbp+18h]

  SubjectContext = 0LL;
  P = *(_DWORD **)(a2 + 56);
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL);
  *(_QWORD *)(a2 + 56) = 0LL;
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(_QWORD *)P;
  v5 = KeGetCurrentThread();
  if ( v5 != *(struct _KTHREAD **)(*(_QWORD *)P + 56LL) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)v4);
    *(_QWORD *)(v4 + 56) = v5;
  }
  ++*(_DWORD *)(v4 + 64);
  v6 = (__int64 *)(a2 + 168);
  if ( *(_QWORD *)(a2 + 168) )
  {
    v7 = (__int64 *)*v6;
    v8 = *(__int64 ***)(a2 + 176);
    if ( *(__int64 **)(*v6 + 8) != v6 || *v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v9 = (PVOID)*((_QWORD *)P + 11);
  if ( v9 && !*((_QWORD *)P + 10) )
  {
    if ( (v10 = *(_QWORD *)(a2 + 8)) != 0
      && ((*(_BYTE *)(v10 + 10) & 5) == 0
        ? (v11 = MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000010u))
        : (v11 = *(PVOID *)(v10 + 24)),
          v9 = (PVOID)*((_QWORD *)P + 11),
          v11 == v9)
      || v9 == *(PVOID *)(a2 + 24) )
    {
      PoolWithTag = 0LL;
      v13 = 0;
      v14 = *((_QWORD *)P + 6);
      if ( (_DWORD *)v14 == P + 12 )
      {
        if ( P[24] >= P[26] )
          v13 = P[24];
        goto LABEL_30;
      }
      v15 = *(_QWORD *)(v14 + 16);
      v22 = v15;
      if ( *(_DWORD *)(v15 + 8) < P[26] )
      {
LABEL_30:
        if ( v13 )
        {
          if ( !PoolWithTag )
          {
            v18 = PsChargeProcessPoolQuota(*((PEPROCESS *)P + 15), PagedPool, v13);
            if ( v18 < 0 )
              RtlRaiseStatus(v18);
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, v13, 0x4E725346u);
            memset(PoolWithTag, 0, v13);
            *((_QWORD *)P + 10) = PoolWithTag;
          }
          memmove(PoolWithTag, *((const void **)P + 11), (unsigned int)P[26]);
          P[25] = v13;
          *((_QWORD *)P + 11) = PoolWithTag;
        }
        else
        {
          *((_WORD *)P + 36) |= 2u;
        }
        if ( (P[18] & 2) != 0 )
        {
          *((_QWORD *)P + 11) = 0LL;
          *((_QWORD *)P + 10) = 0LL;
          *((_QWORD *)P + 13) = 0LL;
          P[25] = 0;
        }
        goto LABEL_8;
      }
      v16 = *(PVOID *)(v14 - 144);
      if ( !v16 )
      {
        v17 = *(_QWORD *)(v14 - 160);
        if ( !v17 )
          goto LABEL_26;
        if ( (*(_BYTE *)(v17 + 10) & 5) != 0 )
        {
          PoolWithTag = *(PVOID *)(v17 + 24);
          goto LABEL_26;
        }
        v16 = MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, 0x40000010u);
        v15 = v22;
      }
      PoolWithTag = v16;
LABEL_26:
      v13 = *(_DWORD *)(v15 + 8);
      if ( v13 > P[24] )
        v13 = P[24];
      goto LABEL_30;
    }
  }
LABEL_8:
  *(_DWORD *)(a2 + 48) = -1073741536;
  IofCompleteRequest((PIRP)a2, 1);
  _InterlockedDecrement(P + 28);
  if ( !P[28] )
  {
    if ( *((_QWORD *)P + 10) )
    {
      PsReturnProcessPagedPoolQuota(*((struct _KPROCESS **)P + 15), (unsigned int)P[25]);
      ExFreePoolWithTag(*((PVOID *)P + 10), 0);
    }
    if ( (P[18] & 0x40) != 0 || *((_QWORD *)P + 17) )
      SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)*((_QWORD *)P + 3);
    ExFreePoolWithTag(P, 0);
  }
  if ( (*(_DWORD *)(v4 + 64))-- == 1 )
  {
    *(_QWORD *)(v4 + 56) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v4);
  }
  if ( SubjectContext )
  {
    SeReleaseSubjectContext(SubjectContext);
    ExFreePoolWithTag(SubjectContext, 0);
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

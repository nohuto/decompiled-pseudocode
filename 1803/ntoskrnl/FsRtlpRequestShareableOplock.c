/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x140067600
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015D818 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1402258FC (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404E2ABC (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140065254 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpClearOwner @ 0x1400653C4 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140065408 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x140066EE0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x14006758C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x140067F00 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockEnqueueRH @ 0x140067FD8 (FsRtlpOplockEnqueueRH.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6F7C (FsRtlpCancelOplockRHIrp.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14015F014 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140225758 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140225B9C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1404E238C (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1404E2F44 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpRequestShareableOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        char a6,
        char a7,
        unsigned int a8)
{
  unsigned int v10; // esi
  char v11; // r12
  char v12; // r13
  __int64 Oplock; // rbx
  int v14; // r11d
  _QWORD *i; // r13
  _QWORD *v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  _QWORD *v27; // r14
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  int v36; // ecx
  __int64 *v37; // rsi
  void *v38; // rcx
  _QWORD *v39; // rsi
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  IRP *v45; // r14
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  _QWORD *v50; // r14
  __int64 v51; // rsi
  int v52; // eax
  __int64 *k; // r14
  __int64 v54; // rdx
  _QWORD *j; // r14
  _QWORD *v56; // rax
  _QWORD *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 *v60; // rsi
  __int64 v61; // r9
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+50h] [rbp-58h]
  __int64 v65; // [rsp+58h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-48h]
  __int64 v67; // [rsp+68h] [rbp-40h]

  v10 = 0;
  FastMutex = 0LL;
  v11 = 0;
  v12 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v11 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v14 & 0x20000) != 0 )
    {
      v39 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v40 = v39[7];
      v41 = (_QWORD *)v39[8];
      if ( *(_QWORD **)(v40 + 8) != v39 + 7 || (_QWORD *)*v41 != v39 + 7 )
        __fastfail(3u);
      *v41 = v40;
      *(_QWORD *)(v40 + 8) = v41;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v39[5] )
        FsRtlpClearOwner(Oplock, (__int64)v39);
      ExFreePoolWithTag(v39, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock, v42, v43, v44);
      goto LABEL_67;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v38 = i;
      if ( !*((_BYTE *)i + 53) || a4 != 12288 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v38);
      }
    }
    v16 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v17 = v16[7];
    v18 = (_QWORD *)v16[8];
    if ( *(_QWORD **)(v17 + 8) != v16 + 7 || (_QWORD *)*v18 != v16 + 7 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v16[5] )
      FsRtlpClearOwner(Oplock, (__int64)v16);
    ExFreePoolWithTag(v16, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock, v19, v20, v21);
    v12 = 0;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_148;
  }
  if ( !a7 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
  {
    if ( a4 == 0x10000 )
    {
      v10 = -1073739511;
      goto LABEL_148;
    }
    goto LABEL_67;
  }
  if ( a4 != 12288 && a4 != 0x10000 )
  {
    if ( a4 == 16 )
    {
      v46 = *(_DWORD *)(Oplock + 144);
      if ( (v46 & 1) == 0 )
      {
        v47 = v46 & 0x1F0FFDF;
        if ( v47 != 16 && v47 != 4096 && v47 != 4112 )
          goto LABEL_67;
      }
    }
    else if ( a4 != 4096 )
    {
      v45 = (IRP *)a3;
      goto LABEL_126;
    }
    if ( a7 )
    {
      v51 = a2;
LABEL_118:
      v45 = (IRP *)a3;
      v65 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v65 + 3) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v56 = (_QWORD *)(a3 + 168);
      v57 = (_QWORD *)(Oplock + 40);
      v58 = *(_QWORD *)(Oplock + 40);
      if ( *(_QWORD *)(v58 + 8) != Oplock + 40 )
        __fastfail(3u);
      *v56 = v58;
      *(_QWORD *)(a3 + 176) = v57;
      *(_QWORD *)(v58 + 8) = v56;
      *v57 = v56;
      *(_QWORD *)(a3 + 56) = Oplock;
      FsRtlpComputeShareableOplockState(Oplock, v58, v22, v23);
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(v51 + 48), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v59) = 1;
        FsRtlpCancelReadOnlyOplockIrp(a3, v59);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v12 = 1;
      v10 = 259;
LABEL_126:
      if ( v12 )
        goto LABEL_148;
      goto LABEL_68;
    }
    v48 = *(_DWORD *)(Oplock + 144);
    if ( (v48 & 1) != 0
      || (v49 = v48 & 0x1F0FFDF, (v48 & 0x1F0FFDF) == 0x10)
      || v49 == 4096
      || v49 == 4112
      || v49 == 12288
      || v49 == 45056
      || v49 == 1060864
      || v49 == 8400896
      || (v48 & 0x10000) != 0 )
    {
      v50 = *(_QWORD **)(Oplock + 56);
      if ( v50 == (_QWORD *)(Oplock + 56) && *(_QWORD *)(Oplock + 72) == Oplock + 72 )
      {
        v51 = a2;
      }
      else
      {
        v51 = a2;
        while ( v50 != (_QWORD *)(Oplock + 56) )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v50[3], 0) )
            goto LABEL_67;
          v50 = (_QWORD *)*v50;
        }
        for ( j = *(_QWORD **)(Oplock + 72); j != (_QWORD *)(Oplock + 72); j = (_QWORD *)*j )
        {
          if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0) )
            goto LABEL_67;
        }
      }
      v52 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v52 == 16 || v52 == 4096 || v52 == 4112 || v52 == 45056 )
      {
        for ( k = *(__int64 **)(Oplock + 40); k != (__int64 *)(Oplock + 40); k = (__int64 *)*k )
        {
          v54 = k[2];
          if ( (*(_DWORD *)(v54 + 24) == 590400 || *(_QWORD *)(v54 + 48) != *(_QWORD *)(v51 + 48))
            && FsRtlpOplockKeysEqual(*(_QWORD *)(v51 + 48), *(_QWORD *)(v54 + 48), 0) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)k[1], 533LL, a4 & 0x7000, v23);
            goto LABEL_118;
          }
        }
      }
      goto LABEL_118;
    }
LABEL_67:
    v45 = (IRP *)a3;
LABEL_68:
    v45->IoStatus.Status = -1073741598;
    IofCompleteRequest(v45, 1);
LABEL_69:
    v10 = -1073741598;
    goto LABEL_148;
  }
  if ( !a7
    && (v24 = *(_DWORD *)(Oplock + 144), (v24 & 1) == 0)
    && (v36 = v24 & 0x1F0FFDF, (v24 & 0x1F0FFDF) != 0x3000)
    && v36 != 8400896
    && v36 != 4096
    && v36 != 45056
    && v36 != 1060864
    && (v24 & 0x10000) == 0
    || (v25 = a2, *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL)) )
  {
    if ( a4 == 0x10000 )
    {
      v10 = -1073739511;
      goto LABEL_148;
    }
    goto LABEL_67;
  }
  if ( !a7 )
  {
    v26 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v26 == 4096 || v26 == 45056 )
    {
      v60 = *(__int64 **)(Oplock + 40);
      while ( v60 != (__int64 *)(Oplock + 40) )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v25 + 48), *(_QWORD *)(v60[2] + 48), 0) )
        {
          if ( a4 == 0x10000 )
          {
            v10 = -1073741597;
            goto LABEL_148;
          }
          FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)v60[1], 533LL, 12288LL, v61);
          v25 = a2;
          break;
        }
        v60 = (__int64 *)*v60;
        v25 = a2;
      }
    }
    if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
    {
      v37 = *(__int64 **)(Oplock + 56);
      while ( v37 != (__int64 *)(Oplock + 56) )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v25 + 48), v37[3], 0) && !v37[7] )
        {
          if ( a4 == 0x10000 )
          {
            v10 = -1073741597;
            goto LABEL_148;
          }
          FsRtlpRemoveAndBreakRHIrp(*(_QWORD *)v37[1], Oplock, 1, 533, 0x3000u, 0, 0, 0);
          v25 = a2;
          break;
        }
        v37 = (__int64 *)*v37;
        v25 = a2;
      }
    }
    v27 = *(_QWORD **)(Oplock + 72);
    if ( v27 != (_QWORD *)(Oplock + 72) )
    {
      while ( v27 != (_QWORD *)(Oplock + 72) )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v25 + 48), v27[3], 0) )
        {
          if ( a4 != 0x10000 )
            goto LABEL_67;
          goto LABEL_69;
        }
        v27 = (_QWORD *)*v27;
        v25 = a2;
      }
    }
  }
  *(_QWORD *)(*a5 + 32LL) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(*a5 + 24LL) = *(_QWORD *)(v25 + 48);
  v28 = FsRtlpOplockEnqueueRH(Oplock + 56, *a5, v25);
  v10 = v28;
  if ( v28 < 0 )
  {
    if ( a4 != 0x10000 )
    {
      *(_DWORD *)(a3 + 48) = v28;
      IofCompleteRequest((PIRP)a3, 1);
    }
  }
  else
  {
    if ( a4 == 0x10000 )
    {
      v34 = (_QWORD *)(*a5 + 56LL);
      v35 = (_QWORD *)(Oplock + 120);
      v33 = *(_QWORD *)(Oplock + 120);
      if ( *(_QWORD *)(v33 + 8) != Oplock + 120 )
        __fastfail(3u);
      *v34 = v33;
      v34[1] = v35;
      *(_QWORD *)(v33 + 8) = v34;
      *v35 = v34;
      v10 = 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(*a5 + 40LL) = CurrentThread;
      ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 40LL), 0x746C6644u);
      *(_QWORD *)(*a5 + 16LL) = a3;
      v67 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v67 + 3) |= 1u;
      v10 = 259;
      *(_DWORD *)(a3 + 48) = 0;
      *(_QWORD *)(a3 + 56) = Oplock;
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 24LL), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v32) = !a6 || !a7;
        LOBYTE(v31) = 1;
        FsRtlpCancelOplockRHIrp(a3, v31, v32);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v10 = 259;
      }
    }
    *a5 = 0LL;
    FsRtlpComputeShareableOplockState(Oplock, v33, v29, v30);
    if ( a4 == 0x10000 )
      *(_DWORD *)(Oplock + 144) |= 0x10000u;
  }
LABEL_148:
  if ( v11 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v10;
}

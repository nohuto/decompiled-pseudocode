/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x140023680
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401E818C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14049062C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14000EFA8 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpComputeShareableOplockState @ 0x140023F70 (FsRtlpComputeShareableOplockState.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     FsRtlpOplockEnqueueRH @ 0x1400242F4 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400246D8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x140024C74 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140024CE4 (FsRtlpClearOwner.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140025124 (FsRtlpCallerIsAtomicRequestor.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     FsRtlpOplockKeysEqual @ 0x1400874F0 (FsRtlpOplockKeysEqual.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140108A6C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E7FC8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1401E842C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140492158 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140577138 (FsRtlpAllocateOplock.c)
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
  __int64 *i; // r13
  _QWORD *v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  _QWORD *v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 *v29; // rsi
  int v30; // ecx
  __int64 *v31; // rcx
  _QWORD *v32; // rsi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  IRP *v35; // r14
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  _QWORD *v40; // r14
  __int64 v41; // rsi
  _QWORD *v42; // r15
  _QWORD *j; // r14
  int v44; // eax
  __int64 *k; // r14
  __int64 v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 *v51; // rsi
  _QWORD *v52; // r14
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+50h] [rbp-58h]
  __int64 v56; // [rsp+58h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-48h]
  __int64 v58; // [rsp+68h] [rbp-40h]

  v10 = 0;
  FastMutex = 0LL;
  v11 = 0;
  v12 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock();
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
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v14 & 0x20000) != 0 )
    {
      v32 = P;
      FsRtlpOplockDequeueRH(P);
      v33 = v32[7];
      v34 = (_QWORD *)v32[8];
      if ( *(_QWORD **)(v33 + 8) != v32 + 7 || (_QWORD *)*v34 != v32 + 7 )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v32[5] )
        FsRtlpClearOwner(Oplock, v32);
      ExFreePoolWithTag(v32, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_59;
    }
    for ( i = *(__int64 **)(Oplock + 88); i != (__int64 *)(Oplock + 88); i = (__int64 *)*i )
    {
      v31 = i;
      if ( !*((_BYTE *)i + 53) || a4 != 12288 )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v31);
      }
    }
    v16 = P;
    FsRtlpOplockDequeueRH(P);
    v17 = v16[7];
    v18 = (_QWORD *)v16[8];
    if ( *(_QWORD **)(v17 + 8) != v16 + 7 || (_QWORD *)*v18 != v16 + 7 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v16[5] )
      FsRtlpClearOwner(Oplock, v16);
    ExFreePoolWithTag(v16, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v12 = 0;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_151;
  }
  if ( !a7 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
  {
    if ( a4 == 0x10000 )
    {
      v10 = -1073739511;
      goto LABEL_151;
    }
    goto LABEL_59;
  }
  if ( a4 != 12288 && a4 != 0x10000 )
  {
    if ( a4 == 16 )
    {
      v36 = *(_DWORD *)(Oplock + 144);
      if ( (v36 & 1) == 0 )
      {
        v37 = v36 & 0x1F0FFDF;
        if ( v37 != 16 && v37 != 4096 && v37 != 4112 )
          goto LABEL_59;
      }
    }
    else if ( a4 != 4096 )
    {
      v35 = (IRP *)a3;
      goto LABEL_118;
    }
    if ( a7 )
    {
      v41 = a2;
LABEL_110:
      v35 = (IRP *)a3;
      v56 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v56 + 3) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v47 = (_QWORD *)(a3 + 168);
      v48 = (_QWORD *)(Oplock + 40);
      v49 = *(_QWORD *)(Oplock + 40);
      if ( *(_QWORD *)(v49 + 8) != Oplock + 40 )
        __fastfail(3u);
      *v47 = v49;
      *(_QWORD *)(a3 + 176) = v48;
      *(_QWORD *)(v49 + 8) = v47;
      *v48 = v47;
      *(_QWORD *)(a3 + 56) = Oplock;
      FsRtlpComputeShareableOplockState(Oplock);
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(v41 + 48), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v50) = 1;
        FsRtlpCancelReadOnlyOplockIrp(a3, v50);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v12 = 1;
      v10 = 259;
LABEL_118:
      if ( v12 )
        goto LABEL_151;
      goto LABEL_60;
    }
    v38 = *(_DWORD *)(Oplock + 144);
    if ( (v38 & 1) != 0
      || (v39 = v38 & 0x1F0FFDF, (v38 & 0x1F0FFDF) == 0x10)
      || v39 == 4096
      || v39 == 4112
      || v39 == 12288
      || v39 == 45056
      || v39 == 1060864
      || v39 == 8400896
      || (v38 & 0x10000) != 0 )
    {
      v40 = (_QWORD *)(Oplock + 56);
      if ( (_QWORD *)*v40 == v40 && *(_QWORD *)(Oplock + 72) == Oplock + 72 )
      {
        v41 = a2;
      }
      else
      {
        v42 = (_QWORD *)*v40;
        v41 = a2;
        while ( v42 != v40 )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v42[3], 0LL) )
            goto LABEL_59;
          v42 = (_QWORD *)*v42;
        }
        for ( j = *(_QWORD **)(Oplock + 72); j != (_QWORD *)(Oplock + 72); j = (_QWORD *)*j )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0LL) )
            goto LABEL_59;
        }
      }
      v44 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v44 == 16 || v44 == 4096 || v44 == 4112 || v44 == 45056 )
      {
        for ( k = *(__int64 **)(Oplock + 40); k != (__int64 *)(Oplock + 40); k = (__int64 *)*k )
        {
          v46 = k[2];
          if ( (*(_DWORD *)(v46 + 24) == 590400 || *(_QWORD *)(v46 + 48) != *(_QWORD *)(v41 + 48))
            && (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v41 + 48), *(_QWORD *)(v46 + 48), 0LL) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)k[1], 533LL, a4 & 0x7000);
            goto LABEL_110;
          }
        }
      }
      goto LABEL_110;
    }
LABEL_59:
    v35 = (IRP *)a3;
LABEL_60:
    v35->IoStatus.Status = -1073741598;
    IofCompleteRequest(v35, 1);
LABEL_61:
    v10 = -1073741598;
    goto LABEL_151;
  }
  if ( !a7
    && (v19 = *(_DWORD *)(Oplock + 144), (v19 & 1) == 0)
    && (v30 = v19 & 0x1F0FFDF, (v19 & 0x1F0FFDF) != 0x3000)
    && v30 != 4096
    && v30 != 45056
    && v30 != 1060864
    && v30 != 8400896
    && (v19 & 0x10000) == 0
    || (v20 = a2, *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL)) )
  {
    if ( a4 == 0x10000 )
    {
      v10 = -1073739511;
      goto LABEL_151;
    }
    goto LABEL_59;
  }
  if ( !a7 )
  {
    v21 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v21 == 4096 || v21 == 45056 )
    {
      v51 = *(__int64 **)(Oplock + 40);
      while ( v51 != (__int64 *)(Oplock + 40) )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v20 + 48), *(_QWORD *)(v51[2] + 48), 0LL) )
        {
          if ( a4 == 0x10000 )
          {
            v10 = -1073741597;
            goto LABEL_151;
          }
          FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)v51[1], 533LL, 12288LL);
          v20 = a2;
          break;
        }
        v51 = (__int64 *)*v51;
        v20 = a2;
      }
    }
    if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
    {
      v29 = *(__int64 **)(Oplock + 56);
      while ( v29 != (__int64 *)(Oplock + 56) )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v20 + 48), v29[3], 0LL) && !v29[7] )
        {
          if ( a4 == 0x10000 )
          {
            v10 = -1073741597;
            goto LABEL_151;
          }
          FsRtlpRemoveAndBreakRHIrp(*(PVOID *)v29[1], 12288, 0, 0, 0);
          v20 = a2;
          break;
        }
        v29 = (__int64 *)*v29;
        v20 = a2;
      }
    }
    v22 = (_QWORD *)(Oplock + 72);
    if ( (_QWORD *)*v22 != v22 )
    {
      v52 = (_QWORD *)*v22;
      while ( v52 != v22 )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v20 + 48), v52[3], 0LL) )
        {
          if ( a4 != 0x10000 )
            goto LABEL_59;
          goto LABEL_61;
        }
        v52 = (_QWORD *)*v52;
        v20 = a2;
      }
    }
  }
  *(_QWORD *)(*a5 + 32LL) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(*a5 + 24LL) = *(_QWORD *)(v20 + 48);
  v23 = FsRtlpOplockEnqueueRH(Oplock + 56, *a5);
  v10 = v23;
  if ( v23 < 0 )
  {
    if ( a4 != 0x10000 )
    {
      *(_DWORD *)(a3 + 48) = v23;
      IofCompleteRequest((PIRP)a3, 1);
    }
  }
  else
  {
    if ( a4 == 0x10000 )
    {
      v26 = (_QWORD *)(*a5 + 56LL);
      v27 = (_QWORD *)(Oplock + 120);
      v28 = *(_QWORD *)(Oplock + 120);
      if ( *(_QWORD *)(v28 + 8) != Oplock + 120 )
        __fastfail(3u);
      *v26 = v28;
      v26[1] = v27;
      *(_QWORD *)(v28 + 8) = v26;
      *v27 = v26;
      v10 = 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(*a5 + 40LL) = CurrentThread;
      ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 40LL), 0x746C6644u);
      *(_QWORD *)(*a5 + 16LL) = a3;
      v58 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v58 + 3) |= 1u;
      v10 = 259;
      *(_DWORD *)(a3 + 48) = 0;
      *(_QWORD *)(a3 + 56) = Oplock;
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 24LL), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        if ( a6 && a7 )
          v25 = 0LL;
        else
          LOBYTE(v25) = 1;
        LOBYTE(v24) = 1;
        FsRtlpCancelOplockRHIrp(a3, v24, v25);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v10 = 259;
      }
    }
    *a5 = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a4 == 0x10000 )
      *(_DWORD *)(Oplock + 144) |= 0x10000u;
  }
LABEL_151:
  if ( v11 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v10;
}

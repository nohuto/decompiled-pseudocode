/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x140051EF4
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401E3D30 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpCancelOplockRHIrp @ 0x140019134 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140031310 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpOplockDequeueRH @ 0x14004FB70 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockKeysEqual @ 0x140050C14 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpComputeShareableOplockState @ 0x140052820 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockEnqueueRH @ 0x140052940 (FsRtlpOplockEnqueueRH.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140053174 (FsRtlpCallerIsAtomicRequestor.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E3B98 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x140433450 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x14048C890 (FsRtlpOplockUpperLowerCompatible.c)
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
  unsigned int v12; // ebx
  __int64 Oplock; // rdi
  char v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r11d
  _QWORD *i; // r14
  _QWORD *v19; // r14
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // r8
  int v23; // r10d
  int v24; // ecx
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rbx
  int v28; // eax
  char v29; // al
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // ecx
  _QWORD *v35; // rbx
  int v36; // eax
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  int v41; // eax
  __int64 *v42; // rbx
  char v43; // al
  int v44; // eax
  __int64 *n; // rbx
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  int v48; // eax
  _QWORD *v49; // rbx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 *v52; // rbx
  char v53; // al
  _QWORD *j; // r14
  char v55; // al
  _QWORD *k; // r14
  _QWORD *m; // rbx
  char v58; // al
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  __int64 v63; // [rsp+60h] [rbp-48h]
  __int64 v64; // [rsp+68h] [rbp-40h]
  char v65; // [rsp+B0h] [rbp+8h]

  v12 = 0;
  FastMutex = 0LL;
  v65 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock();
    *a1 = Oplock;
  }
  v14 = a7;
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v65 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v17 & 0x20000) != 0 )
    {
      v49 = P;
      FsRtlpOplockDequeueRH((__int64)P, v15, v16);
      v50 = v49[7];
      v51 = (_QWORD *)v49[8];
      if ( *(_QWORD **)(v50 + 8) != v49 + 7 || (_QWORD *)*v51 != v49 + 7 )
        __fastfail(3u);
      *v51 = v50;
      *(_QWORD *)(v50 + 8) = v51;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v49[5] )
        FsRtlpClearOwner(Oplock, (__int64)v49);
      ExFreePoolWithTag(v49, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_79;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v47 = i;
      v15 = *(_QWORD *)(i[2] + 184LL);
      if ( *(_BYTE *)v15 != 13 || *(_DWORD *)(v15 + 24) != 589844 || a4 != 12288 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v47);
      }
    }
    v19 = P;
    FsRtlpOplockDequeueRH((__int64)P, v15, v16);
    v20 = v19[7];
    v21 = (_QWORD *)v19[8];
    if ( *(_QWORD **)(v20 + 8) != v19 + 7 || (_QWORD *)*v21 != v19 + 7 )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v19[5] )
      FsRtlpClearOwner(Oplock, (__int64)v19);
    ExFreePoolWithTag(v19, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v14 = a7;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
LABEL_105:
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_41;
  }
  if ( !v14 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
  {
LABEL_68:
    if ( a4 == 0x10000 )
    {
      v12 = -1073739511;
      goto LABEL_149;
    }
    goto LABEL_79;
  }
  switch ( a4 )
  {
    case 0x10u:
      v33 = *(_DWORD *)(Oplock + 144);
      if ( (v33 & 1) == 0 )
      {
        v44 = v33 & 0x1F0FFDF;
        if ( v44 != 16 && v44 != 4096 && v44 != 4112 )
          goto LABEL_79;
      }
      break;
    case 0x1000u:
      break;
    case 0x3000u:
    case 0x10000u:
      if ( v14
        || (v24 = *(_DWORD *)(Oplock + 144), (v24 & 1) != 0)
        || (v41 = v24 & 0x1F0FFDF, (v24 & 0x1F0FFDF) == 0x3000)
        || v41 == 4096
        || v41 == 45056
        || v41 == 1060864
        || v41 == 8400896
        || (v24 & 0x10000) != 0 )
      {
        v25 = a2;
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) == (_BYTE)v23 )
        {
          if ( !v14 )
          {
            v26 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
            if ( v26 == 4096 || v26 == 45056 )
            {
              v52 = *(__int64 **)(Oplock + 40);
              while ( v52 != (__int64 *)(Oplock + 40) )
              {
                v53 = FsRtlpOplockKeysEqual(*(_QWORD *)(v25 + 48), *(_QWORD *)(v52[2] + 48), 0);
                LOBYTE(v23) = 0;
                if ( v53 )
                {
                  if ( a4 != 0x10000 )
                  {
                    FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)v52[1], 533, 0x3000u);
                    v25 = a2;
                    break;
                  }
LABEL_111:
                  v12 = -1073741597;
                  goto LABEL_149;
                }
                v52 = (__int64 *)*v52;
                v25 = a2;
              }
            }
            if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
            {
              v42 = *(__int64 **)(Oplock + 56);
              while ( v42 != (__int64 *)(Oplock + 56) )
              {
                v43 = FsRtlpOplockKeysEqual(*(_QWORD *)(v25 + 48), v42[3], 0);
                LOBYTE(v23) = 0;
                if ( v43 && !v42[7] )
                {
                  if ( a4 == 0x10000 )
                    goto LABEL_111;
                  FsRtlpRemoveAndBreakRHIrp(*(PVOID *)v42[1], Oplock, 1, 533, 0x3000u, 0, 0, 0);
                  break;
                }
                v42 = (__int64 *)*v42;
                v25 = a2;
              }
            }
            v27 = (_QWORD *)(Oplock + 72);
            if ( (_QWORD *)*v27 != v27 )
            {
              for ( j = (_QWORD *)*v27; j != v27; j = (_QWORD *)*j )
              {
                v55 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0);
                LOBYTE(v23) = 0;
                if ( v55 )
                {
                  if ( a4 != 0x10000 )
                    goto LABEL_79;
                  v12 = -1073741598;
                  goto LABEL_149;
                }
              }
            }
          }
          *(_QWORD *)(*a5 + 32LL) = KeGetCurrentThread()->ApcState.Process;
          *(_QWORD *)(*a5 + 24LL) = *(_QWORD *)(a2 + 48);
          v28 = FsRtlpOplockEnqueueRH(Oplock + 56, *a5, v22);
          v12 = v28;
          LOBYTE(v23) = 0;
          if ( v28 >= 0 )
          {
            if ( a4 == 0x10000 )
            {
              v30 = (_QWORD *)(*a5 + 56LL);
              v31 = (_QWORD *)(Oplock + 120);
              v32 = *(_QWORD *)(Oplock + 120);
              if ( *(_QWORD *)(v32 + 8) != Oplock + 120 )
                __fastfail(3u);
              *v30 = v32;
              v30[1] = v31;
              *(_QWORD *)(v32 + 8) = v30;
              *v31 = v30;
              v12 = 0;
            }
            else
            {
              CurrentThread = KeGetCurrentThread();
              *(_QWORD *)(*a5 + 40LL) = CurrentThread;
              ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 40LL), 0x746C6644u);
              *(_QWORD *)(*a5 + 16LL) = a3;
              v63 = *(_QWORD *)(a3 + 184);
              *(_BYTE *)(v63 + 3) |= 1u;
              v12 = 259;
              *(_DWORD *)(a3 + 48) = 0;
              *(_QWORD *)(a3 + 56) = Oplock;
              if ( a6 )
                ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 24LL), 0x746C6644u);
              *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
              v29 = 0;
              if ( *(_BYTE *)(a3 + 68) )
              {
                if ( !a6 || !a7 )
                  v29 = 1;
                FsRtlpCancelOplockRHIrp(a3, 1, v29);
              }
              else
              {
                _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
                KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
                v12 = 259;
              }
            }
            *a5 = 0LL;
            FsRtlpComputeShareableOplockState(Oplock);
            if ( a4 == 0x10000 )
              *(_DWORD *)(Oplock + 144) |= 0x10000u;
            goto LABEL_41;
          }
          if ( a4 == 0x10000 )
            goto LABEL_149;
          *(_DWORD *)(a3 + 48) = v28;
          goto LABEL_105;
        }
      }
      goto LABEL_68;
    default:
      v58 = 0;
      goto LABEL_61;
  }
  if ( v14 )
  {
LABEL_55:
    v64 = *(_QWORD *)(a3 + 184);
    *(_BYTE *)(v64 + 3) |= 1u;
    *(_DWORD *)(a3 + 48) = v23;
    v37 = (_QWORD *)(a3 + 168);
    v38 = (_QWORD *)(Oplock + 40);
    v39 = *(_QWORD *)(Oplock + 40);
    if ( *(_QWORD *)(v39 + 8) != Oplock + 40 )
      __fastfail(3u);
    *v37 = v39;
    *(_QWORD *)(a3 + 176) = v38;
    *(_QWORD *)(v39 + 8) = v37;
    *v38 = v37;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
    *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v40) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v40);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v58 = 1;
    v12 = 259;
    LOBYTE(v23) = 0;
LABEL_61:
    if ( v58 )
      goto LABEL_149;
    goto LABEL_79;
  }
  v34 = *(_DWORD *)(Oplock + 144);
  if ( (v34 & 1) != 0
    || (v48 = v34 & 0x1F0FFDF, (v34 & 0x1F0FFDF) == 0x10)
    || v48 == 4096
    || v48 == 4112
    || v48 == 12288
    || v48 == 45056
    || v48 == 1060864
    || v48 == 8400896
    || (v34 & 0x10000) != 0 )
  {
    v35 = (_QWORD *)(Oplock + 56);
    if ( (_QWORD *)*v35 != v35 || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
    {
      for ( k = (_QWORD *)*v35; k != v35; k = (_QWORD *)*k )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), k[3], 0) )
          goto LABEL_79;
      }
      for ( m = *(_QWORD **)(Oplock + 72); m != (_QWORD *)(Oplock + 72); m = (_QWORD *)*m )
      {
        if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0) )
          goto LABEL_79;
      }
      v23 = 0;
    }
    v36 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v36 == 16 || v36 == 4096 || v36 == 4112 || v36 == 45056 )
    {
      for ( n = *(__int64 **)(Oplock + 40); n != (__int64 *)(Oplock + 40); n = (__int64 *)*n )
      {
        v46 = n[2];
        if ( (*(_DWORD *)(v46 + 24) == 590400 || *(_QWORD *)(v46 + 48) != *(_QWORD *)(a2 + 48))
          && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v46 + 48), 0) )
        {
          FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD **)n[1], 533, a4 & 0x7000);
          break;
        }
      }
      v23 = 0;
    }
    goto LABEL_55;
  }
LABEL_79:
  *(_DWORD *)(a3 + 48) = -1073741598;
  IofCompleteRequest((PIRP)a3, 1);
  v12 = -1073741598;
LABEL_41:
  LOBYTE(v23) = 0;
LABEL_149:
  if ( v65 != (_BYTE)v23 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v12;
}

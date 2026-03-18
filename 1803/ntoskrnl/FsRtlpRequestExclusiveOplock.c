/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x14014A828
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404E2ABC (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140065254 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpClearOwner @ 0x1400653C4 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140065408 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x140066EE0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x14006758C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x140067F00 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140144A0C (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14015F014 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140225B9C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1404E238C (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1404E2F44 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r15d
  __int64 v9; // r13
  unsigned int v11; // edi
  __int64 Oplock; // r14
  __int64 v13; // r9
  CCHAR v14; // r10
  int v15; // edx
  int v16; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v18; // ebx
  CCHAR v19; // dl
  int v20; // r11d
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *i; // rbx
  void *v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  bool v29; // zf
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 *v34; // r13
  __int64 *m; // r15
  __int64 n; // rax
  __int64 *v37; // r15
  _QWORD *v38; // r13
  _QWORD *j; // r15
  _QWORD *k; // rax
  _QWORD *v41; // r15
  PVOID P; // [rsp+48h] [rbp-70h] BYREF
  __int64 v44; // [rsp+50h] [rbp-68h]
  __int64 v45; // [rsp+58h] [rbp-60h]
  __int64 v46; // [rsp+60h] [rbp-58h]
  __int64 v47; // [rsp+68h] [rbp-50h]
  __int64 v48; // [rsp+70h] [rbp-48h]
  __int64 v49; // [rsp+78h] [rbp-40h]

  v7 = a4;
  v9 = a2;
  v11 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v45 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)v9 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v9 + 48), &P) )
  {
    if ( (v20 & 0x20000) != 0 )
    {
      v21 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v22 = v21[7];
      v23 = (_QWORD *)v21[8];
      if ( *(_QWORD **)(v22 + 8) != v21 + 7 || (_QWORD *)*v23 != v21 + 7 )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v21[5] )
        FsRtlpClearOwner(Oplock, (__int64)v21);
      ExFreePoolWithTag(v21, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
LABEL_32:
      v18 = -1073741598;
LABEL_34:
      v19 = 1;
      goto LABEL_20;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v25 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v25);
      }
    }
    v26 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v27 = v26[7];
    v28 = (_QWORD *)v26[8];
    if ( *(_QWORD **)(v27 + 8) != v26 + 7 || (_QWORD *)*v28 != v26 + 7 )
      __fastfail(3u);
    *v28 = v27;
    *(_QWORD *)(v27 + 8) = v28;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v26[5] )
      FsRtlpClearOwner(Oplock, (__int64)v26);
    ExFreePoolWithTag(v26, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v7 = a4;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, v14);
    goto LABEL_106;
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(v9 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_106;
  }
  v15 = *(_DWORD *)(Oplock + 144);
  if ( (v15 & 0x91) == 0 )
  {
    if ( (*(_DWORD *)(Oplock + 144) & 0x1F00F00) != 0
      || (*(_DWORD *)(Oplock + 144) & 0x7000) == 0
      || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
    {
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_55;
      goto LABEL_18;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_55;
    if ( (a6 & 0x7000) != 0 )
    {
      v30 = *(_QWORD *)(v9 + 48);
      if ( !*(_BYTE *)(v30 + 73) || (a6 & 0x2000) == 0 )
      {
        v31 = v15 & 0x1F0FFDF;
        if ( v31 == 4096 )
        {
          if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
            goto LABEL_56;
          v38 = (_QWORD *)(Oplock + 40);
          for ( j = *(_QWORD **)(Oplock + 40); j != v38; j = (_QWORD *)*j )
          {
            v48 = j[2];
            if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v48 + 48), 0) )
              goto LABEL_32;
          }
          v14 = 1;
          if ( a4 > 1 && (a5 & 1) == 0 )
            goto LABEL_56;
          for ( k = (_QWORD *)*v38; ; k = (_QWORD *)*v41 )
          {
            v44 = (__int64)k;
            if ( k == v38 )
              break;
            v41 = (_QWORD *)k[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp(*v41, 533LL, a6 & 0x7000, v13);
          }
        }
        else
        {
          if ( v31 != 12288 )
          {
            if ( (v31 == 20544 || v31 == 28736 && a6 == 28736) && ((a6 - 20544) & 0xFFFFDFFF) == 0 )
            {
              if ( !FsRtlpOplockKeysEqual(v30, *(_QWORD *)(Oplock + 8), 0) )
                goto LABEL_32;
              v46 = *(_QWORD *)Oplock;
              v32 = v46;
              *(_BYTE *)(v32 + 69) = KeAcquireQueuedSpinLock(7uLL);
              _InterlockedExchange64((volatile __int64 *)(v32 + 104), 0LL);
              KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v32 + 69));
              if ( *(_BYTE *)(v46 + 68) )
              {
                *(_QWORD *)(v32 + 56) = 0LL;
                *(_DWORD *)(v32 + 48) = -1073741536;
              }
              else
              {
                v33 = *(_QWORD *)(v46 + 24);
                v47 = v33;
                *(_QWORD *)v33 = 0LL;
                *(_QWORD *)(v33 + 8) = 0LL;
                *(_QWORD *)(v33 + 16) = 0LL;
                *(_DWORD *)v33 = 1572865;
                *(_DWORD *)(v33 + 4) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
                *(_DWORD *)(v33 + 8) = (a6 >> 12) & 7;
                *(_QWORD *)(v32 + 56) = 24LL;
                *(_DWORD *)(v32 + 48) = 533;
              }
              IofCompleteRequest((PIRP)v32, 1);
              *(_QWORD *)Oplock = 0LL;
              ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
              *(_QWORD *)(Oplock + 8) = 0LL;
              goto LABEL_15;
            }
            goto LABEL_56;
          }
          if ( a6 != 28736 )
            goto LABEL_56;
          v34 = (__int64 *)(Oplock + 56);
          for ( m = *(__int64 **)(Oplock + 56); m != v34; m = (__int64 *)*m )
          {
            if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0) )
              goto LABEL_32;
            if ( m[7] )
            {
              v18 = -1073741597;
              goto LABEL_34;
            }
          }
          v14 = 1;
          if ( a4 > 1 && (a5 & 1) == 0 )
            goto LABEL_56;
          for ( n = *v34; ; n = *v37 )
          {
            v44 = n;
            if ( (__int64 *)n == v34 )
              break;
            v37 = *(__int64 **)(n + 8);
            FsRtlpRemoveAndBreakRHIrp(*v37, Oplock, 1, 533, 0x7000u, 0, 0, 0);
          }
        }
        v9 = a2;
        goto LABEL_15;
      }
    }
LABEL_56:
    v18 = -1073741598;
LABEL_19:
    v19 = v14;
LABEL_20:
    *(_DWORD *)(a3 + 48) = v18;
    IofCompleteRequest((PIRP)a3, v19);
    goto LABEL_21;
  }
  if ( (v15 & 0x10) != 0 && (a6 & 0x7000) != 0 )
  {
    v29 = (a6 & 0x10000) == 0;
    goto LABEL_54;
  }
  if ( (v15 & 0x80u) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), *(_QWORD *)(Oplock + 8), 0) )
  {
    if ( (a6 & 0x10000) == 0 )
      goto LABEL_32;
LABEL_55:
    v11 = -1073739511;
    goto LABEL_106;
  }
  v16 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
  if ( v16 == 16 || v16 == 4096 || v16 == 4112 )
    FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL, v13);
  v14 = 1;
  if ( v7 > 1 && (*(_BYTE *)(Oplock + 144) & 1) != 0 && (a5 & 1) == 0 )
  {
LABEL_18:
    v18 = -1073741598;
    if ( !a3 )
    {
LABEL_21:
      v11 = v18;
      goto LABEL_106;
    }
    goto LABEL_19;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) && (a6 & 0x2000) != 0 )
  {
    v29 = (a6 & 0x10000) == 0;
LABEL_54:
    if ( !v29 )
      goto LABEL_55;
    goto LABEL_56;
  }
LABEL_15:
  *(_QWORD *)Oplock = a3;
  *(_QWORD *)(Oplock + 8) = *(_QWORD *)(v9 + 48);
  FsRtlpClearOwner(Oplock, 0LL);
  *(_QWORD *)(Oplock + 16) = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(Oplock + 24) = CurrentThread;
  ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
  *(_BYTE *)(Oplock + 32) = 0;
  *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x20;
  ObfReferenceObjectWithTag(*(PVOID *)(v9 + 48), 0x746C6644u);
  v49 = *(_QWORD *)(a3 + 184);
  *(_BYTE *)(v49 + 3) |= 1u;
  *(_QWORD *)(a3 + 56) = Oplock;
  *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
  if ( *(_BYTE *)(a3 + 68) )
  {
    FsRtlpCancelExclusiveIrp(a3, 1, 1);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
  }
  v11 = 259;
LABEL_106:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}

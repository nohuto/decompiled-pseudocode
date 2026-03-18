/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x1401490F0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14049062C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14000EFA8 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpComputeShareableOplockState @ 0x140023F70 (FsRtlpComputeShareableOplockState.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400246D8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x140024C74 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140024CE4 (FsRtlpClearOwner.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140025124 (FsRtlpCallerIsAtomicRequestor.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x1400874F0 (FsRtlpOplockKeysEqual.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401E7EA0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1401E842C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140492158 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x140577138 (FsRtlpAllocateOplock.c)
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
  unsigned int v7; // r12d
  unsigned int v11; // esi
  __int64 Oplock; // r14
  CCHAR v13; // r10
  int v14; // edx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r11d
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 *i; // rbx
  __int64 *v24; // rcx
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  int v29; // edx
  PIRP v30; // rbx
  PIRP v31; // r8
  struct _IRP *MasterIrp; // rcx
  _QWORD *v33; // rsi
  _QWORD *m; // rbx
  _QWORD *n; // rax
  _QWORD **v36; // rbx
  _QWORD *v37; // rsi
  _QWORD *j; // rbx
  _QWORD *k; // rax
  _QWORD *v40; // rbx
  PVOID P; // [rsp+48h] [rbp-70h] BYREF
  int v43; // [rsp+50h] [rbp-68h]
  _QWORD *v44; // [rsp+58h] [rbp-60h]
  __int64 v45; // [rsp+60h] [rbp-58h]
  PIRP Irp; // [rsp+68h] [rbp-50h]
  struct _IRP *v47; // [rsp+70h] [rbp-48h]
  __int64 v48; // [rsp+78h] [rbp-40h]
  __int64 v49; // [rsp+80h] [rbp-38h]

  v7 = a4;
  v11 = 0;
  v43 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v45 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v19 & 0x20000) != 0 )
    {
      v20 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v21 = v20[7];
      v22 = (_QWORD *)v20[8];
      if ( *(_QWORD **)(v21 + 8) != v20 + 7 || (_QWORD *)*v22 != v20 + 7 )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v20[5] )
        FsRtlpClearOwner(Oplock, (__int64)v20);
      ExFreePoolWithTag(v20, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_31;
    }
    for ( i = *(__int64 **)(Oplock + 88); i != (__int64 *)(Oplock + 88); i = (__int64 *)*i )
    {
      v24 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v24);
      }
    }
    v25 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v26 = v25[7];
    v27 = (_QWORD *)v25[8];
    if ( *(_QWORD **)(v26 + 8) != v25 + 7 || (_QWORD *)*v27 != v25 + 7 )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v25[5] )
      FsRtlpClearOwner(Oplock, (__int64)v25);
    ExFreePoolWithTag(v25, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, v13);
    goto LABEL_106;
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_106;
  }
  v14 = *(_DWORD *)(Oplock + 144);
  if ( (v14 & 0x91) != 0 )
  {
    if ( (v14 & 0x10) == 0 )
      goto LABEL_8;
    if ( (a6 & 0x7000) == 0 )
    {
      v7 = a4;
LABEL_8:
      if ( (v14 & 0x80u) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0) )
      {
        if ( (a6 & 0x10000) != 0 )
        {
          v11 = -1073739511;
          goto LABEL_106;
        }
        goto LABEL_31;
      }
      v15 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v15 == 16 || v15 == 4096 || v15 == 4112 )
        FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL);
      v13 = 1;
      if ( v7 <= 1 || (*(_BYTE *)(Oplock + 144) & 1) == 0 || (a5 & 1) != 0 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
        {
          if ( (a6 & 0x10000) != 0 )
          {
            v11 = -1073739511;
            goto LABEL_106;
          }
          goto LABEL_19;
        }
        goto LABEL_15;
      }
      if ( !a3 )
      {
LABEL_20:
        v11 = -1073741598;
        goto LABEL_106;
      }
      goto LABEL_19;
    }
    if ( (a6 & 0x10000) == 0 )
      goto LABEL_19;
LABEL_51:
    v11 = -1073739511;
    goto LABEL_106;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x1F00F00) == 0
    && (*(_DWORD *)(Oplock + 144) & 0x7000) != 0
    && *(_QWORD *)(Oplock + 72) == Oplock + 72 )
  {
    if ( (a6 & 0x10000) == 0 )
    {
      if ( (a6 & 0x7000) != 0 )
      {
        v28 = *(_QWORD *)(a2 + 48);
        if ( !*(_BYTE *)(v28 + 73) || (a6 & 0x2000) == 0 )
        {
          v29 = v14 & 0x1F0FFDF;
          if ( v29 == 4096 )
          {
            if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
              goto LABEL_19;
            v37 = (_QWORD *)(Oplock + 40);
            for ( j = *(_QWORD **)(Oplock + 40); j != v37; j = (_QWORD *)*j )
            {
              v48 = j[2];
              if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v48 + 48), 0) )
                goto LABEL_31;
            }
            v13 = 1;
            if ( a4 > 1 && (a5 & 1) == 0 )
              goto LABEL_19;
            for ( k = (_QWORD *)*v37; ; k = (_QWORD *)*v40 )
            {
              v44 = k;
              if ( k == v37 )
                break;
              v40 = (_QWORD *)k[1];
              FsRtlpRemoveAndCompleteReadOnlyIrp(*v40, 533LL, a6 & 0x7000);
            }
          }
          else if ( v29 == 12288 )
          {
            if ( a6 != 28736 )
              goto LABEL_19;
            v33 = (_QWORD *)(Oplock + 56);
            for ( m = *(_QWORD **)(Oplock + 56); m != v33; m = (_QWORD *)*m )
            {
              if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0) )
                goto LABEL_31;
              if ( m[7] )
              {
                v11 = -1073741597;
                *(_DWORD *)(a3 + 48) = -1073741597;
                IofCompleteRequest((PIRP)a3, 1);
                goto LABEL_106;
              }
            }
            v13 = 1;
            if ( a4 > 1 && (a5 & 1) == 0 )
              goto LABEL_19;
            for ( n = (_QWORD *)*v33; ; n = *v36 )
            {
              v44 = n;
              if ( n == v33 )
                break;
              v36 = (_QWORD **)n[1];
              FsRtlpRemoveAndBreakRHIrp(*v36, Oplock, 1, 533, 0x7000u, 0, 0, 0);
            }
          }
          else
          {
            if ( v29 != 20544 && (v29 != 28736 || a6 != 28736) || ((a6 - 20544) & 0xFFFFDFFF) != 0 )
              goto LABEL_19;
            if ( !FsRtlpOplockKeysEqual(v28, *(_QWORD *)(Oplock + 8), 0) )
            {
LABEL_31:
              *(_DWORD *)(a3 + 48) = -1073741598;
              IofCompleteRequest((PIRP)a3, 1);
              v11 = -1073741598;
              goto LABEL_106;
            }
            Irp = *(PIRP *)Oplock;
            v30 = Irp;
            v30->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v30->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v30->CancelIrql);
            v31 = Irp;
            if ( Irp->Cancel )
            {
              Irp->IoStatus.Information = 0LL;
              v31->IoStatus.Status = -1073741536;
            }
            else
            {
              MasterIrp = Irp->AssociatedIrp.MasterIrp;
              v47 = MasterIrp;
              *(_QWORD *)&MasterIrp->Type = 0LL;
              MasterIrp->MdlAddress = 0LL;
              *(_QWORD *)&MasterIrp->Flags = 0LL;
              *(_DWORD *)&MasterIrp->Type = 1572865;
              *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
              LODWORD(MasterIrp->MdlAddress) = (a6 >> 12) & 7;
              v31->IoStatus.Information = 24LL;
              v31->IoStatus.Status = 533;
            }
            IofCompleteRequest(v31, 1);
            *(_QWORD *)Oplock = 0LL;
            ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
            *(_QWORD *)(Oplock + 8) = 0LL;
          }
LABEL_15:
          *(_QWORD *)Oplock = a3;
          *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
          FsRtlpClearOwner(Oplock, 0LL);
          *(_QWORD *)(Oplock + 16) = KeGetCurrentThread()->ApcState.Process;
          CurrentThread = KeGetCurrentThread();
          *(_QWORD *)(Oplock + 24) = CurrentThread;
          ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
          *(_BYTE *)(Oplock + 32) = 0;
          *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x20;
          ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
          v49 = *(_QWORD *)(a3 + 184);
          *(_BYTE *)(v49 + 3) |= 1u;
          *(_QWORD *)(a3 + 56) = Oplock;
          *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
          if ( *(_BYTE *)(a3 + 68) )
          {
            LOBYTE(v18) = 1;
            LOBYTE(v17) = 1;
            FsRtlpCancelExclusiveIrp(a3, v17, v18);
          }
          else
          {
            _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
            KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
          }
          v11 = 259;
          goto LABEL_106;
        }
      }
LABEL_19:
      *(_DWORD *)(a3 + 48) = -1073741598;
      IofCompleteRequest((PIRP)a3, v13);
      goto LABEL_20;
    }
    goto LABEL_51;
  }
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_51;
  if ( a3 )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, v13);
  }
  v11 = -1073741598;
  v43 = -1073741598;
LABEL_106:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}

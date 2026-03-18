/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x1400192B0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140031310 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpOplockDequeueRH @ 0x14004FB70 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockKeysEqual @ 0x140050C14 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpComputeShareableOplockState @ 0x140052820 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140053174 (FsRtlpCallerIsAtomicRequestor.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401318A4 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x140433450 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x14048C890 (FsRtlpOplockUpperLowerCompatible.c)
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
  unsigned int v10; // esi
  __int64 Oplock; // r14
  int v12; // r8d
  CCHAR v13; // r10
  int v14; // edx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // edx
  _QWORD *v21; // rsi
  _QWORD *j; // rbx
  int v23; // r11d
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *i; // rbx
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  PIRP v33; // rbx
  PIRP v34; // r8
  struct _IRP *MasterIrp; // rcx
  _QWORD *k; // rax
  PVOID *v37; // rbx
  _QWORD *v38; // rsi
  _QWORD *m; // rbx
  _QWORD *n; // rax
  _QWORD *v41; // rbx
  PVOID P; // [rsp+48h] [rbp-70h] BYREF
  int v44; // [rsp+50h] [rbp-68h]
  _QWORD *v45; // [rsp+58h] [rbp-60h]
  __int64 v46; // [rsp+60h] [rbp-58h]
  PIRP Irp; // [rsp+68h] [rbp-50h]
  struct _IRP *v48; // [rsp+70h] [rbp-48h]
  __int64 v49; // [rsp+78h] [rbp-40h]
  __int64 v50; // [rsp+80h] [rbp-38h]

  v10 = 0;
  v44 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock();
    *a1 = Oplock;
  }
  v46 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v23 & 0x20000) != 0 )
    {
      v24 = P;
      FsRtlpOplockDequeueRH(P);
      v25 = v24[7];
      v26 = (_QWORD *)v24[8];
      if ( *(_QWORD **)(v25 + 8) != v24 + 7 || (_QWORD *)*v26 != v24 + 7 )
        __fastfail(3u);
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v24[5] )
        FsRtlpClearOwner(Oplock, v24);
      ExFreePoolWithTag(v24, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_28;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v28 = i;
      v29 = *(_QWORD *)(i[2] + 184LL);
      if ( *(_BYTE *)v29 != 13 || *(_DWORD *)(v29 + 24) != 589844 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v28);
      }
    }
    v30 = P;
    FsRtlpOplockDequeueRH(P);
    v31 = v30[7];
    v32 = (_QWORD *)v30[8];
    if ( *(_QWORD **)(v31 + 8) != v30 + 7 || (_QWORD *)*v32 != v30 + 7 )
      __fastfail(3u);
    *v32 = v31;
    *(_QWORD *)(v31 + 8) = v32;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v30[5] )
      FsRtlpClearOwner(Oplock, v30);
    ExFreePoolWithTag(v30, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, v13);
    goto LABEL_105;
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_105;
  }
  v14 = *(_DWORD *)(Oplock + 144);
  if ( (v14 & 0x91) != 0 )
  {
    if ( (a6 & 0x7000) == 0 || (v14 & 0x10) == 0 )
    {
      if ( (v14 & 0x80u) != 0
        && !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0LL) )
      {
        if ( (a6 & 0x10000) != 0 )
        {
          v10 = -1073739511;
          goto LABEL_105;
        }
        goto LABEL_28;
      }
      v15 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v15 == 16 || v15 == 4096 || v15 == 4112 )
        FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL);
      v13 = 1;
      if ( a4 > 1 && (*(_BYTE *)(Oplock + 144) & 1) != 0 && (a5 & 1) == 0 )
      {
        if ( !a3 )
          goto LABEL_59;
        goto LABEL_58;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
      {
        if ( (a6 & 0x10000) != 0 )
        {
          v10 = -1073739511;
          goto LABEL_105;
        }
        goto LABEL_58;
      }
      goto LABEL_15;
    }
    if ( (a6 & 0x10000) != 0 )
    {
LABEL_57:
      v10 = -1073739511;
      goto LABEL_105;
    }
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x1F00F00) == 0
    && (*(_DWORD *)(Oplock + 144) & 0x7000) != 0
    && *(_QWORD *)(Oplock + 72) == Oplock + 72 )
  {
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_57;
    if ( (a6 & 0x7000) != 0 )
    {
      v19 = *(_QWORD *)(a2 + 48);
      if ( !*(_BYTE *)(v19 + 73) || (a6 & 0x2000) == 0 )
      {
        v20 = v14 & 0x1F0FFDF;
        if ( v20 == 12288 )
        {
          if ( a6 != 28736 )
            goto LABEL_58;
          v21 = (_QWORD *)(Oplock + 56);
          for ( j = *(_QWORD **)(Oplock + 56); j != v21; j = (_QWORD *)*j )
          {
            if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0LL) )
              goto LABEL_28;
            if ( j[7] )
            {
              v10 = -1073741597;
              *(_DWORD *)(a3 + 48) = -1073741597;
              IofCompleteRequest((PIRP)a3, 1);
              goto LABEL_105;
            }
          }
          v13 = 1;
          if ( a4 > 1 && (a5 & 1) == 0 )
            goto LABEL_58;
          for ( k = (_QWORD *)*v21; ; k = *v37 )
          {
            v45 = k;
            if ( k == v21 )
              break;
            v37 = (PVOID *)k[1];
            LOBYTE(v12) = 1;
            FsRtlpRemoveAndBreakRHIrp(*v37, Oplock, v12, 533, 28672);
          }
        }
        else if ( v20 == 4096 )
        {
          if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
            goto LABEL_58;
          v38 = (_QWORD *)(Oplock + 40);
          for ( m = *(_QWORD **)(Oplock + 40); m != v38; m = (_QWORD *)*m )
          {
            v49 = m[2];
            if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v49 + 48), 0LL) )
              goto LABEL_28;
          }
          v13 = 1;
          if ( a4 > 1 && (a5 & 1) == 0 )
            goto LABEL_58;
          for ( n = (_QWORD *)*v38; ; n = (_QWORD *)*v41 )
          {
            v45 = n;
            if ( n == v38 )
              break;
            v41 = (_QWORD *)n[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp(*v41, 533LL, a6 & 0x7000);
          }
        }
        else
        {
          if ( v20 != 20544 && (v20 != 28736 || a6 != 28736) || ((a6 - 20544) & 0xFFFFDFFF) != 0 )
            goto LABEL_58;
          if ( !(unsigned __int8)FsRtlpOplockKeysEqual(v19, *(_QWORD *)(Oplock + 8), 0LL) )
          {
LABEL_28:
            *(_DWORD *)(a3 + 48) = -1073741598;
            IofCompleteRequest((PIRP)a3, 1);
            v10 = -1073741598;
            goto LABEL_105;
          }
          Irp = *(PIRP *)Oplock;
          v33 = Irp;
          v33->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)&v33->CancelRoutine, 0LL);
          KeReleaseQueuedSpinLock(7uLL, v33->CancelIrql);
          v34 = Irp;
          if ( Irp->Cancel )
          {
            Irp->IoStatus.Information = 0LL;
            v34->IoStatus.Status = -1073741536;
          }
          else
          {
            MasterIrp = Irp->AssociatedIrp.MasterIrp;
            v48 = MasterIrp;
            *(_QWORD *)&MasterIrp->Type = 0LL;
            MasterIrp->MdlAddress = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
            LODWORD(MasterIrp->MdlAddress) = (a6 >> 12) & 7;
            v34->IoStatus.Information = 24LL;
            v34->IoStatus.Status = 533;
          }
          IofCompleteRequest(v34, 1);
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
        v50 = *(_QWORD *)(a3 + 184);
        *(_BYTE *)(v50 + 3) |= 1u;
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
        v10 = 259;
        goto LABEL_105;
      }
    }
LABEL_58:
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, v13);
LABEL_59:
    v10 = -1073741598;
    goto LABEL_105;
  }
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_57;
  if ( a3 )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, v13);
  }
  v10 = -1073741598;
  v44 = -1073741598;
LABEL_105:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v10;
}

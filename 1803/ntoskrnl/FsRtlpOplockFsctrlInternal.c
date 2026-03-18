/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x1404E2ABC
 * Callers:
 *     FsRtlOplockFsctrl @ 0x1404E2920 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x1404E2AA0 (FsRtlOplockFsctrlEx.c)
 *     FsRtlUpperOplockFsctrl @ 0x1407154C0 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     FsRtlpCallerIsAtomicRequestor @ 0x140065254 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpAttachOplockKey @ 0x140065288 (FsRtlpAttachOplockKey.c)
 *     FsRtlpClearOwner @ 0x1400653C4 (FsRtlpClearOwner.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockDequeueRH @ 0x14006758C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRequestShareableOplock @ 0x140067600 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140067F00 (FsRtlpComputeShareableOplockState.c)
 *     IoIsOperationSynchronous @ 0x140068100 (IoIsOperationSynchronous.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400B7088 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14014A828 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015D818 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140225528 (FsRtlpAcknowledgeOplockBreak.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x1404E238C (FsRtlpAllocateOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14071564C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x140715788 (FsRtlpOplockBreakNotify.c)
 */

__int64 __fastcall FsRtlpOplockFsctrlInternal(__int64 *Oplock, PIRP Irp, unsigned int a3, int a4, unsigned int a5)
{
  unsigned int v7; // ebx
  PVOID PoolWithTag; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int v10; // ebx
  struct _IRP *MasterIrp; // rax
  int MdlAddress; // ecx
  int v13; // ecx
  int v14; // ebx
  PVOID v15; // rdi
  ULONG Options; // eax
  PFAST_MUTEX *v18; // rsi
  bool v19; // cf
  int v21; // ebx
  unsigned int v22; // ebx
  __int64 v23; // rbx
  _QWORD *v24; // r14
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  struct _IRP *v28; // rax
  char v29; // r9
  int v30; // [rsp+40h] [rbp-58h]
  int v31; // [rsp+44h] [rbp-54h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  struct _IRP *v33; // [rsp+58h] [rbp-40h]
  PVOID v34; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+18h]
  int v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v7 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction )
  {
    v10 = 2;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589824 )
    {
LABEL_52:
      v22 = v10 | 0x40;
      if ( a3 == 1
        && !IoIsOperationSynchronous(Irp)
        && (Irp->Flags & 0x40) == 0
        && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               1u,
                               0,
                               v22,
                               a5);
      }
      goto LABEL_41;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589828 )
    {
      if ( a3
        || IoIsOperationSynchronous(Irp)
        || (Irp->Flags & 0x40) != 0
        || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      {
        v7 = -1073741598;
        Irp->IoStatus.Status = -1073741598;
        goto LABEL_43;
      }
      return (unsigned int)FsRtlpRequestShareableOplock(
                             Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             0x10u,
                             0LL,
                             1,
                             0,
                             a5);
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 589832 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589836 )
      {
        v29 = 1;
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589840 )
          return (unsigned int)FsRtlpOpBatchBreakClosePending(*Oplock, Irp->Tail.Overlay.CurrentStackLocation, Irp);
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589844 )
          return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, Irp, Irp);
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 589904 )
        {
          if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 589916 )
          {
            if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 590400 )
            {
              MasterIrp = Irp->AssociatedIrp.MasterIrp;
              v33 = MasterIrp;
              if ( CurrentStackLocation->Parameters.Create.Options >= 0xC
                && CurrentStackLocation->Parameters.Read.Length >= 0x18 )
              {
                if ( MasterIrp->Type <= 1u )
                {
                  MdlAddress = (int)MasterIrp->MdlAddress;
                  if ( (MdlAddress & 1) != 0 )
                  {
                    v13 = *(_DWORD *)(&MasterIrp->Size + 1);
                    v31 = (v13 & 1) << 12;
                    LODWORD(v34) = v13 & 4;
                    v30 = (v13 & 2) << 12;
                    v14 = v31 | v30 | ((_DWORD)v34 != 0 ? 0x4000 : 0);
                    if ( v14 )
                    {
                      if ( v14 == 12288 )
                      {
LABEL_17:
                        if ( !a3
                          && !IoIsOperationSynchronous(Irp)
                          && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                        {
                          if ( (v14 & 0x2000) != 0 )
                          {
                            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                            P = PoolWithTag;
                            memset(PoolWithTag, 0, 0x48uLL);
                          }
                          v7 = FsRtlpRequestShareableOplock(
                                 Oplock,
                                 (__int64)CurrentStackLocation,
                                 (__int64)Irp,
                                 ((*(_DWORD *)(&v33->Size + 1) & 1) << 12) | ((*(_DWORD *)(&v33->Size + 1) & 6u) << 12),
                                 (_QWORD *)((unsigned __int64)&P & -(__int64)(PoolWithTag != 0LL)),
                                 1,
                                 0,
                                 a5);
LABEL_23:
                          v15 = P;
                          if ( P )
                          {
                            FsRtlpClearOwner(*Oplock, (__int64)P);
                            ExFreePoolWithTag(v15, 0);
                          }
                          return v7;
                        }
                        goto LABEL_41;
                      }
                      if ( v14 != 28672 )
                      {
                        if ( v14 == 4096 )
                          goto LABEL_17;
                        if ( v14 != 20480 )
                        {
LABEL_71:
                          v7 = -1073741811;
                          goto LABEL_42;
                        }
                      }
                      if ( !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                      {
                        v19 = (_DWORD)v34 != 0;
                        LODWORD(v34) = -(int)v34;
                        return (unsigned int)FsRtlpRequestExclusiveOplock(
                                               Oplock,
                                               (__int64)CurrentStackLocation,
                                               (__int64)Irp,
                                               v35,
                                               v36,
                                               v31 | v30 | (v19 ? 16448 : 64),
                                               a5);
                      }
LABEL_41:
                      v7 = -1073741598;
LABEL_42:
                      Irp->IoStatus.Status = v7;
LABEL_43:
                      IofCompleteRequest(Irp, 1);
                      return v7;
                    }
                    v23 = *Oplock;
                    if ( *Oplock )
                    {
                      v34 = 0LL;
                      if ( (*(_DWORD *)(v23 + 144) & 0x10000) != 0 )
                      {
                        if ( FsRtlpCallerIsAtomicRequestor(v23, (__int64)CurrentStackLocation->FileObject, &v34) )
                        {
                          v24 = v34;
                          FsRtlpOplockDequeueRH((__int64)v34);
                          v25 = v24[7];
                          v26 = (_QWORD *)v24[8];
                          if ( *(_QWORD **)(v25 + 8) != v24 + 7 || (_QWORD *)*v26 != v24 + 7 )
                            __fastfail(3u);
                          *v26 = v25;
                          *(_QWORD *)(v25 + 8) = v26;
                          if ( *(_QWORD *)(v23 + 120) == v23 + 120 )
                            *(_DWORD *)(v23 + 144) &= 0xFFFCFFFF;
                          if ( v24[5] )
                            FsRtlpClearOwner(v23, (__int64)v24);
                          ExFreePoolWithTag(v24, 0);
                          FsRtlpComputeShareableOplockState(v23);
                          FsRtlpReleaseIrpsWaitingForRH(v27);
                        }
                      }
                    }
LABEL_89:
                    Irp->IoStatus.Status = 0;
                    IofCompleteRequest(Irp, 1);
                    return 0;
                  }
                  if ( (MdlAddress & 2) != 0 )
                  {
                    v21 = ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 6) << 12);
                    if ( !v21 || v21 == 4096 || v21 == 12288 || v21 == 20480 || v21 == 28672 )
                    {
                      if ( IoIsOperationSynchronous(Irp) )
                        goto LABEL_71;
                      if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                      {
                        if ( (v21 & 0x2000) != 0 )
                        {
                          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                          P = PoolWithTag;
                          memset(PoolWithTag, 0, 0x48uLL);
                        }
                        v7 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
                               *Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               ((*(_DWORD *)(&v33->Size + 1) & 1) << 12) | ((*(_DWORD *)(&v33->Size + 1) & 6u) << 12),
                               (_QWORD *)((unsigned __int64)&P & -(__int64)(PoolWithTag != 0LL)),
                               a5);
                        goto LABEL_23;
                      }
                      v28 = v33;
                      *(_QWORD *)&v33->Type = 0LL;
                      v28->MdlAddress = 0LL;
                      *(_QWORD *)&v28->Flags = 0LL;
                      *(_DWORD *)&v28->Type = 1572865;
                      Irp->IoStatus.Information = 24LL;
                      goto LABEL_89;
                    }
                  }
                }
                v7 = -1073741811;
                Irp->IoStatus.Status = -1073741811;
                goto LABEL_43;
              }
              v7 = -1073741789;
            }
            else
            {
              v7 = -1073741811;
            }
            Irp->IoStatus.Status = v7;
            goto LABEL_43;
          }
          v10 = 4;
          goto LABEL_51;
        }
        v29 = 0;
      }
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v29, a5);
    }
LABEL_51:
    v10 *= 2;
    goto LABEL_52;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (Options & 0x100000) != 0 )
  {
    if ( a3 != 1
      || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) != 0
      || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) != 7 )
    {
      return (unsigned int)-1073741598;
    }
    v7 = FsRtlpAttachOplockKey(Irp);
    if ( !v7 )
      return (unsigned int)FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 1u, 0, 0xC8u, a5);
  }
  else if ( (Options & 0x10000) != 0 )
  {
    v7 = FsRtlpAttachOplockKey(Irp);
    if ( !v7 )
    {
      v18 = (PFAST_MUTEX *)*Oplock;
      if ( !*Oplock )
      {
        v18 = (PFAST_MUTEX *)FsRtlpAllocateOplock();
        *Oplock = (__int64)v18;
      }
      v34 = v18;
      ExAcquireFastMutexUnsafe(v18[19]);
      v7 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
      if ( !v7 )
      {
        P = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
        memset(P, 0, 0x48uLL);
        v7 = FsRtlpRequestShareableOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 0x10000u, &P, 0, 0, a5);
        PoolWithTag = P;
      }
      if ( PoolWithTag )
      {
        FsRtlpClearOwner((__int64)v18, (__int64)PoolWithTag);
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      ExReleaseFastMutexUnsafe(v18[19]);
    }
  }
  return v7;
}

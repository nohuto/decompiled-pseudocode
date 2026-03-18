/*
 * XREFs of FsRtlpOplockFsctrlInternal @ 0x14048C37C
 * Callers:
 *     FsRtlOplockFsctrlEx @ 0x14048C360 (FsRtlOplockFsctrlEx.c)
 *     FsRtlOplockFsctrl @ 0x14048E610 (FsRtlOplockFsctrl.c)
 *     FsRtlUpperOplockFsctrl @ 0x1406855F0 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140019240 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400192B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpOplockDequeueRH @ 0x14004FB70 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140052820 (FsRtlpComputeShareableOplockState.c)
 *     IoIsOperationSynchronous @ 0x140052A70 (IoIsOperationSynchronous.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpAttachOplockKey @ 0x14005306C (FsRtlpAttachOplockKey.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140053174 (FsRtlpCallerIsAtomicRequestor.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     memset @ 0x140192D80 (memset.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E3940 (FsRtlpAcknowledgeOplockBreak.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlpAllocateOplock @ 0x140433450 (FsRtlpAllocateOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x140685770 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1406858A8 (FsRtlpOplockBreakNotify.c)
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
  unsigned int v19; // ebx
  bool v21; // cf
  int v22; // ebx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // r14
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  struct _IRP *v30; // rax
  char v31; // r9
  int v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+44h] [rbp-54h]
  PVOID v34; // [rsp+50h] [rbp-48h] BYREF
  struct _IRP *v35; // [rsp+58h] [rbp-40h]
  PVOID P; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v7 = 0;
  PoolWithTag = 0LL;
  v34 = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction )
  {
    v10 = 2;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589824 )
      goto LABEL_38;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 589828 )
    {
      if ( a3
        || IoIsOperationSynchronous(Irp)
        || (Irp->Flags & 0x40) != 0
        || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      {
        v7 = -1073741598;
        Irp->IoStatus.Status = -1073741598;
        goto LABEL_50;
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
        v31 = 1;
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
              v35 = MasterIrp;
              if ( CurrentStackLocation->Parameters.Create.Options >= 0xC
                && CurrentStackLocation->Parameters.Read.Length >= 0x18 )
              {
                if ( MasterIrp->Type <= 1u )
                {
                  MdlAddress = (int)MasterIrp->MdlAddress;
                  if ( (MdlAddress & 1) != 0 )
                  {
                    v13 = *(_DWORD *)(&MasterIrp->Size + 1);
                    v33 = (v13 & 1) << 12;
                    LODWORD(P) = v13 & 4;
                    v32 = (v13 & 2) << 12;
                    v14 = v33 | v32 | ((_DWORD)P != 0 ? 0x4000 : 0);
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
                            v34 = PoolWithTag;
                            memset(PoolWithTag, 0, 0x48uLL);
                          }
                          v7 = FsRtlpRequestShareableOplock(
                                 Oplock,
                                 (__int64)CurrentStackLocation,
                                 (__int64)Irp,
                                 ((*(_DWORD *)(&v35->Size + 1) & 1) << 12) | ((*(_DWORD *)(&v35->Size + 1) & 6u) << 12),
                                 (_QWORD *)((unsigned __int64)&v34 & -(__int64)(PoolWithTag != 0LL)),
                                 1,
                                 0,
                                 a5);
LABEL_23:
                          v15 = v34;
                          if ( v34 )
                          {
                            FsRtlpClearOwner(*Oplock, (__int64)v34);
                            ExFreePoolWithTag(v15, 0);
                          }
                          return v7;
                        }
                        goto LABEL_48;
                      }
                      if ( v14 != 28672 )
                      {
                        if ( v14 == 4096 )
                          goto LABEL_17;
                        if ( v14 != 20480 )
                        {
LABEL_76:
                          v7 = -1073741811;
                          goto LABEL_49;
                        }
                      }
                      if ( !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                      {
                        v21 = (_DWORD)P != 0;
                        LODWORD(P) = -(int)P;
                        return (unsigned int)FsRtlpRequestExclusiveOplock(
                                               Oplock,
                                               (__int64)CurrentStackLocation,
                                               (__int64)Irp,
                                               v37,
                                               v38,
                                               v33 | v32 | (v21 ? 16448 : 64),
                                               a5);
                      }
LABEL_48:
                      v7 = -1073741598;
LABEL_49:
                      Irp->IoStatus.Status = v7;
LABEL_50:
                      IofCompleteRequest(Irp, 1);
                      return v7;
                    }
                    v23 = *Oplock;
                    if ( *Oplock )
                    {
                      P = 0LL;
                      if ( (*(_DWORD *)(v23 + 144) & 0x10000) != 0 )
                      {
                        if ( FsRtlpCallerIsAtomicRequestor(v23, (__int64)CurrentStackLocation->FileObject, &P) )
                        {
                          v26 = P;
                          FsRtlpOplockDequeueRH((__int64)P, v24, v25);
                          v27 = v26[7];
                          v28 = (_QWORD *)v26[8];
                          if ( *(_QWORD **)(v27 + 8) != v26 + 7 || (_QWORD *)*v28 != v26 + 7 )
                            __fastfail(3u);
                          *v28 = v27;
                          *(_QWORD *)(v27 + 8) = v28;
                          if ( *(_QWORD *)(v23 + 120) == v23 + 120 )
                            *(_DWORD *)(v23 + 144) &= 0xFFFCFFFF;
                          if ( v26[5] )
                            FsRtlpClearOwner(v23, (__int64)v26);
                          ExFreePoolWithTag(v26, 0);
                          FsRtlpComputeShareableOplockState(v23);
                          FsRtlpReleaseIrpsWaitingForRH(v29);
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
                    v22 = ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 6) << 12);
                    if ( !v22 || v22 == 4096 || v22 == 12288 || v22 == 20480 || v22 == 28672 )
                    {
                      if ( IoIsOperationSynchronous(Irp) )
                        goto LABEL_76;
                      if ( (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
                      {
                        if ( (v22 & 0x2000) != 0 )
                        {
                          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
                          v34 = PoolWithTag;
                          memset(PoolWithTag, 0, 0x48uLL);
                        }
                        v7 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
                               *Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               ((*(_DWORD *)(&v35->Size + 1) & 1) << 12) | ((*(_DWORD *)(&v35->Size + 1) & 6u) << 12),
                               (_QWORD *)((unsigned __int64)&v34 & -(__int64)(PoolWithTag != 0LL)),
                               a5);
                        goto LABEL_23;
                      }
                      v30 = v35;
                      *(_QWORD *)&v35->Type = 0LL;
                      v30->MdlAddress = 0LL;
                      *(_QWORD *)&v30->Flags = 0LL;
                      *(_DWORD *)&v30->Type = 1572865;
                      Irp->IoStatus.Information = 24LL;
                      goto LABEL_89;
                    }
                  }
                }
                v7 = -1073741811;
                Irp->IoStatus.Status = -1073741811;
                goto LABEL_50;
              }
              v7 = -1073741789;
            }
            else
            {
              v7 = -1073741811;
            }
            Irp->IoStatus.Status = v7;
            goto LABEL_50;
          }
          v10 = 4;
          goto LABEL_37;
        }
        v31 = 0;
      }
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v31, a5);
    }
LABEL_37:
    v10 *= 2;
LABEL_38:
    v19 = v10 | 0x40;
    if ( a3 != 1
      || IoIsOperationSynchronous(Irp)
      || (Irp->Flags & 0x40) != 0
      || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
    {
      goto LABEL_48;
    }
    return (unsigned int)FsRtlpRequestExclusiveOplock(
                           Oplock,
                           (__int64)CurrentStackLocation,
                           (__int64)Irp,
                           1u,
                           0,
                           v19,
                           a5);
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
      P = v18;
      ExAcquireFastMutexUnsafe(v18[19]);
      v7 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
      if ( !v7 )
      {
        v34 = ExAllocatePoolWithTag((POOL_TYPE)17, 0x48uLL, 0x6F725346u);
        memset(v34, 0, 0x48uLL);
        v7 = FsRtlpRequestShareableOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 0x10000u, &v34, 0, 0, a5);
        PoolWithTag = v34;
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

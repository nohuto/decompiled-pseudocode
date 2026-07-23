/*
 * XREFs of FsRtlCheckOplockEx @ 0x1400FE350
 * Callers:
 *     FsRtlCheckOplock @ 0x1400FE2A0 (FsRtlCheckOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140019240 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpClearOwner @ 0x140019BCC (FsRtlpClearOwner.c)
 *     FsRtlpOplockBreakToII @ 0x14002FB30 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14003BE58 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockDequeueRH @ 0x14004FB70 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockCleanup @ 0x1400507C0 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockKeysEqual @ 0x140050C14 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpComputeShareableOplockState @ 0x140052820 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140053174 (FsRtlpCallerIsAtomicRequestor.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400FEC60 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     IoSetOplockKeyContext @ 0x14014ECE0 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     FsRtlGetMarkHandleInfo @ 0x1401E3718 (FsRtlGetMarkHandleInfo.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoGetIrpExtraCreateParameter @ 0x140428960 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x14044D050 (FsRtlAcknowledgeEcp.c)
 *     FsRtlFindExtraCreateParameter @ 0x14053B570 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x14053B600 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
 */

NTSTATUS __stdcall FsRtlCheckOplockEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  NTSTATUS v9; // r14d
  char *v10; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  int v12; // esi
  _QWORD *FileObjectExtension; // rcx
  struct _ECP_LIST *v14; // r12
  struct _FILE_OBJECT *v15; // rdx
  __int64 v17; // r8
  UCHAR MajorFunction; // cl
  ULONG_PTR v19; // rsi
  _RTL_BALANCED_NODE *v20; // rax
  _RTL_BALANCED_NODE *v21; // rdi
  int v22; // esi
  char v23; // al
  int v24; // edi
  char v25; // cl
  __int64 v26; // rsi
  char v27; // al
  char v28; // al
  int v29; // eax
  ULONG Options; // eax
  bool v31; // zf
  unsigned int LowPart; // eax
  ULONG_PTR v33; // rdi
  unsigned __int32 v34; // eax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _BYTE v43[3]; // [rsp+51h] [rbp-B7h] BYREF
  ULONG v44; // [rsp+54h] [rbp-B4h]
  char v45; // [rsp+58h] [rbp-B0h]
  bool v46; // [rsp+59h] [rbp-AFh]
  _BYTE v47[14]; // [rsp+5Ah] [rbp-AEh] BYREF
  __int64 v48; // [rsp+68h] [rbp-A0h]
  int v49; // [rsp+70h] [rbp-98h]
  PVOID EcpContext; // [rsp+78h] [rbp-90h] BYREF
  struct _IO_STACK_LOCATION *v51; // [rsp+80h] [rbp-88h]
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+90h] [rbp-78h] BYREF
  PVOID v54; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-68h]
  struct _FILE_OBJECT *v56; // [rsp+A8h] [rbp-60h]
  GUID EcpType; // [rsp+B0h] [rbp-58h] BYREF

  v48 = (__int64)Context;
  v9 = 0;
  *(_DWORD *)&v47[6] = 0;
  v10 = (char *)*Oplock;
  v54 = *Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v51 = CurrentStackLocation;
  if ( (Flags & 4) != 0 )
  {
    P = 0LL;
    if ( !v10 )
      return 0;
    ExAcquireFastMutexUnsafe(*((PFAST_MUTEX *)v10 + 19));
    if ( CurrentStackLocation->MajorFunction )
    {
      v9 = -1073741811;
    }
    else if ( (*((_DWORD *)v10 + 36) & 0x10000) != 0
           && FsRtlpCallerIsAtomicRequestor((__int64)v10, (__int64)CurrentStackLocation->FileObject, &P) )
    {
      v39 = P;
      FsRtlpOplockDequeueRH((__int64)P, v37, v38);
      v40 = v39[7];
      v41 = (_QWORD *)v39[8];
      if ( *(_QWORD **)(v40 + 8) != v39 + 7 || (_QWORD *)*v41 != v39 + 7 )
        __fastfail(3u);
      *v41 = v40;
      *(_QWORD *)(v40 + 8) = v41;
      if ( *((char **)v10 + 15) == v10 + 120 )
        *((_DWORD *)v10 + 36) &= 0xFFFCFFFF;
      if ( v39[5] )
        FsRtlpClearOwner((__int64)v10, (__int64)v39);
      ExFreePoolWithTag(v39, 0);
      FsRtlpComputeShareableOplockState((__int64)v10);
      FsRtlpReleaseIrpsWaitingForRH(v42);
    }
    ExReleaseFastMutexUnsafe(*((PFAST_MUTEX *)v10 + 19));
    return v9;
  }
  if ( (Flags & 0x10000000) == 0 )
  {
    v12 = 0;
    if ( CurrentStackLocation->MajorFunction )
      goto LABEL_9;
    FileObjectExtension = CurrentStackLocation->FileObject->FileObjectExtension;
    if ( FileObjectExtension )
    {
      if ( FileObjectExtension != IopRevocationExtension )
      {
        v35 = FileObjectExtension[7];
        if ( v35 )
        {
          if ( (*(_BYTE *)(v35 + 2) & 3) != 0 )
            goto LABEL_9;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
    v14 = ExtraCreateParameter;
    if ( ExtraCreateParameter )
    {
      EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
        EcpType = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v14, &EcpType, &EcpContext, 0LL) )
          goto LABEL_8;
        v36 = 1;
      }
      else
      {
        v36 = 2;
      }
      v44 = v36;
      CurrentStackLocation = v51;
      v12 = IoSetOplockKeyContext(v51->FileObject, EcpContext, (unsigned __int16)v36);
      if ( (_WORD)v44 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v12 == -1073741823 )
        v12 = 0;
      goto LABEL_9;
    }
LABEL_8:
    CurrentStackLocation = v51;
LABEL_9:
    *(_DWORD *)&v47[6] = v12;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, Flags);
  if ( v10 != *Oplock )
  {
    v10 = (char *)*Oplock;
    v54 = *Oplock;
  }
  if ( (Flags & 2) == 0 && v10 && (Irp->Flags & 2) == 0 && !*(_DWORD *)&v47[6] )
  {
    v43[0] = (Flags & 0x20000000) != 0;
    v45 = 1;
    while ( 1 )
    {
      v47[0] = 0;
      v17 = Flags & 0x10;
      v44 = Flags & 0x10;
      if ( (Flags & 0x10) != 0 || v43[0] )
        break;
      v49 = *((_DWORD *)v10 + 36);
      v15 = (struct _FILE_OBJECT *)*((_QWORD *)v10 + 1);
      v56 = v15;
      MajorFunction = CurrentStackLocation->MajorFunction;
      if ( CurrentStackLocation->MajorFunction == 3 )
      {
        v27 = v45;
        if ( (v49 & 0xFFFF4FFE) == 0 )
          v27 = 0;
        v45 = v27;
      }
      if ( MajorFunction == 4 && (v49 & 0xFFFFDFFE) == 0 )
        v45 = 0;
      if ( (Flags & 8) != 0 || MajorFunction == 18 || !v15 || v15 != CurrentStackLocation->FileObject )
        break;
      v45 = 0;
LABEL_112:
      if ( v43[0] && (Flags & 0x20000000) == 0 )
      {
        v33 = *((_QWORD *)v10 + 19);
        *(_QWORD *)(v33 + 8) = 0LL;
        v34 = _InterlockedCompareExchange((volatile signed __int32 *)v33, 1, 0);
        if ( v34 )
          ExpReleaseFastMutexContended(v33, v34);
        KeAbPostRelease(v33);
      }
      if ( !v47[0] )
        return *(_DWORD *)&v47[6];
    }
    if ( !v45 )
      goto LABEL_112;
    if ( !v43[0] )
    {
      v19 = *((_QWORD *)v10 + 19);
      CurrentThread = KeGetCurrentThread();
      v20 = KeAbPreAcquire(v19, 0LL, 0);
      v21 = v20;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v19, 0) )
        ExpAcquireFastMutexContended(v19, v20);
      if ( v21 )
        BYTE2(v21[1].Left) |= 1u;
      *(_QWORD *)(v19 + 8) = CurrentThread;
      v17 = v44;
    }
    v43[0] = 1;
    v22 = *((_DWORD *)v10 + 36);
    if ( v22 == 1 )
      goto LABEL_112;
    LOBYTE(v15) = 0;
    v44 = (unsigned int)v15;
    v46 = 0;
    v23 = 0;
    v24 = 0;
    *(_DWORD *)&v47[2] = 0;
    if ( (_DWORD)v17 )
    {
      v24 = 20480;
      *(_DWORD *)&v47[2] = 20480;
      goto LABEL_38;
    }
    if ( CurrentStackLocation->MajorFunction == 18 )
    {
LABEL_35:
      FsRtlpOplockCleanup((__int64)v10, (__int64)CurrentStackLocation, v17);
      if ( CurrentStackLocation->MajorFunction == 18 )
      {
        if ( (Flags & 0x20) != 0 )
        {
LABEL_90:
          v24 = 0x2000;
LABEL_91:
          *(_DWORD *)&v47[2] = v24;
        }
        goto LABEL_37;
      }
      v25 = v44;
LABEL_93:
      v23 = 0;
    }
    else if ( CurrentStackLocation->MajorFunction )
    {
      switch ( CurrentStackLocation->MajorFunction )
      {
        case 2u:
          if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
            goto LABEL_37;
          goto LABEL_35;
        case 3u:
          if ( (v22 & 8) != 0 )
          {
            v25 = v44;
          }
          else
          {
            v25 = 1;
            v46 = 1;
          }
          v24 = 0x4000;
          *(_DWORD *)&v47[2] = 0x4000;
          v23 = 0;
          break;
        case 4u:
          goto LABEL_81;
        case 6u:
          Options = CurrentStackLocation->Parameters.Create.Options;
          if ( Options == 20 )
          {
            v31 = CurrentStackLocation->Parameters.SetFile.AdvanceOnly == 0;
            goto LABEL_80;
          }
          if ( Options == 19 )
            goto LABEL_81;
          switch ( Options )
          {
            case 0xAu:
            case 0xBu:
            case 0x28u:
            case 0x41u:
              goto LABEL_92;
            case 0xDu:
            case 0x40u:
              v25 = v44;
              if ( !Irp->AssociatedIrp.MasterIrp->Type )
                goto LABEL_93;
              v24 = 0x2000;
              *(_DWORD *)&v47[2] = 0x2000;
              v23 = 0;
              break;
            case 0x27u:
              goto LABEL_81;
            default:
              goto LABEL_37;
          }
          break;
        case 9u:
          goto LABEL_66;
        case 0xDu:
          LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
          if ( LowPart > 0x98208 )
          {
            if ( LowPart != 623208 && LowPart != 623428 )
            {
              v31 = LowPart == 639668;
LABEL_80:
              if ( !v31 )
                goto LABEL_37;
            }
            goto LABEL_81;
          }
          if ( LowPart == 623112 )
            goto LABEL_81;
          if ( LowPart != 590076 )
          {
            if ( LowPart == 606820 )
            {
              LODWORD(v15) = (v22 & 8) == 0;
              v44 = (unsigned int)v15;
              v46 = (v22 & 8) == 0;
              v24 = 0x4000;
              goto LABEL_91;
            }
            if ( LowPart == 622792 )
              goto LABEL_81;
            goto LABEL_37;
          }
          if ( (FsRtlGetMarkHandleInfo(Irp) & 0x4000) == 0 )
            goto LABEL_37;
LABEL_92:
          v24 = 0x2000;
          *(_DWORD *)&v47[2] = 0x2000;
          v25 = v44;
          if ( (v22 & 0xC) == 0 )
            goto LABEL_93;
          v23 = 1;
          break;
        case 0x11u:
          v31 = (v22 & 8) == 0;
          goto LABEL_80;
        case 0x15u:
          goto LABEL_90;
        default:
          goto LABEL_37;
      }
    }
    else
    {
      if ( ((v22 & 0x7000) == 0 || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE7F) == 0)
        && ((v22 & 0x1E) == 0 || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) == 0)
        && (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0
        || (v22 & 8) != 0
        && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE56) == 0
        && (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 1) != 0 )
      {
LABEL_37:
        v23 = 0;
LABEL_38:
        v25 = v44;
        goto LABEL_39;
      }
      v29 = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
      LODWORD(v51) = v29;
      if ( (v29 & 0xFFFFFFFA) == 0 && v29 != 1 || (CurrentStackLocation->Parameters.Create.Options & 0x100000) != 0 )
      {
LABEL_81:
        v23 = 1;
        v24 = 20480;
        *(_DWORD *)&v47[2] = 20480;
        goto LABEL_38;
      }
LABEL_66:
      v25 = 1;
      v46 = 1;
      v24 = 0x4000;
      *(_DWORD *)&v47[2] = 0x4000;
      v23 = 0;
    }
LABEL_39:
    if ( v25 )
    {
      if ( (*((_DWORD *)v10 + 36) & 0x1F0FFDF) != 0x10 )
      {
        v28 = FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *((_QWORD *)v10 + 1), 0);
        v26 = v48;
        if ( !v28 )
          *(_DWORD *)&v47[6] = FsRtlpOplockBreakToII(
                                 (__int64)v10,
                                 (__int64)CurrentStackLocation,
                                 (__int64)Irp,
                                 Flags,
                                 v48,
                                 (__int64)CompletionRoutine,
                                 (__int64)PostIrpRoutine,
                                 v43,
                                 (__int64)v47);
        goto LABEL_42;
      }
    }
    else if ( v23
           && ((*((_DWORD *)v10 + 36) & 0x1F0FFDF) == 0x10
            || !FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *((_QWORD *)v10 + 1), 0)) )
    {
      v26 = v48;
      *(_DWORD *)&v47[6] = FsRtlpOplockBreakToNone(
                             (__int64)v10,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             Flags,
                             v48,
                             (__int64)CompletionRoutine,
                             (__int64)PostIrpRoutine,
                             v43,
                             (__int64)v47);
      goto LABEL_42;
    }
    v26 = v48;
LABEL_42:
    if ( !*(_DWORD *)&v47[6] && (*((_DWORD *)v10 + 36) & v24) != 0 )
      *(_DWORD *)&v47[6] = FsRtlpOplockBreakByCacheFlags(
                             (__int64)v10,
                             (__int64)CurrentStackLocation,
                             Irp,
                             Flags,
                             v24,
                             v26,
                             (__int64)CompletionRoutine,
                             (__int64)PostIrpRoutine,
                             v43,
                             (__int64)v47);
    goto LABEL_112;
  }
  return *(_DWORD *)&v47[6];
}

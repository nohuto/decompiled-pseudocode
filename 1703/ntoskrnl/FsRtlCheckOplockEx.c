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
  __int64 v20; // rdi
  int v21; // esi
  char v22; // al
  int v23; // edi
  char v24; // cl
  __int64 v25; // rsi
  char v26; // al
  char v27; // al
  int v28; // eax
  ULONG Options; // eax
  bool v30; // zf
  unsigned int LowPart; // eax
  ULONG_PTR v32; // rdi
  unsigned __int32 v33; // eax
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  _QWORD *v38; // rbx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _BYTE v42[3]; // [rsp+51h] [rbp-B7h] BYREF
  ULONG v43; // [rsp+54h] [rbp-B4h]
  char v44; // [rsp+58h] [rbp-B0h]
  bool v45; // [rsp+59h] [rbp-AFh]
  _BYTE v46[14]; // [rsp+5Ah] [rbp-AEh] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h]
  int v48; // [rsp+70h] [rbp-98h]
  PVOID EcpContext; // [rsp+78h] [rbp-90h] BYREF
  struct _IO_STACK_LOCATION *v50; // [rsp+80h] [rbp-88h]
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+90h] [rbp-78h] BYREF
  PVOID v53; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-68h]
  struct _FILE_OBJECT *v55; // [rsp+A8h] [rbp-60h]
  GUID EcpType; // [rsp+B0h] [rbp-58h] BYREF

  v47 = (__int64)Context;
  v9 = 0;
  *(_DWORD *)&v46[6] = 0;
  v10 = (char *)*Oplock;
  v53 = *Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v50 = CurrentStackLocation;
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
      v38 = P;
      FsRtlpOplockDequeueRH((__int64)P, v36, v37);
      v39 = v38[7];
      v40 = (_QWORD *)v38[8];
      if ( *(_QWORD **)(v39 + 8) != v38 + 7 || (_QWORD *)*v40 != v38 + 7 )
        __fastfail(3u);
      *v40 = v39;
      *(_QWORD *)(v39 + 8) = v40;
      if ( *((char **)v10 + 15) == v10 + 120 )
        *((_DWORD *)v10 + 36) &= 0xFFFCFFFF;
      if ( v38[5] )
        FsRtlpClearOwner((__int64)v10, (__int64)v38);
      ExFreePoolWithTag(v38, 0);
      FsRtlpComputeShareableOplockState((__int64)v10);
      FsRtlpReleaseIrpsWaitingForRH(v41);
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
        v34 = FileObjectExtension[7];
        if ( v34 )
        {
          if ( (*(_BYTE *)(v34 + 2) & 3) != 0 )
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
        v35 = 1;
      }
      else
      {
        v35 = 2;
      }
      v43 = v35;
      CurrentStackLocation = v50;
      v12 = IoSetOplockKeyContext(v50->FileObject, EcpContext, (unsigned __int16)v35);
      if ( (_WORD)v43 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v12 == -1073741823 )
        v12 = 0;
      goto LABEL_9;
    }
LABEL_8:
    CurrentStackLocation = v50;
LABEL_9:
    *(_DWORD *)&v46[6] = v12;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, Flags);
  if ( v10 != *Oplock )
  {
    v10 = (char *)*Oplock;
    v53 = *Oplock;
  }
  if ( (Flags & 2) == 0 && v10 && (Irp->Flags & 2) == 0 && !*(_DWORD *)&v46[6] )
  {
    v42[0] = (Flags & 0x20000000) != 0;
    v44 = 1;
    while ( 1 )
    {
      v46[0] = 0;
      v17 = Flags & 0x10;
      v43 = Flags & 0x10;
      if ( (Flags & 0x10) != 0 || v42[0] )
        break;
      v48 = *((_DWORD *)v10 + 36);
      v15 = (struct _FILE_OBJECT *)*((_QWORD *)v10 + 1);
      v55 = v15;
      MajorFunction = CurrentStackLocation->MajorFunction;
      if ( CurrentStackLocation->MajorFunction == 3 )
      {
        v26 = v44;
        if ( (v48 & 0xFFFF4FFE) == 0 )
          v26 = 0;
        v44 = v26;
      }
      if ( MajorFunction == 4 && (v48 & 0xFFFFDFFE) == 0 )
        v44 = 0;
      if ( (Flags & 8) != 0 || MajorFunction == 18 || !v15 || v15 != CurrentStackLocation->FileObject )
        break;
      v44 = 0;
LABEL_112:
      if ( v42[0] && (Flags & 0x20000000) == 0 )
      {
        v32 = *((_QWORD *)v10 + 19);
        *(_QWORD *)(v32 + 8) = 0LL;
        v33 = _InterlockedCompareExchange((volatile signed __int32 *)v32, 1, 0);
        if ( v33 )
          ExpReleaseFastMutexContended(v32, v33);
        KeAbPostRelease(v32);
      }
      if ( !v46[0] )
        return *(_DWORD *)&v46[6];
    }
    if ( !v44 )
      goto LABEL_112;
    if ( !v42[0] )
    {
      v19 = *((_QWORD *)v10 + 19);
      CurrentThread = KeGetCurrentThread();
      v20 = KeAbPreAcquire(v19, 0LL, 0LL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v19, 0) )
        ExpAcquireFastMutexContended(v19);
      if ( v20 )
        *(_BYTE *)(v20 + 26) |= 1u;
      *(_QWORD *)(v19 + 8) = CurrentThread;
      v17 = v43;
    }
    v42[0] = 1;
    v21 = *((_DWORD *)v10 + 36);
    if ( v21 == 1 )
      goto LABEL_112;
    LOBYTE(v15) = 0;
    v43 = (unsigned int)v15;
    v45 = 0;
    v22 = 0;
    v23 = 0;
    *(_DWORD *)&v46[2] = 0;
    if ( (_DWORD)v17 )
    {
      v23 = 20480;
      *(_DWORD *)&v46[2] = 20480;
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
          v23 = 0x2000;
LABEL_91:
          *(_DWORD *)&v46[2] = v23;
        }
        goto LABEL_37;
      }
      v24 = v43;
LABEL_93:
      v22 = 0;
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
          if ( (v21 & 8) != 0 )
          {
            v24 = v43;
          }
          else
          {
            v24 = 1;
            v45 = 1;
          }
          v23 = 0x4000;
          *(_DWORD *)&v46[2] = 0x4000;
          v22 = 0;
          break;
        case 4u:
          goto LABEL_81;
        case 6u:
          Options = CurrentStackLocation->Parameters.Create.Options;
          if ( Options == 20 )
          {
            v30 = CurrentStackLocation->Parameters.SetFile.AdvanceOnly == 0;
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
              v24 = v43;
              if ( !Irp->AssociatedIrp.MasterIrp->Type )
                goto LABEL_93;
              v23 = 0x2000;
              *(_DWORD *)&v46[2] = 0x2000;
              v22 = 0;
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
              v30 = LowPart == 639668;
LABEL_80:
              if ( !v30 )
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
              LODWORD(v15) = (v21 & 8) == 0;
              v43 = (unsigned int)v15;
              v45 = (v21 & 8) == 0;
              v23 = 0x4000;
              goto LABEL_91;
            }
            if ( LowPart == 622792 )
              goto LABEL_81;
            goto LABEL_37;
          }
          if ( (FsRtlGetMarkHandleInfo(Irp) & 0x4000) == 0 )
            goto LABEL_37;
LABEL_92:
          v23 = 0x2000;
          *(_DWORD *)&v46[2] = 0x2000;
          v24 = v43;
          if ( (v21 & 0xC) == 0 )
            goto LABEL_93;
          v22 = 1;
          break;
        case 0x11u:
          v30 = (v21 & 8) == 0;
          goto LABEL_80;
        case 0x15u:
          goto LABEL_90;
        default:
          goto LABEL_37;
      }
    }
    else
    {
      if ( ((v21 & 0x7000) == 0 || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE7F) == 0)
        && ((v21 & 0x1E) == 0 || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) == 0)
        && (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0
        || (v21 & 8) != 0
        && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE56) == 0
        && (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 1) != 0 )
      {
LABEL_37:
        v22 = 0;
LABEL_38:
        v24 = v43;
        goto LABEL_39;
      }
      v28 = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
      LODWORD(v50) = v28;
      if ( (v28 & 0xFFFFFFFA) == 0 && v28 != 1 || (CurrentStackLocation->Parameters.Create.Options & 0x100000) != 0 )
      {
LABEL_81:
        v22 = 1;
        v23 = 20480;
        *(_DWORD *)&v46[2] = 20480;
        goto LABEL_38;
      }
LABEL_66:
      v24 = 1;
      v45 = 1;
      v23 = 0x4000;
      *(_DWORD *)&v46[2] = 0x4000;
      v22 = 0;
    }
LABEL_39:
    if ( v24 )
    {
      if ( (*((_DWORD *)v10 + 36) & 0x1F0FFDF) != 0x10 )
      {
        v27 = FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *((_QWORD *)v10 + 1), 0);
        v25 = v47;
        if ( !v27 )
          *(_DWORD *)&v46[6] = FsRtlpOplockBreakToII(
                                 (__int64)v10,
                                 (__int64)CurrentStackLocation,
                                 (__int64)Irp,
                                 Flags,
                                 v47,
                                 (__int64)CompletionRoutine,
                                 (__int64)PostIrpRoutine,
                                 v42,
                                 (__int64)v46);
        goto LABEL_42;
      }
    }
    else if ( v22
           && ((*((_DWORD *)v10 + 36) & 0x1F0FFDF) == 0x10
            || !FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *((_QWORD *)v10 + 1), 0)) )
    {
      v25 = v47;
      *(_DWORD *)&v46[6] = FsRtlpOplockBreakToNone(
                             (__int64)v10,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             Flags,
                             v47,
                             (__int64)CompletionRoutine,
                             (__int64)PostIrpRoutine,
                             v42,
                             (__int64)v46);
      goto LABEL_42;
    }
    v25 = v47;
LABEL_42:
    if ( !*(_DWORD *)&v46[6] && (*((_DWORD *)v10 + 36) & v23) != 0 )
      *(_DWORD *)&v46[6] = FsRtlpOplockBreakByCacheFlags(
                             (__int64)v10,
                             (__int64)CurrentStackLocation,
                             Irp,
                             Flags,
                             v23,
                             v25,
                             (__int64)CompletionRoutine,
                             (__int64)PostIrpRoutine,
                             v42,
                             (__int64)v46);
    goto LABEL_112;
  }
  return *(_DWORD *)&v46[6];
}

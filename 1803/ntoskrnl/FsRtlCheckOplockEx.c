/*
 * XREFs of FsRtlCheckOplockEx @ 0x140066340
 * Callers:
 *     FsRtlCheckOplock @ 0x140066290 (FsRtlCheckOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404E2ABC (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     FsRtlpOplockBreakToII @ 0x140064EE8 (FsRtlpOplockBreakToII.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140065254 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpClearOwner @ 0x1400653C4 (FsRtlpClearOwner.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400655BC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140066DD0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x140066EE0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockCleanup @ 0x140067180 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x14006758C (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x140067F00 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400B7088 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToNone @ 0x1400D21C0 (FsRtlpOplockBreakToNone.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     IoSetOplockKeyContext @ 0x14015AF04 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     FsRtlGetMarkHandleInfo @ 0x1402252F8 (FsRtlGetMarkHandleInfo.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404D1FD0 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1404E1FF0 (FsRtlAcknowledgeEcp.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404E2940 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x1404E2960 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x1404E29F0 (FsRtlRemoveExtraCreateParameter.c)
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
  PFAST_MUTEX *v10; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  NTSTATUS v12; // esi
  _QWORD *FileObjectExtension; // rcx
  struct _ECP_LIST *v14; // r12
  struct _FILE_OBJECT *v15; // rdx
  ULONG v16; // r9d
  UCHAR MajorFunction; // cl
  volatile signed __int32 *v18; // rcx
  ULONG_PTR v19; // rdi
  unsigned __int8 v20; // dl
  __int64 v21; // rcx
  __int64 v22; // rsi
  int SessionId; // eax
  volatile signed __int32 *v24; // rdi
  int v25; // esi
  char v26; // al
  int v27; // edi
  int v28; // eax
  char v29; // al
  __int64 v30; // rsi
  char v31; // al
  char v32; // al
  ULONG Options; // eax
  bool v34; // zf
  int v35; // eax
  int v36; // eax
  char v37; // al
  unsigned int LowPart; // eax
  __int16 MarkHandleInfo; // ax
  ULONG_PTR v40; // rdi
  signed __int32 v41; // eax
  __int64 v43; // rax
  int v44; // eax
  _QWORD *v45; // rbx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  bool v55; // [rsp+51h] [rbp-D7h] BYREF
  char v56; // [rsp+52h] [rbp-D6h]
  char v57; // [rsp+53h] [rbp-D5h]
  _BYTE v58[4]; // [rsp+54h] [rbp-D4h] BYREF
  int v59; // [rsp+58h] [rbp-D0h]
  ULONG v60; // [rsp+5Ch] [rbp-CCh]
  NTSTATUS v61; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v62; // [rsp+68h] [rbp-C0h]
  PVOID v63; // [rsp+70h] [rbp-B8h]
  int v64; // [rsp+78h] [rbp-B0h]
  PVOID EcpContext; // [rsp+80h] [rbp-A8h] BYREF
  int v66; // [rsp+88h] [rbp-A0h]
  int v67; // [rsp+8Ch] [rbp-9Ch] BYREF
  PVOID P; // [rsp+90h] [rbp-98h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+98h] [rbp-90h] BYREF
  PVOID v70; // [rsp+A0h] [rbp-88h]
  int v71; // [rsp+A8h] [rbp-80h]
  int v72; // [rsp+ACh] [rbp-7Ch]
  __int64 v73; // [rsp+B0h] [rbp-78h]
  __int64 v74; // [rsp+B8h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-68h]
  struct _FILE_OBJECT *v76; // [rsp+C8h] [rbp-60h]
  GUID EcpType; // [rsp+D0h] [rbp-58h] BYREF

  v63 = Context;
  v9 = 0;
  v61 = 0;
  v10 = (PFAST_MUTEX *)*Oplock;
  v70 = *Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v62 = (unsigned __int64)CurrentStackLocation;
  if ( (Flags & 4) != 0 )
  {
    P = 0LL;
    if ( !v10 )
      return 0;
    ExAcquireFastMutexUnsafe(v10[19]);
    if ( CurrentStackLocation->MajorFunction )
    {
      v9 = -1073741811;
    }
    else if ( ((_DWORD)v10[18] & 0x10000) != 0
           && FsRtlpCallerIsAtomicRequestor((__int64)v10, (__int64)CurrentStackLocation->FileObject, &P) )
    {
      v45 = P;
      FsRtlpOplockDequeueRH(P);
      v46 = v45[7];
      v47 = (_QWORD *)v45[8];
      if ( *(_QWORD **)(v46 + 8) != v45 + 7 || (_QWORD *)*v47 != v45 + 7 )
        __fastfail(3u);
      *v47 = v46;
      *(_QWORD *)(v46 + 8) = v47;
      if ( v10[15] == (PFAST_MUTEX)(v10 + 15) )
        *((_DWORD *)v10 + 36) &= 0xFFFCFFFF;
      if ( v45[5] )
        FsRtlpClearOwner((__int64)v10, (__int64)v45);
      ExFreePoolWithTag(v45, 0);
      FsRtlpComputeShareableOplockState(v10, v48, v49, v50);
      FsRtlpReleaseIrpsWaitingForRH(v52, v51, v53, v54);
    }
    ExReleaseFastMutexUnsafe(v10[19]);
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
        v43 = FileObjectExtension[7];
        if ( v43 )
        {
          if ( (*(_BYTE *)(v43 + 2) & 3) != 0 )
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
        v44 = 1;
      }
      else
      {
        v44 = 2;
      }
      v60 = v44;
      CurrentStackLocation = (struct _IO_STACK_LOCATION *)v62;
      v12 = IoSetOplockKeyContext(*(_QWORD *)(v62 + 48), EcpContext, (unsigned __int16)v44);
      if ( (_WORD)v60 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v12 == -1073741823 )
        v12 = 0;
      goto LABEL_9;
    }
LABEL_8:
    CurrentStackLocation = (struct _IO_STACK_LOCATION *)v62;
LABEL_9:
    v61 = v12;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, Flags);
  if ( v10 != *Oplock )
  {
    v10 = (PFAST_MUTEX *)*Oplock;
    v70 = *Oplock;
  }
  if ( (Flags & 2) == 0 && v10 && (Irp->Flags & 2) == 0 && !v61 )
  {
    v55 = (Flags & 0x20000000) != 0;
    v56 = 1;
    while ( 1 )
    {
      v58[0] = 0;
      v16 = Flags & 0x10;
      v60 = v16;
      if ( (Flags & 0x10) == 0 && !v55 )
      {
        v64 = *((_DWORD *)v10 + 36);
        v15 = (struct _FILE_OBJECT *)v10[1];
        v76 = v15;
        MajorFunction = CurrentStackLocation->MajorFunction;
        if ( CurrentStackLocation->MajorFunction == 3 )
        {
          v31 = v56;
          if ( (v64 & 0xFFFF4FFE) == 0 )
            v31 = 0;
          v56 = v31;
        }
        if ( MajorFunction == 4 )
        {
          v32 = v56;
          if ( (v64 & 0xFFFFDFFE) == 0 )
            v32 = 0;
          v56 = v32;
        }
        if ( (Flags & 8) == 0 && MajorFunction != 18 && v15 && v15 == CurrentStackLocation->FileObject )
        {
          v56 = 0;
          goto LABEL_130;
        }
      }
      if ( !v56 )
        goto LABEL_130;
      if ( !v55 )
        break;
LABEL_43:
      v55 = 1;
      v25 = *((_DWORD *)v10 + 36);
      if ( v25 != 1 )
      {
        LOBYTE(v15) = 0;
        v60 = (unsigned int)v15;
        v57 = 0;
        v26 = 0;
        v27 = 0;
        v59 = 0;
        if ( !v16 )
        {
          v28 = CurrentStackLocation->MajorFunction;
          if ( v28 == 3 )
          {
            if ( (v25 & 8) == 0 )
            {
LABEL_47:
              LOBYTE(v15) = 1;
LABEL_48:
              v57 = (char)v15;
            }
            v27 = 0x4000;
LABEL_50:
            v59 = v27;
            goto LABEL_51;
          }
          if ( v28 != 4 )
          {
            switch ( CurrentStackLocation->MajorFunction )
            {
              case 0u:
                if ( ((v25 & 0x7000) == 0
                   || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE7F) == 0)
                  && ((v25 & 0x1E) == 0
                   || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) == 0)
                  && (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0
                  || (v25 & 8) != 0
                  && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE56) == 0
                  && (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 1) != 0 )
                {
                  break;
                }
                v35 = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
                v72 = v35;
                if ( (v35 & 0xFFFFFFFA) == 0 && v35 != 1 )
                  goto LABEL_77;
                if ( (CurrentStackLocation->Parameters.Create.Options & 0x100000) == 0 )
                  goto LABEL_47;
                v26 = 1;
                v27 = 20480;
                v59 = 20480;
                goto LABEL_52;
              case 2u:
                if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
                  break;
                goto LABEL_64;
              case 6u:
                Options = CurrentStackLocation->Parameters.Create.Options;
                if ( Options == 20 )
                {
                  v34 = CurrentStackLocation->Parameters.SetFile.AdvanceOnly == 0;
                  goto LABEL_76;
                }
                if ( Options != 19 )
                {
                  switch ( Options )
                  {
                    case 0xAu:
                    case 0xBu:
                    case 0x28u:
                    case 0x41u:
                      v27 = 0x2000;
                      v59 = 0x2000;
                      if ( (v25 & 0xC) == 0 )
                        goto LABEL_51;
                      v26 = 1;
                      goto LABEL_52;
                    case 0xDu:
                    case 0x40u:
                      if ( !Irp->AssociatedIrp.MasterIrp->Type )
                        goto LABEL_51;
                      v27 = 0x2000;
                      goto LABEL_50;
                    case 0x27u:
                      goto LABEL_77;
                    default:
                      goto LABEL_51;
                  }
                }
                goto LABEL_77;
              case 9u:
                goto LABEL_47;
              case 0xDu:
                LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
                if ( LowPart > 0x98268 )
                {
                  if ( LowPart != 623428 && LowPart != 623592 )
                  {
                    v34 = LowPart == 639668;
LABEL_76:
                    if ( !v34 )
                      break;
                  }
                  goto LABEL_77;
                }
                switch ( LowPart )
                {
                  case 0x98268u:
                    goto LABEL_77;
                  case 0x900FCu:
                    MarkHandleInfo = FsRtlGetMarkHandleInfo(Irp);
                    LODWORD(v15) = v60;
                    if ( (MarkHandleInfo & 0x4000) != 0 )
                    {
                      v27 = 0x2000;
                      v59 = 0x2000;
                      if ( (v25 & 0xC) != 0 )
                      {
                        v26 = 1;
                        goto LABEL_52;
                      }
                    }
                    break;
                  case 0x94264u:
                    LODWORD(v15) = (v25 & 8) == 0;
                    goto LABEL_48;
                  case 0x980C8u:
                  case 0x98208u:
                    goto LABEL_77;
                }
                break;
              case 0x11u:
                if ( (v25 & 8) != 0 )
                  break;
                goto LABEL_77;
              case 0x12u:
LABEL_64:
                FsRtlpOplockCleanup(v10, CurrentStackLocation);
                LODWORD(v15) = v60;
                if ( CurrentStackLocation->MajorFunction == 18 && (Flags & 0x20) != 0 )
                  goto LABEL_66;
                break;
              case 0x15u:
LABEL_66:
                v27 = 0x2000;
                goto LABEL_50;
              default:
                break;
            }
LABEL_51:
            v26 = 0;
LABEL_52:
            if ( (_BYTE)v15 )
            {
              if ( ((_DWORD)v10[18] & 0x1F0FFDF) != 0x10 )
              {
                v29 = FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, v10[1], 0LL);
                v30 = (__int64)v63;
                if ( !v29 )
                  v61 = FsRtlpOplockBreakToII(
                          (__int64 *)v10,
                          (__int64)CurrentStackLocation,
                          (__int64)Irp,
                          Flags,
                          (__int64)v63,
                          (__int64)CompletionRoutine,
                          (__int64)PostIrpRoutine,
                          &v55,
                          (__int64)v58);
                goto LABEL_56;
              }
LABEL_70:
              v30 = (__int64)v63;
            }
            else
            {
              if ( !v26
                || ((_DWORD)v10[18] & 0x1F0FFDF) != 0x10
                && (unsigned __int8)FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, v10[1], 0LL) )
              {
                goto LABEL_70;
              }
              v30 = (__int64)v63;
              v61 = FsRtlpOplockBreakToNone(
                      (_DWORD)v10,
                      (_DWORD)CurrentStackLocation,
                      (_DWORD)Irp,
                      Flags,
                      (__int64)v63,
                      (__int64)CompletionRoutine,
                      (__int64)PostIrpRoutine,
                      (__int64)&v55,
                      (__int64)v58);
            }
LABEL_56:
            if ( !v61 && ((_DWORD)v10[18] & v27) != 0 )
              v61 = FsRtlpOplockBreakByCacheFlags(
                      (__int64)v10,
                      (__int64)CurrentStackLocation,
                      Irp,
                      Flags,
                      v27,
                      v30,
                      (__int64)CompletionRoutine,
                      (__int64)PostIrpRoutine,
                      &v55,
                      (__int64)v58);
            goto LABEL_130;
          }
LABEL_77:
          v26 = 1;
        }
        v27 = 20480;
        v59 = 20480;
        goto LABEL_52;
      }
LABEL_130:
      if ( v55 && (Flags & 0x20000000) == 0 )
      {
        v40 = (ULONG_PTR)v10[19];
        *(_QWORD *)(v40 + 8) = 0LL;
        v41 = _InterlockedCompareExchange((volatile signed __int32 *)v40, 1, 0);
        if ( v41 )
          ExpReleaseFastMutexContended(v40, v41);
        KeAbPostRelease(v40);
      }
      if ( !v58[0] )
        return v61;
    }
    v18 = (volatile signed __int32 *)v10[19];
    v62 = (unsigned __int64)v18;
    CurrentThread = KeGetCurrentThread();
    v67 = 0;
    v19 = (ULONG_PTR)CurrentThread;
    --CurrentThread->SpecialApcDisable;
    if ( ++*(_BYTE *)(v19 + 794) != 1 )
      KeBugCheckEx(0x192u, v19, (ULONG_PTR)v18, KeGetCurrentIrql(), 0LL);
    v74 = 0LL;
    v20 = *(_BYTE *)(v19 + 792);
    if ( v20
      || ((v36 = 0, *(_BYTE *)(v19 + 1422))
        ? (v37 = *(_BYTE *)(v19 + 1422),
           *(_BYTE *)(v19 + 1422) = 0,
           *(_BYTE *)(v19 + 792) |= v37,
           v20 = *(_BYTE *)(v19 + 792),
           v36 = 1)
        : (v20 = 0),
          (v66 = v36) != 0) )
    {
      _BitScanForward((unsigned int *)&v21, v20);
      v71 = v21;
      *(_BYTE *)(v19 + 792) = v20 & ~(1 << v21);
      v22 = 96 * v21 + v19 + 800;
      v73 = v22;
    }
    else
    {
      v22 = 0LL;
      v73 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
        goto LABEL_31;
      EtwTraceAutoBoostEntryExhaustion(v19, v18);
    }
    v18 = (volatile signed __int32 *)v62;
LABEL_31:
    v74 = v22;
    if ( v22 )
    {
      if ( (unsigned int)MiGetSystemRegionType(v18) == 1 )
        SessionId = MmGetSessionIdEx(*(_QWORD *)(v19 + 184));
      else
        SessionId = -1;
      *(_DWORD *)(v22 + 40) = SessionId;
      v18 = (volatile signed __int32 *)v62;
      *(_QWORD *)(v22 + 32) = v62 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(v19 + 120), 0x10u);
    }
    --*(_BYTE *)(v19 + 794);
    KiAbThreadRemoveBoosts(v19, v18, &v67);
    v34 = (*(_WORD *)(v19 + 486))++ == 0xFFFF;
    if ( v34 && *(_QWORD *)(v19 + 152) != v19 + 152 )
      KiCheckForKernelApcDelivery();
    v24 = (volatile signed __int32 *)v62;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v62, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)v24, v22);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    *((_QWORD *)v24 + 1) = CurrentThread;
    v16 = v60;
    goto LABEL_43;
  }
  return v61;
}

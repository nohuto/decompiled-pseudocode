/*
 * XREFs of FsRtlCheckOplockEx @ 0x140085CC0
 * Callers:
 *     FsRtlCheckOplock @ 0x140085C10 (FsRtlCheckOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14049062C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpComputeShareableOplockState @ 0x140023F70 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockCleanup @ 0x140024868 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x140024C74 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140024CE4 (FsRtlpClearOwner.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140025124 (FsRtlpCallerIsAtomicRequestor.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400867C0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400868E0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockKeysEqual @ 0x1400874F0 (FsRtlpOplockKeysEqual.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140108B78 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToII @ 0x1401278C4 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013065C (FsRtlpOplockBreakToNone.c)
 *     IoSetOplockKeyContext @ 0x14014862C (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     FsRtlGetMarkHandleInfo @ 0x1401E7A0C (FsRtlGetMarkHandleInfo.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404BB290 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x1404BB2B0 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x1404BB340 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1405D3760 (FsRtlAcknowledgeEcp.c)
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
  char *v10; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  NTSTATUS v12; // esi
  _QWORD *FileObjectExtension; // rcx
  struct _ECP_LIST *v14; // r12
  ULONG Options; // eax
  unsigned __int64 i; // rdx
  ULONG v17; // r9d
  ULONG_PTR v18; // rcx
  ULONG_PTR v19; // rdi
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rsi
  int SessionId; // eax
  volatile signed __int32 *v24; // rdi
  int v25; // esi
  int v26; // edi
  char v27; // cl
  PVOID v28; // rsi
  bool v29; // zf
  bool v30; // zf
  struct _FILE_OBJECT *v31; // rdx
  UCHAR MajorFunction; // cl
  __int64 v33; // rax
  ULONG_PTR v34; // rdi
  unsigned __int32 v35; // eax
  __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _BYTE v43[3]; // [rsp+51h] [rbp-D7h] BYREF
  ULONG v44; // [rsp+54h] [rbp-D4h]
  unsigned __int8 v45; // [rsp+58h] [rbp-D0h]
  char v46; // [rsp+59h] [rbp-CFh]
  _BYTE v47[2]; // [rsp+5Ah] [rbp-CEh] BYREF
  int v48; // [rsp+5Ch] [rbp-CCh]
  NTSTATUS v49; // [rsp+60h] [rbp-C8h]
  struct _IO_STACK_LOCATION *v50; // [rsp+68h] [rbp-C0h]
  PVOID v51; // [rsp+70h] [rbp-B8h]
  ULONG v52; // [rsp+78h] [rbp-B0h]
  PVOID EcpContext; // [rsp+80h] [rbp-A8h] BYREF
  unsigned int v54; // [rsp+88h] [rbp-A0h] BYREF
  PVOID P; // [rsp+90h] [rbp-98h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+98h] [rbp-90h] BYREF
  PVOID v57; // [rsp+A0h] [rbp-88h]
  int v58; // [rsp+A8h] [rbp-80h]
  ULONG v59; // [rsp+ACh] [rbp-7Ch]
  __int64 v60; // [rsp+B0h] [rbp-78h]
  __int64 v61; // [rsp+B8h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-68h]
  struct _FILE_OBJECT *v63; // [rsp+C8h] [rbp-60h]
  GUID EcpType; // [rsp+D0h] [rbp-58h] BYREF

  v51 = Context;
  v9 = 0;
  v49 = 0;
  v10 = (char *)*Oplock;
  v57 = *Oplock;
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
      v39 = P;
      FsRtlpOplockDequeueRH((__int64)P);
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
        v37 = FileObjectExtension[7];
        if ( v37 )
        {
          if ( (*(_BYTE *)(v37 + 2) & 3) != 0 )
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
        v38 = 1;
      }
      else
      {
        v38 = 2;
      }
      v44 = v38;
      CurrentStackLocation = v50;
      v12 = IoSetOplockKeyContext(v50->FileObject, EcpContext, (unsigned __int16)v38);
      if ( (_WORD)v44 == 1 )
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
    v49 = v12;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(Oplock, Irp, Flags);
  if ( v10 != *Oplock )
  {
    v10 = (char *)*Oplock;
    v57 = *Oplock;
  }
  if ( (Flags & 2) == 0 )
  {
    if ( v10 )
    {
      Options = Irp->Flags;
      if ( (Options & 2) == 0 && !v49 )
      {
        v43[0] = (Flags & 0x20000000) != 0;
        v45 = 1;
        for ( i = 0xFFFF800000000000uLL; ; i = 0xFFFF800000000000uLL )
        {
          v47[0] = 0;
          v17 = Flags & 0x10;
          v44 = v17;
          if ( (Flags & 0x10) == 0 && !v43[0] )
          {
            Options = *((_DWORD *)v10 + 36);
            v52 = Options;
            v31 = (struct _FILE_OBJECT *)*((_QWORD *)v10 + 1);
            v63 = v31;
            MajorFunction = CurrentStackLocation->MajorFunction;
            if ( CurrentStackLocation->MajorFunction == 3 )
            {
              Options = v45;
              if ( (v52 & 0xFFFF4FFE) == 0 )
                Options = 0;
              v45 = Options;
            }
            if ( MajorFunction == 4 )
            {
              Options = v45;
              if ( (v52 & 0xFFFFDFFE) == 0 )
                Options = 0;
              v45 = Options;
            }
            if ( (Flags & 8) == 0 && MajorFunction != 18 && v31 && v31 == CurrentStackLocation->FileObject )
            {
              v45 = 0;
              goto LABEL_141;
            }
            i = 0xFFFF800000000000uLL;
          }
          if ( !v45 )
            goto LABEL_141;
          if ( !v43[0] )
            break;
LABEL_48:
          v43[0] = 1;
          v25 = *((_DWORD *)v10 + 36);
          if ( v25 != 1 )
          {
            LOBYTE(Options) = 0;
            v44 = Options;
            v46 = 0;
            v26 = 0;
            v48 = 0;
            if ( v17 )
            {
              v26 = 20480;
              v48 = 20480;
LABEL_68:
              v27 = v44;
            }
            else
            {
              Options = CurrentStackLocation->MajorFunction;
              if ( Options == 3 )
              {
                if ( (v25 & 8) != 0 )
                {
                  v27 = v44;
                }
                else
                {
                  v27 = 1;
                  v46 = 1;
                }
                v26 = 0x4000;
LABEL_54:
                v48 = v26;
                goto LABEL_55;
              }
              if ( Options == 4 )
              {
LABEL_67:
                LOBYTE(Options) = 1;
                v26 = 20480;
                v48 = 20480;
                goto LABEL_68;
              }
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
                    goto LABEL_87;
                  }
                  Options = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
                  v59 = Options;
                  if ( (Options & 0xFFFFFFFA) == 0 && Options != 1 )
                    goto LABEL_67;
                  Options = CurrentStackLocation->Parameters.Create.Options;
                  if ( (Options & 0x100000) != 0 )
                    goto LABEL_67;
                  v27 = 1;
                  v46 = 1;
                  v26 = 0x4000;
                  v48 = 0x4000;
                  Options = 0;
                  break;
                case 1u:
                case 3u:
                case 4u:
                case 5u:
                case 7u:
                case 8u:
                case 0xAu:
                case 0xBu:
                case 0xCu:
                case 0xEu:
                case 0xFu:
                case 0x10u:
                case 0x13u:
                case 0x14u:
                  v27 = v44;
                  goto LABEL_55;
                case 2u:
                  if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
                    goto LABEL_87;
                  goto LABEL_74;
                case 6u:
                  Options = CurrentStackLocation->Parameters.Create.Options;
                  if ( Options == 20 )
                  {
                    v30 = CurrentStackLocation->Parameters.SetFile.AdvanceOnly == 0;
                    goto LABEL_92;
                  }
                  if ( Options != 19 )
                  {
                    Options -= 10;
                    switch ( Options )
                    {
                      case 0u:
                      case 1u:
                      case 0x1Eu:
                      case 0x37u:
                        goto LABEL_98;
                      case 3u:
                      case 0x36u:
                        v29 = Irp->AssociatedIrp.MasterIrp->Type == 0;
                        goto LABEL_76;
                      case 0x1Du:
                        goto LABEL_67;
                      default:
                        goto LABEL_87;
                    }
                  }
                  goto LABEL_67;
                case 9u:
                  LOBYTE(Options) = 1;
                  goto LABEL_140;
                case 0xDu:
                  Options = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
                  if ( Options > 0x98268 )
                  {
                    if ( Options != 623428 && Options != 623592 )
                    {
                      v30 = Options == 639668;
LABEL_92:
                      if ( !v30 )
                        goto LABEL_87;
                    }
                    goto LABEL_67;
                  }
                  if ( Options == 623208 )
                    goto LABEL_67;
                  if ( Options != 590076 )
                  {
                    if ( Options == 606820 )
                    {
                      Options = (unsigned __int8)v44;
                      if ( (v25 & 8) == 0 )
                        Options = 1;
LABEL_140:
                      v44 = Options;
                      v46 = Options;
                      v26 = 0x4000;
LABEL_101:
                      v48 = v26;
LABEL_87:
                      Options = 0;
                      goto LABEL_68;
                    }
                    if ( Options != 622792 && Options != 623112 )
                      goto LABEL_87;
                    goto LABEL_67;
                  }
                  Options = FsRtlGetMarkHandleInfo(Irp, i);
                  if ( (Options & 0x4000) == 0 )
                    goto LABEL_87;
LABEL_98:
                  v26 = 0x2000;
                  v48 = 0x2000;
                  v27 = v44;
                  if ( (v25 & 0xC) != 0 )
                    LOBYTE(Options) = 1;
                  else
LABEL_55:
                    Options = 0;
                  break;
                case 0x11u:
                  if ( (v25 & 8) == 0 )
                    goto LABEL_67;
                  goto LABEL_87;
                case 0x12u:
LABEL_74:
                  FsRtlpOplockCleanup((__int64)v10, (__int64)CurrentStackLocation);
                  if ( CurrentStackLocation->MajorFunction != 18 )
                    goto LABEL_87;
                  v29 = (Flags & 0x20) == 0;
LABEL_76:
                  v27 = v44;
                  if ( v29 )
                    goto LABEL_55;
                  v26 = 0x2000;
                  goto LABEL_54;
                case 0x15u:
                  v26 = 0x2000;
                  goto LABEL_101;
                default:
                  goto LABEL_87;
              }
            }
            if ( v27 )
            {
              Options = *((_DWORD *)v10 + 36) & 0x1F0FFDF;
              if ( Options != 16 )
              {
                Options = FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, *((_QWORD *)v10 + 1), 0LL);
                v28 = v51;
                if ( !(_BYTE)Options )
                {
                  Options = FsRtlpOplockBreakToII(
                              (_DWORD)v10,
                              (_DWORD)CurrentStackLocation,
                              (_DWORD)Irp,
                              Flags,
                              (__int64)v51,
                              (__int64)CompletionRoutine,
                              (__int64)PostIrpRoutine,
                              (__int64)v43,
                              (__int64)v47);
                  v49 = Options;
                }
                goto LABEL_60;
              }
LABEL_72:
              v28 = v51;
            }
            else
            {
              if ( !(_BYTE)Options )
                goto LABEL_72;
              if ( (*((_DWORD *)v10 + 36) & 0x1F0FFDF) != 0x10 )
              {
                Options = FsRtlpOplockKeysEqual(CurrentStackLocation->FileObject, *((_QWORD *)v10 + 1), 0LL);
                if ( (_BYTE)Options )
                  goto LABEL_72;
              }
              v28 = v51;
              Options = FsRtlpOplockBreakToNone(
                          (_DWORD)v10,
                          (_DWORD)CurrentStackLocation,
                          (_DWORD)Irp,
                          Flags,
                          (__int64)v51,
                          (__int64)CompletionRoutine,
                          (__int64)PostIrpRoutine,
                          (__int64)v43,
                          (__int64)v47);
              v49 = Options;
            }
LABEL_60:
            if ( !v49 )
            {
              Options = *((_DWORD *)v10 + 36);
              if ( (Options & v26) != 0 )
              {
                Options = FsRtlpOplockBreakByCacheFlags(
                            v10,
                            CurrentStackLocation,
                            Irp,
                            Flags,
                            v26,
                            v28,
                            CompletionRoutine,
                            PostIrpRoutine,
                            v43,
                            v47);
                v49 = Options;
              }
            }
          }
LABEL_141:
          if ( v43[0] && (Flags & 0x20000000) == 0 )
          {
            v34 = *((_QWORD *)v10 + 19);
            *(_QWORD *)(v34 + 8) = 0LL;
            v35 = _InterlockedCompareExchange((volatile signed __int32 *)v34, 1, 0);
            if ( v35 )
              ExpReleaseFastMutexContended(v34, v35);
            KeAbPostRelease(v34);
          }
          if ( !v47[0] )
            return v49;
        }
        v18 = *((_QWORD *)v10 + 19);
        v50 = (struct _IO_STACK_LOCATION *)v18;
        CurrentThread = KeGetCurrentThread();
        v54 = 0;
        v19 = (ULONG_PTR)CurrentThread;
        --CurrentThread->SpecialApcDisable;
        if ( ++*(_BYTE *)(v19 + 794) != 1 )
          KeBugCheckEx(0x192u, v19, v18, KeGetCurrentIrql(), 0LL);
        v61 = 0LL;
        if ( !*(_BYTE *)(v19 + 792) )
        {
          if ( !*(_BYTE *)(v19 + 1422) )
          {
            v22 = 0LL;
            v60 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
            {
LABEL_34:
              v61 = v22;
              if ( !v22 )
              {
                _interlockedbittestandset((volatile signed __int32 *)(v19 + 120), 0x10u);
LABEL_40:
                --*(_BYTE *)(v19 + 794);
                KiAbThreadRemoveBoosts(v19, v18, &v54);
                v29 = (*(_WORD *)(v19 + 486))++ == 0xFFFF;
                if ( v29 && *(_QWORD *)(v19 + 152) != v19 + 152 )
                  KiCheckForKernelApcDelivery();
                v24 = (volatile signed __int32 *)v50;
                if ( !_interlockedbittestandreset((volatile signed __int32 *)v50, 0) )
                  ExpAcquireFastMutexContended((ULONG_PTR)v24, (PRTL_BALANCED_NODE)v22);
                if ( v22 )
                  *(_BYTE *)(v22 + 26) |= 1u;
                Options = (unsigned int)CurrentThread;
                *((_QWORD *)v24 + 1) = CurrentThread;
                v17 = v44;
                goto LABEL_48;
              }
              if ( v18 >= 0xFFFF800000000000uLL )
              {
                if ( byte_1403899D0[((v18 >> 39) & 0x1FF) - 256] == 1 )
                {
                  SessionId = MmGetSessionIdEx(*(_QWORD *)(v19 + 184));
                  v18 = (ULONG_PTR)v50;
                  goto LABEL_39;
                }
                v18 = (ULONG_PTR)v50;
              }
              SessionId = -1;
LABEL_39:
              *(_DWORD *)(v22 + 40) = SessionId;
              *(_QWORD *)(v22 + 32) = v18 & 0x7FFFFFFFFFFFFFFCLL;
              goto LABEL_40;
            }
            EtwTraceAutoBoostEntryExhaustion(v19, v18);
LABEL_33:
            v18 = (ULONG_PTR)v50;
            goto LABEL_34;
          }
          v33 = *(unsigned __int8 *)(v19 + 1422);
          *(_BYTE *)(v19 + 1422) = 0;
          *(_BYTE *)(v19 + 792) |= v33;
        }
        v20 = *(unsigned __int8 *)(v19 + 792);
        _BitScanForward((unsigned int *)&v21, v20);
        v58 = v21;
        *(_BYTE *)(v19 + 792) = v20 & ~(1 << v21);
        v22 = 96 * v21 + v19 + 800;
        v60 = v22;
        goto LABEL_33;
      }
    }
  }
  return v49;
}

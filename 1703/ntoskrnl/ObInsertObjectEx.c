/*
 * XREFs of ObInsertObjectEx @ 0x14050DCA0
 * Callers:
 *     IoCreateStreamFileObjectEx2 @ 0x140422650 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateWaitCompletionPacket @ 0x140437470 (NtCreateWaitCompletionPacket.c)
 *     SeCopyClientToken @ 0x14043D254 (SeCopyClientToken.c)
 *     EtwpCreateUmReplyObject @ 0x14043FEB4 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x140440074 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x140442400 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x14044515C (ObCreateSymbolicLink.c)
 *     AlpcpCreateConnectionPort @ 0x140445648 (AlpcpCreateConnectionPort.c)
 *     NtAllocateReserveObject @ 0x14044DE0C (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     NtFilterToken @ 0x14045464C (NtFilterToken.c)
 *     NtCreateRegistryTransaction @ 0x140458340 (NtCreateRegistryTransaction.c)
 *     NtCreatePrivateNamespace @ 0x1404692F4 (NtCreatePrivateNamespace.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     NtDuplicateToken @ 0x140476350 (NtDuplicateToken.c)
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 *     EtwpAddUmRegEntry @ 0x140480F40 (EtwpAddUmRegEntry.c)
 *     ObInsertObject @ 0x140493DC0 (ObInsertObject.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     PopPowerRequestCreateInfo @ 0x1404C7E70 (PopPowerRequestCreateInfo.c)
 *     ExCreateCallback @ 0x1404CC7B0 (ExCreateCallback.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 *     SepCreateClientSecurityEx @ 0x14050AF80 (SepCreateClientSecurityEx.c)
 *     NtCreateEvent @ 0x14050D940 (NtCreateEvent.c)
 *     NtCreateSection @ 0x14050FCB0 (NtCreateSection.c)
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 *     NtCreateTimer @ 0x14053EE40 (NtCreateTimer.c)
 *     NtCreateSemaphore @ 0x14053FFB0 (NtCreateSemaphore.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 *     MmCreateSpecialImageSection @ 0x140546050 (MmCreateSpecialImageSection.c)
 *     NtCreateJobObject @ 0x14054C614 (NtCreateJobObject.c)
 *     NtCreateMutant @ 0x14054F5F0 (NtCreateMutant.c)
 *     WmipCreateGuidObject @ 0x140555430 (WmipCreateGuidObject.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14055DBA0 (NtCreateTimer2.c)
 *     PspCreateActivityReference @ 0x14056CB48 (PspCreateActivityReference.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     MiPartitionObjectCreate @ 0x1405A1868 (MiPartitionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 *     NtCreateKeyedEvent @ 0x1405CC324 (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x1405DA770 (IoCreateController.c)
 *     NtCreateDebugObject @ 0x14067FEAC (NtCreateDebugObject.c)
 *     PopEtEnergyTrackerCreate @ 0x1406D1460 (PopEtEnergyTrackerCreate.c)
 *     TtmiCreateTerminal @ 0x1406D7E80 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1406DA90C (TtmiCreateEventQueue.c)
 *     SeFilterToken @ 0x1406F0AF0 (SeFilterToken.c)
 *     SeGetLogonSessionToken @ 0x1406F68D0 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 *     ExpProfileCreate @ 0x1407203E0 (ExpProfileCreate.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     SeAssignSecurityEx2 @ 0x140093BF0 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140093C70 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1400EE570 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeObjectCreateSaclAccessBits @ 0x140441F74 (SeObjectCreateSaclAccessBits.c)
 *     SeDeassignSecurity @ 0x140449CF0 (SeDeassignSecurity.c)
 *     ObpCreateSymbolicLinkName @ 0x14044E9DC (ObpCreateSymbolicLinkName.c)
 *     ObpAdjustCreatorAccessState @ 0x1404F2E14 (ObpAdjustCreatorAccessState.c)
 *     ObpChargeQuotaForObject @ 0x1404F4E9C (ObpChargeQuotaForObject.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14050C750 (RtlValidSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ObInsertObjectEx(
        _QWORD *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  _DWORD *v7; // rbx
  int Handle; // r12d
  char *v12; // r9
  POBJECT_TYPE v13; // rdi
  char PreviousMode; // dl
  void *v15; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR Process; // rcx
  void *v21; // r12
  unsigned __int64 v22; // r12
  _BYTE *v23; // r12
  char *v24; // rcx
  PSECURITY_DESCRIPTOR v25; // rdx
  int v26; // r12d
  void *v27; // rcx
  bool v28; // zf
  int v29; // ecx
  _DWORD *v30; // rax
  int v31; // eax
  int v32; // r15d
  void *v33; // rcx
  struct _KPRCB *v34; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  struct _KTHREAD *v36; // rax
  _BYTE *v37; // rax
  char *v38; // rcx
  KPROCESSOR_MODE v39; // dl
  unsigned int SystemCallNumber; // eax
  ULONG_PTR v41; // rcx
  unsigned __int64 v42; // rax
  ULONG_PTR v43; // rcx
  int v44; // [rsp+30h] [rbp-D0h]
  int v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  KPROCESSOR_MODE v47; // [rsp+60h] [rbp-A0h]
  int v48; // [rsp+64h] [rbp-9Ch]
  ULONG_PTR v49; // [rsp+68h] [rbp-98h]
  signed __int64 *v50; // [rsp+68h] [rbp-98h]
  void *v51; // [rsp+70h] [rbp-90h]
  struct _KTHREAD *v52; // [rsp+70h] [rbp-90h]
  _QWORD *v53; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *v54; // [rsp+78h] [rbp-88h]
  ACCESS_MASK v55; // [rsp+80h] [rbp-80h]
  int v56; // [rsp+84h] [rbp-7Ch] BYREF
  int v57; // [rsp+88h] [rbp-78h]
  ULONG Index[2]; // [rsp+90h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+98h] [rbp-68h] BYREF
  char *v60; // [rsp+A0h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-50h]
  __int128 v63; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  _QWORD v66[20]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v67[28]; // [rsp+180h] [rbp+80h] BYREF

  v7 = (_DWORD *)*(Object - 2);
  Handle = 0;
  v48 = 0;
  v60 = 0LL;
  v57 = a4;
  v12 = 0LL;
  v55 = a3;
  v62 = a6;
  v13 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( (*((_BYTE *)Object - 22) & 2) != 0 )
  {
    v37 = (_BYTE *)ObpInfoMaskToOffset[*((_BYTE *)Object - 22) & 3];
    v38 = (char *)((char *)(Object - 6) - v37);
    if ( Object - 6 != (_QWORD *)v37 )
    {
      v12 = v38 + 8;
      v60 = v38 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v47 = PreviousMode;
  if ( (v13->TypeInfo.ObjectTypeFlags & 8) == 0 && !v12 && !*((_QWORD *)v7 + 4) )
  {
    *(Object - 2) = 0LL;
    if ( a7 )
    {
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, Object, a3, 0LL, a4 + 1, *v7, PreviousMode, 0LL, 0, a6, a7);
    }
    v15 = (void *)*((_QWORD *)v7 + 4);
    if ( v15 )
    {
      SeReleaseSecurityDescriptor(v15, *((_BYTE *)v7 + 16), 1);
      *((_QWORD *)v7 + 4) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v7);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_DWORD *))P->FreeEx)(v7);
    }
LABEL_11:
    ObfDereferenceObject(Object);
    return (unsigned int)Handle;
  }
  if ( !AccessState )
  {
    AccessState = (PACCESS_STATE)v66;
    CurrentThread = KeGetCurrentThread();
    Process = (ULONG_PTR)CurrentThread->ApcState.Process;
    v49 = Process;
    v65 = *(_QWORD *)(Process + 736);
    if ( CurrentThread )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
        ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v51 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v51);
          SystemCallNumber = CurrentThread[1].SystemCallNumber;
          v21 = v51;
          DWORD2(v63) = SystemCallNumber & 3;
        }
        else
        {
          v21 = 0LL;
        }
        v41 = BugCheckParameter2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
          v41 = BugCheckParameter2;
        }
        KeAbPostRelease(v41);
        KeLeaveCriticalRegionThread((__int64)v54);
        Process = v49;
      }
      else
      {
        v21 = 0LL;
      }
      *(_QWORD *)&v63 = v21;
    }
    else
    {
      *(_QWORD *)&v63 = 0LL;
    }
    v53 = (_QWORD *)(Process + 856);
    v22 = ObFastReferenceObject((signed __int64 *)(Process + 856));
    if ( !v22 )
    {
      v52 = KeGetCurrentThread();
      --v52->KernelApcDisable;
      v50 = (signed __int64 *)(v49 + 728);
      ExAcquirePushLockSharedEx((ULONG_PTR)v50, 0LL);
      v42 = ObFastReferenceObjectLocked(v53);
      v43 = (ULONG_PTR)v50;
      v22 = v42;
      if ( _InterlockedCompareExchange64(v50, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v50);
        v43 = (ULONG_PTR)v50;
      }
      KeAbPostRelease(v43);
      KeLeaveCriticalRegionThread((__int64)v52);
    }
    v64 = v22;
    if ( SeTokenLeakTracking )
    {
      if ( v22 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v22 + 1144) + 284LL));
        if ( v22 == SepTokenLeakToken )
          __debugbreak();
      }
      if ( (_QWORD)v63 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v63 + 1144) + 284LL));
        if ( (_QWORD)v63 == SepTokenLeakToken )
          __debugbreak();
      }
    }
    Handle = SepCreateAccessStateFromSubjectContext(&v63, v66, v67, v55, &v13->TypeInfo.GenericMapping);
    if ( Handle < 0 )
      goto LABEL_11;
  }
  v23 = (_BYTE *)*((_QWORD *)v7 + 4);
  AccessState->SecurityDescriptor = v23;
  if ( v23 )
  {
    if ( !RtlValidSecurityDescriptor(v23) )
    {
      ObfDereferenceObject(Object);
      if ( AccessState == (PACCESS_STATE)v66 )
      {
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return 3221225593LL;
    }
    if ( (v23[2] & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v23);
  }
  v24 = v60;
  if ( v60 || (v13->TypeInfo.ObjectTypeFlags & 8) == 0 && !*((_QWORD *)v7 + 4) )
    goto LABEL_32;
  if ( (a5 & 1) != 0 )
    v48 = 16;
  v25 = AccessState->SecurityDescriptor;
  *(_QWORD *)Index = 8LL;
  SecurityDescriptor = 0LL;
  v26 = SeComputeAutoInheritByObjectTypeEx((__int64)v13, (__int64)v25, 0LL, &v56, Index);
  if ( v26 >= 0 )
  {
    v26 = SeAssignSecurityEx2(
            0,
            (int)AccessState->SecurityDescriptor,
            (int)&SecurityDescriptor,
            0LL,
            v13 == ObpDirectoryObjectType,
            v48 | (unsigned int)v56,
            Index,
            (__int64)&AccessState->SubjectSecurityContext,
            (__int64)&v13->TypeInfo.GenericMapping);
    if ( v26 >= 0 )
    {
      LOBYTE(v45) = KeGetCurrentThread()->PreviousMode;
      v26 = v13->TypeInfo.SecurityProcedure(
              Object,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &v13->TypeInfo.GenericMapping,
              v45);
      if ( v26 >= 0 )
      {
        v27 = (void *)*((_QWORD *)v7 + 4);
        if ( *((_BYTE *)v7 + 16) <= 1u && v27 )
          ExFreePoolWithTag(v27, 0);
        v24 = v60;
        *((_QWORD *)v7 + 4) = 0LL;
        AccessState->SecurityDescriptor = 0LL;
LABEL_32:
        *(Object - 2) = 0LL;
        if ( a7 )
        {
          v28 = v24 == 0LL;
          v29 = v57;
          v30 = v7;
          if ( v28 )
            v30 = 0LL;
          v46 = v62;
          LOBYTE(v44) = v47;
          *a7 = 0LL;
          v31 = ObpCreateHandle(0LL, Object, 0LL, AccessState, v29 + 1, *v7, v44, v30, 0, v46, a7);
          v32 = v31;
          if ( v31 >= 0 && v13 == ObpSymbolicLinkObjectType && v31 != 0x40000000 )
            ObpCreateSymbolicLinkName((__int64)Object);
        }
        else if ( AccessState == (PACCESS_STATE)v66
               || ((*v7 & 0x400) != 0 ? (v39 = 1) : (v39 = v47),
                   v32 = ObpAdjustCreatorAccessState(AccessState, v39, (__int64)v13, (__int64)Object),
                   v32 >= 0) )
        {
          v36 = KeGetCurrentThread();
          --v36->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object - 4), 0LL);
          v32 = ObpChargeQuotaForObject((__int64)(Object - 6), (__int64)KeGetCurrentThread()->ApcState.Process);
          ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL);
          KeLeaveCriticalRegion();
          if ( v32 >= 0 )
            goto LABEL_38;
        }
        ObfDereferenceObject(Object);
LABEL_38:
        v33 = (void *)*((_QWORD *)v7 + 4);
        if ( v33 )
        {
          SeReleaseSecurityDescriptor(v33, *((_BYTE *)v7 + 16), 1);
          *((_QWORD *)v7 + 4) = 0LL;
        }
        v34 = KeGetCurrentPrcb();
        L = v34->PPLookasideList[4].P;
        ++L->TotalFrees;
        if ( LOWORD(L->ListHead.Alignment) < L->Depth
          || (++L->FreeMisses, L = v34->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
        {
          RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v7);
        }
        else
        {
          ++L->FreeMisses;
          ((void (__fastcall *)(_DWORD *))L->FreeEx)(v7);
        }
        if ( AccessState == (PACCESS_STATE)v66 )
        {
          SepDeleteAccessState((__int64)AccessState);
          SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
        }
        return (unsigned int)v32;
      }
      SeDeassignSecurity(&SecurityDescriptor);
    }
  }
  ObfDereferenceObject(Object);
  if ( AccessState == (PACCESS_STATE)v66 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
  }
  return (unsigned int)v26;
}

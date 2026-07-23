/*
 * XREFs of ObInsertObjectEx @ 0x1404BC710
 * Callers:
 *     PspCreateActivityReference @ 0x1404514C8 (PspCreateActivityReference.c)
 *     NtFilterToken @ 0x14045ACFC (NtFilterToken.c)
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140465D6C (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x140468BE4 (AlpcpCreateConnectionPort.c)
 *     SeCopyClientToken @ 0x140487120 (SeCopyClientToken.c)
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 *     EtwpAddUmRegEntry @ 0x1404915C0 (EtwpAddUmRegEntry.c)
 *     NtCreateSemaphore @ 0x1404935D0 (NtCreateSemaphore.c)
 *     NtCreateSection @ 0x14049C090 (NtCreateSection.c)
 *     SepCreateClientSecurityEx @ 0x14049D260 (SepCreateClientSecurityEx.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     NtCreateEvent @ 0x1404BB5A0 (NtCreateEvent.c)
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1404C66A0 (NtDuplicateToken.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1404EB824 (NtCreateTimer2.c)
 *     NtCreateTimer @ 0x1404EBB0C (NtCreateTimer.c)
 *     NtCreateMutant @ 0x1404ECB2C (NtCreateMutant.c)
 *     PopPowerRequestCreateInfo @ 0x1404F1D38 (PopPowerRequestCreateInfo.c)
 *     ObInsertObject @ 0x1404FA190 (ObInsertObject.c)
 *     NtCreateJobObject @ 0x14050B45C (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     WmipCreateGuidObject @ 0x140520168 (WmipCreateGuidObject.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x14053A36C (MmCreateSpecialImageSection.c)
 *     NtCreatePrivateNamespace @ 0x140548D34 (NtCreatePrivateNamespace.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 *     IoCreateDevice @ 0x140549C50 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405542D0 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateWaitCompletionPacket @ 0x14056F2FC (NtCreateWaitCompletionPacket.c)
 *     NtCreateIoCompletion @ 0x140574D7C (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x140579B14 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x14058005C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x14058A580 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     EtwpRealtimeConnect @ 0x140595B1C (EtwpRealtimeConnect.c)
 *     NtCreateRegistryTransaction @ 0x140598228 (NtCreateRegistryTransaction.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     NtCreateKeyedEvent @ 0x1405E0BB8 (NtCreateKeyedEvent.c)
 *     PspAllocatePartition @ 0x1405E9330 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x1406AB080 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x1406B73A0 (IoCreateController.c)
 *     PopEtEnergyTrackerCreate @ 0x140708870 (PopEtEnergyTrackerCreate.c)
 *     TtmiCreateTerminal @ 0x14070E208 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140710D1C (TtmiCreateEventQueue.c)
 *     SeFilterToken @ 0x140728510 (SeFilterToken.c)
 *     SeGetLogonSessionToken @ 0x14072E3F0 (SeGetLogonSessionToken.c)
 *     EtwpCreateUmReplyObject @ 0x1407441E8 (EtwpCreateUmReplyObject.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 *     ExpProfileCreate @ 0x140760250 (ExpProfileCreate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140082000 (SepCreateAccessStateFromSubjectContext.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     SeAssignSecurityEx2 @ 0x1400877C0 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140087910 (SeComputeAutoInheritByObjectTypeEx.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObpAdjustCreatorAccessState @ 0x140484A78 (ObpAdjustCreatorAccessState.c)
 *     ObpChargeQuotaForObject @ 0x1404853DC (ObpChargeQuotaForObject.c)
 *     RtlValidSecurityDescriptor @ 0x140485620 (RtlValidSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     SeObjectCreateSaclAccessBits @ 0x140577604 (SeObjectCreateSaclAccessBits.c)
 *     SeDeassignSecurity @ 0x14057D4B0 (SeDeassignSecurity.c)
 *     ObpCreateSymbolicLinkName @ 0x14058C2D8 (ObpCreateSymbolicLinkName.c)
 */

__int64 __fastcall ObInsertObjectEx(
        _QWORD *Object,
        PACCESS_STATE AccessState,
        ACCESS_MASK a3,
        int a4,
        char a5,
        PVOID *a6,
        unsigned __int64 *a7)
{
  __int64 v7; // rbx
  int Handle; // r12d
  char *v12; // r8
  POBJECT_TYPE v13; // rdi
  char PreviousMode; // dl
  void *v15; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR Process; // rcx
  void *v21; // r12
  ULONG_PTR v22; // r12
  _BYTE *v23; // r12
  char *v24; // rax
  PSECURITY_DESCRIPTOR v25; // rdx
  int v26; // eax
  int v27; // r12d
  void *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  int v31; // r14d
  void *v32; // rcx
  struct _KPRCB *v33; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  KPROCESSOR_MODE v35; // dl
  struct _KTHREAD *v36; // rax
  _BYTE *v37; // rax
  char *v38; // rcx
  int v39; // eax
  ULONG_PTR v40; // rcx
  unsigned __int64 v41; // rax
  ULONG_PTR v42; // rcx
  int v43; // [rsp+40h] [rbp-C0h]
  char v44; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v46; // [rsp+68h] [rbp-98h]
  signed __int64 *v47; // [rsp+68h] [rbp-98h]
  char *v48; // [rsp+70h] [rbp-90h]
  void *v49; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *v50; // [rsp+78h] [rbp-88h]
  _QWORD *v51; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *v52; // [rsp+80h] [rbp-80h]
  int v53; // [rsp+88h] [rbp-78h] BYREF
  int v54; // [rsp+8Ch] [rbp-74h]
  ULONG Index[2]; // [rsp+90h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  PVOID *v58; // [rsp+A8h] [rbp-58h]
  __int128 v59; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  _QWORD v62[20]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v63[28]; // [rsp+170h] [rbp+70h] BYREF

  v7 = *(Object - 2);
  Handle = 0;
  v48 = 0LL;
  v12 = 0LL;
  v54 = a4;
  v58 = a6;
  v13 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( (*((_BYTE *)Object - 22) & 2) != 0 )
  {
    v37 = (_BYTE *)ObpInfoMaskToOffset[*((_BYTE *)Object - 22) & 3];
    v38 = (char *)((char *)(Object - 6) - v37);
    if ( Object - 6 != (_QWORD *)v37 )
    {
      v12 = v38 + 8;
      v48 = v38 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v44 = PreviousMode;
  if ( (v13->TypeInfo.ObjectTypeFlags & 8) == 0 && !v12 && !*(_QWORD *)(v7 + 32) )
  {
    *(Object - 2) = 0LL;
    if ( a7 )
    {
      *a7 = 0LL;
      Handle = ObpCreateHandle(0, (char *)Object, a3, 0LL, a4 + 1, *(_DWORD *)v7, PreviousMode, 0LL, 0, a6, a7);
    }
    v15 = *(void **)(v7 + 32);
    if ( v15 )
    {
      SeReleaseSecurityDescriptor(v15, *(_BYTE *)(v7 + 16), 1);
      *(_QWORD *)(v7 + 32) = 0LL;
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
      ((void (__fastcall *)(__int64))P->FreeEx)(v7);
    }
LABEL_11:
    ObfDereferenceObject(Object);
    return (unsigned int)Handle;
  }
  if ( !AccessState )
  {
    AccessState = (PACCESS_STATE)v62;
    CurrentThread = KeGetCurrentThread();
    Process = (ULONG_PTR)CurrentThread->ApcState.Process;
    v46 = Process;
    v61 = *(_QWORD *)(Process + 736);
    if ( CurrentThread )
    {
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v52 = KeGetCurrentThread();
        --v52->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
        ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v49 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObject(v49);
          v39 = *(&CurrentThread[1].MiscFlags + 1);
          v21 = v49;
          DWORD2(v59) = v39 & 3;
        }
        else
        {
          v21 = 0LL;
        }
        v40 = BugCheckParameter2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
          v40 = BugCheckParameter2;
        }
        KeAbPostRelease(v40);
        KeLeaveCriticalRegionThread((__int64)v52);
        Process = v46;
      }
      else
      {
        v21 = 0LL;
      }
      *(_QWORD *)&v59 = v21;
    }
    else
    {
      *(_QWORD *)&v59 = 0LL;
    }
    v51 = (_QWORD *)(Process + 856);
    v22 = ObFastReferenceObject((signed __int64 *)(Process + 856));
    if ( !v22 )
    {
      v50 = KeGetCurrentThread();
      --v50->KernelApcDisable;
      v47 = (signed __int64 *)(v46 + 728);
      ExAcquirePushLockSharedEx((ULONG_PTR)v47, 0LL);
      v41 = ObFastReferenceObjectLocked(v51);
      v42 = (ULONG_PTR)v47;
      v22 = v41;
      if ( _InterlockedCompareExchange64(v47, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v47);
        v42 = (ULONG_PTR)v47;
      }
      KeAbPostRelease(v42);
      KeLeaveCriticalRegionThread((__int64)v50);
    }
    v60 = v22;
    if ( SeTokenLeakTracking )
    {
      if ( v22 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v22 + 1144) + 284LL));
        if ( v22 == SepTokenLeakToken )
          __debugbreak();
      }
      if ( (_QWORD)v59 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v59 + 1144) + 284LL));
        if ( (_QWORD)v59 == SepTokenLeakToken )
          __debugbreak();
      }
    }
    Handle = SepCreateAccessStateFromSubjectContext(&v59, v62, v63, a3, &v13->TypeInfo.GenericMapping);
    if ( Handle < 0 )
      goto LABEL_11;
  }
  v23 = *(_BYTE **)(v7 + 32);
  AccessState->SecurityDescriptor = v23;
  if ( v23 )
  {
    if ( !RtlValidSecurityDescriptor(v23) )
    {
      ObfDereferenceObject(Object);
      if ( AccessState == (PACCESS_STATE)v62 )
      {
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return 3221225593LL;
    }
    if ( (v23[2] & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v23);
  }
  v24 = v48;
  if ( v48 || (v13->TypeInfo.ObjectTypeFlags & 8) == 0 && !*(_QWORD *)(v7 + 32) )
    goto LABEL_30;
  v25 = AccessState->SecurityDescriptor;
  SecurityDescriptor = 0LL;
  *(_QWORD *)Index = 8LL;
  v26 = SeComputeAutoInheritByObjectTypeEx((__int64)v13, (__int64)v25, 0LL, &v53, Index);
  if ( v26 < 0 )
  {
    v27 = v26;
  }
  else
  {
    v27 = SeAssignSecurityEx2(
            0,
            (int)AccessState->SecurityDescriptor,
            (int)&SecurityDescriptor,
            0LL,
            v13 == ObpDirectoryObjectType,
            (16 * (a5 & 1)) | (unsigned int)v53,
            Index,
            (__int64)&AccessState->SubjectSecurityContext,
            (__int64)&v13->TypeInfo.GenericMapping);
    if ( v27 >= 0 )
    {
      LOBYTE(v43) = KeGetCurrentThread()->PreviousMode;
      v27 = v13->TypeInfo.SecurityProcedure(
              Object,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &v13->TypeInfo.GenericMapping,
              v43);
      if ( v27 >= 0 )
      {
        v28 = *(void **)(v7 + 32);
        if ( *(_BYTE *)(v7 + 16) <= 1u && v28 )
          ExFreePoolWithTag(v28, 0);
        v24 = 0LL;
        *(_QWORD *)(v7 + 32) = 0LL;
        AccessState->SecurityDescriptor = 0LL;
LABEL_30:
        *(Object - 2) = 0LL;
        if ( a7 )
        {
          *a7 = 0LL;
          if ( v24 )
            v29 = v7;
          else
            v29 = 0LL;
          v30 = ObpCreateHandle(
                  0,
                  (char *)Object,
                  0,
                  (__int64)AccessState,
                  v54 + 1,
                  *(_DWORD *)v7,
                  v44,
                  v29,
                  0,
                  v58,
                  a7);
          v31 = v30;
          if ( v30 >= 0 && v13 == ObpSymbolicLinkObjectType && v30 != 0x40000000 )
            ObpCreateSymbolicLinkName(Object);
        }
        else if ( AccessState == (PACCESS_STATE)v62
               || ((*(_DWORD *)v7 & 0x400) != 0 ? (v35 = 1) : (v35 = v44),
                   v31 = ObpAdjustCreatorAccessState(AccessState, v35, (__int64)v13, (__int64)Object),
                   v31 >= 0) )
        {
          v36 = KeGetCurrentThread();
          --v36->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object - 4), 0LL);
          v31 = ObpChargeQuotaForObject((__int64)(Object - 6), (__int64)KeGetCurrentThread()->ApcState.Process);
          ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL);
          KeLeaveCriticalRegion();
          if ( v31 >= 0 )
            goto LABEL_36;
        }
        ObfDereferenceObject(Object);
LABEL_36:
        v32 = *(void **)(v7 + 32);
        if ( v32 )
        {
          SeReleaseSecurityDescriptor(v32, *(_BYTE *)(v7 + 16), 1);
          *(_QWORD *)(v7 + 32) = 0LL;
        }
        v33 = KeGetCurrentPrcb();
        L = v33->PPLookasideList[4].P;
        ++L->TotalFrees;
        if ( LOWORD(L->ListHead.Alignment) < L->Depth
          || (++L->FreeMisses, L = v33->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
        {
          RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v7);
        }
        else
        {
          ++L->FreeMisses;
          ((void (__fastcall *)(__int64))L->FreeEx)(v7);
        }
        if ( AccessState == (PACCESS_STATE)v62 )
        {
          SepDeleteAccessState((__int64)AccessState);
          SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
        }
        return (unsigned int)v31;
      }
      SeDeassignSecurity(&SecurityDescriptor);
    }
  }
  ObfDereferenceObject(Object);
  if ( AccessState == (PACCESS_STATE)v62 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
  }
  return (unsigned int)v27;
}

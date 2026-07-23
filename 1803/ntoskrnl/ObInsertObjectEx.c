/*
 * XREFs of ObInsertObjectEx @ 0x1404C3DD0
 * Callers:
 *     NtCreateTimer @ 0x1404B2E9C (NtCreateTimer.c)
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     ObInsertObject @ 0x1404BF190 (ObInsertObject.c)
 *     NtOpenThreadTokenEx @ 0x1404C0990 (NtOpenThreadTokenEx.c)
 *     NtCreateSection @ 0x1404C1930 (NtCreateSection.c)
 *     NtCreateSemaphore @ 0x1404C2310 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x1404C3A60 (NtCreateEvent.c)
 *     SepCreateClientSecurityEx @ 0x1404C9490 (SepCreateClientSecurityEx.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     NtDuplicateToken @ 0x1404DCD80 (NtDuplicateToken.c)
 *     AlpcpCreateConnectionPort @ 0x1404E0524 (AlpcpCreateConnectionPort.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     MmCreateSpecialImageSection @ 0x1404F0B68 (MmCreateSpecialImageSection.c)
 *     WmipCreateGuidObject @ 0x140502308 (WmipCreateGuidObject.c)
 *     PopPowerRequestCreateInfo @ 0x1405251E0 (PopPowerRequestCreateInfo.c)
 *     NtCreateWorkerFactory @ 0x14052E3E4 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14052E740 (NtCreateTimer2.c)
 *     NtCreateJobObject @ 0x14052FF14 (NtCreateJobObject.c)
 *     NtCreatePrivateNamespace @ 0x1405400D0 (NtCreatePrivateNamespace.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 *     IoCreateDevice @ 0x140541590 (IoCreateDevice.c)
 *     ExCreateCallback @ 0x140557360 (ExCreateCallback.c)
 *     NtCreateWaitCompletionPacket @ 0x14055D37C (NtCreateWaitCompletionPacket.c)
 *     SeCopyClientToken @ 0x14055EC24 (SeCopyClientToken.c)
 *     NtCreateIoCompletion @ 0x140564C50 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x140568EF8 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1405716D8 (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1405770B4 (NtAllocateReserveObject.c)
 *     NtFilterToken @ 0x14057C3B8 (NtFilterToken.c)
 *     NtCreateRegistryTransaction @ 0x140580D98 (NtCreateRegistryTransaction.c)
 *     NtCreateMutant @ 0x140589664 (NtCreateMutant.c)
 *     EtwpAddUmRegEntry @ 0x1405909C0 (EtwpAddUmRegEntry.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140592DF0 (IoCreateStreamFileObjectEx2.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     EtwpCreateUmReplyObject @ 0x1405C3160 (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x1405C3548 (PspCreateActivityReference.c)
 *     EtwpRealtimeConnect @ 0x1405E4288 (EtwpRealtimeConnect.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     MiSessionObjectCreate @ 0x14060A7FC (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 *     SeFilterToken @ 0x14062CB20 (SeFilterToken.c)
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 *     NtCreateKeyedEvent @ 0x140649620 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x14064E46C (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x14064EEF0 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x14070F7F0 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x14071C030 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1407719C4 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1407745A4 (TtmiCreateEventQueue.c)
 *     SeGetLogonSessionToken @ 0x140792490 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x1407B0348 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B8BD4 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1407C7550 (ExpProfileCreate.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x14005C910 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14005CA70 (SeComputeAutoInheritByObjectTypeEx.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1401052E0 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x1404C1B80 (RtlValidSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     ObpChargeQuotaForObject @ 0x1404EBCA0 (ObpChargeQuotaForObject.c)
 *     ObpAdjustCreatorAccessState @ 0x140562B1C (ObpAdjustCreatorAccessState.c)
 *     SeObjectCreateSaclAccessBits @ 0x14056845C (SeObjectCreateSaclAccessBits.c)
 *     SeDeassignSecurity @ 0x14056A020 (SeDeassignSecurity.c)
 *     ObpCreateSymbolicLinkName @ 0x14057B354 (ObpCreateSymbolicLinkName.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall ObInsertObjectEx(
        _QWORD *Object,
        struct _ACCESS_STATE *a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  _SLIST_ENTRY *v7; // rbx
  char *v10; // rdx
  int Handle; // r13d
  unsigned __int64 v12; // rcx
  char v13; // al
  POBJECT_TYPE v14; // rdi
  char PreviousMode; // r12
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  _SLIST_ENTRY *v20; // r13
  char *v21; // rcx
  __int64 v22; // rdx
  int v23; // r13d
  _SLIST_ENTRY *v24; // rcx
  bool v25; // zf
  int v26; // ecx
  _SLIST_ENTRY *v27; // rax
  int v28; // eax
  int v29; // r15d
  __int64 v30; // r8
  _SLIST_ENTRY *v31; // rcx
  struct _KPRCB *v32; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  _BYTE *v37; // rax
  char *v38; // rcx
  int v39; // [rsp+30h] [rbp-248h]
  int v40; // [rsp+40h] [rbp-238h]
  __int64 v41; // [rsp+48h] [rbp-230h]
  ACCESS_MASK v42; // [rsp+64h] [rbp-214h]
  int v43; // [rsp+68h] [rbp-210h] BYREF
  int v44; // [rsp+6Ch] [rbp-20Ch]
  ULONG Index[2]; // [rsp+70h] [rbp-208h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-200h] BYREF
  char *v47; // [rsp+80h] [rbp-1F8h]
  __int64 v48; // [rsp+88h] [rbp-1F0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-1E8h] BYREF
  int v50[40]; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v51[28]; // [rsp+150h] [rbp-128h] BYREF

  v7 = (_SLIST_ENTRY *)*(Object - 2);
  v10 = 0LL;
  Handle = 0;
  v44 = a4;
  v42 = a3;
  v12 = (unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v48 = a6;
  v13 = *((_BYTE *)Object - 22);
  v47 = 0LL;
  v14 = (POBJECT_TYPE)ObTypeIndexTable[v12];
  if ( (v13 & 2) != 0 )
  {
    v37 = (_BYTE *)ObpInfoMaskToOffset[v13 & 3];
    v38 = (char *)((char *)(Object - 6) - v37);
    if ( Object - 6 != (_QWORD *)v37 )
    {
      v10 = v38 + 8;
      v47 = v38 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (v14->TypeInfo.ObjectTypeFlags & 8) == 0 && !v10 && !v7[2].Next )
  {
    *(Object - 2) = 0LL;
    if ( a7 )
    {
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, Object, a3, 0LL, a4 + 1, v7->Next, PreviousMode, 0LL, 0, a6, a7);
    }
    Next = v7[2].Next;
    if ( Next )
    {
      LOBYTE(a3) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v7[1].Next), a3);
      v7[2].Next = 0LL;
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
      RtlpInterlockedPushEntrySList(&P->ListHead, v7);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v7);
    }
    goto LABEL_11;
  }
  if ( !a2 )
  {
    a2 = (struct _ACCESS_STATE *)v50;
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
    Handle = SepCreateAccessStateFromSubjectContext(&SubjectContext, v50, v51, v42, &v14->TypeInfo.GenericMapping);
    if ( Handle < 0 )
    {
LABEL_11:
      ObfDereferenceObject(Object);
      return (unsigned int)Handle;
    }
  }
  v20 = v7[2].Next;
  a2->SecurityDescriptor = v20;
  if ( v20 )
  {
    if ( !RtlValidSecurityDescriptor(v20) )
    {
      ObfDereferenceObject(Object);
      if ( a2 == (struct _ACCESS_STATE *)v50 )
      {
        SepDeleteAccessState((__int64)a2);
        SeReleaseSubjectContext(&a2->SubjectSecurityContext);
      }
      return 3221225593LL;
    }
    if ( (BYTE2(v20->Next) & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v20);
  }
  v21 = v47;
  if ( v47 || (v14->TypeInfo.ObjectTypeFlags & 8) == 0 && !v7[2].Next )
    goto LABEL_24;
  v22 = (__int64)a2->SecurityDescriptor;
  Index[1] = 0;
  SecurityDescriptor = 0LL;
  Index[0] = 8;
  v23 = SeComputeAutoInheritByObjectTypeEx((__int64)v14, v22, 0LL, &v43, Index);
  if ( v23 >= 0 )
  {
    v23 = SeAssignSecurityEx2(
            0,
            (int)a2->SecurityDescriptor,
            (int)&SecurityDescriptor,
            0LL,
            v14 == ObpDirectoryObjectType,
            (16 * (a5 & 1)) | (unsigned int)v43,
            Index,
            (__int64)&a2->SubjectSecurityContext,
            (__int64)&v14->TypeInfo.GenericMapping);
    if ( v23 >= 0 )
    {
      LOBYTE(v40) = KeGetCurrentThread()->PreviousMode;
      v23 = v14->TypeInfo.SecurityProcedure(
              Object,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &v14->TypeInfo.GenericMapping,
              v40);
      if ( v23 >= 0 )
      {
        v24 = v7[2].Next;
        if ( LOBYTE(v7[1].Next) <= 1u && v24 )
          ExFreePoolWithTag(v24, 0);
        v21 = v47;
        v7[2].Next = 0LL;
        a2->SecurityDescriptor = 0LL;
LABEL_24:
        *(Object - 2) = 0LL;
        if ( a7 )
        {
          v25 = v21 == 0LL;
          v26 = v44;
          v27 = 0LL;
          if ( !v25 )
            v27 = v7;
          v41 = v48;
          *a7 = 0LL;
          LOBYTE(v39) = PreviousMode;
          v28 = ObpCreateHandle(0LL, Object, 0LL, a2, v26 + 1, v7->Next, v39, v27, 0, v41, a7);
          v29 = v28;
          if ( v28 >= 0 && v14 == ObpSymbolicLinkObjectType && v28 != 0x40000000 )
            ObpCreateSymbolicLinkName(Object);
        }
        else if ( a2 == (struct _ACCESS_STATE *)v50 || (v29 = ObpAdjustCreatorAccessState(a2), v29 >= 0) )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object - 4), 0LL);
          v29 = ObpChargeQuotaForObject(Object - 6, KeGetCurrentThread()->ApcState.Process, 0LL);
          ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL, v35, v36);
          KeLeaveCriticalRegion();
          if ( v29 >= 0 )
            goto LABEL_30;
        }
        ObfDereferenceObject(Object);
LABEL_30:
        v31 = v7[2].Next;
        if ( v31 )
        {
          LOBYTE(v30) = 1;
          SeReleaseSecurityDescriptor(v31, LOBYTE(v7[1].Next), v30);
          v7[2].Next = 0LL;
        }
        v32 = KeGetCurrentPrcb();
        L = v32->PPLookasideList[4].P;
        ++L->TotalFrees;
        if ( LOWORD(L->ListHead.Alignment) < L->Depth
          || (++L->FreeMisses, L = v32->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
        {
          RtlpInterlockedPushEntrySList(&L->ListHead, v7);
        }
        else
        {
          ++L->FreeMisses;
          ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(v7);
        }
        if ( a2 == (struct _ACCESS_STATE *)v50 )
        {
          SepDeleteAccessState((__int64)a2);
          SeReleaseSubjectContext(&a2->SubjectSecurityContext);
        }
        return (unsigned int)v29;
      }
      SeDeassignSecurity(&SecurityDescriptor);
    }
  }
  ObfDereferenceObject(Object);
  if ( a2 == (struct _ACCESS_STATE *)v50 )
  {
    SepDeleteAccessState((__int64)a2);
    SeReleaseSubjectContext(&a2->SubjectSecurityContext);
  }
  return (unsigned int)v23;
}

/*
 * XREFs of SeCaptureSubjectContext @ 0x14049D010
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400E4A30 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x1400FA910 (RtlCheckTokenMembershipEx.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401E3B78 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x140279B0C (WdipAccessCheck.c)
 *     PiDqOpenUserObjectRegKey @ 0x140447AF4 (PiDqOpenUserObjectRegKey.c)
 *     PspSinglePrivCheck @ 0x140449FE4 (PspSinglePrivCheck.c)
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046BD00 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046BE30 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SepCheckForCriticalAceRemoval @ 0x14046CC94 (SepCheckForCriticalAceRemoval.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046D188 (NtPrivilegedServiceAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046D3F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046D680 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046D7AC (NtOpenObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x14046EE78 (SeCheckPrivilegedObject.c)
 *     CmpNotifyChangeKey @ 0x140479920 (CmpNotifyChangeKey.c)
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
 *     EtwpRegisterUMGuid @ 0x140491780 (EtwpRegisterUMGuid.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404F1C68 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 *     ExpWnfCheckCallerAccess @ 0x140503078 (ExpWnfCheckCallerAccess.c)
 *     PspIsContextAdmin @ 0x140512CA0 (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PiAuVerifyAccessToObject @ 0x14052894C (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     SepAdtTokenRightAdjusted @ 0x14053A1CC (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     PiUEventHandleRegistration @ 0x1405486E8 (PiUEventHandleRegistration.c)
 *     PiDqQueryCreate @ 0x14054C834 (PiDqQueryCreate.c)
 *     PiAuDoesClientHavePrivilege @ 0x140574928 (PiAuDoesClientHavePrivilege.c)
 *     ExIsRestrictedCaller @ 0x14057D764 (ExIsRestrictedCaller.c)
 *     NtCloseObjectAuditAlarm @ 0x14057EE98 (NtCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x140586D80 (PiCMGetDeviceIdList.c)
 *     CmpCheckSecurityCellAccess @ 0x1405977F4 (CmpCheckSecurityCellAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140598790 (ExpWnfCheckCrossScopeAccess.c)
 *     SepCheckCreateLowBox @ 0x14059942C (SepCheckCreateLowBox.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x1405ACC58 (PopBootStatAccessCheck.c)
 *     SeAuditBootConfiguration @ 0x1405DB528 (SeAuditBootConfiguration.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405DBA30 (NtPrivilegeObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x1405EBE04 (NtDeleteWnfStateData.c)
 *     SepAuditAssignPrimaryToken @ 0x1405F0A2C (SepAuditAssignPrimaryToken.c)
 *     CmpExamineSaclForAuditEvent @ 0x14069357C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406936A0 (CmpReportAuditVirtualizationEvent.c)
 *     PnpGetCallerSessionId @ 0x1406C1840 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1406C38CC (PiAuCheckTokenMembership.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406F7B1C (EtwpCoverageUserIsAdmin.c)
 *     PspIumVerifyParentSd @ 0x14071AD14 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140729130 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x140729304 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1407294C0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x140729678 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x140729BAC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140729D60 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x140729F94 (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x14072CA48 (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x14072CB50 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14072CC00 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     WmipInitializeSecurity @ 0x140843F94 (WmipInitializeSecurity.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x14049D120 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rsi
  unsigned __int64 *v4; // rbp
  _QWORD *v5; // rdi
  struct _KTHREAD *v6; // r15
  signed __int64 *p_Lock; // rsi
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
    SubjectContext->ClientToken = (PACCESS_TOKEN)PsReferenceImpersonationTokenEx(
                                                   (_DWORD)CurrentThread,
                                                   0,
                                                   (unsigned int)&v9,
                                                   (unsigned int)&v8,
                                                   (__int64)&SubjectContext->ImpersonationLevel,
                                                   0LL);
  else
    SubjectContext->ClientToken = 0LL;
  v4 = &Process[1].Affinity.Bitmap[5];
  v5 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v5 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v5 = (_QWORD *)ObFastReferenceObjectLocked(v4);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v6);
  }
  SubjectContext->PrimaryToken = v5;
  if ( SeTokenLeakTracking )
  {
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}

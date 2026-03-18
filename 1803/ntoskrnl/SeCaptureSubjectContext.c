/*
 * XREFs of SeCaptureSubjectContext @ 0x1404C8F50
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     AdminlessTelemetryEnabled @ 0x14005E210 (AdminlessTelemetryEnabled.c)
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     SeReportSecurityEventWithSubCategory @ 0x14006A290 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x14009F5A0 (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheckWithHint @ 0x1400D47B0 (SeAccessCheckWithHint.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140221DC8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x1402ACDE0 (WdipAccessCheck.c)
 *     ExIsRestrictedCaller @ 0x14048C09C (ExIsRestrictedCaller.c)
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     CmpNotifyChangeKey @ 0x1404A3080 (CmpNotifyChangeKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1404D59E0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1404D5AA0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1404D5B10 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtDuplicateToken @ 0x1404DCD80 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     RtlpSetSecurityObject @ 0x1404EB1D0 (RtlpSetSecurityObject.c)
 *     SepAdtTokenRightAdjusted @ 0x1404ECBE0 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     ExpWnfCheckCallerAccess @ 0x1404F699C (ExpWnfCheckCallerAccess.c)
 *     PiDqOpenUserObjectRegKey @ 0x14051A080 (PiDqOpenUserObjectRegKey.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140524180 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PspIsContextAdmin @ 0x14052FBA0 (PspIsContextAdmin.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14053E640 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepCheckCreateLowBox @ 0x14053F314 (SepCheckCreateLowBox.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405466C4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14055CD48 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtDeleteWnfStateName @ 0x140567140 (NtDeleteWnfStateName.c)
 *     NtCloseObjectAuditAlarm @ 0x14056C944 (NtCloseObjectAuditAlarm.c)
 *     PiAuVerifyAccessToObject @ 0x14056D570 (PiAuVerifyAccessToObject.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     PiDqQueryCreate @ 0x140575044 (PiDqQueryCreate.c)
 *     PiCMGetDeviceIdList @ 0x140575248 (PiCMGetDeviceIdList.c)
 *     PspSinglePrivCheck @ 0x140578D80 (PspSinglePrivCheck.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14057A494 (NtPrivilegedServiceAuditAlarm.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14057CC28 (ExpWnfCheckCrossScopeAccess.c)
 *     PiUEventHandleRegistration @ 0x14058C23C (PiUEventHandleRegistration.c)
 *     EtwpAccessCheck @ 0x14058F44C (EtwpAccessCheck.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     NtSetInformationKey @ 0x140596B30 (NtSetInformationKey.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     IoGetDeviceInterfaceAlias @ 0x1405C1E50 (IoGetDeviceInterfaceAlias.c)
 *     PiCMValidateDeviceInstance @ 0x1405C664C (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     NtOpenObjectAuditAlarm @ 0x1405DFF70 (NtOpenObjectAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1405F4050 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14061118C (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x1406138A4 (SeCheckPrivilegedObject.c)
 *     SepAuditAssignPrimaryToken @ 0x140640D1C (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x140640FB0 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1406414B8 (SeAuditProcessCreation.c)
 *     NtSetUuidSeed @ 0x14064B320 (NtSetUuidSeed.c)
 *     PopBootStatAccessCheck @ 0x1406501D4 (PopBootStatAccessCheck.c)
 *     NtDeleteWnfStateData @ 0x14065039C (NtDeleteWnfStateData.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 *     PnpGetCallerSessionId @ 0x1407275C8 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1407299AC (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x140729B48 (PiAuDoesClientHavePrivilege.c)
 *     PspIumVerifyParentSd @ 0x14077E880 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14078CF24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14078D4C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14078D694 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14078D850 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x14078DA08 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x14078DF4C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14078E100 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14078E334 (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x140790E00 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140790EB0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x1407A7264 (EtwpCoverageUserIsAdmin.c)
 *     WmipInitializeSecurity @ 0x14089FA2C (WmipInitializeSecurity.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     PsReferenceImpersonationTokenEx @ 0x1404C9060 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rsi
  void *v4; // rax
  unsigned __int64 *v5; // rbp
  _QWORD *v6; // rdi
  struct _KTHREAD *v7; // r15
  signed __int64 *p_Lock; // rsi
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
    v4 = (void *)PsReferenceImpersonationTokenEx(
                   (_DWORD)CurrentThread,
                   0,
                   (unsigned int)&v10,
                   (unsigned int)&v9,
                   (__int64)&SubjectContext->ImpersonationLevel,
                   0LL);
  else
    v4 = 0LL;
  v5 = &Process[1].Affinity.Bitmap[5];
  SubjectContext->ClientToken = v4;
  v6 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v6 )
  {
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v6 = (_QWORD *)ObFastReferenceObjectLocked(v5);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v7);
  }
  SubjectContext->PrimaryToken = v6;
  if ( SeTokenLeakTracking )
  {
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6[143] + 284LL));
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

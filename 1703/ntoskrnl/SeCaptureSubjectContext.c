/*
 * XREFs of SeCaptureSubjectContext @ 0x14050C4F0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1400641B0 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x1400671B0 (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401DF684 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 *     NtCloseObjectAuditAlarm @ 0x140443584 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x140443EE4 (ExIsRestrictedCaller.c)
 *     PspSinglePrivCheck @ 0x14044B934 (PspSinglePrivCheck.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404584F8 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x14045860C (CmpCheckSecurityCellAccess.c)
 *     SepCheckCreateLowBox @ 0x14045B3C8 (SepCheckCreateLowBox.c)
 *     PspIsContextAdmin @ 0x14045EEC4 (PspIsContextAdmin.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046A39C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046A60C (NtOpenObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046C750 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046C880 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     CmpNotifyChangeKey @ 0x140491AD8 (CmpNotifyChangeKey.c)
 *     SepAdtTokenRightAdjusted @ 0x14049DA88 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     PiUEventHandleRegistration @ 0x1404A4F10 (PiUEventHandleRegistration.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     PiDqQueryCreate @ 0x1404B9250 (PiDqQueryCreate.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404BE304 (PiDqOpenUserObjectRegKey.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404C7614 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     PiAuVerifyAccessToObject @ 0x1404E4EF4 (PiAuVerifyAccessToObject.c)
 *     PiCMValidateDeviceInstance @ 0x1404E6C28 (PiCMValidateDeviceInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x1404F0008 (ExpWnfCheckCallerAccess.c)
 *     EtwpAccessCheck @ 0x1404F2AB8 (EtwpAccessCheck.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     PiCMGetDeviceIdList @ 0x140558CB8 (PiCMGetDeviceIdList.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     IoGetDeviceInterfaceAlias @ 0x14056BDA0 (IoGetDeviceInterfaceAlias.c)
 *     SeCheckPrivilegedObject @ 0x14058547C (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x140597CCC (PiAuDoesClientHavePrivilege.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14059AF88 (SepCheckForAllAppPackagesAceRemoval.c)
 *     SeAuditBootConfiguration @ 0x1405AB4EC (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1405AC188 (SeAuditProcessCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405C7568 (NtPrivilegeObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 *     SepAuditAssignPrimaryToken @ 0x1405D4708 (SepAuditAssignPrimaryToken.c)
 *     CmpExamineSaclForAuditEvent @ 0x140668544 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140668668 (CmpReportAuditVirtualizationEvent.c)
 *     PnpGetCallerSessionId @ 0x140695A98 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140697E4C (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x1406E4540 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1406F16B0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1406F1884 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1406F1A30 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1406F1BE8 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1406F211C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1406F22D0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1406F2504 (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1406F4FFC (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1406F5100 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406F51A0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     WmipInitializeSecurity @ 0x1407FF444 (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x14050C610 (PsReferenceImpersonationTokenEx.c)
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

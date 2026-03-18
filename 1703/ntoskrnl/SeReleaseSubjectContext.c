/*
 * XREFs of SeReleaseSubjectContext @ 0x14052DE30
 * Callers:
 *     FsRtlCancelNotify @ 0x140018DC0 (FsRtlCancelNotify.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14002B79C (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400641B0 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x1400671B0 (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401DF684 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     NtGetNextThread @ 0x14041F564 (NtGetNextThread.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140431F00 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1404327C0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404329C0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 *     NtCloseObjectAuditAlarm @ 0x140443584 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x140443EE4 (ExIsRestrictedCaller.c)
 *     PspSetQuotaLimits @ 0x14044B53C (PspSetQuotaLimits.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140457B18 (PiUEventFreeClientRegistrationContext.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404584F8 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x14045860C (CmpCheckSecurityCellAccess.c)
 *     SepCheckCreateLowBox @ 0x14045B3C8 (SepCheckCreateLowBox.c)
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     PspIsContextAdmin @ 0x14045EEC4 (PspIsContextAdmin.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140469540 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404699E4 (ObpCaptureBoundaryDescriptor.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046A39C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046A60C (NtOpenObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046C750 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046C880 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     SeDeleteAccessState @ 0x14046F5D0 (SeDeleteAccessState.c)
 *     AlpcpCheckConnectionSecurity @ 0x140472F48 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x140476350 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     PiPnpRtlObjectEventRelease @ 0x140489038 (PiPnpRtlObjectEventRelease.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x14049DA88 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     PiDqQueryRelease @ 0x1404B8DE0 (PiDqQueryRelease.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404BE304 (PiDqOpenUserObjectRegKey.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404C7614 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     CmpFlushNotify @ 0x1404CB670 (CmpFlushNotify.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     PiAuVerifyAccessToObject @ 0x1404E4EF4 (PiAuVerifyAccessToObject.c)
 *     PiCMValidateDeviceInstance @ 0x1404E6C28 (PiCMValidateDeviceInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x1404F0008 (ExpWnfCheckCallerAccess.c)
 *     EtwpAccessCheck @ 0x1404F2AB8 (EtwpAccessCheck.c)
 *     PsOpenThread @ 0x1404F33F0 (PsOpenThread.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404F61D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x14050EFA0 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x14050F290 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1405534E0 (EtwpCheckProviderLoggingAccess.c)
 *     WmipCreateGuidObject @ 0x140555430 (WmipCreateGuidObject.c)
 *     PiCMGetDeviceIdList @ 0x140558CB8 (PiCMGetDeviceIdList.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     IoGetDeviceInterfaceAlias @ 0x14056BDA0 (IoGetDeviceInterfaceAlias.c)
 *     NtGetNextProcess @ 0x14057BB10 (NtGetNextProcess.c)
 *     SeCheckPrivilegedObject @ 0x14058547C (SeCheckPrivilegedObject.c)
 *     ExpCheckWakeTimerAccess @ 0x140586274 (ExpCheckWakeTimerAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x140597CCC (PiAuDoesClientHavePrivilege.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14059AF88 (SepCheckForAllAppPackagesAceRemoval.c)
 *     SeAuditBootConfiguration @ 0x1405AB4EC (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1405AC188 (SeAuditProcessCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405C7568 (NtPrivilegeObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 *     SepAuditAssignPrimaryToken @ 0x1405D4708 (SepAuditAssignPrimaryToken.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406671C0 (CmpDoAccessCheckOnKCB.c)
 *     CmpExamineSaclForAuditEvent @ 0x140668544 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140668668 (CmpReportAuditVirtualizationEvent.c)
 *     FsRtlNotifyCleanupAll @ 0x140686E50 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140695A98 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140697E4C (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x1406E4540 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406F1108 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1406F1884 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1406F1A30 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1406F1BE8 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1406F211C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1406F22D0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1406F2504 (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1406F4FFC (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1406F5100 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406F51A0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     VfUtilIsLocalSystem @ 0x140765258 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

void __stdcall SeReleaseSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  PACCESS_TOKEN ClientToken; // rcx
  _QWORD *PrimaryToken; // rax

  if ( SeTokenLeakTracking )
  {
    PrimaryToken = SubjectContext->PrimaryToken;
    if ( PrimaryToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)SubjectContext->PrimaryToken);
  ClientToken = SubjectContext->ClientToken;
  SubjectContext->PrimaryToken = 0LL;
  if ( ClientToken )
    ObfDereferenceObject(ClientToken);
  SubjectContext->ClientToken = 0LL;
}

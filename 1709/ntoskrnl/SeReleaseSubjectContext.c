/*
 * XREFs of SeReleaseSubjectContext @ 0x1404AC530
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400E4A30 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x1400FA910 (RtlCheckTokenMembershipEx.c)
 *     FsRtlCancelNotify @ 0x1401086F0 (FsRtlCancelNotify.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140122710 (ExCpuSetResourceManagerAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401E3B78 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x140279B0C (WdipAccessCheck.c)
 *     PiDqOpenUserObjectRegKey @ 0x140447AF4 (PiDqOpenUserObjectRegKey.c)
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SeDeleteAccessState @ 0x14045D050 (SeDeleteAccessState.c)
 *     AlpcpCheckConnectionSecurity @ 0x140467994 (AlpcpCheckConnectionSecurity.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14046BD00 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14046BE30 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     PsOpenThread @ 0x14046BF70 (PsOpenThread.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SepCheckForCriticalAceRemoval @ 0x14046CC94 (SepCheckForCriticalAceRemoval.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14046D188 (NtPrivilegedServiceAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046D3F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046D680 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046D7AC (NtOpenObjectAuditAlarm.c)
 *     NtGetNextThread @ 0x14046DCC8 (NtGetNextThread.c)
 *     CmpFlushNotify @ 0x14046E88C (CmpFlushNotify.c)
 *     SeCheckPrivilegedObject @ 0x14046EE78 (SeCheckPrivilegedObject.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140487F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404893EC (ObpCaptureBoundaryDescriptor.c)
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
 *     EtwpRegisterUMGuid @ 0x140491780 (EtwpRegisterUMGuid.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x1404C5240 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     NtDuplicateToken @ 0x1404C66A0 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1404EFE30 (EtwpCheckProviderLoggingAccess.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404F1C68 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 *     ExpWnfCheckCallerAccess @ 0x140503078 (ExpWnfCheckCallerAccess.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspIsContextAdmin @ 0x140512CA0 (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     WmipCreateGuidObject @ 0x140520168 (WmipCreateGuidObject.c)
 *     PiAuVerifyAccessToObject @ 0x14052894C (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x140528EA0 (PiPnpRtlObjectEventRelease.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x14053A1CC (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054903C (ObpVerifyCreatorAccessCheck.c)
 *     PiDqQueryRelease @ 0x14054CEF8 (PiDqQueryRelease.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140566CD0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1405677D0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140567860 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     PiAuDoesClientHavePrivilege @ 0x140574928 (PiAuDoesClientHavePrivilege.c)
 *     ExIsRestrictedCaller @ 0x14057D764 (ExIsRestrictedCaller.c)
 *     NtCloseObjectAuditAlarm @ 0x14057EE98 (NtCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x140586D80 (PiCMGetDeviceIdList.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14059576C (PiUEventFreeClientRegistrationContext.c)
 *     CmpCheckSecurityCellAccess @ 0x1405977F4 (CmpCheckSecurityCellAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140598790 (ExpWnfCheckCrossScopeAccess.c)
 *     SepCheckCreateLowBox @ 0x14059942C (SepCheckCreateLowBox.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x1405ACC58 (PopBootStatAccessCheck.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     SeAuditBootConfiguration @ 0x1405DB528 (SeAuditBootConfiguration.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1405DBA30 (NtPrivilegeObjectAuditAlarm.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x1405EBE04 (NtDeleteWnfStateData.c)
 *     SepAuditAssignPrimaryToken @ 0x1405F0A2C (SepAuditAssignPrimaryToken.c)
 *     ExpCheckWakeTimerAccess @ 0x1405F15A0 (ExpCheckWakeTimerAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406916E0 (CmpDoAccessCheckOnKCB.c)
 *     CmpExamineSaclForAuditEvent @ 0x14069357C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406936A0 (CmpReportAuditVirtualizationEvent.c)
 *     FsRtlNotifyCleanupAll @ 0x1406B2250 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x1406C1840 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1406C38CC (PiAuCheckTokenMembership.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406F7B1C (EtwpCoverageUserIsAdmin.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 *     PspIumVerifyParentSd @ 0x14071AD14 (PspIumVerifyParentSd.c)
 *     NtGetNextProcess @ 0x14071C6A0 (NtGetNextProcess.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140728B88 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x140729304 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1407294C0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x140729678 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x140729BAC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140729D60 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x140729F94 (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x14072CA48 (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x14072CB50 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14072CC00 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     VfUtilIsLocalSystem @ 0x1407A6E28 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
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

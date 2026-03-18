/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x1404A1C80
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1400662F4 (SepMandatorySubProcessToken.c)
 *     RtlCheckTokenMembershipEx @ 0x1400671B0 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x1401627E4 (SepInitProcessAuditSd.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401DF718 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenCapability @ 0x14023BE40 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024696C (SepBuildCapeSecurityDescriptor.c)
 *     SepVerifyDesktopAppxImage @ 0x140247014 (SepVerifyDesktopAppxImage.c)
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopCreateNotificationName @ 0x1404596A4 (PopCreateNotificationName.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140469F00 (ObpVerifyAccessToBoundaryEntry.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1404A1D38 (IopCreateSecurityDescriptorPerType.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404A1E64 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x1404A4498 (PiUEventInitClientRegistrationContext.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14056CE48 (RtlpSysVolCreateSecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057F358 (LocalConvertStringSDToSD_Rev1.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1405A2BA8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1405A2F64 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1405A316C (MiCreateMemoryEventSD.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A68C8 (CmpAdminSystemSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x1405C8E6C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405D2594 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140668104 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x140697E4C (PiAuCheckTokenMembership.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406E011C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     RtlpSysVolTakeOwnership @ 0x1406EB860 (RtlpSysVolTakeOwnership.c)
 *     SepBuildObjectSecurityDescriptor @ 0x1406F8998 (SepBuildObjectSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14070360C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x14072104C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140747B7C (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140765540 (ViInitializeLocalSystemDescriptor.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 *     WmipInitializeSecurity @ 0x1407FF444 (WmipInitializeSecurity.c)
 *     MiSystemPartitionObjectCreate @ 0x1407FFB40 (MiSystemPartitionObjectCreate.c)
 *     SeMakeSystemToken @ 0x14081A5B4 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14081AB04 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14081AD40 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x14081C738 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14081D17C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14081D4F4 (PiAuCreateStandardSecurityObject.c)
 *     DbgkpCreateNotificationEvent @ 0x14082109C (DbgkpCreateNotificationEvent.c)
 *     ExpKeyedEventInitialization @ 0x14082212C (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140822E64 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __stdcall RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  memset(SecurityDescriptor, 0, 0x28uLL);
  result = 0;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}

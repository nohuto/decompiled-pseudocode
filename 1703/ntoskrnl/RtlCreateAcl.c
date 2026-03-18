/*
 * XREFs of RtlCreateAcl @ 0x1404F5DF0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x14003DE8C (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x1400671B0 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x1401627E4 (SepInitProcessAuditSd.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401DF718 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenCapability @ 0x14023BE40 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1402526D0 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopCreateNotificationName @ 0x1404596A4 (PopCreateNotificationName.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140469F00 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1404A1D38 (IopCreateSecurityDescriptorPerType.c)
 *     PiUEventInitClientRegistrationContext @ 0x1404A4498 (PiUEventInitClientRegistrationContext.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14056CE48 (RtlpSysVolCreateSecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14059F218 (ObpCreateDefaultObjectTypeSD.c)
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
 *     PiAuCheckTokenMembership @ 0x140697E4C (PiAuCheckTokenMembership.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406E011C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     RtlpComputeMergedAcl2 @ 0x1406EA184 (RtlpComputeMergedAcl2.c)
 *     RtlpCreateServerAcl @ 0x1406EA480 (RtlpCreateServerAcl.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406F87EC (SepBuildDaclWithAllApplicationPackageSid.c)
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
 *     <none>
 */

NTSTATUS __stdcall RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  NTSTATUS result; // eax

  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  result = 0;
  memset(Acl, 0, AclLength);
  Acl->AclSize = AclLength & 0xFFFC;
  Acl->AclRevision = AclRevision;
  Acl->Sbz1 = 0;
  *(_DWORD *)&Acl->AceCount = 0;
  return result;
}

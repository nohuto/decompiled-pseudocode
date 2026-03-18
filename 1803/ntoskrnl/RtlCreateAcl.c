/*
 * XREFs of RtlCreateAcl @ 0x140541E30
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14009F5A0 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1400A0C84 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x140180424 (SepInitProcessAuditSd.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140221EE4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenCapability @ 0x140287190 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1402ACDE0 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404C7454 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140540BA0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140541ABC (IopCreateSecurityDescriptorPerType.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140541BF4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x140542C18 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x140582AF8 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1405C384C (RtlpSysVolCreateSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405E09D4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405E0F7C (_PnpGetPropertiesSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140608EA0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14060A7FC (MiSessionObjectCreate.c)
 *     ObCreateKernelObjectsSD @ 0x14061CE70 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14061D22C (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14061D430 (MiCreateMemoryEventSD.c)
 *     DbgkpCreateNotificationEvent @ 0x140620BDC (DbgkpCreateNotificationEvent.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140621F3C (ObpCreateDefaultObjectTypeSD.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1406269C4 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140630AC0 (CmpAdminSystemSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x1406455CC (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x14064B320 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14064EBCC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1407299AC (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140729BE0 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140729E54 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpComputeMergedAcl2 @ 0x140785814 (RtlpComputeMergedAcl2.c)
 *     RtlpCreateServerAcl @ 0x140785B10 (RtlpCreateServerAcl.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079E914 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C83C0 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407F403C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1407F687C (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1408142A0 (ViInitializeLocalSystemDescriptor.c)
 *     ExpKeyedEventInitialization @ 0x14089EE78 (ExpKeyedEventInitialization.c)
 *     WmipInitializeSecurity @ 0x14089FA2C (WmipInitializeSecurity.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x1408BCBA0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1408BD0F0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1408BD32C (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x1408BEDD8 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1408BFB84 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1408BFF3C (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1408C10B4 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1408C4278 (PspInitializeSystemPartitionPhase0.c)
 *     IopCreateUmdfDirectory @ 0x1408C46C8 (IopCreateUmdfDirectory.c)
 *     PopUmpoInitializeChannel @ 0x1408C6304 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

NTSTATUS __stdcall RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  __int16 v3; // bx
  UCHAR v4; // si
  NTSTATUS result; // eax

  v3 = AclLength;
  v4 = AclRevision;
  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  memset(Acl, 0, AclLength);
  result = 0;
  Acl->AclRevision = v4;
  Acl->Sbz1 = 0;
  Acl->AclSize = v3 & 0xFFFC;
  *(_DWORD *)&Acl->AceCount = 0;
  return result;
}

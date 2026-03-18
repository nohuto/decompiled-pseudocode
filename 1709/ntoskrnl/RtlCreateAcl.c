/*
 * XREFs of RtlCreateAcl @ 0x140486390
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14000DEA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenMembershipEx @ 0x1400FA910 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140128E84 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x1401511F4 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1402516C0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x140279B0C (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14028EEE0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14044F9F8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404BB8F0 (SepCreateImpersonationTokenDacl.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     PiUEventInitClientRegistrationContext @ 0x140548A48 (PiUEventInitClientRegistrationContext.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405499E0 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14054A188 (IopCreateSecurityDescriptorPerType.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14054A2BC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 *     PopCreateNotificationName @ 0x1405994C8 (PopCreateNotificationName.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405ADB78 (PopCreateHiberFileSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1405AFCB8 (BiCreateKeySecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1405B22C8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1405B289C (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1405B2AA4 (MiCreateMemoryEventSD.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405C1760 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405C2FF0 (CmpAdminSystemSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x1405C474C (DbgkpCreateNotificationEvent.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x1405C7438 (ObpCreateDefaultObjectTypeSD.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x1405DCE0C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1406C38CC (PiAuCheckTokenMembership.c)
 *     RtlpComputeMergedAcl2 @ 0x140722074 (RtlpComputeMergedAcl2.c)
 *     RtlpCreateServerAcl @ 0x140722370 (RtlpCreateServerAcl.c)
 *     SepBuildDaclWithCriticalAces @ 0x1407303A4 (SepBuildDaclWithCriticalAces.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14073B910 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140760F4C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14078A3BC (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407A7120 (ViInitializeLocalSystemDescriptor.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 *     WmipInitializeSecurity @ 0x140843F94 (WmipInitializeSecurity.c)
 *     IopCreateUmdfDirectory @ 0x1408450BC (IopCreateUmdfDirectory.c)
 *     SeMakeSystemToken @ 0x14084AF38 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14084B488 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14084B6C4 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x14084D144 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14084E620 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14084E998 (PiAuCreateStandardSecurityObject.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140852E58 (PspInitializeSystemPartitionPhase0.c)
 *     ExpKeyedEventInitialization @ 0x140853288 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x1408542AC (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x14086A3C0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
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

/*
 * XREFs of RtlLengthSid @ 0x140088130
 * Callers:
 *     ObpCaptureBoundaryDescriptor @ 0x1404699E4 (ObpCaptureBoundaryDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x140470170 (SeCaptureSidAndAttributesArray.c)
 *     RtlpCopyEffectiveAce @ 0x1404721D0 (RtlpCopyEffectiveAce.c)
 *     PiUEventInitClientRegistrationContext @ 0x1404A4498 (PiUEventInitClientRegistrationContext.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     CmpBuildAdminInformation @ 0x14056AEC0 (CmpBuildAdminInformation.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14056CE48 (RtlpSysVolCreateSecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x14057FC7C (LookupSidInTable.c)
 *     BiCreateKeySecurityDescriptor @ 0x14058BA78 (BiCreateKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14059481C (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14059F218 (ObpCreateDefaultObjectTypeSD.c)
 *     ObCreateKernelObjectsSD @ 0x1405A2BA8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1405A2F64 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1405A316C (MiCreateMemoryEventSD.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PfpCreateEvent @ 0x1405C8E6C (PfpCreateEvent.c)
 *     WdipSemSqmInit @ 0x1405CA43C (WdipSemSqmInit.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1406889EC (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x14068B460 (IoCheckQuotaBufferValidity.c)
 *     PiAuCheckTokenMembership @ 0x140697E4C (PiAuCheckTokenMembership.c)
 *     RtlReplaceSidInSd @ 0x1406E9BA0 (RtlReplaceSidInSd.c)
 *     RtlpCreateServerAcl @ 0x1406EA480 (RtlpCreateServerAcl.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406F87EC (SepBuildDaclWithAllApplicationPackageSid.c)
 *     LocalGetAceCondition @ 0x1406FB8C0 (LocalGetAceCondition.c)
 *     SddlAddAccessFilterAce @ 0x1406FBCEC (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1406FBF00 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406FC05C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406FC1B4 (SddlAddScopedPolicyIDAce.c)
 *     GetOperandValue @ 0x1406FD104 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x1406FEC78 (LocalGetRelativeAttributeForString.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14070360C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140747B7C (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140765540 (ViInitializeLocalSystemDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSid(PSID Sid)
{
  return 4 * *((unsigned __int8 *)Sid + 1) + 8;
}

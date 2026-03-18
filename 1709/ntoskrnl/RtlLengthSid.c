/*
 * XREFs of RtlLengthSid @ 0x140019280
 * Callers:
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14044F9F8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     SeCaptureSidAndAttributesArray @ 0x140488B20 (SeCaptureSidAndAttributesArray.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404893EC (ObpCaptureBoundaryDescriptor.c)
 *     RtlpCopyEffectiveAce @ 0x1404C0110 (RtlpCopyEffectiveAce.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     PiUEventInitClientRegistrationContext @ 0x140548A48 (PiUEventInitClientRegistrationContext.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x14057C5D8 (LookupSidInTable.c)
 *     WdipSemSqmInit @ 0x1405AB538 (WdipSemSqmInit.c)
 *     BiCreateKeySecurityDescriptor @ 0x1405AFCB8 (BiCreateKeySecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1405B22C8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1405B289C (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1405B2AA4 (MiCreateMemoryEventSD.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 *     DbgkpCreateNotificationEvent @ 0x1405C474C (DbgkpCreateNotificationEvent.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x1405C7438 (ObpCreateDefaultObjectTypeSD.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PfpCreateEvent @ 0x1405DCE0C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1405E6FC0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 *     CmpBuildAdminInformation @ 0x140690E6C (CmpBuildAdminInformation.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1406B49CC (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1406B7100 (IoCheckQuotaBufferValidity.c)
 *     PiAuCheckTokenMembership @ 0x1406C38CC (PiAuCheckTokenMembership.c)
 *     RtlReplaceSidInSd @ 0x140721AB0 (RtlReplaceSidInSd.c)
 *     RtlpCreateServerAcl @ 0x140722370 (RtlpCreateServerAcl.c)
 *     SepBuildDaclWithCriticalAces @ 0x1407303A4 (SepBuildDaclWithCriticalAces.c)
 *     LocalGetAceCondition @ 0x1407332A8 (LocalGetAceCondition.c)
 *     SddlAddAccessFilterAce @ 0x1407336D4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1407338F0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140733A4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140733BA4 (SddlAddScopedPolicyIDAce.c)
 *     GetOperandValue @ 0x140734AFC (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x140736660 (LocalGetRelativeAttributeForString.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14073B910 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14078A3BC (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407A7120 (ViInitializeLocalSystemDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSid(PSID Sid)
{
  return 4 * *((unsigned __int8 *)Sid + 1) + 8;
}

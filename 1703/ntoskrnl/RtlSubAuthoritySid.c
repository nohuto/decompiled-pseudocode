/*
 * XREFs of RtlSubAuthoritySid @ 0x14008C0C0
 * Callers:
 *     SepCheckCapabilities @ 0x14041E774 (SepCheckCapabilities.c)
 *     SeQueryMandatoryLabel @ 0x14041E8D4 (SeQueryMandatoryLabel.c)
 *     RtlIsParentOfChildAppContainer @ 0x14041E978 (RtlIsParentOfChildAppContainer.c)
 *     SepValidateReferencedCachedHandles @ 0x1404622D8 (SepValidateReferencedCachedHandles.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140469540 (ObpVerifyCreatorAccessCheck.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x1404FF1F0 (RtlIsElevatedRid.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     LookupSidInTable @ 0x14057FC7C (LookupSidInTable.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A68C8 (CmpAdminSystemSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1405C4B74 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x1405CDB60 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405D2594 (PopCreateHiberFileSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140697D8C (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1406E9770 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x1406E9A30 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14070360C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x14072104C (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}

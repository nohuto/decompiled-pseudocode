/*
 * XREFs of RtlSubAuthoritySid @ 0x140019320
 * Callers:
 *     SepCheckCapabilities @ 0x140447668 (SepCheckCapabilities.c)
 *     SeQueryMandatoryLabel @ 0x140447E6C (SeQueryMandatoryLabel.c)
 *     RtlIsParentOfChildAppContainer @ 0x1404485C8 (RtlIsParentOfChildAppContainer.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     RtlIsElevatedRid @ 0x140486B30 (RtlIsElevatedRid.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054903C (ObpVerifyCreatorAccessCheck.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x1405641B4 (SepValidateReferencedCachedHandles.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LookupSidInTable @ 0x14057C5D8 (LookupSidInTable.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405ADB78 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405C1760 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405C2FF0 (CmpAdminSystemSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1405D7F68 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x1405E2890 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1406C380C (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1407215D0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140721930 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140722598 (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14073B910 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140760F4C (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}

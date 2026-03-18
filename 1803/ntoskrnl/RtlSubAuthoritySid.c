/*
 * XREFs of RtlSubAuthoritySid @ 0x14005C820
 * Callers:
 *     RtlIsElevatedRid @ 0x1404C2450 (RtlIsElevatedRid.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     SepCheckCapabilities @ 0x14053EE14 (SepCheckCapabilities.c)
 *     SepValidateReferencedCachedHandles @ 0x14053FA28 (SepValidateReferencedCachedHandles.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140540474 (ObpVerifyCreatorAccessCheck.c)
 *     RtlIsParentOfChildAppContainer @ 0x140540D98 (RtlIsParentOfChildAppContainer.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     SeQueryMandatoryLabel @ 0x140571340 (SeQueryMandatoryLabel.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405E09D4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405E0F7C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LookupSidInTable @ 0x14060181C (LookupSidInTable.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1406269C4 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140630AC0 (CmpAdminSystemSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140641F84 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x14064B320 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14064EBCC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1407298EC (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140784D70 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x1407850D0 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079E914 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1407BFCEC (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C83C0 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407F403C (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}

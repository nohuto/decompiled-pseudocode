/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x140541F10
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14009F5A0 (RtlCheckTokenMembershipEx.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140221EE4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenCapability @ 0x140287190 (RtlCheckTokenCapability.c)
 *     PiUEventInitClientRegistrationContext @ 0x140542C18 (PiUEventInitClientRegistrationContext.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1405C39A8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405E09D4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405E0F7C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140600EC4 (LocalConvertStringSDToSD_Rev1.c)
 *     BiCreateKeySecurityDescriptor @ 0x140608EA0 (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14064EBCC (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1406F6030 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x1407299AC (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140729BE0 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140729E54 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x140787398 (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C83C0 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407F403C (DrvDbGetSecurityDescriptor.c)
 *     WmipInitializeSecurity @ 0x14089FA2C (WmipInitializeSecurity.c)
 *     SeMakeSystemToken @ 0x1408BCBA0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1408BD0F0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1408BD32C (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x1408BEDD8 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1408BFB84 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1408BFF3C (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1408C10B4 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Owner,
        BOOLEAN OwnerDefaulted)
{
  __int16 v4; // cx
  PSID v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 < 0 )
    return -1073741703;
  v5 = 0LL;
  if ( Owner )
    v5 = Owner;
  *((_QWORD *)SecurityDescriptor + 1) = v5;
  v6 = v4 & 0xFFFE;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( OwnerDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 1;
  return 0;
}

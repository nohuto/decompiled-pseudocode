/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x140549980
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14000DEA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlCheckTokenMembershipEx @ 0x1400FA910 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1402516C0 (RtlCheckTokenCapability.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14044FB54 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiUEventInitClientRegistrationContext @ 0x140548A48 (PiUEventInitClientRegistrationContext.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057B9FC (LocalConvertStringSDToSD_Rev1.c)
 *     BiCreateKeySecurityDescriptor @ 0x1405AFCB8 (BiCreateKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140693140 (CmpCopySaclToVirtualKey.c)
 *     PiAuCheckTokenMembership @ 0x1406C38CC (PiAuCheckTokenMembership.c)
 *     RtlpSysVolTakeOwnership @ 0x140723ACC (RtlpSysVolTakeOwnership.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140730628 (SepBuildObjectSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140760F4C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 *     WmipInitializeSecurity @ 0x140843F94 (WmipInitializeSecurity.c)
 *     SeMakeSystemToken @ 0x14084AF38 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14084B488 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14084B6C4 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x14084D144 (SepInitSystemDacls.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14084E620 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14084E998 (PiAuCreateStandardSecurityObject.c)
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

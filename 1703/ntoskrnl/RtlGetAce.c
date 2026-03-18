/*
 * XREFs of RtlGetAce @ 0x1400880C0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x14003DE8C (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056CFA4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     LocalGetAclForString @ 0x14057F594 (LocalGetAclForString.c)
 *     ObpGetDosDevicesProtection @ 0x1405A2F64 (ObpGetDosDevicesProtection.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405D2594 (PopCreateHiberFileSecurityDescriptor.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406F87EC (SepBuildDaclWithAllApplicationPackageSid.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  ULONG v4; // edx

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v4 = 0;
    *Ace = &Acl[1];
    if ( !AceIndex )
      return *Ace >= (char *)Acl + Acl->AclSize ? 0xC000000D : 0;
    while ( *Ace < (char *)Acl + Acl->AclSize )
    {
      ++v4;
      *Ace = (char *)*Ace + *((unsigned __int16 *)*Ace + 1);
      if ( v4 >= AceIndex )
        return *Ace >= (char *)Acl + Acl->AclSize ? 0xC000000D : 0;
    }
  }
  return -1073741811;
}

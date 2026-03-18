/*
 * XREFs of RtlGetAce @ 0x140019210
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140128E84 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14028EEE0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14044FB54 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405ADB78 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpGetDosDevicesProtection @ 0x1405B289C (ObpGetDosDevicesProtection.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405C1760 (CmpHiveRootSecurityDescriptor.c)
 *     SepBuildDaclWithCriticalAces @ 0x1407303A4 (SepBuildDaclWithCriticalAces.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
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

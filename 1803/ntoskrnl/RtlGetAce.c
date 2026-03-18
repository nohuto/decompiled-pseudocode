/*
 * XREFs of RtlGetAce @ 0x1400A0E40
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1400A0C84 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1405C39A8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 *     ObpGetDosDevicesProtection @ 0x14061D22C (ObpGetDosDevicesProtection.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1406269C4 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v5; // rcx
  ULONG v6; // r8d

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v5 = Acl + 1;
    *Ace = v5;
    v6 = 0;
    if ( !AceIndex )
      return v5 >= (PACL)((char *)Acl + Acl->AclSize) ? 0xC000000D : 0;
    while ( v5 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v6;
      v5 = (PACL)((char *)v5 + v5->AclSize);
      *Ace = v5;
      if ( v6 >= AceIndex )
        return v5 >= (PACL)((char *)Acl + Acl->AclSize) ? 0xC000000D : 0;
    }
  }
  return -1073741811;
}

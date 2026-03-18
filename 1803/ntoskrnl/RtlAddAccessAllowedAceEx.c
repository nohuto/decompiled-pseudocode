/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x140605800
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140221EE4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1408BFB84 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1408BFF3C (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1408C10B4 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}

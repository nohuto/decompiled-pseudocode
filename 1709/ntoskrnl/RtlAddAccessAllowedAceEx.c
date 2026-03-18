/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x14059D5C0
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14000DEA8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14084E620 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x14084E998 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
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

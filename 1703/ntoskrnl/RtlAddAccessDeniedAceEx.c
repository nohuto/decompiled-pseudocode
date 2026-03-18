/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x1405C6FA0
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x14081D4F4 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessDeniedAceEx(PACL Acl, ULONG Revision, ULONG Flags, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, Revision, Flags, AccessMask, (unsigned __int8 *)Sid, 1u);
}

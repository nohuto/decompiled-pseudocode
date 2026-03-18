/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x140644150
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x1408BFF3C (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessDeniedAceEx(PACL Acl, ULONG Revision, ULONG Flags, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, Revision, Flags, AccessMask, (unsigned __int8 *)Sid, 1u);
}

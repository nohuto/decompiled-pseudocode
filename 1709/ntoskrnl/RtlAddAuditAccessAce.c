/*
 * XREFs of RtlAddAuditAccessAce @ 0x1407206D8
 * Callers:
 *     SepInitProcessAuditSd @ 0x1401511F4 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAuditAccessAce(
        PACL Acl,
        ULONG Revision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN Success,
        BOOLEAN Failure)
{
  return RtlpAddKnownAce(Acl, 2u, 192, AccessMask, (unsigned __int8 *)SeWorldSid, 2u);
}

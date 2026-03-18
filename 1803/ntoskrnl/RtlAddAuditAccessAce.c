/*
 * XREFs of RtlAddAuditAccessAce @ 0x140783DE8
 * Callers:
 *     SepInitProcessAuditSd @ 0x140180424 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
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

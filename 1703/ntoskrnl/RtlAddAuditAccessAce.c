/*
 * XREFs of RtlAddAuditAccessAce @ 0x1406E88E4
 * Callers:
 *     SepInitProcessAuditSd @ 0x1401627E4 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 * Callees:
 *     <none>
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

/*
 * XREFs of RtlCheckTokenMembership @ 0x1400674A0
 * Callers:
 *     ExpCheckFullProcessInformationAccess @ 0x14045A830 (ExpCheckFullProcessInformationAccess.c)
 *     ExpCheckIRTimerAccess @ 0x14045BCD8 (ExpCheckIRTimerAccess.c)
 *     PopValidateContextMembership @ 0x140586050 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1405D42D4 (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x1406E9770 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1406F79EC (NtFilterBootOption.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}

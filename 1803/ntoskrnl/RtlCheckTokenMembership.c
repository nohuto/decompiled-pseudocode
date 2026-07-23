/*
 * XREFs of RtlCheckTokenMembership @ 0x14009F580
 * Callers:
 *     ExCheckFullProcessInformationAccess @ 0x140540610 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckIRTimerAccess @ 0x140612828 (ExpCheckIRTimerAccess.c)
 *     PopValidateContextMembership @ 0x140613F70 (PopValidateContextMembership.c)
 *     PopIsRunningAsLocalSystem @ 0x14075F130 (PopIsRunningAsLocalSystem.c)
 *     PopNetUpdateStandbyRequest @ 0x14076BBF8 (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x140784D70 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x14079357C (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1407AC2E8 (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14009F5A0 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}

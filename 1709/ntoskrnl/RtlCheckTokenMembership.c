/*
 * XREFs of RtlCheckTokenMembership @ 0x1400FA8F0
 * Callers:
 *     ExCheckFullProcessInformationAccess @ 0x14044C8B0 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckIRTimerAccess @ 0x14059C904 (ExpCheckIRTimerAccess.c)
 *     PopValidateContextMembership @ 0x1405F0DD4 (PopValidateContextMembership.c)
 *     PopIsRunningAsLocalSystem @ 0x1406F792C (PopIsRunningAsLocalSystem.c)
 *     PopNetUpdateStandbyRequest @ 0x140707D78 (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x1407215D0 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x14072F5EC (NtFilterBootOption.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1400FA910 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}

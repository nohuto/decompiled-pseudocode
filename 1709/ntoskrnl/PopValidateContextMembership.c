/*
 * XREFs of PopValidateContextMembership @ 0x1405F0DD4
 * Callers:
 *     PopGetSettingNotificationName @ 0x1404EAE58 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400FA8F0 (RtlCheckTokenMembership.c)
 */

NTSTATUS __fastcall PopValidateContextMembership(PSID SidToCheck)
{
  NTSTATUS result; // eax
  BOOLEAN IsMember; // [rsp+38h] [rbp+10h] BYREF

  IsMember = 0;
  result = RtlCheckTokenMembership(0LL, SidToCheck, &IsMember);
  if ( result < 0 || !IsMember )
    return -1073741790;
  return result;
}

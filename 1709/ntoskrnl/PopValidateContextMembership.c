/*
 * XREFs of PopValidateContextMembership @ 0x1405F0DD4
 * Callers:
 *     PopGetSettingNotificationName @ 0x1404EAE58 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400FA8F0 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}

/*
 * XREFs of PopValidateContextMembership @ 0x140613F70
 * Callers:
 *     PopGetSettingNotificationName @ 0x14052389C (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14009F580 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}

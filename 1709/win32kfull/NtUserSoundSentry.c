/*
 * XREFs of NtUserSoundSentry @ 0x1C000D2A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  v0 = (int)xxxSoundSentry();
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}

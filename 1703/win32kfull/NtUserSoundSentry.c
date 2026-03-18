/*
 * XREFs of NtUserSoundSentry @ 0x1C0008240
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  EnterCrit(0LL, 1LL);
  v0 = (int)xxxSoundSentry();
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v0;
}

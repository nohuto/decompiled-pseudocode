/*
 * XREFs of PopAwayModePowerRequest @ 0x14075D6C0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140470BD4 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140470C14 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  PopAcquireAwaymodeLock();
  byte_1403AAA30 = a1 != 0;
  PopReleaseAwaymodeLock(v3, v2, v4, v5);
  return 0LL;
}

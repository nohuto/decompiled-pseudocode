/*
 * XREFs of PopAwayModePowerRequest @ 0x1406F5AA0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140439790 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x1404397D0 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(char a1)
{
  PopAcquireAwaymodeLock();
  byte_1403661B0 = a1 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}

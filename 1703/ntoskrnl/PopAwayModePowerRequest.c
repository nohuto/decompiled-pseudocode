/*
 * XREFs of PopAwayModePowerRequest @ 0x1406C5740
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAwaymodeLock @ 0x14040A7FC (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x14040A840 (PopAcquireAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(char a1)
{
  PopAcquireAwaymodeLock();
  byte_14034BB30 = a1 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}

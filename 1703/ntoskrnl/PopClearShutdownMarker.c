/*
 * XREFs of PopClearShutdownMarker @ 0x14045EFAC
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140409EF0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

void PopClearShutdownMarker()
{
  PopBsdShutdownInProgress = 0;
}

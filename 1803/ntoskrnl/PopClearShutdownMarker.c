/*
 * XREFs of PopClearShutdownMarker @ 0x140584DB4
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140476810 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

void PopClearShutdownMarker()
{
  PopBsdShutdownInProgress = 0;
}

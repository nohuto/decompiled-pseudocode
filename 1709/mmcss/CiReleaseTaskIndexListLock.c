/*
 * XREFs of CiReleaseTaskIndexListLock @ 0x1C000A568
 * Callers:
 *     CiTaskIndexDereference @ 0x1C000233C (CiTaskIndexDereference.c)
 * Callees:
 *     <none>
 */

__int64 CiReleaseTaskIndexListLock()
{
  WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
}

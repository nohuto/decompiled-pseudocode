/*
 * XREFs of ?CleanupPostMortemLogging@@YAXXZ @ 0x1C011B82C
 * Callers:
 *     CleanupModuleAllocations @ 0x1C011B820 (CleanupModuleAllocations.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void CleanupPostMortemLogging(void)
{
  if ( qword_1C032A830 )
    Win32FreePool(qword_1C032A830);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    Win32FreePool(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    Win32FreePool(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
  }
  if ( gpAtomickCheckStacks )
  {
    Win32FreePool(gpAtomickCheckStacks);
    gpAtomickCheckStacks = 0LL;
  }
  if ( gpLinkWindowLog )
  {
    Win32FreePool(gpLinkWindowLog);
    gpLinkWindowLog = 0LL;
  }
}

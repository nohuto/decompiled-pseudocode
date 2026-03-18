/*
 * XREFs of WdipSemCleanStart @ 0x1406391C0
 * Callers:
 *     WdipSemInitialize @ 0x14063916C (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1407A10E8 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x14060D8F0 (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x14063922C (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x14063924C (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x14063935C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1406393B0 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x1406394B8 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140639AE4 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1407A13A0 (WdipSemShutdown.c)
 */

__int64 WdipSemCleanStart()
{
  int LoggerIds; // ebx

  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    LoggerIds = WdipSemEnableSemProvider();
    if ( LoggerIds >= 0 )
    {
      LoggerIds = WdipSemLoadConfigInfo();
      if ( LoggerIds >= 0 )
      {
        LoggerIds = WdipSemLoadGroupPolicy();
        if ( LoggerIds >= 0 )
        {
          LoggerIds = WdipSemLoadScenarioTable();
          if ( LoggerIds >= 0 )
            LoggerIds = WdipSemStartTimeoutCheck();
        }
      }
    }
  }
  WdipSemCleanupGroupPolicy();
  if ( LoggerIds < 0 )
    WdipSemShutdown();
  else
    WdipSemEnabled = 1;
  return (unsigned int)LoggerIds;
}

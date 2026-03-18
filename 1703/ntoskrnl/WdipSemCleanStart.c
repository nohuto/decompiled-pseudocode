/*
 * XREFs of WdipSemCleanStart @ 0x1405CA324
 * Callers:
 *     WdipSemInitialize @ 0x1405CA2D0 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x140705878 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x14046777C (WdipSemGetLoggerIds.c)
 *     WdipSemLoadScenarioTable @ 0x1405ADC7C (WdipSemLoadScenarioTable.c)
 *     WdipSemCleanupGroupPolicy @ 0x1405CA390 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1405CA3B0 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x1405CA4C0 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1405CA514 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x1405CA614 (WdipSemEnableSemProvider.c)
 *     WdipSemShutdown @ 0x140705958 (WdipSemShutdown.c)
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

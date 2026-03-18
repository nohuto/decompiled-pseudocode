/*
 * XREFs of WdipSemCleanStart @ 0x1405AB080
 * Callers:
 *     WdipSemInitialize @ 0x1405ABAE8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14073DDC8 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemLoadScenarioTable @ 0x1405AA0BC (WdipSemLoadScenarioTable.c)
 *     WdipSemEnableSemProvider @ 0x1405AADCC (WdipSemEnableSemProvider.c)
 *     WdipSemLoadConfigInfo @ 0x1405AAF2C (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadGroupPolicy @ 0x1405AB02C (WdipSemLoadGroupPolicy.c)
 *     WdipSemCleanupGroupPolicy @ 0x1405AB0EC (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1405AB10C (WdipSemStartTimeoutCheck.c)
 *     WdipSemGetLoggerIds @ 0x1405AB9D8 (WdipSemGetLoggerIds.c)
 *     WdipSemShutdown @ 0x14073ED7C (WdipSemShutdown.c)
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

/*
 * XREFs of CrmStateMonitorStateSizeGet @ 0x1800057E0
 * Callers:
 *     CrmLogStateMonitorStateSet @ 0x180005620 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x180005764 (CrmStateMonitorLogDataGet.c)
 *     CrmLogStateMonitorRundown @ 0x180034E60 (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorStart @ 0x180039514 (CrmStateMonitorStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180039B1C (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSebStart @ 0x180039BB0 (CrmStateMonitorSebStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180039C50 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180039D28 (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorConstrainedModeStart @ 0x180039DB4 (CrmStateMonitorConstrainedModeStart.c)
 *     CrmStateMonitorGameModeStart @ 0x180039E58 (CrmStateMonitorGameModeStart.c)
 *     CrmStateMonitorWNFCallback @ 0x18003E150 (CrmStateMonitorWNFCallback.c)
 *     CrmLogStateMonitorStop @ 0x18006A440 (CrmLogStateMonitorStop.c)
 *     CrmStateMonitorTestStart @ 0x18006A894 (CrmStateMonitorTestStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorStateSizeGet(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 <= 9 )
  {
    if ( a1 != 9 )
    {
      if ( a1 < 0 )
        return v1;
      if ( a1 > 7 )
        return 12;
    }
    return 4;
  }
  if ( a1 == 11 || a1 == 10 )
    return 4;
  if ( (unsigned int)(a1 - 12) <= 3 )
    return 12;
  return v1;
}

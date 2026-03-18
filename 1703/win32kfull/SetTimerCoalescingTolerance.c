/*
 * XREFs of SetTimerCoalescingTolerance @ 0x1C00F9F60
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00F9E8C (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     InitTimerCoalescing @ 0x1C011A890 (InitTimerCoalescing.c)
 *     StartScreenSaver @ 0x1C01EDEA0 (StartScreenSaver.c)
 * Callees:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C00F9FEC (-AdjustRITDelayableTimers@@YAXH@Z.c)
 */

void __fastcall SetTimerCoalescingTolerance(int a1)
{
  int v1; // ecx
  int v2; // ecx

  gTimerCoalCurrentState = a1;
  gCurrentTimerCoalescingTolerance = *((_DWORD *)&gTimerCoalescingSpec + 4 * (gSessionId != gServiceSessionId) + a1);
  if ( gSessionId != gServiceSessionId )
  {
    if ( !a1 )
    {
      gdwRITdemonLockState = 0;
LABEL_4:
      v1 = 1;
LABEL_5:
      AdjustRITDelayableTimers(v1);
      return;
    }
    v2 = a1 - 2;
    if ( !v2 )
    {
      gdwRITdemonLockState |= 1u;
      if ( (gdwRITdemonLockState & 2) == 0 && giScreenSaveTimeOutMs > 0 && (gbLockConsoleActive || (*gpsi & 0x200) != 0) )
        goto LABEL_4;
LABEL_10:
      v1 = 0;
      goto LABEL_5;
    }
    if ( v2 == 1 )
    {
      gdwRITdemonLockState |= 2u;
      if ( (gdwRITdemonLockState & 1) != 0 )
        goto LABEL_10;
    }
  }
}

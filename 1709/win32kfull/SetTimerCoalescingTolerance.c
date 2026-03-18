/*
 * XREFs of SetTimerCoalescingTolerance @ 0x1C0104E30
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0104CF0 (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     InitTimerCoalescing @ 0x1C0124540 (InitTimerCoalescing.c)
 *     StartScreenSaver @ 0x1C01F8340 (StartScreenSaver.c)
 * Callees:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0104EC0 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 */

void __fastcall SetTimerCoalescingTolerance(signed int a1)
{
  int v1; // ecx
  int v2; // ecx

  WPP_MAIN_CB.AlignmentRequirement = a1;
  *(&WPP_MAIN_CB.AlignmentRequirement + 1) = *((_DWORD *)&gTimerCoalescingSpec
                                             + a1
                                             + (unsigned __int64)(gServiceSessionId != gSessionId ? 4 : 0));
  if ( gSessionId != gServiceSessionId )
  {
    if ( !a1 )
    {
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
LABEL_4:
      v1 = 1;
LABEL_5:
      AdjustRITDelayableTimers(v1);
      return;
    }
    v2 = a1 - 2;
    if ( !v2 )
    {
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) |= 1u;
      if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) == 0
        && giScreenSaveTimeOutMs > 0
        && (LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) || (*gpsi & 0x200) != 0) )
      {
        goto LABEL_4;
      }
LABEL_10:
      v1 = 0;
      goto LABEL_5;
    }
    if ( v2 == 1 )
    {
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) |= 2u;
      if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 1) != 0 )
        goto LABEL_10;
    }
  }
}

/*
 * XREFs of ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0104CF0
 * Callers:
 *     EditionKeepMachineUp @ 0x1C0104C40 (EditionKeepMachineUp.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1C0104E30 (SetTimerCoalescingTolerance.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall KeepMachineUp(unsigned int a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // rbx
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]

  v1 = *(_DWORD **)gPowerTransitionsState;
  v2 = (int)a1;
  if ( !gPowerTransitionsState[1] || gProtocolType )
  {
    if ( gPowerTransitionsState[3] && !gProtocolType )
    {
      PoSetUserPresent(a1);
      v1 = *(_DWORD **)gPowerTransitionsState;
      gPowerTransitionsState[3] = 0;
    }
    if ( *v1 && gPowerDisplayState[16] != 2 || v1[2] || gfSwitchInProgress )
    {
      if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
        SetTimerCoalescingTolerance(0LL);
    }
    else
    {
      v3 = 4;
      v4 = v2;
      QueuePowerRequest(&v3, 0LL);
    }
    if ( gPowerTransitionsState[2] )
    {
      if ( !*gpbIgnoreSleepInput )
        SetPendingInput((unsigned int)v2);
    }
  }
  else
  {
    PoSetUserPresent(a1);
  }
}

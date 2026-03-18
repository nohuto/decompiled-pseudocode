/*
 * XREFs of ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00F9E8C
 * Callers:
 *     EditionKeepMachineUp @ 0x1C00F9DF0 (EditionKeepMachineUp.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1C00F9F60 (SetTimerCoalescingTolerance.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall KeepMachineUp(enum POWER_MONITOR_REQUEST_REASON a1)
{
  _DWORD *v1; // rcx
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h]

  v1 = *(_DWORD **)gPowerTransitionsState;
  if ( gPowerTransitionsState[1] && !gProtocolType )
  {
    PoSetUserPresent(4LL);
    return;
  }
  if ( gPowerTransitionsState[3] && !gProtocolType )
  {
    PoSetUserPresent(4LL);
    v1 = *(_DWORD **)gPowerTransitionsState;
    gPowerTransitionsState[3] = 0;
  }
  if ( *v1 && gPowerDisplayState[16] != 2 || v1[2] || gfSwitchInProgress )
  {
    if ( !gdwRITdemonLockState )
      goto LABEL_6;
    SetTimerCoalescingTolerance(0LL);
  }
  else
  {
    v2 = 4;
    v3 = 4LL;
    QueuePowerRequest(&v2, 0LL);
  }
  v1 = *(_DWORD **)gPowerTransitionsState;
LABEL_6:
  if ( v1[2] )
  {
    if ( !*gpbIgnoreSleepInput )
      SetPendingInput(4LL);
  }
}

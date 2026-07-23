/*
 * XREFs of PopBlockSessionSwitch @ 0x1405EEE60
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x140281F60 (PoSessionBuiltinPanelState.c)
 *     PdcPoNotifyState @ 0x140764AE0 (PdcPoNotifyState.c)
 *     PopScreenOff @ 0x14076527C (PopScreenOff.c)
 *     PopScreenOn @ 0x1407652C4 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x14076DBA8 (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140583BAC (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 */

ULONG __fastcall PopBlockSessionSwitch(char a1, ULONG *a2)
{
  ULONG result; // eax
  ULONG v4; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v5[4]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v5[0] = 0;
  v5[3] = 0;
  v6 = 0LL;
  v5[1] = 0;
  v5[2] = 1;
  if ( a1 )
  {
    result = PoBlockConsoleSwitch((__int64)v5);
    *a2 = result;
  }
  else
  {
    v4 = *a2;
    LODWORD(v6) = 7;
    return PopDispatchStateCallout(v5, (__int64)&v4);
  }
  return result;
}

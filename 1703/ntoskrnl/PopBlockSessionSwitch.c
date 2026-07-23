/*
 * XREFs of PopBlockSessionSwitch @ 0x1406CB580
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x140236DD0 (PoSessionBuiltinPanelState.c)
 *     PopScreenOff @ 0x1406CB998 (PopScreenOff.c)
 *     PopScreenOn @ 0x1406CB9E0 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x1406D4864 (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140420964 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1404209B4 (PopDispatchStateCallout.c)
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

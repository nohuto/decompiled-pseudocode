/*
 * XREFs of PoPowerOffMonitor @ 0x14013DBE8
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140420964 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1404209B4 (PopDispatchStateCallout.c)
 *     PoUnblockConsoleSwitch @ 0x140579DEC (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140579E10 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140579E24 (PoStartPowerStateTasks.c)
 */

__int64 PoPowerOffMonitor()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-18h]

  v3[0] = 0LL;
  v3[1] = 1LL;
  v4 = 0LL;
  v2 = PoBlockConsoleSwitch(v3);
  PoStartPowerStateTasks(v3);
  LODWORD(v4) = 12;
  v0 = PopDispatchStateCallout(v3, &v2);
  PoEndPowerStateTasks(v3);
  PoUnblockConsoleSwitch(v3, v2);
  return v0;
}

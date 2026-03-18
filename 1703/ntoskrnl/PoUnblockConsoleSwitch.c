/*
 * XREFs of PoUnblockConsoleSwitch @ 0x140579DEC
 * Callers:
 *     PoPowerOffMonitor @ 0x14013DBE8 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1404186F0 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1404209B4 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}

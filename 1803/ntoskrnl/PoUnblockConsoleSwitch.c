/*
 * XREFs of PoUnblockConsoleSwitch @ 0x1405EEBFC
 * Callers:
 *     PoPowerOffMonitor @ 0x140155CD8 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1404842A0 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}

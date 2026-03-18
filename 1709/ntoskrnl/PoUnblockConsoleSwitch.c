/*
 * XREFs of PoUnblockConsoleSwitch @ 0x1406FCA50
 * Callers:
 *     PoPowerOffMonitor @ 0x140242174 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x14042D700 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1406FCB40 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  *(_DWORD *)(a1 + 16) = 7;
  return PopDispatchStateCallout(a1, &v3);
}

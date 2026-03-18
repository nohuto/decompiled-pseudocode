/*
 * XREFs of PnpSetInvalidIDEvent @ 0x1406A0870
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1404DDC40 (PnpQueryID.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     PnpInsertEventInQueue @ 0x1404DA210 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1404DA388 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetInvalidIDEvent(const void **a1)
{
  int v3; // ebx
  _DWORD *DeviceEventEntry; // rax
  __int64 v5; // rdi

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  v3 = *(unsigned __int16 *)a1 + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)a1 + 186);
  v5 = (__int64)DeviceEventEntry;
  if ( !DeviceEventEntry )
    return 3221225626LL;
  DeviceEventEntry[30] = 8;
  DeviceEventEntry[35] = v3;
  *(GUID *)(DeviceEventEntry + 26) = GUID_DEVICE_INVALID_ID;
  memmove(DeviceEventEntry + 38, a1[1], *(unsigned __int16 *)a1);
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 152) = 0;
  *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 154) = 0;
  return PnpInsertEventInQueue(v5);
}

/*
 * XREFs of PnpSetInvalidIDEvent @ 0x1406CB198
 * Callers:
 *     PnpQueryID @ 0x14051A1B0 (PnpQueryID.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     PnpInsertEventInQueue @ 0x14054DDBC (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x14054DF20 (PnpCreateDeviceEventEntry.c)
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

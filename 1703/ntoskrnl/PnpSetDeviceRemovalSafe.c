/*
 * XREFs of PnpSetDeviceRemovalSafe @ 0x1406A06D4
 * Callers:
 *     PnpProcessCompletedEject @ 0x140696080 (PnpProcessCompletedEject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PnpInsertEventInQueue @ 0x1404DA210 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1404DA388 (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetDeviceRemovalSafe(_QWORD *Object)
{
  __int64 v3; // rdi
  int v4; // ebp
  _DWORD *DeviceEventEntry; // rbx
  const void *v6; // rdx

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v3 = *(_QWORD *)(Object[39] + 40LL);
  else
    v3 = 0LL;
  v4 = *(unsigned __int16 *)(v3 + 40) + 82;
  DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(v3 + 40) + 186);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  *((_QWORD *)DeviceEventEntry + 3) = 0LL;
  *((_QWORD *)DeviceEventEntry + 2) = 0LL;
  *((_QWORD *)DeviceEventEntry + 6) = 0LL;
  *((_QWORD *)DeviceEventEntry + 7) = 0LL;
  DeviceEventEntry[30] = 1;
  *((_QWORD *)DeviceEventEntry + 16) = 0LL;
  *(GUID *)(DeviceEventEntry + 26) = GUID_DEVICE_SAFE_REMOVAL;
  DeviceEventEntry[34] = 0;
  DeviceEventEntry[35] = v4;
  *((_QWORD *)DeviceEventEntry + 18) = Object;
  v6 = *(const void **)(v3 + 48);
  if ( v6 )
    memmove(DeviceEventEntry + 38, v6, *(unsigned __int16 *)(v3 + 40));
  *((_WORD *)DeviceEventEntry + ((unsigned __int64)*(unsigned __int16 *)(v3 + 40) >> 1) + 76) = 0;
  return PnpInsertEventInQueue((__int64)DeviceEventEntry);
}

/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x14051E77C
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140145394 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1401464B0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140164200 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetCustomTargetEvent @ 0x14051E930 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1405CB15C (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x1405F5C90 (PnpSetDeviceClassChange.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140605ABC (PnpSynchronizeDeviceEventQueue.c)
 *     PnpShutdownDevices @ 0x140722CB0 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x140732888 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1407328F8 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x140732A04 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140732AA0 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140732B54 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PnpCreateDeviceEventEntry(size_t Size)
{
  unsigned int v1; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  v1 = Size;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x4B706E50u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v1);
    v3[16] = 1;
  }
  return v3;
}

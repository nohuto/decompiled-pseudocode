/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1404DA388
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1400679A0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x140131CBC (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140159480 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetCustomTargetEvent @ 0x14045564C (PnpSetCustomTargetEvent.c)
 *     PnpSetDeviceClassChange @ 0x14045628C (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x1404DA0E0 (PnpSetPlugPlayEvent.c)
 *     PnpShutdownDevices @ 0x140691F78 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1406A0660 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1406A06D4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1406A07D8 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1406A0870 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1406A0924 (PnpSetPowerVetoEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1406A0A8C (PnpSynchronizeDeviceEventQueue.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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

/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x14054DF20
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1400FB788 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14011C510 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14015BA6C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetCustomTargetEvent @ 0x14054AC54 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x14054DC8C (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x14055688C (PnpSetDeviceClassChange.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1405F1818 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpShutdownDevices @ 0x1406BDC40 (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1406CAF90 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1406CAFFC (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1406CB100 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1406CB198 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1406CB24C (PnpSetPowerVetoEvent.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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

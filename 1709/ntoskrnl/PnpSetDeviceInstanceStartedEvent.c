/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x1400FB770
 * Callers:
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1400FB788 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance(a1 + 40);
}

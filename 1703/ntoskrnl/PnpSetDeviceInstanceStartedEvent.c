/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x140067990
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance(a1 + 40);
}

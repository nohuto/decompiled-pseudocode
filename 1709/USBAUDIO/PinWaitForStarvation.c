/*
 * XREFs of PinWaitForStarvation @ 0x1C000221C
 * Callers:
 *     USBHwDataPipeReset @ 0x1C001C9BC (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C0022110 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x1C0002184 (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}

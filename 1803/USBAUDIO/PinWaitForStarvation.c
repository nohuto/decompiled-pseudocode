/*
 * XREFs of PinWaitForStarvation @ 0x1C00022B8
 * Callers:
 *     USBHwDataPipeReset @ 0x1C00214C0 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C0026C30 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x1C0002220 (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}

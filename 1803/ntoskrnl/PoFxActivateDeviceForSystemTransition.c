/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x14014E8B8
 * Callers:
 *     PopNotifyDevice @ 0x140472AA4 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 */

void __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  PopFxActivateDevice(a1, 1, a2);
}

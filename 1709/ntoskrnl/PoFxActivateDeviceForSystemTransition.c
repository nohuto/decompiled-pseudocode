/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x14023D594
 * Callers:
 *     PopNotifyDevice @ 0x140437350 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 */

void __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  PopFxActivateDevice(a1, 1, a2);
}

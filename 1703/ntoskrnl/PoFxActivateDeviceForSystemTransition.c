/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x140138110
 * Callers:
 *     PopNotifyDevice @ 0x140408C28 (PopNotifyDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1)
{
  PopFxActivateDevice(a1, 1);
}

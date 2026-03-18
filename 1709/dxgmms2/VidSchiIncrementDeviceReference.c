/*
 * XREFs of VidSchiIncrementDeviceReference @ 0x1C000F00C
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0070C1C (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementDeviceReference(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
}

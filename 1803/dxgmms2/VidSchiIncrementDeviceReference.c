/*
 * XREFs of VidSchiIncrementDeviceReference @ 0x1C0004CC8
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0057A8C (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementDeviceReference(__int64 a1)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
}

/*
 * XREFs of StorPortDeviceReadyVrfy @ 0x1C006A180
 * Callers:
 *     <none>
 * Callees:
 *     StorPortDeviceReady @ 0x1C0030440 (StorPortDeviceReady.c)
 */

char __fastcall StorPortDeviceReadyVrfy(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  return StorPortDeviceReady(a1, a2, a3, a4);
}

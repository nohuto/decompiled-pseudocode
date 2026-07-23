/*
 * XREFs of IoGetDeviceInterfacePropertyData @ 0x1406BF470
 * Callers:
 *     <none>
 * Callees:
 *     PnpGetDeviceInterfacePropertyData @ 0x1406C1E54 (PnpGetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall IoGetDeviceInterfacePropertyData(__int64 a1, __int64 a2, __int64 a3)
{
  return PnpGetDeviceInterfacePropertyData(a1, a2, a3);
}

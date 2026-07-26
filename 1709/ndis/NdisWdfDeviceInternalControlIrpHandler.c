/*
 * XREFs of NdisWdfDeviceInternalControlIrpHandler @ 0x1C00619D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceInternalDispatch @ 0x1C0064D98 (ndisDeviceInternalDispatch.c)
 */

__int64 __fastcall NdisWdfDeviceInternalControlIrpHandler(__int64 a1)
{
  return ndisDeviceInternalDispatch(*(struct _DEVICE_OBJECT **)(a1 + 3848));
}

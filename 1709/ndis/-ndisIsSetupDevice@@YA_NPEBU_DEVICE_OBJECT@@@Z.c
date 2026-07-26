/*
 * XREFs of ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00B7194
 * Callers:
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 *     ndisCloseIrpHandler @ 0x1C0008F70 (ndisCloseIrpHandler.c)
 *     ndisPowerDispatch @ 0x1C001E150 (ndisPowerDispatch.c)
 *     ndisCloseHandler @ 0x1C005CF2C (ndisCloseHandler.c)
 *     ndisDeviceInternalDispatch @ 0x1C0064D98 (ndisDeviceInternalDispatch.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsSetupDevice(const struct _DEVICE_OBJECT *a1)
{
  return a1 && *(_BYTE *)a1->DeviceExtension == 23;
}

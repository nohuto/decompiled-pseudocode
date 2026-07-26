/*
 * XREFs of ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C00A5C80
 * Callers:
 *     ndisCloseHandler @ 0x1C000C6A0 (ndisCloseHandler.c)
 *     ndisCreateHandler @ 0x1C000C8D8 (ndisCreateHandler.c)
 *     ndisPowerDispatch @ 0x1C00229A0 (ndisPowerDispatch.c)
 *     ndisDeviceInternalDispatch @ 0x1C006475C (ndisDeviceInternalDispatch.c)
 *     ndisPnPDispatch @ 0x1C00ACD70 (ndisPnPDispatch.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsSetupDevice(const struct _DEVICE_OBJECT *a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return *(_BYTE *)a1->DeviceExtension == 23;
  return result;
}

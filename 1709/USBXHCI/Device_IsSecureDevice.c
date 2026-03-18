/*
 * XREFs of Device_IsSecureDevice @ 0x1C0014A64
 * Callers:
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C0056650 (Controller_CreateWdfDevice.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     <none>
 */

char __fastcall Device_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 24);
}

/*
 * XREFs of Device_IsSecureDevice @ 0x1C000CF80
 * Callers:
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C0053594 (Controller_CreateWdfDevice.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     <none>
 */

char __fastcall Device_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 24);
}

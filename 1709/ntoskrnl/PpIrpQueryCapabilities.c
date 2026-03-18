/*
 * XREFs of PpIrpQueryCapabilities @ 0x1405522C0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14055226C (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     IoGetDeviceProperty @ 0x140556EB0 (IoGetDeviceProperty.c)
 *     PiControlGetDevicePowerData @ 0x1406D2C74 (PiControlGetDevicePowerData.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     IopSynchronousCall @ 0x14051CF64 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryCapabilities(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  _QWORD v5[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset(v5, 0, 0x48uLL);
  LOWORD(v5[0]) = 2331;
  v5[1] = a2;
  return IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, 0LL);
}

/*
 * XREFs of PpIrpQueryCapabilities @ 0x1404DBEEC
 * Callers:
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1404A6FC0 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 *     PiControlGetDevicePowerData @ 0x1406A7FB4 (PiControlGetDevicePowerData.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryCapabilities(int a1, _DWORD *a2)
{
  _QWORD v5[9]; // [rsp+30h] [rbp-58h] BYREF

  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset(v5, 0, sizeof(v5));
  LOWORD(v5[0]) = 2331;
  v5[1] = a2;
  return IopSynchronousCall(a1, (unsigned int)v5, -1073741637, 0, 0LL);
}

/*
 * XREFs of PnpQueryDeviceRelations @ 0x1405D3E80
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x14051FDD4 (PiDcHandleCustomDeviceEvent.c)
 *     PnpProcessRelation @ 0x1405C9EB4 (PnpProcessRelation.c)
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 *     PiQueryPowerRelations @ 0x140603784 (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x14073B744 (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x140006EE4 (PnpSendIrp.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall PnpQueryDeviceRelations(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  _DWORD v10[20]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x48uLL);
  LOWORD(v10[0]) = 1819;
  v10[2] = a2;
  return PnpSendIrp(a1, (__int64)v10, v8, a3, a4);
}

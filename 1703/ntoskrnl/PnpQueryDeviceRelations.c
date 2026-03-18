/*
 * XREFs of PnpQueryDeviceRelations @ 0x1404A769C
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140457A84 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateDevice @ 0x1404A758C (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x1405C27A4 (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x1406A8B98 (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x140080D08 (PnpSendIrp.c)
 *     memset @ 0x140192D80 (memset.c)
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

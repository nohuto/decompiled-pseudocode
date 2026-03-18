/*
 * XREFs of ACPIEcConnectGpeVector @ 0x1C00A0EC8
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0013098 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x1C00A0FBC (ACPIEcConnectInterrupt.c)
 * Callees:
 *     ACPIVectorConnect @ 0x1C0059800 (ACPIVectorConnect.c)
 */

__int64 __fastcall ACPIEcConnectGpeVector(__int64 a1)
{
  return ACPIVectorConnect(0LL, *(_DWORD *)(a1 + 48), 1, 0, (__int64)ACPIEcGpeServiceRoutine, a1, (_QWORD *)(a1 + 72));
}

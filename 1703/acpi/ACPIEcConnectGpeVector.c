/*
 * XREFs of ACPIEcConnectGpeVector @ 0x1C009DEFC
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C002AB00 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcConnectInterrupt @ 0x1C009DFF0 (ACPIEcConnectInterrupt.c)
 * Callees:
 *     ACPIVectorConnect @ 0x1C0058DB0 (ACPIVectorConnect.c)
 */

__int64 __fastcall ACPIEcConnectGpeVector(__int64 a1)
{
  return ACPIVectorConnect(0LL, *(_DWORD *)(a1 + 48), 1, 0, (__int64)ACPIEcGpeServiceRoutine, a1, (_QWORD *)(a1 + 72));
}

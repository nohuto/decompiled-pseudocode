/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x1C009E22C
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C004CAF0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     RegisterOperationRegionHandler @ 0x1C0092DAC (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcInstallOpRegionHandler(__int64 a1)
{
  return RegisterOperationRegionHandler(
           *(_QWORD *)(a1 + 56),
           2,
           3u,
           (__int64)ACPIEcOpRegionHandler,
           a1,
           (unsigned int **)(a1 + 80));
}

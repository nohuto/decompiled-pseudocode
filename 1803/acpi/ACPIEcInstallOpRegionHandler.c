/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x1C007A234
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C00221F0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     RegisterOperationRegionHandler @ 0x1C0080D54 (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcInstallOpRegionHandler(__int64 a1)
{
  return RegisterOperationRegionHandler(*(_QWORD *)(a1 + 56), 2, 3, (unsigned int)ACPIEcOpRegionHandler, a1, a1 + 80);
}

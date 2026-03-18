/*
 * XREFs of DrvDxgkGetMonitorDeviceObject @ 0x1C000B2E0
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000B4AC (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvDxgkGetMonitorDeviceObject()
{
  return ((__int64 (*)(void))qword_1C018BB90)();
}

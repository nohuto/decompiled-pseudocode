/*
 * XREFs of DrvDxgkGetMonitorDeviceObject @ 0x1C000CCA0
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000CCBC (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvDxgkGetMonitorDeviceObject()
{
  return ((__int64 (*)(void))qword_1C01907F8)();
}

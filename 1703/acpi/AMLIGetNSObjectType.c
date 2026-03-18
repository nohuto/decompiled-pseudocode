/*
 * XREFs of AMLIGetNSObjectType @ 0x1C0005210
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C0083A7C (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C008EB70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIProcessorDeviceControl @ 0x1C0090150 (ACPIProcessorDeviceControl.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0091C64 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0092148 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0092480 (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}

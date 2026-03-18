/*
 * XREFs of AMLIGetNSObjectType @ 0x1C0001D20
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C0071B48 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0076E60 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0077554 (ACPIBusIrpQueryDeviceId.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     ACPIProcessorDeviceControl @ 0x1C00815E0 (ACPIProcessorDeviceControl.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C00817A4 (ACPIProcessorGetInitialApicId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}

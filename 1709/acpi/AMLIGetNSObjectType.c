/*
 * XREFs of AMLIGetNSObjectType @ 0x1C00113A0
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0086D20 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008D524 (ACPIBusIrpQueryHardwareId.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     ACPIProcessorDeviceControl @ 0x1C008FFC0 (ACPIProcessorDeviceControl.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0093990 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0093D74 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C00940AC (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}

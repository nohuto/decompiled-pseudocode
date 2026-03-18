/*
 * XREFs of HUBSM_AddDsmEvent @ 0x1C0008E20
 * Callers:
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0068680 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x1C006C830 (HUBPDO_EvtDeviceResourceRequirementsQuery.c)
 *     HUBPDO_EvtDeviceReportedMissing @ 0x1C006C9E0 (HUBPDO_EvtDeviceReportedMissing.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBSM_AddDsmEvent(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 504, a2);
}

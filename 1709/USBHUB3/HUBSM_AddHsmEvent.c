/*
 * XREFs of HUBSM_AddHsmEvent @ 0x1C0008E20
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C0066190 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B90 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C00672F0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C006761C (HUBFDO_IoctlGetPortStatus.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBSM_AddHsmEvent(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 1256, a2);
}

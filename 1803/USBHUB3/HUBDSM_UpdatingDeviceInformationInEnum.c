/*
 * XREFs of HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C001B050
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C00208E8 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_UpdatingDeviceInformationInEnum(__int64 a1)
{
  HUBUCX_UpdateDeviceInfoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}

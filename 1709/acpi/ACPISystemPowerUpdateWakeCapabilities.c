/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilities @ 0x1C00901E0
 * Callers:
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001F30C (ACPISystemPowerUpdateDeviceCapabilities.c)
 * Callees:
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0020DA8 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C00281D0 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilities(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        signed int *a6,
        signed int *a7,
        signed int *a8)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x60) == 0x40 )
  {
    a2 = 0x100000000LL;
    if ( (*(_QWORD *)(a1 + 952) & 0x100000000LL) == 0 )
      return ACPISystemPowerUpdateWakeCapabilitiesForFilters(a1, 0x100000000LL, a3, a4, a5, a6, a7, a8);
  }
  if ( a8 )
    *a8 = 0;
  return ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
           a1,
           a2,
           (__int64)a3,
           a4,
           a5,
           (unsigned __int64)a6,
           (unsigned __int64)a7,
           a8);
}
